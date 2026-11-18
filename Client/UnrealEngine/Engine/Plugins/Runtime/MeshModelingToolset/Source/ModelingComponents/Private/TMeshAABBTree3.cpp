// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 105

// <lambda_invoker_cdecl> @ 14cab0970

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14cab0990

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14cab09e0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
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

// <lambda_invoker_cdecl> @ 14cab0a20

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
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

// <lambda_invoker_cdecl> @ 14cab0a60

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
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

// <lambda_invoker_cdecl> @ 14cab0aa0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
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

// FindHitTriangle<UE::Math::TRay<double>_> @ 14cab9250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TRay<double> *param_2,double *param_3,int *param_4,TVector<double> *param_5,
          FQueryOptions *param_6)

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
LAB_14cab94c8:
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,uVar11,
                   (TVector<double> *)&local_178._s_0,(TVector<double> *)&TStack_160._s_0,
                   (TVector<double> *)&local_148._s_0);
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
        if (cVar7 != '\0') goto LAB_14cab94c8;
      }
      local_198 = local_198 - 1;
      pTVar13 = local_190;
    } while (local_198 != 0);
  }
  return;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 14cab95d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TRay<double> *param_2,double *param_3,int *param_4,TVector<double> *param_5,
          FQueryOptions *param_6)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar19;
  undefined1 auStackY_1a8 [32];
  int local_168 [2];
  int *local_160;
  ulonglong local_158;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_150;
  FIndex3i_u_0 local_148;
  TRay<double> *local_138;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar9 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_150 = &(this->IndexList).Blocks;
  local_160 = param_4;
  uVar17 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_138 = param_2;
  if (this->TrianglesEnd <= (int)uVar17) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar16 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)uVar16 < 0) {
        uVar16 = ~uVar16;
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar16,param_2);
        if (*param_3 + dVar9 < dVar7) {
          return;
        }
      }
      else {
        uVar1 = uVar16 - 1;
        uVar16 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar1,param_2);
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar16,param_2);
        if (dVar8 <= dVar7) {
          if (*param_3 + dVar9 < dVar8) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar16,param_2,param_3,local_160,param_5,param_6);
          uVar16 = uVar1;
          if (*param_3 + dVar9 < dVar7) {
            return;
          }
        }
        else {
          if (*param_3 + dVar9 < dVar7) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar1,param_2,param_3,local_160,param_5,param_6);
          if (*param_3 + dVar9 < dVar8) {
            return;
          }
        }
      }
      uVar17 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar17);
  }
  pTVar19 = &(this->IndexList).Blocks;
  uVar16 = *(uint *)(*(longlong *)((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar17 >> 9) * 8)
                    + (ulonglong)(uVar17 & 0x1ff) * 4);
  local_158 = (ulonglong)uVar16;
  if (0 < (int)uVar16) {
    do {
      uVar17 = uVar17 + 1;
      iVar2 = *(int *)(*(longlong *)
                        ((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14cab9849:
        this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
        FStaticMeshLODResourcesMeshAdapter::GetTriangle(this_00,(FIndex3i *)&local_148._s_0,iVar2);
        local_c8 = (this_00->BuildScale).field0_0x0._s_0.X;
        local_c0 = (this_00->BuildScale).field0_0x0._s_0.Y;
        local_b8 = (this_00->BuildScale).field0_0x0._s_0.Z;
        puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
        uVar16 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
        uVar15 = (ulonglong)(uVar16 * local_148._s_0.A);
        uVar18 = (ulonglong)(uVar16 * local_148._s_0.B);
        uVar13 = (ulonglong)(uVar16 * local_148._s_0.C);
        local_128._s_0.Z = (local_138->Origin).field0_0x0._s_0.Z;
        dStack_110 = (local_138->Direction).field0_0x0._s_0.X;
        local_128._s_0.X = (local_138->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (local_138->Origin).field0_0x0._s_0.Y;
        local_108 = (local_138->Direction).field0_0x0._s_0.Y;
        dStack_100 = (local_138->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = (double)*(float *)(puVar6 + uVar15) * local_c8;
        local_f8._s_0.Y = (double)*(float *)(puVar6 + uVar15 + 4) * local_c0;
        local_f8._s_0.Z = (double)*(float *)(puVar6 + uVar15 + 8) * local_b8;
        local_d8 = (double)*(float *)(puVar6 + uVar18 + 4) * local_c0;
        local_e0 = (double)*(float *)(puVar6 + uVar18) * local_c8;
        local_c8 = (double)*(float *)(puVar6 + uVar13) * local_c8;
        local_d0 = (double)*(float *)(puVar6 + uVar18 + 8) * local_b8;
        local_b8 = (double)*(float *)(puVar6 + uVar13 + 8) * local_b8;
        local_c0 = (double)*(float *)(puVar6 + uVar13 + 4) * local_c0;
        bVar11 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar11) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_160 = iVar2;
          (param_5->field0_0x0)._s_0.X = local_a8._s_0.X;
          (param_5->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (param_5->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_168[0] = iVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar4 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_6->TriangleFilterF;
        plVar14 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar14 = plVar4;
        }
        uVar12 = (**(code **)(*plVar14 + 8))();
        cVar10 = (*pcVar5)(uVar12,local_168);
        if (cVar10 != '\0') goto LAB_14cab9849;
      }
      local_158 = local_158 - 1;
      pTVar19 = local_150;
    } while (local_158 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14cab99f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TRay<double> *param_2,
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
LAB_14cab9c49:
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,iVar3,
                   (TVector<double> *)&local_1c8._s_0,(TVector<double> *)&TStack_1b0._s_0,
                   (TVector<double> *)&local_198._s_0);
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
        if (cVar12 != '\0') goto LAB_14cab9c49;
      }
      local_1e0 = local_1e0 - 1;
      pTVar19 = local_1d8;
    } while (local_1e0 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14cab9d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_1c8 [32];
  int local_198 [2];
  ulonglong local_190;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_188;
  FIndex3i_u_0 local_180;
  int local_170;
  undefined4 uStack_16c;
  double dStack_168;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar11 = __real_47efffffe0000000;
  dVar10 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar23 = &(this->IndexList).Blocks;
  uVar26 = SUB84(__real_47efffffe0000000,0);
  uVar27 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar1 = param_4->MaxDistance;
  uVar24 = SUB84(dVar1,0);
  uVar25 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar24 = uVar26;
    uVar25 = uVar27;
  }
  uVar22 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_188 = pTVar23;
  if (this->TrianglesEnd <= (int)uVar22) {
    do {
      pFVar4 = (pTVar23->AllocatorInstance).Data;
      dVar1 = (double)CONCAT44(uVar25,uVar24) + dVar10;
      uVar2 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar22 >> 9) * 8) +
                       (ulonglong)(uVar22 & 0x1ff) * 4);
      if ((int)uVar2 < 0) {
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar2,param_2);
        uVar22 = ~uVar2;
      }
      else {
        uVar2 = uVar2 - 1;
        uVar22 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                         (ulonglong)(uVar22 + 1 & 0x1ff) * 4) - 1;
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar2,param_2);
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar22,param_2);
        if (dVar8 <= dVar9) {
          if (dVar1 < dVar8) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar22,param_2,param_3,param_4);
          uVar22 = uVar2;
          dVar8 = dVar9;
        }
        else {
          if (dVar1 < dVar9) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar2,param_2,param_3,param_4);
        }
      }
      if (dVar1 < dVar8) {
        return;
      }
      dVar1 = param_4->MaxDistance;
      uVar24 = SUB84(dVar1,0);
      uVar25 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar11 <= dVar1) {
        uVar24 = uVar26;
        uVar25 = uVar27;
      }
      uVar22 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar22);
  }
  uVar2 = *(uint *)(*(longlong *)((pTVar23->AllocatorInstance).Data + (ulonglong)(uVar22 >> 9) * 8)
                   + (ulonglong)(uVar22 & 0x1ff) * 4);
  local_190 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar22 = uVar22 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar23->AllocatorInstance).Data + (ulonglong)(uVar22 >> 9) * 8) +
                      (ulonglong)(uVar22 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14cab9fea:
        this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
        FStaticMeshLODResourcesMeshAdapter::GetTriangle(this_00,(FIndex3i *)&local_180._s_0,iVar3);
        local_e8 = (this_00->BuildScale).field0_0x0._s_0.X;
        local_e0 = (this_00->BuildScale).field0_0x0._s_0.Y;
        local_d8 = (this_00->BuildScale).field0_0x0._s_0.Z;
        puVar7 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
        uVar2 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
        uVar21 = (ulonglong)(uVar2 * local_180._s_0.A);
        uVar17 = (ulonglong)(uVar2 * local_180._s_0.B);
        uVar20 = (ulonglong)(uVar2 * local_180._s_0.C);
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        local_118._s_0.X = (double)*(float *)(puVar7 + uVar21) * local_e8;
        local_118._s_0.Y = (double)*(float *)(puVar7 + uVar21 + 4) * local_e0;
        local_118._s_0.Z = (double)*(float *)(puVar7 + uVar21 + 8) * local_d8;
        local_f8 = (double)*(float *)(puVar7 + uVar17 + 4) * local_e0;
        local_100 = (double)*(float *)(puVar7 + uVar17) * local_e8;
        local_e8 = (double)*(float *)(puVar7 + uVar20) * local_e8;
        local_f0 = (double)*(float *)(puVar7 + uVar17 + 8) * local_d8;
        local_d8 = (double)*(float *)(puVar7 + uVar20 + 8) * local_d8;
        local_e0 = (double)*(float *)(puVar7 + uVar20 + 4) * local_e0;
        bVar14 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar12 = local_c8._s_0.Y;
        uVar16 = local_c8._s_0.X;
        if ((bVar14) && (local_d0 <= (double)CONCAT44(uVar25,uVar24) + dVar10)) {
          iVar15 = param_3->ArrayNum;
          dStack_168 = local_d0;
          local_170 = iVar3;
          if (iVar15 == param_3->ArrayMax) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar18 = (longlong)iVar15;
          param_3->ArrayNum = iVar15 + 1;
          pFVar4 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar4 + lVar18 * 0x28) = CONCAT44(uStack_16c,local_170);
          *(double *)(pFVar4 + lVar18 * 0x28 + 8) = dStack_168;
          *(undefined8 *)(pFVar4 + lVar18 * 0x28 + 0x10) = uVar16;
          *(undefined8 *)(pFVar4 + lVar18 * 0x28 + 0x10 + 8) = uVar12;
          *(double *)(pFVar4 + lVar18 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_198[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_4->TriangleFilterF;
        plVar19 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar19 = plVar5;
        }
        uVar16 = (**(code **)(*plVar19 + 8))();
        cVar13 = (*pcVar6)(uVar16,local_198);
        if (cVar13 != '\0') goto LAB_14cab9fea;
      }
      local_190 = local_190 - 1;
      pTVar23 = local_188;
    } while (local_190 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14cac63b0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TRay<double> *param_2)

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

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14cac6530

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TRay<double> *param_2)

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

// find_nearest_tri<1> @ 14cac66b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_nearest_tri<1>(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                   int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

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
LAB_14cac67bc:
      FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,iVar1,
                 (TVector<double> *)&local_158._s_0,(TVector<double> *)&TStack_140._s_0,
                 (TVector<double> *)&local_128._s_0);
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
      if (cVar8 != '\0') goto LAB_14cac67bc;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<1> @ 14cac69e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_nearest_tri<1>(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                   int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

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
LAB_14cac6aec:
      FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                ((FStaticMeshLODResourcesMeshAdapter *)this->Mesh,iVar1,
                 (TVector<double> *)&local_158._s_0,(TVector<double> *)&TStack_140._s_0,
                 (TVector<double> *)&local_128._s_0);
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
      if (cVar8 != '\0') goto LAB_14cac6aec;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14cac6d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_nearest_tri<0>(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                   int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

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
LAB_14cac6e0c:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,iVar14,
                     (TVector<double> *)&local_158._s_0,(TVector<double> *)&TStack_140._s_0,
                     (TVector<double> *)&local_128._s_0);
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
          if (cVar9 != '\0') goto LAB_14cac6e0c;
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

// find_nearest_tri<0> @ 14cac7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_nearest_tri<0>(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                   int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

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
LAB_14cac710c:
          FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                    ((FStaticMeshLODResourcesMeshAdapter *)this->Mesh,iVar14,
                     (TVector<double> *)&local_158._s_0,(TVector<double> *)&TStack_140._s_0,
                     (TVector<double> *)&local_128._s_0);
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
          if (cVar9 != '\0') goto LAB_14cac710c;
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

// TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> @ 14cac7460

TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          FMeshDescriptionTriangleMeshSurfaceAdapter *param_1,bool param_2)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  
  this->TopDownLeafMaxTriCount = 3;
  this->MeshChangeStamp = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TMeshAABBTree3_UFMeshDescriptionTriangleMeshSurfaceAdapter_Geometry_UE___Geometry_UE__6B_
  ;
  *(undefined8 *)&this->GetSplitAxis = 0;
  *(undefined8 *)&(this->GetSplitAxis).field_0x28 = 0;
  *(undefined ***)&(this->GetSplitAxis).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetSplitAxis).field_0x18;
  *(code **)puVar1 =
       `UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
       MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
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
    this->MeshChangeStamp = 1;
  }
  return this;
}

// TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> @ 14cac7580

TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          FStaticMeshLODResourcesMeshSurfaceAdapter *param_1,bool param_2)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  
  this->TopDownLeafMaxTriCount = 3;
  this->MeshChangeStamp = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TMeshAABBTree3_UFStaticMeshLODResourcesMeshSurfaceAdapter_Geometry_UE___Geometry_UE__6B_
  ;
  *(undefined8 *)&this->GetSplitAxis = 0;
  *(undefined8 *)&(this->GetSplitAxis).field_0x28 = 0;
  *(undefined ***)&(this->GetSplitAxis).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetSplitAxis).field_0x18;
  *(code **)puVar1 =
       `UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
       MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
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
    this->MeshChangeStamp = 1;
  }
  return this;
}

// TMeshAABBTree3<UE::Geometry::FColliderMesh> @ 14cac76a0

TMeshAABBTree3<UE::Geometry::FColliderMesh> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::
TMeshAABBTree3<UE::Geometry::FColliderMesh>
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,FColliderMesh *param_1,bool param_2)

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
  this->Mesh = param_1;
  this->MeshChangeStamp = 0;
  if (param_2) {
    BuildTopDown(this,false);
    this->MeshChangeStamp = 0;
  }
  return this;
}

// TMeshAABBTree3<UE::Geometry::FDynamicMesh3> @ 14cac77b0

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  
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
  this->Mesh = (FDynamicMesh3 *)0x0;
  return this;
}

// operator() @ 14cad6b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
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

// operator() @ 14cad6c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
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

// AddTriTriIntersectionResult @ 14cae8230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
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

// AddTriTriIntersectionResult @ 14cae8930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
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

// BoxDistanceSqr @ 14caec680

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
BoxDistanceSqr(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
              int param_1,TVector<double> *param_2)

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

// BoxDistanceSqr @ 14caec720

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
BoxDistanceSqr(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
              int param_1,TVector<double> *param_2)

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

// BuildTopDown @ 14caee4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
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

// BuildTopDown @ 14caeec30

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          bool param_1)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  short sVar8;
  FMeshElementContainer *pFVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  double dVar15;
  double dVar16;
  int local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_f0;
  double local_e0;
  double dStack_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48 [2];
  
  pFVar1 = this->Mesh;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  if (pFVar1->bHasInvalidPolyGroup == false) {
    pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar1->_padding_ + 0x70),0);
    uVar13 = (pFVar9->BitArray).NumBits - pFVar9->NumHoles;
  }
  else {
    uVar13 = pFVar1->NumValidTriangles;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (local_100.ArrayMax < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&local_100.AllocatorInstance,local_100.ArrayNum,&local_100.ArrayMax);
  }
  pFVar1 = this->Mesh;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (pFVar1->bHasInvalidPolyGroup == false) {
    pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar1->_padding_ + 0x70),0);
    uVar13 = (pFVar9->BitArray).NumBits - pFVar9->NumHoles;
  }
  else {
    uVar13 = pFVar1->NumValidTriangles;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (local_f0.ArrayMax < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,&local_f0.AllocatorInstance,local_f0.ArrayNum,&local_f0.ArrayMax);
  }
  local_108[0] = 0;
  pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->Mesh->_padding_ + 0x70),0);
  dVar6 = __real_3fd5555555555555;
  if (local_108[0] < (pFVar9->BitArray).NumBits - pFVar9->NumHoles) {
    do {
      iVar10 = local_108[0];
      pFVar1 = this->Mesh;
      if (pFVar1->bHasInvalidPolyGroup == false) {
        if ((local_108[0] < 0) ||
           (pFVar9 = FMeshElementChannels::Get
                               (*(FMeshElementChannels **)(pFVar1->_padding_ + 0x70),0),
           (pFVar9->BitArray).NumBits - pFVar9->NumHoles <= iVar10)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        lVar2 = *(longlong *)(pFVar1->_padding_ + 0xe8);
        if ((*(int *)(lVar2 + 0x38) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar11 = (longlong *)(lVar2 + 0x18);
        if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
          plVar11 = *(longlong **)(lVar2 + 0x30);
        }
        uVar12 = iVar10 * (int)plVar11[2];
        uVar13 = 0;
        if ((int)uVar12 < (int)plVar11[1]) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = *(uint *)(*plVar11 + (longlong)(int)uVar12 * 4);
        if (*(int *)&(pFVar1->ValidPolyGroups).Elements.field_0x8 !=
            *(int *)&(pFVar1->ValidPolyGroups).Elements.field_0x34) {
          FVar3 = (pFVar1->ValidPolyGroups).Hash.SecondaryData;
          FVar14 = (ForElementType<FSetElementId>)&(pFVar1->ValidPolyGroups).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = FVar3;
          }
          iVar10 = *(int *)((longlong)FVar14 +
                           (ulonglong)((pFVar1->ValidPolyGroups).HashSize - 1U & uVar13) * 4);
          if (iVar10 != -1) {
            lVar2 = *(longlong *)&(pFVar1->ValidPolyGroups).Elements;
            do {
              if (*(uint *)(lVar2 + (longlong)iVar10 * 0xc) == uVar13) goto LAB_14caeee8e;
              iVar10 = *(int *)(lVar2 + 4 + (longlong)iVar10 * 0xc);
            } while (iVar10 != -1);
          }
        }
        iVar10 = -1;
LAB_14caeee8e:
        bVar7 = iVar10 != -1;
      }
      if (bVar7) {
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,local_108[0],
                   (TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_b0._s_0,
                   (TVector<double> *)&local_98._s_0);
        dVar16 = (local_c8._s_0.X + local_b0._s_0.X + local_98._s_0.X) * dVar6;
        dVar5 = (local_c8._s_0.Y + local_b0._s_0.Y + local_98._s_0.Y) * dVar6;
        dVar15 = (local_c8._s_0.Z + local_b0._s_0.Z + local_98._s_0.Z) * dVar6;
        sVar8 = _dclass(SUB84(dVar5 * dVar5 + dVar16 * dVar16 + dVar15 * dVar15,0));
        if ((sVar8 != 2) && (sVar8 < 1)) {
          if ((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_108) &&
             (((FScriptContainerElement *)local_108 <
               local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4 &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_100.ArrayNum == local_100.ArrayMax) {
            local_100.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
          }
          *(int *)(local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 4) =
               local_108[0];
          local_100.ArrayNum = local_100.ArrayNum + 1;
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,local_108[0],
                     (TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,
                     (TVector<double> *)&local_48[0]._s_0);
          local_e0 = (local_78._s_0.X + local_60._s_0.X + (double)local_48[0]._0_8_) * dVar6;
          dStack_d8 = (local_78._s_0.Y + local_60._s_0.Y + (double)local_48[0]._8_8_) * dVar6;
          local_d0 = (local_78._s_0.Z + local_60._s_0.Z + (double)local_48[0]._16_8_) * dVar6;
          if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 0x18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            local_f0.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
          *(double *)(local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 0x18) =
               local_e0;
          *(double *)(local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 0x18 + 8) =
               dStack_d8;
          *(double *)(local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 0x18 + 0x10) =
               local_d0;
          local_f0.ArrayNum = local_f0.ArrayNum + 1;
        }
      }
      local_108[0] = local_108[0] + 1;
      pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->Mesh->_padding_ + 0x70),0)
      ;
    } while (local_108[0] < (pFVar9->BitArray).NumBits - pFVar9->NumHoles);
  }
  BuildTopDown(this,&local_100,&local_f0,local_100.ArrayNum);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return;
}

// BuildTopDown @ 14caef1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
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

// BuildTopDown @ 14caef8f0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          bool param_1)

{
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  longlong *plVar10;
  undefined7 in_register_00000011;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
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
  
  pFVar1 = this->Mesh;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  lVar2 = *(longlong *)pFVar1;
  uVar12 = 0;
  if ((lVar2 == 0) ||
     (plVar10 = (longlong *)(lVar2 + 0x250),
     cVar6 = (**(code **)(*plVar10 + 0x30))(plVar10,CONCAT71(in_register_00000011,param_1)),
     cVar6 == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)&pFVar1->field_0x60;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
  }
  if (local_f0.ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&local_f0.AllocatorInstance,local_f0.ArrayNum,&local_f0.ArrayMax);
  }
  pFVar1 = this->Mesh;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  lVar2 = *(longlong *)pFVar1;
  uVar11 = uVar12;
  if ((lVar2 != 0) && (cVar6 = (**(code **)(*(longlong *)(lVar2 + 0x250) + 0x30))(), cVar6 != '\0'))
  {
    uVar11 = *(uint *)&pFVar1->field_0x60;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
  }
  if (local_e0.ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar11,&local_e0.AllocatorInstance,local_e0.ArrayNum,&local_e0.ArrayMax);
  }
  dVar5 = __real_3fd5555555555555;
  local_f8[0] = 0;
  do {
    pFVar1 = this->Mesh;
    lVar2 = *(longlong *)pFVar1;
    uVar11 = uVar12;
    if ((lVar2 != 0) &&
       (cVar6 = (**(code **)(*(longlong *)(lVar2 + 0x250) + 0x30))(), cVar6 != '\0')) {
      uVar11 = *(uint *)&pFVar1->field_0x60;
    }
    iVar9 = local_f8[0];
    if ((int)uVar11 <= local_f8[0]) {
      BuildTopDown(this,&local_f0,&local_e0,local_f0.ArrayNum);
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
      return;
    }
    pFVar1 = this->Mesh;
    if ((((-1 < local_f8[0]) && (lVar2 = *(longlong *)pFVar1, lVar2 != 0)) &&
        (cVar6 = (**(code **)(*(longlong *)(lVar2 + 0x250) + 0x30))(), cVar6 != '\0')) &&
       (iVar9 < *(int *)&pFVar1->field_0x60)) {
      FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                ((FStaticMeshLODResourcesMeshAdapter *)this->Mesh,local_f8[0],
                 (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_a0._s_0,
                 (TVector<double> *)&local_88._s_0);
      dVar14 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar5;
      dVar4 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar5;
      dVar13 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar5;
      sVar8 = _dclass(SUB84(dVar4 * dVar4 + dVar14 * dVar14 + dVar13 * dVar13,0));
      if ((sVar8 != 2) && (sVar8 < 1)) {
        if ((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
           (((FScriptContainerElement *)local_f8 <
             local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_f0.ArrayNum;
        if (local_f0.ArrayNum == local_f0.ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        }
        local_f0.ArrayNum = iVar9 + 1;
        *(int *)(local_f0.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_f8[0];
        FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                  ((FStaticMeshLODResourcesMeshAdapter *)this->Mesh,local_f8[0],
                   (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0,
                   (TVector<double> *)&local_38[0]._s_0);
        local_d0 = (local_68._s_0.X + local_50._s_0.X + (double)local_38[0]._0_8_) * dVar5;
        dStack_c8 = (local_68._s_0.Y + local_50._s_0.Y + (double)local_38[0]._8_8_) * dVar5;
        local_c0 = (local_68._s_0.Z + local_50._s_0.Z + (double)local_38[0]._16_8_) * dVar5;
        if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 <
             local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_e0.ArrayNum;
        if (local_e0.ArrayNum == local_e0.ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
        }
        local_e0.ArrayNum = iVar9 + 1;
        *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar9 * 0x18) = local_d0;
        *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 8) = dStack_c8;
        *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 0x10) = local_c0;
      }
    }
    local_f8[0] = local_f8[0] + 1;
  } while( true );
}

// DoTraversal @ 14cb020d0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::DoTraversal
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          FTreeTraversal *param_1,FQueryOptions *param_2)

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

// DoTraversal @ 14cb02220

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::DoTraversal
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          FTreeTraversal *param_1,FQueryOptions *param_2)

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

// FindAllHitTriangles @ 14cb083d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindAllHitTriangles(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                   TRay<double> *param_1,
                   TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>
                   *param_2,FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllHitTriangles @ 14cb08420

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindAllHitTriangles(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                   TRay<double> *param_1,
                   TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>
                   *param_2,FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14cb08470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindAllIntersections
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4cab09e0;
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

// FindAllIntersections @ 14cb08650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindAllIntersections
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4cab0a20;
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

// FindAllSelfIntersections @ 14cb08830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindAllSelfIntersections
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4cab0a60;
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

// FindAllSelfIntersections @ 14cb089b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindAllSelfIntersections
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4cab0aa0;
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

// FindNearestHitTriangle @ 14cb08c00

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          TRay<double> *param_1,FQueryOptions *param_2)

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

// FindNearestHitTriangle @ 14cb08c80

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          TRay<double> *param_1,double *param_2,int *param_3,TVector<double> *param_4,
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
            (this,this->RootIndex,param_1,param_2,param_3,param_4,param_5);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 14cb08d00

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          TRay<double> *param_1,double *param_2,int *param_3,FQueryOptions *param_4)

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

// FindNearestHitTriangle @ 14cb08d80

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          TRay<double> *param_1,FQueryOptions *param_2)

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

// FindNearestHitTriangle @ 14cb08e00

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          TRay<double> *param_1,double *param_2,int *param_3,TVector<double> *param_4,
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
            (this,this->RootIndex,param_1,param_2,param_3,param_4,param_5);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 14cb08e80

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          TRay<double> *param_1,double *param_2,int *param_3,FQueryOptions *param_4)

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

// FindNearestPoint @ 14cb08f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestPoint(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FMeshDescriptionTriangleMeshSurfaceAdapter *this_00;
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
    bVar4 = FMeshDescriptionTriangleMeshSurfaceAdapter::IsTriangle(this_00,iVar5);
    if (!bVar4) {
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
    FMeshDescriptionTriangleMeshAdapter::GetTriVertices
              ((FMeshDescriptionTriangleMeshAdapter *)this_00,iVar5,
               (TVector<double> *)&local_118._s_0,(TVector<double> *)&TStack_100._s_0,
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

// FindNearestPoint @ 14cb09070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestPoint(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
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
  iVar6 = (**(code **)(this->_padding_ + 0x20))(this,param_1,local_138);
  local_128 = (param_1->field0_0x0)._s_0.X;
  dStack_120 = (param_1->field0_0x0)._s_0.Y;
  if (iVar6 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_128;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_120;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar8 = (undefined4)uVar2;
    uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
    goto LAB_14cb091bf;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
  if (this_00->Mesh == (FStaticMeshLODResources *)0x0) {
LAB_14cb090e5:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.IsTriangle(TriIdx)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                       ,0x1e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    cVar4 = (**(code **)((this_00->Mesh->IndexBuffer).IndexStorage._padding_ + 0x30))();
    if ((cVar4 == '\0') || (this_00->NumTriangles <= iVar6)) goto LAB_14cb090e5;
  }
  FStaticMeshLODResourcesMeshAdapter::GetTriVertices
            (this_00,iVar6,(TVector<double> *)&local_118._s_0,(TVector<double> *)&TStack_100._s_0,
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
LAB_14cb091bf:
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar9,uVar8);
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 14cb09770

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestTriangle(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                   TVector<double> *param_1,double *param_2,FQueryOptions *param_3)

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

// FindNearestTriangle @ 14cb097d0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestTriangle(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                   TVector<double> *param_1,double *param_2,FQueryOptions *param_3)

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

// FindNearestTriangles @ 14cb09830

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestTriangles
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *param_1,
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
            (this,this->RootIndex,
             (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)param_2,
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

// FindNearestTriangles @ 14cb098f0

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestTriangles
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *param_1,
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
            (this,this->RootIndex,
             (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)param_2,
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

// FindNearestVertex @ 14cb099b0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FindNearestVertex(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                 TVector<double> *param_1,double *param_2,double param_3,FQueryOptions *param_4)

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

// FindNearestVertex @ 14cb09a10

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
FindNearestVertex(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                 TVector<double> *param_1,double *param_2,double param_3,FQueryOptions *param_4)

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

// GetBox @ 14cb0e050

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::GetBox
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
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

// GetBox @ 14cb0e110

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::GetBox
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFMeshDescriptionTriangleMeshSurfaceAdapter_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// GetBox @ 14cb0e220

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::GetBox
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
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

// GetBox @ 14cb0e2e0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::GetBox
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFStaticMeshLODResourcesMeshSurfaceAdapter_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 14cb223e0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::IsInside
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          TVector<double> *param_1)

{
  return false;
}

// IsInside @ 14cb223f0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::IsInside
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 14cb23330

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          TVector<double> *param_1,double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// IsWithinDistanceSquared @ 14cb23380

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          TVector<double> *param_1,double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 14cb3c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
SplitTriSetMidpoint(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                   TArray<int,TSizedDefaultAllocator<32>_> *param_1,
                   TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
                   int param_3,int param_4,int param_5,int param_6,FBoxesSet *param_7,
                   FBoxesSet *param_8,TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FMeshDescriptionTriangleMeshSurfaceAdapter *this_00;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FBoxesSet *pFVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  double *pdVar22;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar23;
  TVector<float> *pTVar24;
  longlong lVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *plVar29;
  uint uVar30;
  TDynamicVector<int,512> *this_01;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  longlong lVar37;
  TAxisAlignedBox3<double> *pTVar38;
  uint uVar39;
  int iVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  longlong local_188;
  int local_180;
  int local_158 [2];
  int local_150;
  int local_14c;
  longlong local_148;
  FIndex3i_u_0 local_140;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  TVector<double>_u_0 local_100;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  
  pTVar38 = param_9;
  pFVar17 = param_7;
  iVar19 = param_4;
  uVar34 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar22 = &local_130;
    local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar22 = &local_d0;
    local_d0 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_c8 = _UNK_150a9e648;
    local_b0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a8 = _UNK_1508ffb58;
    local_c0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b8 = _UNK_150a9e6d8;
  }
  dVar9 = pdVar22[1];
  dVar10 = pdVar22[2];
  dVar11 = pdVar22[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar22;
  (param_9->Min).field0_0x0._s_0.Y = dVar9;
  dVar9 = pdVar22[4];
  dVar12 = pdVar22[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar10;
  (param_9->Max).field0_0x0._s_0.X = dVar11;
  (param_9->Max).field0_0x0._s_0.Y = dVar9;
  (param_9->Max).field0_0x0._s_0.Z = dVar12;
  if (param_6 < param_4) {
    local_158[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar6 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar8 = *(code **)&this->GetSplitAxis;
    plVar29 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar29 = plVar6;
    }
    uVar26 = (**(code **)(*plVar29 + 8))();
    uVar49 = (undefined4)__real_7fefffffffffffff;
    uVar50 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar47 = (undefined4)__real_ffefffffffffffff;
    uVar48 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar20 = (*pcVar8)(uVar26,local_158,pTVar38);
    iVar40 = 0;
    uVar32 = 0;
    uVar27 = (ulonglong)(int)uVar20;
    uVar39 = 0;
    if (0 < iVar19) {
      lVar37 = (uVar27 + uVar34 * 3) * 8;
      uVar30 = param_3;
      pTVar38 = param_9;
      do {
        uVar36 = uVar39;
        if ((int)uVar30 < param_2->ArrayNum) {
          uVar36 = ~uVar30 >> 0x1f;
        }
        param_9 = pTVar38;
        if (uVar36 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar8 = (code *)swi(3);
            iVar19 = (*pcVar8)();
            return iVar19;
          }
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        pTVar38 = param_9;
        if (2 < uVar27) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          pTVar38 = param_9;
          if (bVar18) {
            pcVar8 = (code *)swi(3);
            iVar19 = (*pcVar8)();
            return iVar19;
          }
        }
        dVar9 = *(double *)(pFVar5 + lVar37);
        if (dVar9 <= (double)CONCAT44(uVar50,uVar49)) {
          uVar49 = SUB84(dVar9,0);
          uVar50 = (undefined4)((ulonglong)dVar9 >> 0x20);
        }
        dVar9 = *(double *)(pFVar5 + lVar37);
        if ((double)CONCAT44(uVar48,uVar47) <= dVar9) {
          uVar47 = SUB84(dVar9,0);
          uVar48 = (undefined4)((ulonglong)dVar9 >> 0x20);
        }
        uVar30 = uVar30 + 1;
        lVar37 = lVar37 + 0x18;
        param_9 = pTVar38;
      } while ((int)(uVar30 - param_3) < iVar19);
    }
    dVar10 = __real_3fe0000000000000;
    dVar9 = ((double)CONCAT44(uVar48,uVar47) + (double)CONCAT44(uVar50,uVar49)) *
            __real_3fe0000000000000;
    if ((double)CONCAT44(uVar48,uVar47) - (double)CONCAT44(uVar50,uVar49) <= __real_3e45798ee2308c3a
       ) {
      iVar40 = iVar19 / 2;
      iVar19 = iVar19 - iVar40;
    }
    else {
      local_180 = iVar19 + -1;
      local_148 = (longlong)local_180;
      pTVar38 = param_9;
      if (0 < local_180) {
        local_188 = 0;
        uVar35 = uVar34;
        iVar40 = 0;
        while( true ) {
          uVar30 = iVar40 + (int)uVar35;
          lVar37 = (uVar27 + ((int)uVar35 + local_188) * 3) * 8;
          while( true ) {
            uVar36 = uVar39;
            if ((int)uVar30 < param_2->ArrayNum) {
              uVar36 = ~uVar30 >> 0x1f;
            }
            if (uVar36 == 0) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar8 = (code *)swi(3);
                iVar19 = (*pcVar8)();
                return iVar19;
              }
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            if (2 < uVar20) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar18) {
                pcVar8 = (code *)swi(3);
                iVar19 = (*pcVar8)();
                return iVar19;
              }
            }
            if (dVar9 < *(double *)(pFVar5 + lVar37)) break;
            local_188 = local_188 + 1;
            iVar40 = iVar40 + 1;
            uVar30 = uVar30 + 1;
            lVar37 = lVar37 + 0x18;
          }
          uVar30 = param_3 + local_180;
          lVar25 = (uVar34 + local_148) * 0x18;
          lVar37 = local_148;
          pTVar38 = param_9;
          while( true ) {
            uVar21 = 0;
            uVar36 = uVar21;
            if ((int)uVar30 < param_2->ArrayNum) {
              uVar36 = ~uVar30 >> 0x1f;
            }
            param_9 = pTVar38;
            if (uVar36 == 0) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar8 = (code *)swi(3);
                iVar19 = (*pcVar8)();
                return iVar19;
              }
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            pTVar38 = param_9;
            if (2 < uVar20) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              pTVar38 = param_9;
              if (bVar18) {
                pcVar8 = (code *)swi(3);
                iVar19 = (*pcVar8)();
                return iVar19;
              }
            }
            if (*(double *)(pFVar5 + uVar27 * 8 + lVar25) <= dVar9) break;
            local_180 = local_180 + -1;
            uVar30 = uVar30 - 1;
            lVar37 = lVar37 + -1;
            lVar25 = lVar25 + -0x18;
          }
          iVar19 = param_4;
          local_148 = lVar37;
          if (lVar37 <= local_188) break;
          uVar36 = param_3 + iVar40;
          uVar30 = uVar21;
          if ((int)uVar36 < param_2->ArrayNum) {
            uVar30 = ~uVar36 >> 0x1f;
          }
          param_9 = pTVar38;
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar7 + (uVar34 + local_188) * 0x18;
          uVar13 = *(undefined8 *)pFVar5;
          uVar14 = *(undefined8 *)(pFVar5 + 8);
          lVar25 = uVar34 + lVar37;
          uVar26 = *(undefined8 *)(pFVar7 + (uVar34 + local_188) * 0x18 + 0x10);
          uVar28 = (uint)~(param_3 + local_180) >> 0x1f;
          uVar30 = uVar21;
          if (param_3 + local_180 < param_2->ArrayNum) {
            uVar30 = uVar28;
          }
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar7 + lVar25 * 0x18;
          uVar15 = *(undefined8 *)pFVar5;
          uVar16 = *(undefined8 *)(pFVar5 + 8);
          uVar4 = *(undefined8 *)(pFVar7 + lVar25 * 0x18 + 0x10);
          uVar30 = uVar21;
          if ((int)uVar36 < param_2->ArrayNum) {
            uVar30 = ~uVar36 >> 0x1f;
          }
          uVar35 = (ulonglong)(uint)param_3;
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar7 + (param_3 + local_188) * 0x18;
          *(undefined8 *)pFVar5 = uVar15;
          *(undefined8 *)(pFVar5 + 8) = uVar16;
          *(undefined8 *)(pFVar7 + (param_3 + local_188) * 0x18 + 0x10) = uVar4;
          uVar30 = uVar21;
          if (local_180 + param_3 < param_2->ArrayNum) {
            uVar30 = uVar28;
          }
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar7 + lVar25 * 0x18;
          *(undefined8 *)pFVar5 = uVar13;
          *(undefined8 *)(pFVar5 + 8) = uVar14;
          *(undefined8 *)(pFVar7 + lVar25 * 0x18 + 0x10) = uVar26;
          uVar30 = uVar21;
          if (iVar40 + param_3 < param_1->ArrayNum) {
            uVar30 = (uint)~(iVar40 + param_3) >> 0x1f;
          }
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          uVar47 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_188) * 4);
          uVar30 = uVar21;
          if (local_180 + param_3 < param_1->ArrayNum) {
            uVar30 = (uint)~(local_180 + param_3) >> 0x1f;
          }
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          uVar48 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar37) * 4);
          if (iVar40 + param_3 < param_1->ArrayNum) {
            uVar21 = (uint)~(iVar40 + param_3) >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_188) * 4) = uVar48;
          uVar30 = uVar39;
          if (local_180 + param_3 < param_1->ArrayNum) {
            uVar30 = (uint)~(local_180 + param_3) >> 0x1f;
          }
          if (uVar30 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar8 = (code *)swi(3);
              iVar19 = (*pcVar8)();
              return iVar19;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar37) * 4) = uVar47;
        }
      }
      iVar19 = iVar19 - iVar40;
      param_9 = pTVar38;
    }
    pFVar17 = param_7;
    iVar33 = param_5 + 1;
    local_100._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_100._s_0.Y = _UNK_150a9e648;
    local_100._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e8 = _UNK_150a9e6d8;
    local_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d8 = _UNK_1508ffb58;
    local_150 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar40,iVar33,param_6,param_7,
                                    param_8,pTVar38);
    local_14c = SplitTriSetMidpoint(this,param_1,param_2,iVar40 + param_3,iVar19,iVar33,param_6,
                                    pFVar17,param_8,(TAxisAlignedBox3<double> *)&local_100._s_0);
    pTVar38 = param_9;
    pFVar17 = param_8;
    pTVar3 = &param_9->Max;
    uVar26 = (param_9->Min).field0_0x0._s_0.X;
    if (local_100._s_0.X <= (double)uVar26) {
      uVar26 = local_100._s_0.X;
    }
    (param_9->Min).field0_0x0._s_0.X = (double)uVar26;
    uVar26 = (param_9->Min).field0_0x0._s_0.Y;
    if (local_100._s_0.Y <= (double)uVar26) {
      uVar26 = local_100._s_0.Y;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar26;
    dVar9 = (param_9->Min).field0_0x0._s_0.Z;
    uVar26 = local_100._s_0.Z;
    if (dVar9 <= local_100._s_0.Z) {
      uVar26 = dVar9;
    }
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar26;
    dVar9 = (pTVar3->field0_0x0)._s_0.X;
    if (dVar9 <= dStack_e8) {
      dVar9 = dStack_e8;
    }
    dVar11 = (param_9->Max).field0_0x0._s_0.Z;
    (pTVar3->field0_0x0)._s_0.X = dVar9;
    dVar9 = (param_9->Max).field0_0x0._s_0.Y;
    if (dVar9 <= local_e0) {
      dVar9 = local_e0;
    }
    if (dVar11 <= dStack_d8) {
      dVar11 = dStack_d8;
    }
    (param_9->Max).field0_0x0._s_0.Y = dVar9;
    (param_9->Max).field0_0x0._s_0.Z = dVar11;
    uVar20 = param_8->IBoxCur;
    param_8->IBoxCur = uVar20 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar20);
    uVar39 = pFVar17->IIndicesCur;
    pFVar17->IIndicesCur = uVar39 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar17->IndexList,&local_150,uVar39);
    uVar39 = pFVar17->IIndicesCur;
    pFVar17->IIndicesCur = uVar39 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar17->IndexList,&local_14c,uVar39);
    uVar30 = (pFVar17->BoxCenters).CurBlock;
    pTVar31 = &pFVar17->BoxCenters;
    uVar39 = (pFVar17->BoxCenters).CurBlockUsed;
    uVar36 = uVar30 * 0x200 + uVar39;
    dVar9 = ((pTVar3->field0_0x0)._s_0.X + (pTVar38->Min).field0_0x0._s_0.X) * dVar10;
    dVar11 = ((pTVar38->Max).field0_0x0._s_0.Y + (pTVar38->Min).field0_0x0._s_0.Y) * dVar10;
    dVar12 = ((pTVar38->Max).field0_0x0._s_0.Z + (pTVar38->Min).field0_0x0._s_0.Z) * dVar10;
    if (uVar20 == uVar36) {
      if (uVar39 == 0x200) {
        if (uVar30 == (pFVar17->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        uVar30 = pTVar31->CurBlock;
        (pFVar17->BoxCenters).CurBlockUsed = 0;
        uVar39 = uVar32;
      }
    }
    else {
      if (uVar20 <= uVar36) {
        uVar34 = (ulonglong)(uVar20 & 0x1ff);
        lVar37 = *(longlong *)
                  ((pFVar17->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar20 >> 9) * 8);
        *(double *)(lVar37 + uVar34 * 0x18) = dVar9;
        *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar11;
        *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar12;
        goto LAB_14cb3d55d;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar31,uVar20);
      uVar39 = (pFVar17->BoxCenters).CurBlockUsed;
      if (uVar39 == 0x200) {
        if (pTVar31->CurBlock == (pFVar17->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        (pFVar17->BoxCenters).CurBlockUsed = 0;
        uVar39 = uVar32;
      }
      uVar30 = pTVar31->CurBlock;
    }
    lVar25 = (longlong)(int)uVar39;
    lVar37 = *(longlong *)
              ((pFVar17->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
    *(double *)(lVar37 + lVar25 * 0x18) = dVar9;
    *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar11;
    *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar12;
    puVar2 = &(pFVar17->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_14cb3d55d:
    pFVar17 = param_8;
    pTVar31 = &param_8->BoxExtents;
    uVar30 = pTVar31->CurBlock;
    uVar39 = (param_8->BoxExtents).CurBlockUsed;
    uVar36 = uVar30 * 0x200 + uVar39;
    dVar9 = ((pTVar38->Max).field0_0x0._s_0.X - (pTVar38->Min).field0_0x0._s_0.X) * dVar10;
    dVar11 = ((pTVar38->Max).field0_0x0._s_0.Y - (pTVar38->Min).field0_0x0._s_0.Y) * dVar10;
    dVar10 = ((pTVar38->Max).field0_0x0._s_0.Z - (pTVar38->Min).field0_0x0._s_0.Z) * dVar10;
    if (uVar20 == uVar36) {
      if (uVar39 == 0x200) {
        if (uVar30 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        uVar30 = pTVar31->CurBlock;
        (pFVar17->BoxExtents).CurBlockUsed = 0;
        uVar39 = uVar32;
      }
    }
    else {
      if (uVar20 <= uVar36) {
        uVar34 = (ulonglong)(uVar20 & 0x1ff);
        lVar37 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar20 >> 9) * 8);
        *(double *)(lVar37 + uVar34 * 0x18) = dVar9;
        *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar11;
        *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar10;
        return uVar20;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar31,uVar20);
      uVar39 = (pFVar17->BoxExtents).CurBlockUsed;
      if (uVar39 == 0x200) {
        if (pTVar31->CurBlock == (pFVar17->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        (pFVar17->BoxExtents).CurBlockUsed = 0;
        uVar39 = uVar32;
      }
      uVar30 = pTVar31->CurBlock;
    }
    lVar25 = (longlong)(int)uVar39;
    lVar37 = *(longlong *)
              ((pFVar17->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
    *(double *)(lVar37 + lVar25 * 0x18) = dVar9;
    *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar11;
    *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar10;
    puVar2 = &(pFVar17->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar20;
  }
  uVar20 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar20 + 1;
  param_9._0_4_ = uVar20;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar20);
  uVar39 = *piVar1;
  this_01 = &pFVar17->IndexList;
  *piVar1 = uVar39 + 1;
  TDynamicVector<int,512>::InsertAt(this_01,&param_4,uVar39);
  if (0 < iVar19) {
    lVar37 = uVar34 * 4;
    param_6 = param_3;
    do {
      uVar20 = *piVar1;
      *piVar1 = uVar20 + 1;
      uVar32 = ~param_6;
      uVar39 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar39 = uVar32 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        iVar19 = (*pcVar8)();
        return iVar19;
      }
      uVar39 = this_01->CurBlock;
      uVar30 = (pFVar17->IndexList).CurBlockUsed;
      uVar36 = uVar39 * 0x200 + uVar30;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (uVar20 == uVar36) {
        if (uVar30 == 0x200) {
          if (uVar39 == (pFVar17->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar30 = 0;
          uVar39 = this_01->CurBlock;
          (pFVar17->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar17->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar39 * 8) +
         (longlong)(int)uVar30 * 4) = *(undefined4 *)(pFVar5 + lVar37);
        puVar2 = &(pFVar17->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar36 < uVar20) {
        TDynamicVector<int,512>::Resize(this_01,uVar20);
        uVar20 = (pFVar17->IndexList).CurBlockUsed;
        if (uVar20 == 0x200) {
          if (this_01->CurBlock == (pFVar17->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar20 = 0;
          (pFVar17->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar17->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_01->CurBlock * 8) + (longlong)(int)uVar20 * 4) =
             *(undefined4 *)(pFVar5 + lVar37);
        puVar2 = &(pFVar17->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar17->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8) +
         (ulonglong)(uVar20 & 0x1ff) * 4) = *(undefined4 *)(pFVar5 + lVar37);
      }
      uVar20 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar20 = uVar32 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        iVar19 = (*pcVar8)();
        return iVar19;
      }
      this_00 = this->Mesh;
      FMeshDescriptionTriangleMeshAdapter::GetTriangle
                ((FMeshDescriptionTriangleMeshAdapter *)this_00,(FIndex3i *)&local_140._s_0,
                 *(int *)((param_1->AllocatorInstance).Data + lVar37));
      pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           ((TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> *)
                           &this_00->_padding_)->ArrayPtr,0);
      pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar23,local_140._s_0.A);
      dVar11 = (double)(pTVar24->field0_0x0)._s_0.X *
               (((TVector<double> *)&this_00->_padding_)->field0_0x0)._s_0.X;
      dVar10 = (double)(pTVar24->field0_0x0)._s_0.Y * (double)this_00->_padding_;
      dVar9 = (double)(pTVar24->field0_0x0)._s_0.Z * (double)this_00->_padding_;
      pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           ((TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> *)
                           &this_00->_padding_)->ArrayPtr,0);
      pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar23,local_140._s_0.B);
      dVar45 = (double)(pTVar24->field0_0x0)._s_0.X *
               (((TVector<double> *)&this_00->_padding_)->field0_0x0)._s_0.X;
      dVar41 = (double)(pTVar24->field0_0x0)._s_0.Y * (double)this_00->_padding_;
      dVar43 = (double)(pTVar24->field0_0x0)._s_0.Z * (double)this_00->_padding_;
      dVar12 = dVar45;
      if ((dVar11 <= dVar45) && (dVar12 = dVar11, dVar11 < dVar45)) {
        dVar11 = dVar45;
      }
      dVar45 = dVar41;
      if ((dVar10 <= dVar41) && (dVar45 = dVar10, dVar10 < dVar41)) {
        dVar10 = dVar41;
      }
      dVar41 = dVar43;
      if ((dVar9 <= dVar43) && (dVar41 = dVar9, dVar9 < dVar43)) {
        dVar9 = dVar43;
      }
      pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           ((TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> *)
                           &this_00->_padding_)->ArrayPtr,0);
      pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar23,local_140._s_0.C);
      dVar44 = (double)(pTVar24->field0_0x0)._s_0.X *
               (((TVector<double> *)&this_00->_padding_)->field0_0x0)._s_0.X;
      dVar42 = (double)(pTVar24->field0_0x0)._s_0.Y * (double)this_00->_padding_;
      dVar46 = (double)(pTVar24->field0_0x0)._s_0.Z * (double)this_00->_padding_;
      dVar43 = dVar44;
      if ((dVar12 <= dVar44) && (dVar43 = dVar12, dVar11 < dVar44)) {
        dVar11 = dVar44;
      }
      dVar12 = dVar42;
      if ((dVar45 <= dVar42) && (dVar12 = dVar45, dVar10 < dVar42)) {
        dVar10 = dVar42;
      }
      dVar45 = dVar46;
      if ((dVar41 <= dVar46) && (dVar45 = dVar41, dVar9 < dVar46)) {
        dVar9 = dVar46;
      }
      param_6 = param_6 + 1;
      dVar41 = (pTVar38->Min).field0_0x0._s_0.X;
      if (dVar41 <= dVar43) {
        dVar43 = dVar41;
      }
      dVar41 = (pTVar38->Min).field0_0x0._s_0.Y;
      if (dVar41 <= dVar12) {
        dVar12 = dVar41;
      }
      dVar41 = (pTVar38->Min).field0_0x0._s_0.Z;
      if (dVar41 <= dVar45) {
        dVar45 = dVar41;
      }
      dVar41 = (pTVar38->Max).field0_0x0._s_0.X;
      if (dVar11 <= dVar41) {
        dVar11 = dVar41;
      }
      dVar41 = (pTVar38->Max).field0_0x0._s_0.Y;
      if (dVar10 <= dVar41) {
        dVar10 = dVar41;
      }
      dVar41 = (pTVar38->Max).field0_0x0._s_0.Z;
      if (dVar9 <= dVar41) {
        dVar9 = dVar41;
      }
      (pTVar38->Min).field0_0x0._s_0.X = dVar43;
      lVar37 = lVar37 + 4;
      (pTVar38->Min).field0_0x0._s_0.Y = dVar12;
      (pTVar38->Min).field0_0x0._s_0.Z = dVar45;
      (pTVar38->Max).field0_0x0._s_0.X = dVar11;
      (pTVar38->Max).field0_0x0._s_0.Y = dVar10;
      (pTVar38->Max).field0_0x0._s_0.Z = dVar9;
      uVar20 = (uint)param_9;
    } while (param_6 - param_3 < iVar19);
  }
  pFVar17 = param_7;
  dVar12 = __real_3fe0000000000000;
  uVar32 = (param_7->BoxCenters).CurBlock;
  uVar39 = (param_7->BoxCenters).CurBlockUsed;
  uVar30 = uVar32 * 0x200 + uVar39;
  dVar9 = ((pTVar38->Max).field0_0x0._s_0.X + (pTVar38->Min).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar10 = ((pTVar38->Max).field0_0x0._s_0.Y + (pTVar38->Min).field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar11 = ((pTVar38->Max).field0_0x0._s_0.Z + (pTVar38->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar20 == uVar30) {
    if (uVar39 == 0x200) {
      if (uVar32 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&param_7->BoxCenters);
      }
      (pFVar17->BoxCenters).CurBlock = (pFVar17->BoxCenters).CurBlock + 1;
      uVar39 = 0;
      uVar32 = (pFVar17->BoxCenters).CurBlock;
      (pFVar17->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar20 <= uVar30) {
      uVar34 = (ulonglong)(uVar20 & 0x1ff);
      lVar37 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
      ;
      *(double *)(lVar37 + uVar34 * 0x18) = dVar9;
      *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar10;
      *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar11;
      goto LAB_14cb3cae2;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&param_7->BoxCenters,uVar20);
    uVar39 = (pFVar17->BoxCenters).CurBlockUsed;
    if (uVar39 == 0x200) {
      if ((pFVar17->BoxCenters).CurBlock == (pFVar17->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar17->BoxCenters);
      }
      (pFVar17->BoxCenters).CurBlock = (pFVar17->BoxCenters).CurBlock + 1;
      uVar39 = 0;
      (pFVar17->BoxCenters).CurBlockUsed = 0;
    }
    uVar32 = (pFVar17->BoxCenters).CurBlock;
  }
  lVar25 = (longlong)(int)uVar39;
  lVar37 = *(longlong *)
            ((pFVar17->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
  *(double *)(lVar37 + lVar25 * 0x18) = dVar9;
  *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar10;
  *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar11;
  puVar2 = &(pFVar17->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_14cb3cae2:
  uVar32 = (pFVar17->BoxExtents).CurBlock;
  uVar39 = (pFVar17->BoxExtents).CurBlockUsed;
  uVar30 = uVar32 * 0x200 + uVar39;
  dVar9 = ((pTVar38->Max).field0_0x0._s_0.X - (pTVar38->Min).field0_0x0._s_0.X) * dVar12;
  dVar10 = ((pTVar38->Max).field0_0x0._s_0.Y - (pTVar38->Min).field0_0x0._s_0.Y) * dVar12;
  dVar12 = ((pTVar38->Max).field0_0x0._s_0.Z - (pTVar38->Min).field0_0x0._s_0.Z) * dVar12;
  if (uVar20 == uVar30) {
    if (uVar39 == 0x200) {
      if (uVar32 == (pFVar17->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar17->BoxExtents);
      }
      (pFVar17->BoxExtents).CurBlock = (pFVar17->BoxExtents).CurBlock + 1;
      uVar39 = 0;
      uVar32 = (pFVar17->BoxExtents).CurBlock;
      (pFVar17->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar20 <= uVar30) {
      uVar34 = (ulonglong)(uVar20 & 0x1ff);
      lVar37 = *(longlong *)
                ((pFVar17->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
      ;
      *(double *)(lVar37 + uVar34 * 0x18) = dVar9;
      *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar10;
      *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar12;
      return ~uVar20;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&pFVar17->BoxExtents,uVar20);
    uVar39 = (pFVar17->BoxExtents).CurBlockUsed;
    if (uVar39 == 0x200) {
      if ((pFVar17->BoxExtents).CurBlock == (pFVar17->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar17->BoxExtents);
      }
      (pFVar17->BoxExtents).CurBlock = (pFVar17->BoxExtents).CurBlock + 1;
      (pFVar17->BoxExtents).CurBlockUsed = 0;
      uVar39 = 0;
    }
    uVar32 = (pFVar17->BoxExtents).CurBlock;
  }
  lVar25 = (longlong)(int)uVar39;
  lVar37 = *(longlong *)
            ((pFVar17->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
  *(double *)(lVar37 + lVar25 * 0x18) = dVar9;
  *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar10;
  *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar12;
  puVar2 = &(pFVar17->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar20;
}

// SplitTriSetMidpoint @ 14cb3d6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
SplitTriSetMidpoint(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                   TArray<int,TSizedDefaultAllocator<32>_> *param_1,
                   TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
                   int param_3,int param_4,int param_5,int param_6,FBoxesSet *param_7,
                   FBoxesSet *param_8,TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  TDynamicVector<int,512> *this_00;
  uint *puVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FStaticMeshLODResourcesMeshAdapter *this_01;
  uchar *puVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FBoxesSet *pFVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  FBoxesSet *pFVar27;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  TAxisAlignedBox3<double> *pTVar35;
  uint uVar36;
  int iVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  longlong local_188;
  int local_180;
  int local_158 [2];
  int local_150;
  int local_14c;
  longlong local_148;
  FIndex3i_u_0 local_140;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  TVector<double>_u_0 local_100;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  
  pTVar35 = param_9;
  pFVar15 = param_7;
  iVar17 = param_4;
  uVar31 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar20 = &local_130;
    local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar20 = &local_d0;
    local_d0 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_c8 = _UNK_150a9e648;
    local_b0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a8 = _UNK_1508ffb58;
    local_c0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b8 = _UNK_150a9e6d8;
  }
  dVar44 = pdVar20[1];
  dVar42 = pdVar20[2];
  dVar46 = pdVar20[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar20;
  (param_9->Min).field0_0x0._s_0.Y = dVar44;
  dVar44 = pdVar20[4];
  dVar10 = pdVar20[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar42;
  (param_9->Max).field0_0x0._s_0.X = dVar46;
  (param_9->Max).field0_0x0._s_0.Y = dVar44;
  (param_9->Max).field0_0x0._s_0.Z = dVar10;
  if (param_6 < param_4) {
    local_158[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar7 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar9 = *(code **)&this->GetSplitAxis;
    plVar25 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar25 = plVar7;
    }
    uVar22 = (**(code **)(*plVar25 + 8))();
    uVar49 = (undefined4)__real_7fefffffffffffff;
    uVar50 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar47 = (undefined4)__real_ffefffffffffffff;
    uVar48 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar18 = (*pcVar9)(uVar22,local_158,pTVar35);
    iVar37 = 0;
    uVar29 = 0;
    uVar23 = (ulonglong)(int)uVar18;
    uVar36 = 0;
    if (0 < iVar17) {
      lVar34 = (uVar23 + uVar31 * 3) * 8;
      uVar26 = param_3;
      pTVar35 = param_9;
      do {
        uVar33 = uVar36;
        if ((int)uVar26 < param_2->ArrayNum) {
          uVar33 = ~uVar26 >> 0x1f;
        }
        param_9 = pTVar35;
        if (uVar33 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            iVar17 = (*pcVar9)();
            return iVar17;
          }
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        pTVar35 = param_9;
        if (2 < uVar23) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          pTVar35 = param_9;
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            iVar17 = (*pcVar9)();
            return iVar17;
          }
        }
        dVar44 = *(double *)(pFVar5 + lVar34);
        if (dVar44 <= (double)CONCAT44(uVar50,uVar49)) {
          uVar49 = SUB84(dVar44,0);
          uVar50 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        dVar44 = *(double *)(pFVar5 + lVar34);
        if ((double)CONCAT44(uVar48,uVar47) <= dVar44) {
          uVar47 = SUB84(dVar44,0);
          uVar48 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        uVar26 = uVar26 + 1;
        lVar34 = lVar34 + 0x18;
        param_9 = pTVar35;
      } while ((int)(uVar26 - param_3) < iVar17);
    }
    dVar42 = __real_3fe0000000000000;
    dVar44 = ((double)CONCAT44(uVar48,uVar47) + (double)CONCAT44(uVar50,uVar49)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar48,uVar47) - (double)CONCAT44(uVar50,uVar49) <= __real_3e45798ee2308c3a
       ) {
      iVar37 = iVar17 / 2;
      iVar17 = iVar17 - iVar37;
    }
    else {
      local_180 = iVar17 + -1;
      local_148 = (longlong)local_180;
      pTVar35 = param_9;
      if (0 < local_180) {
        local_188 = 0;
        uVar32 = uVar31;
        iVar37 = 0;
        while( true ) {
          uVar26 = iVar37 + (int)uVar32;
          lVar34 = (uVar23 + ((int)uVar32 + local_188) * 3) * 8;
          while( true ) {
            uVar33 = uVar36;
            if ((int)uVar26 < param_2->ArrayNum) {
              uVar33 = ~uVar26 >> 0x1f;
            }
            if (uVar33 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar9 = (code *)swi(3);
                iVar17 = (*pcVar9)();
                return iVar17;
              }
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            if (2 < uVar18) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar16) {
                pcVar9 = (code *)swi(3);
                iVar17 = (*pcVar9)();
                return iVar17;
              }
            }
            if (dVar44 < *(double *)(pFVar5 + lVar34)) break;
            local_188 = local_188 + 1;
            iVar37 = iVar37 + 1;
            uVar26 = uVar26 + 1;
            lVar34 = lVar34 + 0x18;
          }
          uVar26 = param_3 + local_180;
          lVar21 = (uVar31 + local_148) * 0x18;
          lVar34 = local_148;
          pTVar35 = param_9;
          while( true ) {
            uVar19 = 0;
            uVar33 = uVar19;
            if ((int)uVar26 < param_2->ArrayNum) {
              uVar33 = ~uVar26 >> 0x1f;
            }
            param_9 = pTVar35;
            if (uVar33 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar9 = (code *)swi(3);
                iVar17 = (*pcVar9)();
                return iVar17;
              }
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            pTVar35 = param_9;
            if (2 < uVar18) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              pTVar35 = param_9;
              if (bVar16) {
                pcVar9 = (code *)swi(3);
                iVar17 = (*pcVar9)();
                return iVar17;
              }
            }
            if (*(double *)(pFVar5 + uVar23 * 8 + lVar21) <= dVar44) break;
            local_180 = local_180 + -1;
            uVar26 = uVar26 - 1;
            lVar34 = lVar34 + -1;
            lVar21 = lVar21 + -0x18;
          }
          iVar17 = param_4;
          local_148 = lVar34;
          if (lVar34 <= local_188) break;
          uVar33 = param_3 + iVar37;
          uVar26 = uVar19;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          param_9 = pTVar35;
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar8 + (uVar31 + local_188) * 0x18;
          uVar11 = *(undefined8 *)pFVar5;
          uVar12 = *(undefined8 *)(pFVar5 + 8);
          lVar21 = uVar31 + lVar34;
          uVar22 = *(undefined8 *)(pFVar8 + (uVar31 + local_188) * 0x18 + 0x10);
          uVar24 = (uint)~(param_3 + local_180) >> 0x1f;
          uVar26 = uVar19;
          if (param_3 + local_180 < param_2->ArrayNum) {
            uVar26 = uVar24;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar8 + lVar21 * 0x18;
          uVar13 = *(undefined8 *)pFVar5;
          uVar14 = *(undefined8 *)(pFVar5 + 8);
          uVar4 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
          uVar26 = uVar19;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          uVar32 = (ulonglong)(uint)param_3;
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar8 + (param_3 + local_188) * 0x18;
          *(undefined8 *)pFVar5 = uVar13;
          *(undefined8 *)(pFVar5 + 8) = uVar14;
          *(undefined8 *)(pFVar8 + (param_3 + local_188) * 0x18 + 0x10) = uVar4;
          uVar26 = uVar19;
          if (local_180 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar24;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar5 = pFVar8 + lVar21 * 0x18;
          *(undefined8 *)pFVar5 = uVar11;
          *(undefined8 *)(pFVar5 + 8) = uVar12;
          *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10) = uVar22;
          uVar26 = uVar19;
          if (iVar37 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(iVar37 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          uVar47 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_188) * 4);
          uVar26 = uVar19;
          if (local_180 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(local_180 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          uVar48 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar34) * 4);
          if (iVar37 + param_3 < param_1->ArrayNum) {
            uVar19 = (uint)~(iVar37 + param_3) >> 0x1f;
          }
          if (uVar19 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_188) * 4) = uVar48;
          uVar26 = uVar36;
          if (local_180 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(local_180 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              iVar17 = (*pcVar9)();
              return iVar17;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar34) * 4) = uVar47;
        }
      }
      iVar17 = iVar17 - iVar37;
      param_9 = pTVar35;
    }
    pFVar15 = param_7;
    iVar30 = param_5 + 1;
    local_100._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_100._s_0.Y = _UNK_150a9e648;
    local_100._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e8 = _UNK_150a9e6d8;
    local_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d8 = _UNK_1508ffb58;
    local_150 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar37,iVar30,param_6,param_7,
                                    param_8,pTVar35);
    local_14c = SplitTriSetMidpoint(this,param_1,param_2,iVar37 + param_3,iVar17,iVar30,param_6,
                                    pFVar15,param_8,(TAxisAlignedBox3<double> *)&local_100._s_0);
    pTVar35 = param_9;
    pFVar15 = param_8;
    pTVar3 = &param_9->Max;
    uVar22 = (param_9->Min).field0_0x0._s_0.X;
    if (local_100._s_0.X <= (double)uVar22) {
      uVar22 = local_100._s_0.X;
    }
    (param_9->Min).field0_0x0._s_0.X = (double)uVar22;
    uVar22 = (param_9->Min).field0_0x0._s_0.Y;
    if (local_100._s_0.Y <= (double)uVar22) {
      uVar22 = local_100._s_0.Y;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar22;
    uVar22 = (param_9->Min).field0_0x0._s_0.Z;
    if (local_100._s_0.Z <= (double)uVar22) {
      uVar22 = local_100._s_0.Z;
    }
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar22;
    dVar44 = (pTVar3->field0_0x0)._s_0.X;
    if (dVar44 <= dStack_e8) {
      dVar44 = dStack_e8;
    }
    dVar46 = (param_9->Max).field0_0x0._s_0.Z;
    (pTVar3->field0_0x0)._s_0.X = dVar44;
    dVar44 = (param_9->Max).field0_0x0._s_0.Y;
    if (dVar44 <= local_e0) {
      dVar44 = local_e0;
    }
    if (dVar46 <= dStack_d8) {
      dVar46 = dStack_d8;
    }
    (param_9->Max).field0_0x0._s_0.Y = dVar44;
    (param_9->Max).field0_0x0._s_0.Z = dVar46;
    uVar18 = param_8->IBoxCur;
    param_8->IBoxCur = uVar18 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar18);
    uVar36 = pFVar15->IIndicesCur;
    pFVar15->IIndicesCur = uVar36 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar15->IndexList,&local_150,uVar36);
    uVar36 = pFVar15->IIndicesCur;
    pFVar15->IIndicesCur = uVar36 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar15->IndexList,&local_14c,uVar36);
    uVar26 = (pFVar15->BoxCenters).CurBlock;
    pTVar28 = &pFVar15->BoxCenters;
    uVar36 = (pFVar15->BoxCenters).CurBlockUsed;
    uVar33 = uVar26 * 0x200 + uVar36;
    dVar44 = ((pTVar3->field0_0x0)._s_0.X + (pTVar35->Min).field0_0x0._s_0.X) * dVar42;
    dVar46 = ((pTVar35->Max).field0_0x0._s_0.Y + (pTVar35->Min).field0_0x0._s_0.Y) * dVar42;
    dVar10 = ((pTVar35->Max).field0_0x0._s_0.Z + (pTVar35->Min).field0_0x0._s_0.Z) * dVar42;
    if (uVar18 == uVar33) {
      if (uVar36 == 0x200) {
        if (uVar26 == (pFVar15->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        uVar26 = pTVar28->CurBlock;
        (pFVar15->BoxCenters).CurBlockUsed = 0;
        uVar36 = uVar29;
      }
    }
    else {
      if (uVar18 <= uVar33) {
        uVar31 = (ulonglong)(uVar18 & 0x1ff);
        lVar34 = *(longlong *)
                  ((pFVar15->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar34 + uVar31 * 0x18) = dVar44;
        *(double *)(lVar34 + 8 + uVar31 * 0x18) = dVar46;
        *(double *)(lVar34 + 0x10 + uVar31 * 0x18) = dVar10;
        goto LAB_14cb3e75e;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
      uVar36 = (pFVar15->BoxCenters).CurBlockUsed;
      if (uVar36 == 0x200) {
        if (pTVar28->CurBlock == (pFVar15->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        (pFVar15->BoxCenters).CurBlockUsed = 0;
        uVar36 = uVar29;
      }
      uVar26 = pTVar28->CurBlock;
    }
    lVar21 = (longlong)(int)uVar36;
    lVar34 = *(longlong *)
              ((pFVar15->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    *(double *)(lVar34 + lVar21 * 0x18) = dVar44;
    *(double *)(lVar34 + 8 + lVar21 * 0x18) = dVar46;
    *(double *)(lVar34 + 0x10 + lVar21 * 0x18) = dVar10;
    puVar2 = &(pFVar15->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_14cb3e75e:
    pFVar15 = param_8;
    pTVar28 = &param_8->BoxExtents;
    uVar26 = pTVar28->CurBlock;
    uVar36 = (param_8->BoxExtents).CurBlockUsed;
    uVar33 = uVar26 * 0x200 + uVar36;
    dVar44 = ((pTVar35->Max).field0_0x0._s_0.X - (pTVar35->Min).field0_0x0._s_0.X) * dVar42;
    dVar46 = ((pTVar35->Max).field0_0x0._s_0.Y - (pTVar35->Min).field0_0x0._s_0.Y) * dVar42;
    dVar42 = ((pTVar35->Max).field0_0x0._s_0.Z - (pTVar35->Min).field0_0x0._s_0.Z) * dVar42;
    if (uVar18 == uVar33) {
      if (uVar36 == 0x200) {
        if (uVar26 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        uVar26 = pTVar28->CurBlock;
        (pFVar15->BoxExtents).CurBlockUsed = 0;
        uVar36 = uVar29;
      }
    }
    else {
      if (uVar18 <= uVar33) {
        uVar31 = (ulonglong)(uVar18 & 0x1ff);
        lVar34 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar34 + uVar31 * 0x18) = dVar44;
        *(double *)(lVar34 + 8 + uVar31 * 0x18) = dVar46;
        *(double *)(lVar34 + 0x10 + uVar31 * 0x18) = dVar42;
        return uVar18;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
      uVar36 = (pFVar15->BoxExtents).CurBlockUsed;
      if (uVar36 == 0x200) {
        if (pTVar28->CurBlock == (pFVar15->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        (pFVar15->BoxExtents).CurBlockUsed = 0;
        uVar36 = uVar29;
      }
      uVar26 = pTVar28->CurBlock;
    }
    lVar21 = (longlong)(int)uVar36;
    lVar34 = *(longlong *)
              ((pFVar15->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    *(double *)(lVar34 + lVar21 * 0x18) = dVar44;
    *(double *)(lVar34 + 8 + lVar21 * 0x18) = dVar46;
    *(double *)(lVar34 + 0x10 + lVar21 * 0x18) = dVar42;
    puVar2 = &(pFVar15->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar18;
  }
  uVar18 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar18 + 1;
  param_9._0_4_ = uVar18;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar18);
  uVar36 = *piVar1;
  this_00 = &pFVar15->IndexList;
  *piVar1 = uVar36 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar36);
  pFVar27 = pFVar15;
  if (0 < iVar17) {
    lVar34 = (longlong)param_3 * 4;
    param_6 = param_3;
    do {
      uVar18 = *piVar1;
      *piVar1 = uVar18 + 1;
      uVar29 = ~param_6;
      uVar36 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar36 = uVar29 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        iVar17 = (*pcVar9)();
        return iVar17;
      }
      uVar36 = this_00->CurBlock;
      uVar26 = (pFVar15->IndexList).CurBlockUsed;
      uVar33 = uVar36 * 0x200 + uVar26;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (uVar18 == uVar33) {
        if (uVar26 == 0x200) {
          if (uVar36 == (pFVar15->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar26 = 0;
          uVar36 = this_00->CurBlock;
          (pFVar15->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar15->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar36 * 8) +
         (longlong)(int)uVar26 * 4) = *(undefined4 *)(pFVar5 + lVar34);
        puVar2 = &(pFVar15->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar33 < uVar18) {
        TDynamicVector<int,512>::Resize(this_00,uVar18);
        uVar18 = (pFVar15->IndexList).CurBlockUsed;
        if (uVar18 == 0x200) {
          if (this_00->CurBlock == (pFVar15->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar18 = 0;
          (pFVar15->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar15->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar18 * 4) =
             *(undefined4 *)(pFVar5 + lVar34);
        puVar2 = &(pFVar15->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar15->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
         (ulonglong)(uVar18 & 0x1ff) * 4) = *(undefined4 *)(pFVar5 + lVar34);
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
        pcVar9 = (code *)swi(3);
        iVar17 = (*pcVar9)();
        return iVar17;
      }
      this_01 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
      FStaticMeshLODResourcesMeshAdapter::GetTriangle
                (this_01,(FIndex3i *)&local_140._s_0,
                 *(int *)((param_1->AllocatorInstance).Data + lVar34));
      dVar44 = (this_01->BuildScale).field0_0x0._s_0.X;
      dVar42 = (this_01->BuildScale).field0_0x0._s_0.Y;
      dVar46 = (this_01->BuildScale).field0_0x0._s_0.Z;
      puVar6 = (this_01->Mesh->VertexBuffers).PositionVertexBuffer.Data;
      uVar18 = (this_01->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
      uVar31 = (ulonglong)(uVar18 * local_140._s_0.A);
      uVar23 = (ulonglong)(uVar18 * local_140._s_0.B);
      dVar40 = (double)*(float *)(puVar6 + uVar31) * dVar44;
      dVar45 = (double)*(float *)(puVar6 + uVar23) * dVar44;
      dVar39 = (double)*(float *)(puVar6 + uVar31 + 4) * dVar42;
      dVar38 = (double)*(float *)(puVar6 + uVar31 + 8) * dVar46;
      dVar41 = (double)*(float *)(puVar6 + uVar23 + 4) * dVar42;
      dVar43 = (double)*(float *)(puVar6 + uVar23 + 8) * dVar46;
      dVar10 = dVar45;
      if ((dVar40 <= dVar45) && (dVar10 = dVar40, dVar40 < dVar45)) {
        dVar40 = dVar45;
      }
      dVar45 = dVar41;
      if ((dVar39 <= dVar41) && (dVar45 = dVar39, dVar39 < dVar41)) {
        dVar39 = dVar41;
      }
      dVar41 = dVar43;
      if ((dVar38 <= dVar43) && (dVar41 = dVar38, dVar38 < dVar43)) {
        dVar38 = dVar43;
      }
      uVar31 = (ulonglong)(local_140._s_0.C * uVar18);
      dVar44 = (double)*(float *)(puVar6 + uVar31) * dVar44;
      dVar42 = (double)*(float *)(puVar6 + uVar31 + 4) * dVar42;
      dVar46 = (double)*(float *)(puVar6 + uVar31 + 8) * dVar46;
      dVar43 = dVar44;
      if ((dVar10 <= dVar44) && (dVar43 = dVar10, dVar40 < dVar44)) {
        dVar40 = dVar44;
      }
      dVar44 = dVar42;
      if ((dVar45 <= dVar42) && (dVar44 = dVar45, dVar39 < dVar42)) {
        dVar39 = dVar42;
      }
      dVar42 = dVar46;
      if ((dVar41 <= dVar46) && (dVar42 = dVar41, dVar38 < dVar46)) {
        dVar38 = dVar46;
      }
      param_6 = param_6 + 1;
      dVar46 = (pTVar35->Min).field0_0x0._s_0.X;
      if (dVar46 <= dVar43) {
        dVar43 = dVar46;
      }
      dVar46 = (pTVar35->Min).field0_0x0._s_0.Y;
      if (dVar46 <= dVar44) {
        dVar44 = dVar46;
      }
      dVar46 = (pTVar35->Min).field0_0x0._s_0.Z;
      if (dVar46 <= dVar42) {
        dVar42 = dVar46;
      }
      dVar46 = (pTVar35->Max).field0_0x0._s_0.X;
      if (dVar40 <= dVar46) {
        dVar40 = dVar46;
      }
      dVar46 = (pTVar35->Max).field0_0x0._s_0.Y;
      if (dVar39 <= dVar46) {
        dVar39 = dVar46;
      }
      dVar46 = (pTVar35->Max).field0_0x0._s_0.Z;
      if (dVar38 <= dVar46) {
        dVar38 = dVar46;
      }
      (pTVar35->Min).field0_0x0._s_0.X = dVar43;
      lVar34 = lVar34 + 4;
      (pTVar35->Min).field0_0x0._s_0.Y = dVar44;
      (pTVar35->Min).field0_0x0._s_0.Z = dVar42;
      (pTVar35->Max).field0_0x0._s_0.X = dVar40;
      (pTVar35->Max).field0_0x0._s_0.Y = dVar39;
      (pTVar35->Max).field0_0x0._s_0.Z = dVar38;
      pFVar27 = param_7;
      uVar18 = (uint)param_9;
    } while (param_6 - param_3 < iVar17);
  }
  dVar10 = __real_3fe0000000000000;
  uVar29 = (pFVar27->BoxCenters).CurBlock;
  pTVar28 = &pFVar27->BoxCenters;
  uVar36 = (pFVar27->BoxCenters).CurBlockUsed;
  uVar26 = uVar29 * 0x200 + uVar36;
  dVar44 = ((pTVar35->Max).field0_0x0._s_0.X + (pTVar35->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar42 = ((pTVar35->Max).field0_0x0._s_0.Y + (pTVar35->Min).field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar46 = ((pTVar35->Max).field0_0x0._s_0.Z + (pTVar35->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar18 == uVar26) {
    if (uVar36 == 0x200) {
      if (uVar29 == (pFVar27->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar36 = 0;
      uVar29 = pTVar28->CurBlock;
      (pFVar27->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar18 <= uVar26) {
      uVar31 = (ulonglong)(uVar18 & 0x1ff);
      lVar34 = *(longlong *)
                ((pFVar27->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
      ;
      *(double *)(lVar34 + uVar31 * 0x18) = dVar44;
      *(double *)(lVar34 + 8 + uVar31 * 0x18) = dVar42;
      *(double *)(lVar34 + 0x10 + uVar31 * 0x18) = dVar46;
      goto LAB_14cb3dcf3;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
    uVar36 = (pFVar27->BoxCenters).CurBlockUsed;
    if (uVar36 == 0x200) {
      if (pTVar28->CurBlock == (pFVar27->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar36 = 0;
      (pFVar27->BoxCenters).CurBlockUsed = 0;
    }
    uVar29 = pTVar28->CurBlock;
  }
  lVar21 = (longlong)(int)uVar36;
  lVar34 = *(longlong *)
            ((pFVar27->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
  *(double *)(lVar34 + lVar21 * 0x18) = dVar44;
  *(double *)(lVar34 + 8 + lVar21 * 0x18) = dVar42;
  *(double *)(lVar34 + 0x10 + lVar21 * 0x18) = dVar46;
  puVar2 = &(pFVar27->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_14cb3dcf3:
  pFVar15 = param_7;
  pTVar28 = &param_7->BoxExtents;
  uVar29 = pTVar28->CurBlock;
  uVar36 = (param_7->BoxExtents).CurBlockUsed;
  uVar26 = uVar29 * 0x200 + uVar36;
  dVar44 = ((pTVar35->Max).field0_0x0._s_0.X - (pTVar35->Min).field0_0x0._s_0.X) * dVar10;
  dVar42 = ((pTVar35->Max).field0_0x0._s_0.Y - (pTVar35->Min).field0_0x0._s_0.Y) * dVar10;
  dVar10 = ((pTVar35->Max).field0_0x0._s_0.Z - (pTVar35->Min).field0_0x0._s_0.Z) * dVar10;
  if (uVar18 == uVar26) {
    if (uVar36 == 0x200) {
      if (uVar29 == (param_7->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar36 = 0;
      uVar29 = pTVar28->CurBlock;
      (pFVar15->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar18 <= uVar26) {
      uVar31 = (ulonglong)(uVar18 & 0x1ff);
      lVar34 = *(longlong *)
                ((param_7->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
      ;
      *(double *)(lVar34 + uVar31 * 0x18) = dVar44;
      *(double *)(lVar34 + 8 + uVar31 * 0x18) = dVar42;
      *(double *)(lVar34 + 0x10 + uVar31 * 0x18) = dVar10;
      return ~uVar18;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
    uVar36 = (pFVar15->BoxExtents).CurBlockUsed;
    if (uVar36 == 0x200) {
      if (pTVar28->CurBlock == (pFVar15->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      (pFVar15->BoxExtents).CurBlockUsed = 0;
      uVar36 = 0;
    }
    uVar29 = pTVar28->CurBlock;
  }
  lVar21 = (longlong)(int)uVar36;
  lVar34 = *(longlong *)
            ((pFVar15->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
  *(double *)(lVar34 + lVar21 * 0x18) = dVar44;
  *(double *)(lVar34 + 8 + lVar21 * 0x18) = dVar42;
  *(double *)(lVar34 + 0x10 + lVar21 * 0x18) = dVar10;
  puVar2 = &(pFVar15->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar18;
}

// SupportsNearestTriangle @ 14cb3efd0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
SupportsNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this)

{
  return true;
}

// SupportsNearestTriangle @ 14cb3efe0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
SupportsNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this)

{
  return true;
}

// SupportsPointContainment @ 14cb3eff0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
SupportsPointContainment
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this)

{
  return false;
}

// SupportsPointContainment @ 14cb3f000

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
SupportsPointContainment
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 14cb3f010

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this)

{
  return true;
}

// SupportsTriangleRayIntersection @ 14cb3f020

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this)

{
  return true;
}

// TestAnyHitTriangle @ 14cb3f030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TestAnyHitTriangle(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                  int param_1,TRay<double> *param_2,int *param_3,double param_4,
                  FQueryOptions *param_5)

{
  FVertexID FVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar6;
  FVertexID *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  TArrayView<FVertexID,int> *pTVar15;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar16;
  TVector<float> *pTVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_238 [32];
  int local_208 [2];
  int local_200;
  FVertexID *local_1f8;
  ulonglong local_1f0;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  double local_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  double local_158;
  TArrayView<FVertexID,int> local_148;
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
  double local_c8;
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
  lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar21 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar21) {
    uVar19 = *(uint *)(lVar3 + (ulonglong)(uVar21 & 0x1ff) * 4);
    dVar9 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar19 < 0) {
      uVar19 = ~uVar19;
      dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar19,param_2);
    }
    else {
      iVar20 = uVar19 - 1;
      uVar19 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                       (ulonglong)(uVar21 + 1 & 0x1ff) * 4) - 1;
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar20,param_2);
      dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar19,param_2);
      if (dVar10 <= dVar8) {
        if (dVar9 < dVar10) {
          return false;
        }
        bVar12 = TestAnyHitTriangle(this,uVar19,param_2,param_3,param_4,param_5);
        if (!bVar12) {
          if (dVar9 < dVar8) {
            return false;
          }
          bVar12 = TestAnyHitTriangle(this,iVar20,param_2,param_3,param_4,param_5);
          return bVar12;
        }
        return true;
      }
      if (dVar9 < dVar8) {
        return false;
      }
      bVar12 = TestAnyHitTriangle(this,iVar20,param_2,param_3,param_4,param_5);
      if (bVar12) {
        return true;
      }
    }
    if ((dVar10 <= dVar9) &&
       (bVar12 = TestAnyHitTriangle(this,uVar19,param_2,param_3,param_4,param_5), bVar12)) {
      return true;
    }
    return false;
  }
  local_200 = *(int *)(lVar3 + (ulonglong)(uVar21 & 0x1ff) * 4);
  if (local_200 < 1) {
    return false;
  }
  uVar21 = uVar21 + 1;
  do {
    iVar20 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14cb3f13b:
      pFVar6 = this->Mesh;
      pTVar15 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                           (pFVar6->_padding_ + 200),&local_148,iVar20);
      iVar20 = pTVar15->ArrayNum;
      pFVar7 = pTVar15->DataPtr;
      local_1f8 = pFVar7;
      if ((iVar20 < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FVar1 = *pFVar7;
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar6->_padding_,0)
      ;
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar16,(int)FVar1);
      local_1e8._s_0.X = (double)(pTVar17->field0_0x0)._s_0.X * (double)pFVar6->_padding_;
      local_1e8._s_0.Y = (double)(pTVar17->field0_0x0)._s_0.Y * (double)pFVar6->_padding_;
      local_1e8._s_0.Z = (double)(pTVar17->field0_0x0)._s_0.Z * (double)pFVar6->_padding_;
      if ((iVar20 < 2) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FVar1 = local_1f8[1];
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar6->_padding_,0)
      ;
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar16,(int)FVar1);
      local_1d0._s_0.X = (double)(pTVar17->field0_0x0)._s_0.X * (double)pFVar6->_padding_;
      local_1d0._s_0.Y = (double)(pTVar17->field0_0x0)._s_0.Y * (double)pFVar6->_padding_;
      local_1d0._s_0.Z = (double)(pTVar17->field0_0x0)._s_0.Z * (double)pFVar6->_padding_;
      if ((iVar20 < 3) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FVar1 = local_1f8[2];
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar6->_padding_,0)
      ;
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar16,(int)FVar1);
      dVar10 = (double)(pTVar17->field0_0x0)._s_0.X * (double)pFVar6->_padding_;
      local_1b8._s_0.Y = (double)(pTVar17->field0_0x0)._s_0.Y * (double)pFVar6->_padding_;
      uVar22 = SUB84(local_1b8._s_0.Y,0);
      uVar23 = (undefined4)((ulonglong)local_1b8._s_0.Y >> 0x20);
      dVar9 = (double)(pTVar17->field0_0x0)._s_0.Z * (double)pFVar6->_padding_;
      local_1b8._s_0.X = dVar10;
      local_1b8._s_0.Z = dVar9;
      bVar12 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1e8._s_0,
                          (TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
      if (bVar12) {
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_178._0_4_ = SUB84(local_1d0._s_0.Y,0);
        uStack_178._4_4_ = (undefined4)((ulonglong)local_1d0._8_8_ >> 0x20);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_170 = SUB84(local_1d0._s_0.Z,0);
        uStack_16c = (undefined4)((ulonglong)local_1d0._16_8_ >> 0x20);
        local_180._0_4_ = SUB84(local_1d0._s_0.X,0);
        local_180._4_4_ = (undefined4)((ulonglong)local_1d0._0_8_ >> 0x20);
        uStack_188 = local_1e8._16_4_;
        uStack_184 = local_1e8._20_4_;
        local_108._16_4_ = local_1e8._16_4_;
        local_108._20_4_ = local_1e8._20_4_;
        uStack_f0 = (undefined4)local_180;
        uStack_ec = local_180._4_4_;
        local_168._8_4_ = uVar22;
        local_168._0_8_ = dVar10;
        local_168._12_4_ = uVar23;
        local_d8._8_4_ = uVar22;
        local_d8._0_8_ = dVar10;
        local_d8._12_4_ = uVar23;
        local_198 = local_1e8._s_0.X;
        dStack_190 = local_1e8._s_0.Y;
        local_108._s_0.X = local_1e8._s_0.X;
        local_108._s_0.Y = local_1e8._s_0.Y;
        local_e8 = (undefined4)uStack_178;
        uStack_e4 = uStack_178._4_4_;
        local_180 = local_1d0._s_0.X;
        uStack_178 = local_1d0._s_0.Y;
        local_158 = dVar9;
        uStack_e0 = uStack_170;
        uStack_dc = uStack_16c;
        local_c8 = dVar9;
        bVar12 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar12) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_208[0] = iVar20;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar5 = *(code **)&param_5->TriangleFilterF;
      plVar18 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar18 = plVar4;
      }
      uVar14 = (**(code **)(*plVar18 + 8))();
      cVar11 = (*pcVar5)(uVar14,local_208);
      if (cVar11 != '\0') goto LAB_14cb3f13b;
    }
    uVar21 = uVar21 + 1;
    if (local_200 < (int)(uVar21 - (int)local_1f0)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14cb3f570

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TestAnyHitTriangle(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                  TRay<double> *param_1,FQueryOptions *param_2)

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

// TestAnyHitTriangle @ 14cb3f5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TestAnyHitTriangle(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                  int param_1,TRay<double> *param_2,int *param_3,double param_4,
                  FQueryOptions *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong *plVar17;
  code *pcVar18;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar19;
  char cVar20;
  bool bVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  int iVar25;
  uint uVar26;
  undefined1 auStackY_228 [32];
  int local_1f8 [2];
  int local_1f0;
  FIndex3i_u_0 local_1e8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  TVector<double>_u_0 local_158;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  TVector<double> local_108;
  EIntersectionType local_f0 [2];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar15 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar13 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar16 = *(longlong *)(pFVar15 + (ulonglong)(uVar13 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar13) {
    uVar26 = *(uint *)(lVar16 + (ulonglong)(uVar13 & 0x1ff) * 4);
    dVar10 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar26 < 0) {
      uVar26 = ~uVar26;
      dVar11 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar26,param_2);
    }
    else {
      iVar25 = uVar26 - 1;
      uVar26 = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
      dVar12 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar25,param_2);
      dVar11 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar26,param_2);
      if (dVar11 <= dVar12) {
        if (dVar10 < dVar11) {
          return false;
        }
        bVar21 = TestAnyHitTriangle(this,uVar26,param_2,param_3,param_4,param_5);
        if (!bVar21) {
          if (dVar10 < dVar12) {
            return false;
          }
          bVar21 = TestAnyHitTriangle(this,iVar25,param_2,param_3,param_4,param_5);
          return bVar21;
        }
        return true;
      }
      if (dVar10 < dVar12) {
        return false;
      }
      bVar21 = TestAnyHitTriangle(this,iVar25,param_2,param_3,param_4,param_5);
      if (bVar21) {
        return true;
      }
    }
    if ((dVar11 <= dVar10) &&
       (bVar21 = TestAnyHitTriangle(this,uVar26,param_2,param_3,param_4,param_5), bVar21)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar16 + (ulonglong)(uVar13 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar26 = uVar13 + 1;
  do {
    iVar25 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14cb3f6ec:
      this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
      FStaticMeshLODResourcesMeshAdapter::GetTriangle(this_00,(FIndex3i *)&local_1e8._s_0,iVar25);
      dVar10 = (this_00->BuildScale).field0_0x0._s_0.X;
      dVar11 = (this_00->BuildScale).field0_0x0._s_0.Y;
      dVar12 = (this_00->BuildScale).field0_0x0._s_0.Z;
      puVar19 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
      uVar14 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
      uVar23 = (ulonglong)(local_1e8._s_0.A * uVar14);
      fVar1 = *(float *)(puVar19 + uVar23);
      fVar2 = *(float *)(puVar19 + uVar23 + 4);
      fVar3 = *(float *)(puVar19 + uVar23 + 8);
      uVar23 = (ulonglong)(local_1e8._s_0.B * uVar14);
      fVar4 = *(float *)(puVar19 + uVar23);
      fVar5 = *(float *)(puVar19 + uVar23 + 4);
      fVar6 = *(float *)(puVar19 + uVar23 + 8);
      uVar23 = (ulonglong)(local_1e8._s_0.C * uVar14);
      fVar7 = *(float *)(puVar19 + uVar23);
      fVar8 = *(float *)(puVar19 + uVar23 + 4);
      fVar9 = *(float *)(puVar19 + uVar23 + 8);
      local_1d8._s_0.X = (double)fVar7 * dVar10;
      local_1d8._s_0.Y = (double)fVar8 * dVar11;
      local_1d8._s_0.Z = (double)fVar9 * dVar12;
      local_1c0._s_0.X = (double)fVar4 * dVar10;
      local_1c0._s_0.Y = (double)fVar5 * dVar11;
      local_1c0._s_0.Z = (double)fVar6 * dVar12;
      local_1a8._s_0.X = (double)fVar1 * dVar10;
      local_1a8._s_0.Y = (double)fVar2 * dVar11;
      local_1a8._s_0.Z = (double)fVar3 * dVar12;
      bVar21 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1a8._s_0,
                          (TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1d8._s_0);
      if (bVar21) {
        local_188._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_188._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_188._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_170 = (param_2->Direction).field0_0x0._s_0.X;
        local_168 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_160 = (param_2->Direction).field0_0x0._s_0.Z;
        local_158._s_0.X = (double)fVar1 * dVar10;
        local_158._s_0.Y = (double)fVar2 * dVar11;
        local_158._s_0.Z = (double)fVar3 * dVar12;
        local_140 = (double)fVar4 * dVar10;
        local_138 = (double)fVar5 * dVar11;
        local_130 = (double)fVar6 * dVar12;
        local_128 = (double)fVar7 * dVar10;
        local_120 = (double)fVar8 * dVar11;
        local_118 = (double)fVar9 * dVar12;
        bVar21 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_188._s_0,(TTriangle3<double> *)&local_158._s_0,
                            &local_110,&local_108,local_f0);
        if ((bVar21) && (local_110 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_1f8[0] = iVar25;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar17 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar18 = *(code **)&param_5->TriangleFilterF;
      plVar24 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar17 != (longlong *)0x0) {
        plVar24 = plVar17;
      }
      uVar22 = (**(code **)(*plVar24 + 8))();
      cVar20 = (*pcVar18)(uVar22,local_1f8);
      if (cVar20 != '\0') goto LAB_14cb3f6ec;
    }
    uVar26 = uVar26 + 1;
    if (local_1f0 < (int)(uVar26 - uVar13)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14cb3fa40

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TestAnyHitTriangle(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                  TRay<double> *param_1,FQueryOptions *param_2)

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

// TestIntersection @ 14cb3fa90

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TestIntersection(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                TTriangle3<double> *param_1,FQueryOptions *param_2)

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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14cb3fb70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TestIntersection(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *param_1,
                TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                *param_2,FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14cb3fbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TestIntersection(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                FMeshDescriptionTriangleMeshSurfaceAdapter *param_1,
                TAxisAlignedBox3<double> *param_2,
                TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                *param_3,FQueryOptions *param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  double dVar3;
  int iVar4;
  FVertexID FVar5;
  FVertexID FVar6;
  FVertexID FVar7;
  FVertexID *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  TAxisAlignedBox3<double> *pTVar16;
  FMeshElementContainer *pFVar17;
  TArrayView<FVertexID,int> *pTVar18;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar19;
  TVector<float> *pTVar20;
  undefined8 uVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  undefined1 auStackY_1e8 [32];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  code *local_118 [2];
  undefined **local_108;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_100;
  undefined8 local_f0;
  TArrayView<FVertexID,int> local_e8;
  TAxisAlignedBox3<double> local_d8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  dVar3 = (param_2->Min).field0_0x0._s_0.X;
  if (((dVar3 < (param_2->Max).field0_0x0._s_0.X || dVar3 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar3 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar3 < *pdVar1 || dVar3 == *pdVar1)) &&
     (dVar3 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar3 < *pdVar1 || dVar3 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_f0 = 0;
      local_108 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFMeshDescriptionTriangleMeshSurfaceAdapter_Geometry_UE___Geometry_UE__UEBA_NPEBUFMeshDescriptionTriangleMeshSurfaceAdapter_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_100 = param_3;
      pTVar16 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_118);
      dVar3 = (pTVar16->Min).field0_0x0._s_0.Y;
      dVar10 = (pTVar16->Min).field0_0x0._s_0.Z;
      dVar11 = (pTVar16->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar16->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar16->Max).field0_0x0._s_0.Y;
      dVar12 = (pTVar16->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar10;
      (param_2->Max).field0_0x0._s_0.X = dVar11;
      (param_2->Max).field0_0x0._s_0.Y = dVar3;
      (param_2->Max).field0_0x0._s_0.Z = dVar12;
    }
    bVar13 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar13) {
      return false;
    }
  }
  iVar23 = 0;
  pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1->_padding_ + 0x70),0);
  iVar24 = (pFVar17->BitArray).NumBits - pFVar17->NumHoles;
  if (0 < iVar24) {
    do {
      if (*(longlong *)param_3 == 0) {
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  ((FMeshDescriptionTriangleMeshAdapter *)param_1,iVar23,
                   (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90._s_0,
                   (TVector<double> *)&local_78._s_0);
      }
      else {
        pTVar18 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                             (param_1->_padding_ + 200),&local_e8,iVar23);
        iVar4 = pTVar18->ArrayNum;
        pFVar8 = pTVar18->DataPtr;
        if ((iVar4 < 3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        FVar5 = pFVar8[2];
        if ((iVar4 < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        FVar6 = pFVar8[1];
        if ((iVar4 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        FVar7 = *pFVar8;
        pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_1->_padding_
                             ,0);
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar19,(int)FVar7);
        local_198 = (double)(pTVar20->field0_0x0)._s_0.Z * (double)param_1->_padding_;
        local_1a0 = (double)(pTVar20->field0_0x0)._s_0.Y * (double)param_1->_padding_;
        local_1a8 = (double)(pTVar20->field0_0x0)._s_0.X * (double)param_1->_padding_;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        puVar2 = &param_3->field_0x10;
        pcVar9 = *(code **)param_3;
        plVar22 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)puVar2;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar9)(&local_160,uVar21,&local_1a8);
        local_a8._s_0.X = local_160;
        local_a8._s_0.Y = dStack_158;
        local_a8._s_0.Z = local_150;
        pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_1->_padding_
                             ,0);
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar19,(int)FVar6);
        local_180 = (double)(pTVar20->field0_0x0)._s_0.Z * (double)param_1->_padding_;
        local_188 = (double)(pTVar20->field0_0x0)._s_0.Y * (double)param_1->_padding_;
        local_190 = (double)(pTVar20->field0_0x0)._s_0.X * (double)param_1->_padding_;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar9 = *(code **)param_3;
        plVar22 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)puVar2;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar9)(&local_148,uVar21,&local_190);
        local_90._s_0.X = local_148;
        local_90._s_0.Y = dStack_140;
        local_90._s_0.Z = local_138;
        pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_1->_padding_
                             ,0);
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar19,(int)FVar5);
        local_168 = (double)(pTVar20->field0_0x0)._s_0.Z * (double)param_1->_padding_;
        local_170 = (double)(pTVar20->field0_0x0)._s_0.Y * (double)param_1->_padding_;
        local_178 = (double)(pTVar20->field0_0x0)._s_0.X * (double)param_1->_padding_;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar9 = *(code **)param_3;
        plVar22 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)puVar2;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar9)(&local_130,uVar21,&local_178);
        local_78._0_4_ = local_130;
        local_78._4_4_ = uStack_12c;
        local_78._8_4_ = uStack_128;
        local_78._12_4_ = uStack_124;
        local_78._s_0.Z = local_120;
      }
      cVar15 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,param_4);
      if (cVar15 != '\0') {
        return true;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar24);
  }
  return false;
}

// TestIntersection @ 14cb3fff0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TestIntersection(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                TTriangle3<double> *param_1,FQueryOptions *param_2)

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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14cb400d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TestIntersection(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *param_1,
                TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                *param_2,FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14cb40140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TestIntersection(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                FStaticMeshLODResourcesMeshSurfaceAdapter *param_1,TAxisAlignedBox3<double> *param_2
                ,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                 *param_3,FQueryOptions *param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  TAxisAlignedBox3<double> *pTVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  int local_1d8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1d0;
  FIndex3i_u_0 local_1c8;
  FQueryOptions *local_1b8;
  FIndexArrayView local_1b0;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  code *local_108 [2];
  undefined **local_f8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_f0;
  undefined8 local_e0;
  TAxisAlignedBox3<double> local_d8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_208;
  dVar2 = (param_2->Min).field0_0x0._s_0.X;
  local_1b8 = param_4;
  local_1d0 = param_3;
  if (((dVar2 < (param_2->Max).field0_0x0._s_0.X || dVar2 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar2 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (dVar2 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_e0 = 0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFStaticMeshLODResourcesMeshSurfaceAdapter_Geometry_UE___Geometry_UE__UEBA_NPEBUFStaticMeshLODResourcesMeshSurfaceAdapter_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_f0 = param_3;
      pTVar12 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_108);
      dVar2 = (pTVar12->Min).field0_0x0._s_0.Y;
      dVar5 = (pTVar12->Min).field0_0x0._s_0.Z;
      dVar6 = (pTVar12->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar12->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar12->Max).field0_0x0._s_0.Y;
      dVar7 = (pTVar12->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar5;
      (param_2->Max).field0_0x0._s_0.X = dVar6;
      (param_2->Max).field0_0x0._s_0.Y = dVar2;
      (param_2->Max).field0_0x0._s_0.Z = dVar7;
    }
    bVar9 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar9) {
      return false;
    }
  }
  iVar21 = 0;
  if (((*(longlong *)param_1 != 0) &&
      (cVar10 = (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x250) + 0x30))(), cVar10 != '\0')
      ) && (iVar16 = *(int *)&param_1->field_0x60, local_1d8 = iVar16, 0 < iVar16)) {
    do {
      if (*(longlong *)param_3 == 0) {
        FStaticMeshLODResourcesMeshAdapter::GetTriangle
                  ((FStaticMeshLODResourcesMeshAdapter *)param_1,(FIndex3i *)&local_1c8._s_0,iVar21)
        ;
        lVar20 = *(longlong *)param_1;
        local_78 = *(double *)&param_1->field_0x8;
        uStack_70 = *(double *)&param_1->field_0x10;
        local_68 = *(double *)&param_1->field_0x18;
        uVar15 = (ulonglong)(uint)(local_1c8._s_0.A * *(int *)(lVar20 + 0x1c8));
        lVar3 = *(longlong *)(lVar20 + 0x1c0);
        dStack_a0 = (double)*(float *)(uVar15 + 4 + lVar3) * uStack_70;
        local_98 = (double)*(float *)(uVar15 + 8 + lVar3) * local_68;
        local_a8 = (double)*(float *)(uVar15 + lVar3) * local_78;
        uVar15 = (ulonglong)(uint)(local_1c8._s_0.B * *(int *)(lVar20 + 0x1c8));
        lVar3 = *(longlong *)(lVar20 + 0x1c0);
        dStack_88 = (double)*(float *)(uVar15 + 4 + lVar3) * uStack_70;
        local_80 = (double)*(float *)(uVar15 + 8 + lVar3) * local_68;
        local_90 = (double)*(float *)(uVar15 + lVar3) * local_78;
        uVar15 = (ulonglong)(uint)(local_1c8._s_0.C * *(int *)(lVar20 + 0x1c8));
        lVar20 = *(longlong *)(lVar20 + 0x1c0);
        uStack_70 = (double)*(float *)(uVar15 + 4 + lVar20) * uStack_70;
        local_68 = (double)*(float *)(uVar15 + 8 + lVar20) * local_68;
        local_78 = (double)*(float *)(uVar15 + lVar20) * local_78;
      }
      else {
        uVar19 = *(uint *)&param_1->field_0x58;
        iVar16 = 0;
        uVar22 = uVar19;
        if (0 < (int)uVar19) {
          do {
            uVar18 = uVar22 >> 1;
            if (*(int *)(*(longlong *)&param_1->field_0x50 + (longlong)(int)(uVar18 + iVar16) * 4)
                <= iVar21) {
              iVar16 = uVar18 + iVar16 + (uVar22 & 1);
            }
            uVar22 = uVar18;
          } while (uVar18 != 0);
        }
        uVar18 = iVar16 - 1;
        uVar22 = 0;
        if ((int)uVar18 < (int)uVar19) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if (uVar22 == 0) {
          local_1e8 = (longlong)(int)uVar18;
          local_1e0 = (longlong)(int)uVar19;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
        }
        lVar20 = (longlong)(int)uVar18;
        iVar16 = *(int *)(*(longlong *)&param_1->field_0x50 + lVar20 * 4);
        uVar19 = 0;
        if ((int)uVar18 < *(int *)&param_1->field_0x48) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_1e8 = lVar20, local_1e0 = (longlong)*(int *)&param_1->field_0x48,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        lVar20 = *(longlong *)(*(longlong *)&param_1->field_0x40 + lVar20 * 8);
        FRawStaticIndexBuffer::GetArrayView
                  ((FRawStaticIndexBuffer *)(*(longlong *)param_1 + 0x228),&local_1b0);
        pTVar8 = local_1d0;
        lVar20 = (longlong)(*(int *)(lVar20 + 4) + (iVar21 - iVar16) * 3);
        if (local_1b0.b32Bit == false) {
          uVar19 = (uint)*(ushort *)((longlong)local_1b0.UntypedIndexData + lVar20 * 2 + 4);
          uVar22 = (uint)*(ushort *)((longlong)local_1b0.UntypedIndexData + lVar20 * 2 + 2);
          uVar18 = (uint)*(ushort *)((longlong)local_1b0.UntypedIndexData + lVar20 * 2);
        }
        else {
          uVar19 = *(uint *)((longlong)local_1b0.UntypedIndexData + lVar20 * 4 + 8);
          uVar22 = *(uint *)((longlong)local_1b0.UntypedIndexData + lVar20 * 4 + 4);
          uVar18 = *(uint *)((longlong)local_1b0.UntypedIndexData + lVar20 * 4);
        }
        uVar15 = (ulonglong)(uVar18 * *(int *)(*(longlong *)param_1 + 0x1c8));
        lVar20 = *(longlong *)(*(longlong *)param_1 + 0x1c0);
        local_190 = (double)*(float *)(uVar15 + 8 + lVar20) * *(double *)&param_1->field_0x18;
        local_198 = (double)*(float *)(uVar15 + 4 + lVar20) * *(double *)&param_1->field_0x10;
        local_1a0 = (double)*(float *)(uVar15 + lVar20) * *(double *)&param_1->field_0x8;
        Core::Private::Function::CheckCallable(*(void **)local_1d0);
        pcVar4 = *(code **)pTVar8;
        puVar17 = &pTVar8->field_0x10;
        plVar14 = *(longlong **)&pTVar8->field_0x28;
        if (*(longlong **)&pTVar8->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)puVar17;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar4)(&local_158,uVar13,&local_1a0);
        param_3 = local_1d0;
        local_a8 = local_158;
        dStack_a0 = dStack_150;
        local_98 = local_148;
        uVar15 = (ulonglong)(uVar22 * *(int *)(*(longlong *)param_1 + 0x1c8));
        lVar20 = *(longlong *)(*(longlong *)param_1 + 0x1c0);
        local_178 = (double)*(float *)(uVar15 + 8 + lVar20) * *(double *)&param_1->field_0x18;
        local_180 = (double)*(float *)(uVar15 + 4 + lVar20) * *(double *)&param_1->field_0x10;
        local_188 = (double)*(float *)(uVar15 + lVar20) * *(double *)&param_1->field_0x8;
        Core::Private::Function::CheckCallable(*(void **)local_1d0);
        pcVar4 = *(code **)param_3;
        plVar14 = *(longlong **)&pTVar8->field_0x28;
        if (*(longlong **)&pTVar8->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)puVar17;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar4)(&local_140,uVar13,&local_188);
        local_90 = local_140;
        dStack_88 = dStack_138;
        local_80 = local_130;
        uVar15 = (ulonglong)(uVar19 * *(int *)(*(longlong *)param_1 + 0x1c8));
        lVar20 = *(longlong *)(*(longlong *)param_1 + 0x1c0);
        local_160 = (double)*(float *)(uVar15 + 8 + lVar20) * *(double *)&param_1->field_0x18;
        local_168 = (double)*(float *)(uVar15 + 4 + lVar20) * *(double *)&param_1->field_0x10;
        local_170 = (double)*(float *)(uVar15 + lVar20) * *(double *)&param_1->field_0x8;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar4 = *(code **)param_3;
        plVar14 = *(longlong **)&pTVar8->field_0x28;
        if (*(longlong **)&pTVar8->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)puVar17;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar4)(&local_128,uVar13,&local_170);
        local_78 = (double)CONCAT44(uStack_124,local_128);
        uStack_70 = (double)CONCAT44(uStack_11c,uStack_120);
        local_68 = local_118;
        iVar16 = local_1d8;
      }
      cVar10 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,local_1b8);
      if (cVar10 != '\0') {
        return true;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar16);
  }
  return false;
}

// TestSelfIntersection @ 14cb408d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TestSelfIntersection
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TestSelfIntersection @ 14cb40910

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TestSelfIntersection
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 14cb41f50

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TreeTraversalImpl(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                 int param_1,int param_2,FTreeTraversal *param_3,FQueryOptions *param_4)

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
LAB_14cb42066:
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
          if (cVar10 != '\0') goto LAB_14cb42066;
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

// TreeTraversalImpl @ 14cb42420

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TreeTraversalImpl(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                 int param_1,int param_2,FTreeTraversal *param_3,FQueryOptions *param_4)

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
LAB_14cb42536:
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
          if (cVar10 != '\0') goto LAB_14cb42536;
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

// box_box_distsqr @ 14cb4bdb0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
box_box_distsqr(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
               int param_1,TAxisAlignedBox3<double> *param_2)

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

// box_box_distsqr @ 14cb4be90

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
box_box_distsqr(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
               int param_1,TAxisAlignedBox3<double> *param_2)

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

// box_box_intersect @ 14cb4bf70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
box_box_intersect(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                 int param_1,TAxisAlignedBox3<double> *param_2)

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

// box_box_intersect @ 14cb4c090

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
box_box_intersect(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                 int param_1,TAxisAlignedBox3<double> *param_2)

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

// box_contains @ 14cb4c1b0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::box_contains
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

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

// box_contains @ 14cb4c2a0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::box_contains
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TVector<double> *param_2)

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

// box_contains @ 14cb4c390

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::box_contains
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2)

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

// find_any_intersection @ 14cb51e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
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
LAB_14cb51f18:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,iVar10,&local_a8,&local_90,
                     &local_78);
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
          if (cVar7 != '\0') goto LAB_14cb51f18;
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

// find_any_intersection @ 14cb520a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,
          TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FVertexID FVar7;
  code *pcVar8;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar9;
  FVertexID *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  TArrayView<FVertexID,int> *pTVar21;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar22;
  TVector<float> *pTVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  undefined1 auStackY_378 [32];
  int local_328;
  int local_300 [2];
  int local_2f8 [2];
  int local_2f0;
  ulonglong local_2e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_2e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2d8;
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
  TVector<double>_u_0 local_278;
  double local_260;
  double local_258;
  double local_250;
  TVector<double>_u_0 local_248;
  double local_230;
  double local_228;
  double local_220;
  TVector<double>_u_0 local_218;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TAxisAlignedBox3<double> local_1a0;
  TArrayView<FVertexID,int> local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar29 = (ulonglong)((uint)param_1 >> 9);
  uVar28 = (ulonglong)(param_1 & 0x1ff);
  local_2e0 = param_6;
  uVar4 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar29 * 8) +
                   uVar28 * 4);
  uVar24 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  if ((int)uVar4 < this->TrianglesEnd) {
    if ((int)uVar24 < param_2->TrianglesEnd) {
      local_328 = 1;
      iVar30 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      iVar5 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      local_2f0 = iVar30;
      if (iVar5 < 1) {
        return false;
      }
      do {
        uVar24 = uVar24 + 1;
        local_2e8 = (ulonglong)uVar24;
        iVar6 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14cb52250:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    ((FMeshDescriptionTriangleMeshAdapter *)param_2->Mesh,iVar6,
                     (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_140._s_0,
                     (TVector<double> *)&local_128._s_0);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            puVar27 = &param_3->field_0x10;
            plVar25 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar25 = (longlong *)puVar27;
            }
            uVar20 = (**(code **)(*plVar25 + 8))();
            (*pcVar8)(&local_1e8,uVar20,&local_158);
            local_158._s_0.X = local_1e8;
            local_158._s_0.Y = dStack_1e0;
            local_158._s_0.Z = local_1d8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar25 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar25 = (longlong *)puVar27;
            }
            uVar20 = (**(code **)(*plVar25 + 8))();
            (*pcVar8)(&local_1d0,uVar20,&local_140);
            local_140._s_0.X = local_1d0;
            local_140._s_0.Y = dStack_1c8;
            local_140._s_0.Z = local_1c0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar25 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar25 = (longlong *)puVar27;
            }
            uVar20 = (**(code **)(*plVar25 + 8))();
            (*pcVar8)(&local_1b8,uVar20,&local_128);
            local_128._s_0.X = local_1b8;
            local_128._s_0.Y = dStack_1b0;
            local_128._s_0.Z = local_1a8;
          }
          if (0 < iVar30) {
            uVar24 = uVar4 + 1;
            do {
              iVar30 = *(int *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14cb523e9:
                pFVar9 = this->Mesh;
                pTVar21 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                                    ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                                     (pFVar9->_padding_ + 200),&local_170,iVar30);
                iVar30 = pTVar21->ArrayNum;
                pFVar10 = pTVar21->DataPtr;
                if ((iVar30 < 1) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  uVar19 = (*pcVar8)();
                  return (bool)uVar19;
                }
                FVar7 = *pFVar10;
                pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     pFVar9->_padding_,0);
                pTVar23 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar22,(int)FVar7);
                local_100 = (double)(pTVar23->field0_0x0)._s_0.Y * (double)pFVar9->_padding_;
                local_f8 = (double)(pTVar23->field0_0x0)._s_0.Z * (double)pFVar9->_padding_;
                local_108 = (double)(pTVar23->field0_0x0)._s_0.X * (double)pFVar9->_padding_;
                if ((iVar30 < 2) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  uVar19 = (*pcVar8)();
                  return (bool)uVar19;
                }
                FVar7 = pFVar10[1];
                pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     pFVar9->_padding_,0);
                pTVar23 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar22,(int)FVar7);
                local_e8 = (double)(pTVar23->field0_0x0)._s_0.Y * (double)pFVar9->_padding_;
                local_e0 = (double)(pTVar23->field0_0x0)._s_0.Z * (double)pFVar9->_padding_;
                local_f0 = (double)(pTVar23->field0_0x0)._s_0.X * (double)pFVar9->_padding_;
                if ((iVar30 < 3) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  uVar19 = (*pcVar8)();
                  return (bool)uVar19;
                }
                FVar7 = pFVar10[2];
                pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     pFVar9->_padding_,0);
                pTVar23 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar22,(int)FVar7);
                local_d0 = (double)(pTVar23->field0_0x0)._s_0.Y * (double)pFVar9->_padding_;
                local_c8 = (double)(pTVar23->field0_0x0)._s_0.Z * (double)pFVar9->_padding_;
                local_d8 = (double)(pTVar23->field0_0x0)._s_0.X * (double)pFVar9->_padding_;
                cVar17 = (**(code **)local_2e0)
                                   (*(undefined8 *)&local_2e0->field_0x8,&local_158,&local_108);
                if (cVar17 != '\0') {
                  return true;
                }
              }
              else {
                local_2f8[0] = iVar30;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar25 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_7->TriangleFilterF;
                plVar26 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar25 != (longlong *)0x0) {
                  plVar26 = plVar25;
                }
                uVar20 = (**(code **)(*plVar26 + 8))();
                cVar17 = (*pcVar8)(uVar20,local_2f8);
                if (cVar17 != '\0') goto LAB_14cb523e9;
              }
              uVar24 = uVar24 + 1;
              iVar30 = local_2f0;
            } while ((int)(uVar24 - uVar4) <= local_2f0);
          }
        }
        else {
          local_300[0] = iVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar25 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_8->TriangleFilterF;
          plVar26 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar25 != (longlong *)0x0) {
            plVar26 = plVar25;
          }
          uVar20 = (**(code **)(*plVar26 + 8))();
          cVar17 = (*pcVar8)(uVar20,local_300);
          if (cVar17 != '\0') goto LAB_14cb52250;
        }
        local_328 = local_328 + 1;
        uVar24 = (uint)local_2e8;
        if (iVar5 < local_328) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar24 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_1a0,param_4,param_3);
    pFVar13 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar24 = *(uint *)(*(longlong *)(pFVar13 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)uVar24 < 0) {
      bVar18 = box_box_intersect(this,~uVar24,&local_1a0);
      if (!bVar18) {
        return false;
      }
      local_2a8._0_8_ = *(undefined8 *)param_6;
      local_2a8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,~uVar24,param_2,param_3,param_4,param_5 + 1,&local_2a8,param_7,
                          param_8);
      return bVar18;
    }
    iVar30 = *(int *)(*(longlong *)(pFVar13 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                     (ulonglong)(uVar4 + 1 & 0x1ff) * 4) + -1;
    bVar18 = box_box_intersect(this,uVar24 - 1,&local_1a0);
    if (bVar18) {
      local_298._0_8_ = *(undefined8 *)param_6;
      local_298._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,uVar24 - 1,param_2,param_3,param_4,param_5 + 1,&local_298,param_7,
                          param_8);
      if (bVar18) {
        return true;
      }
    }
    bVar18 = box_box_intersect(this,iVar30,&local_1a0);
    if (bVar18) {
      local_288._0_8_ = *(undefined8 *)param_6;
      local_288._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,iVar30,param_2,param_3,param_4,param_5 + 1,&local_288,param_7,param_8
                         );
      return bVar18;
    }
    return false;
  }
  lVar11 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar29 * 8);
  dVar1 = *(double *)(lVar11 + uVar28 * 0x18);
  lVar12 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar29 * 8);
  dVar2 = *(double *)(lVar11 + 8 + uVar28 * 0x18);
  dVar3 = *(double *)(lVar11 + 0x10 + uVar28 * 0x18);
  dVar14 = dVar1 - *(double *)(lVar12 + uVar28 * 0x18);
  dVar15 = dVar2 - *(double *)(lVar12 + 8 + uVar28 * 0x18);
  dVar16 = dVar3 - *(double *)(lVar12 + 0x10 + uVar28 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar12 + uVar28 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar12 + 8 + uVar28 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar12 + 0x10 + uVar28 * 0x18);
  pFVar13 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)(pFVar13 + (ulonglong)(uVar24 >> 9) * 8) +
                   (ulonglong)(uVar24 & 0x1ff) * 4);
  if ((int)uVar4 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_278._s_0,~uVar4,param_3);
    if (((local_278._s_0.X < dVar1) && (dVar14 < local_260)) &&
       ((local_278._s_0.Y < dVar2 &&
        (((dVar15 < local_258 && (local_278._s_0.Z < dVar3)) && (dVar16 < local_250)))))) {
      local_2d8._0_8_ = *(undefined8 *)param_6;
      local_2d8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,param_1,param_2,param_3,param_4,param_5 + 1,&local_2d8,param_7,
                          param_8);
      return bVar18;
    }
    return false;
  }
  iVar30 = *(int *)(*(longlong *)(pFVar13 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                   (ulonglong)(uVar24 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,uVar4 - 1,param_3);
  if ((((local_248._s_0.X < dVar1) && (dVar14 < local_230)) && (local_248._s_0.Y < dVar2)) &&
     (((dVar15 < local_228 && (local_248._s_0.Z < dVar3)) && (dVar16 < local_220)))) {
    local_2c8._0_8_ = *(undefined8 *)param_6;
    local_2c8._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar18 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar4 - 1,param_5 + 1,&local_2c8,param_7,
                        param_8);
    if (bVar18) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_218._s_0,iVar30,param_3);
  if (dVar1 <= local_218._s_0.X) {
    return false;
  }
  if (local_200 <= dVar14) {
    return false;
  }
  if (dVar2 <= local_218._s_0.Y) {
    return false;
  }
  if (local_1f8 <= dVar15) {
    return false;
  }
  if (local_218._s_0.Z < dVar3) {
    if (dVar16 < local_1f0) {
      local_2b8._0_8_ = *(undefined8 *)param_6;
      local_2b8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,param_1,param_2,param_3,iVar30,param_5 + 1,&local_2b8,param_7,param_8
                         );
      return bVar18;
    }
    return false;
  }
  return false;
}

// find_any_intersection @ 14cb52ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStackY_108 [32];
  FIndex3i_u_0 local_d8;
  int local_c8 [2];
  int local_c0;
  TTriangle3<double> *local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar1 >> 9) * 8);
  local_b8 = param_2;
  if ((int)uVar1 < this->TrianglesEnd) {
    local_c0 = *(int *)(lVar3 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < local_c0) {
      uVar14 = uVar1 + 1;
      do {
        iVar9 = *(int *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14cb52baa:
          this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
          FStaticMeshLODResourcesMeshAdapter::GetTriangle(this_00,(FIndex3i *)&local_d8,iVar9);
          uVar13 = (ulonglong)
                   (local_d8._s_0.A * (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
          puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
          local_a0 = (double)*(float *)(puVar6 + uVar13 + 4) *
                     (this_00->BuildScale).field0_0x0._s_0.Y;
          local_98 = (double)*(float *)(puVar6 + uVar13 + 8) *
                     (this_00->BuildScale).field0_0x0._s_0.Z;
          local_a8 = (double)*(float *)(puVar6 + uVar13) * (this_00->BuildScale).field0_0x0._s_0.X;
          uVar13 = (ulonglong)
                   (local_d8._s_0.B * (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
          puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
          local_88 = (double)*(float *)(puVar6 + uVar13 + 4) *
                     (this_00->BuildScale).field0_0x0._s_0.Y;
          local_80 = (double)*(float *)(puVar6 + uVar13 + 8) *
                     (this_00->BuildScale).field0_0x0._s_0.Z;
          local_90 = (double)*(float *)(puVar6 + uVar13) * (this_00->BuildScale).field0_0x0._s_0.X;
          uVar13 = (ulonglong)
                   (local_d8._s_0.C * (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
          puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
          local_70 = (double)*(float *)(puVar6 + uVar13 + 4) *
                     (this_00->BuildScale).field0_0x0._s_0.Y;
          local_68 = (double)*(float *)(puVar6 + uVar13 + 8) *
                     (this_00->BuildScale).field0_0x0._s_0.Z;
          local_78 = (double)*(float *)(puVar6 + uVar13) * (this_00->BuildScale).field0_0x0._s_0.X;
          cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_b8,&local_a8);
          if (cVar7 != '\0') {
            return iVar9;
          }
        }
        else {
          local_c8[0] = iVar9;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar5 = *(code **)&param_5->TriangleFilterF;
          plVar12 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar4 != (longlong *)0x0) {
            plVar12 = plVar4;
          }
          uVar11 = (**(code **)(*plVar12 + 8))();
          cVar7 = (*pcVar5)(uVar11,local_c8);
          if (cVar7 != '\0') goto LAB_14cb52baa;
        }
        uVar14 = uVar14 + 1;
      } while ((int)(uVar14 - uVar1) <= local_c0);
    }
  }
  else {
    uVar14 = *(uint *)(lVar3 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (-1 < (int)uVar14) {
      iVar10 = -1;
      iVar9 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                      (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      bVar8 = box_box_intersect(this,uVar14 - 1,param_3);
      if (bVar8) {
        local_d8._0_8_ = *(undefined8 *)param_4;
        unique0x00023d00 = *(undefined8 *)&param_4->field_0x8;
        iVar10 = find_any_intersection
                           (this,uVar14 - 1,local_b8,param_3,
                            (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                             *)&local_d8,param_5);
        if (iVar10 != -1) {
          return iVar10;
        }
      }
      bVar8 = box_box_intersect(this,iVar9 + -1,param_3);
      if (!bVar8) {
        return iVar10;
      }
      local_d8._0_8_ = *(undefined8 *)param_4;
      unique0x00023d00 = *(undefined8 *)&param_4->field_0x8;
      iVar9 = find_any_intersection
                        (this,iVar9 + -1,local_b8,param_3,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                          *)&local_d8,param_5);
      return iVar9;
    }
    bVar8 = box_box_intersect(this,~uVar14,param_3);
    if (bVar8) {
      local_d8._0_8_ = *(undefined8 *)param_4;
      unique0x00023d00 = *(undefined8 *)&param_4->field_0x8;
      iVar9 = find_any_intersection
                        (this,~uVar14,param_2,param_3,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                          *)&local_d8,param_5);
      return iVar9;
    }
  }
  return -1;
}

// find_any_intersection @ 14cb52e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar13;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar14;
  FQueryOptions *pFVar15;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar16;
  char cVar17;
  bool bVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined1 auStackY_238 [32];
  bool local_1e8;
  int local_1e0 [2];
  int local_1d8;
  int local_1d4;
  FIndex3i_u_0 local_1d0;
  int local_1c0 [2];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1b8;
  TVector<double>_u_0 local_1b0;
  double local_198;
  double local_190;
  double local_188;
  int local_180;
  ulonglong local_178;
  FQueryOptions *local_170;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar25 = (ulonglong)(param_1 & 0x1ff);
  uVar24 = (ulonglong)((uint)param_1 >> 9);
  uVar4 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar24 * 8) +
                   uVar25 * 4);
  local_1e0[0] = param_4;
  local_170 = param_8;
  uVar20 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_1d8 = param_1;
  local_1b8 = param_3;
  local_168 = param_2;
  if ((int)uVar4 < this->TrianglesEnd) {
    if ((int)uVar20 < param_2->TrianglesEnd) {
      local_1d8 = 1;
      iVar26 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      local_1d4 = *(int *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
      local_180 = iVar26;
      if (local_1d4 < 1) {
        return false;
      }
      do {
        pTVar16 = local_168;
        pFVar15 = local_170;
        uVar20 = uVar20 + 1;
        local_178 = (ulonglong)uVar20;
        local_1c0[0] = *(int *)(*(longlong *)
                                 ((local_168->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
        if (*(void **)&local_170->TriangleFilterF == (void *)0x0) {
LAB_14cb52fb3:
          FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                    ((FStaticMeshLODResourcesMeshAdapter *)pTVar16->Mesh,local_1c0[0],
                     (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_140._s_0,
                     (TVector<double> *)&local_128._s_0);
          pTVar13 = local_1b8;
          if (*(void **)local_1b8 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_1b8);
            pcVar5 = *(code **)pTVar13;
            puVar23 = &pTVar13->field_0x10;
            plVar21 = *(longlong **)&pTVar13->field_0x28;
            if (*(longlong **)&pTVar13->field_0x28 == (longlong *)0x0) {
              plVar21 = (longlong *)puVar23;
            }
            uVar19 = (**(code **)(*plVar21 + 8))();
            (*pcVar5)(&local_1b0,uVar19,&local_158);
            pTVar14 = local_1b8;
            local_158._s_0.X = local_1b0._s_0.X;
            local_158._s_0.Y = local_1b0._s_0.Y;
            local_158._s_0.Z = local_1b0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1b8);
            pcVar5 = *(code **)pTVar14;
            plVar21 = *(longlong **)&pTVar13->field_0x28;
            if (*(longlong **)&pTVar13->field_0x28 == (longlong *)0x0) {
              plVar21 = (longlong *)puVar23;
            }
            uVar19 = (**(code **)(*plVar21 + 8))();
            (*pcVar5)(&local_1b0,uVar19,&local_140);
            pTVar14 = local_1b8;
            local_140._s_0.X = local_1b0._s_0.X;
            local_140._s_0.Y = local_1b0._s_0.Y;
            local_140._s_0.Z = local_1b0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1b8);
            pcVar5 = *(code **)pTVar14;
            plVar21 = *(longlong **)&pTVar13->field_0x28;
            if (*(longlong **)&pTVar13->field_0x28 == (longlong *)0x0) {
              plVar21 = (longlong *)puVar23;
            }
            uVar19 = (**(code **)(*plVar21 + 8))();
            (*pcVar5)(&local_1b0,uVar19,&local_128);
            local_128._s_0.X = local_1b0._s_0.X;
            local_128._s_0.Y = local_1b0._s_0.Y;
            local_128._s_0.Z = local_1b0._s_0.Z;
          }
          if (0 < iVar26) {
            uVar20 = uVar4 + 1;
            do {
              iVar26 = *(int *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14cb5310c:
                this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
                FStaticMeshLODResourcesMeshAdapter::GetTriangle
                          (this_00,(FIndex3i *)&local_1d0,iVar26);
                uVar24 = (ulonglong)
                         (local_1d0._s_0.A *
                         (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
                puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
                local_100 = (double)*(float *)(puVar6 + uVar24 + 4) *
                            (this_00->BuildScale).field0_0x0._s_0.Y;
                local_f8 = (double)*(float *)(puVar6 + uVar24 + 8) *
                           (this_00->BuildScale).field0_0x0._s_0.Z;
                local_108 = (double)*(float *)(puVar6 + uVar24) *
                            (this_00->BuildScale).field0_0x0._s_0.X;
                uVar24 = (ulonglong)
                         (local_1d0._s_0.B *
                         (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
                puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
                local_e8 = (double)*(float *)(puVar6 + uVar24 + 4) *
                           (this_00->BuildScale).field0_0x0._s_0.Y;
                local_e0 = (double)*(float *)(puVar6 + uVar24 + 8) *
                           (this_00->BuildScale).field0_0x0._s_0.Z;
                local_f0 = (double)*(float *)(puVar6 + uVar24) *
                           (this_00->BuildScale).field0_0x0._s_0.X;
                uVar24 = (ulonglong)
                         (local_1d0._s_0.C *
                         (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
                puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
                local_d0 = (double)*(float *)(puVar6 + uVar24 + 4) *
                           (this_00->BuildScale).field0_0x0._s_0.Y;
                local_c8 = (double)*(float *)(puVar6 + uVar24 + 8) *
                           (this_00->BuildScale).field0_0x0._s_0.Z;
                local_d8 = (double)*(float *)(puVar6 + uVar24) *
                           (this_00->BuildScale).field0_0x0._s_0.X;
                cVar17 = (**(code **)param_6)
                                   (*(undefined8 *)&param_6->field_0x8,&local_158,&local_108);
                if (cVar17 != '\0') {
                  return true;
                }
              }
              else {
                local_1c0[0] = iVar26;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar21 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar5 = *(code **)&param_7->TriangleFilterF;
                plVar22 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar21 != (longlong *)0x0) {
                  plVar22 = plVar21;
                }
                uVar19 = (**(code **)(*plVar22 + 8))();
                cVar17 = (*pcVar5)(uVar19,local_1c0);
                if (cVar17 != '\0') goto LAB_14cb5310c;
              }
              uVar20 = uVar20 + 1;
              iVar26 = local_180;
            } while ((int)(uVar20 - uVar4) <= local_180);
          }
        }
        else {
          local_1e0[0] = local_1c0[0];
          Core::Private::Function::CheckCallable(*(void **)&local_170->TriangleFilterF);
          pcVar5 = *(code **)&pFVar15->TriangleFilterF;
          plVar21 = *(longlong **)&(local_170->TriangleFilterF).field_0x28;
          plVar22 = (longlong *)&(local_170->TriangleFilterF).field_0x10;
          if (plVar21 != (longlong *)0x0) {
            plVar22 = plVar21;
          }
          uVar19 = (**(code **)(*plVar22 + 8))();
          cVar17 = (*pcVar5)(uVar19,local_1e0);
          if (cVar17 != '\0') goto LAB_14cb52fb3;
        }
        local_1d8 = local_1d8 + 1;
        uVar20 = (uint)local_178;
        if (local_1d4 < local_1d8) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar20 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1b0._s_0,param_4,param_3);
    pFVar9 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar20 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)uVar20 < 0) {
      bVar18 = box_box_intersect(this,~uVar20,(TAxisAlignedBox3<double> *)&local_1b0._s_0);
      if (!bVar18) {
        return false;
      }
      local_1d0._0_8_ = *(undefined8 *)param_6;
      unique0x00023d00 = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,~uVar20,param_2,local_1b8,local_1e0[0],param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)&local_1d0,param_7,param_8);
      return bVar18;
    }
    local_1d8 = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                        (ulonglong)(uVar4 + 1 & 0x1ff) * 4) + -1;
    local_1d4 = param_5 + 1;
    bVar18 = box_box_intersect(this,uVar20 - 1,(TAxisAlignedBox3<double> *)&local_1b0._s_0);
    pTVar13 = local_1b8;
    if (bVar18) {
      local_1d0._0_8_ = *(undefined8 *)param_6;
      unique0x00023d00 = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,uVar20 - 1,param_2,local_1b8,local_1e0[0],param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)&local_1d0,param_7,param_8);
      if (bVar18) {
        return true;
      }
    }
    bVar18 = box_box_intersect(this,local_1d8,(TAxisAlignedBox3<double> *)&local_1b0._s_0);
    if (!bVar18) {
      return false;
    }
    local_1d0._0_8_ = *(undefined8 *)param_6;
    unique0x00023d00 = *(undefined8 *)&param_6->field_0x8;
    bVar18 = find_any_intersection
                       (this,local_1d8,param_2,pTVar13,local_1e0[0],local_1d4,
                        (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                         *)&local_1d0,param_7,param_8);
    return bVar18;
  }
  lVar7 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar24 * 8);
  dVar1 = *(double *)(lVar7 + uVar25 * 0x18);
  lVar8 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar24 * 8);
  dVar2 = *(double *)(lVar7 + 8 + uVar25 * 0x18);
  dVar3 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18);
  dVar10 = dVar1 - *(double *)(lVar8 + uVar25 * 0x18);
  dVar11 = dVar2 - *(double *)(lVar8 + 8 + uVar25 * 0x18);
  dVar12 = dVar3 - *(double *)(lVar8 + 0x10 + uVar25 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar8 + uVar25 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar8 + 8 + uVar25 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar8 + 0x10 + uVar25 * 0x18);
  pFVar9 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar20 >> 9) * 8) +
                   (ulonglong)(uVar20 & 0x1ff) * 4);
  if ((int)uVar4 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1b0._s_0,~uVar4,param_3);
    if (((dVar1 <= local_1b0._s_0.X) || (local_198 <= dVar10)) ||
       ((dVar2 <= local_1b0._s_0.Y ||
        (((local_190 <= dVar11 || (dVar3 <= local_1b0._s_0.Z)) || (local_188 <= dVar12)))))) {
      return false;
    }
    local_1d0._0_8_ = *(undefined8 *)param_6;
    unique0x00023d00 = *(undefined8 *)&param_6->field_0x8;
  }
  else {
    local_1e8 = false;
    local_1d4 = uVar4 - 1;
    local_1e0[0] = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                           (ulonglong)(uVar20 + 1 & 0x1ff) * 4) + -1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1b0._s_0,local_1d4,param_3);
    if ((((local_1b0._s_0.X < dVar1) && (dVar10 < local_198)) && (local_1b0._s_0.Y < dVar2)) &&
       (((dVar11 < local_190 && (local_1b0._s_0.Z < dVar3)) && (dVar12 < local_188)))) {
      local_1d0._0_8_ = *(undefined8 *)param_6;
      unique0x00023d00 = *(undefined8 *)&param_6->field_0x8;
      local_1e8 = find_any_intersection
                            (this,local_1d8,param_2,param_3,local_1d4,param_5 + 1,
                             (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                              *)&local_1d0,param_7,param_8);
      if (local_1e8) {
        return true;
      }
    }
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1b0._s_0,local_1e0[0],param_3);
    if (dVar1 <= local_1b0._s_0.X) {
      return local_1e8;
    }
    if (local_198 <= dVar10) {
      return local_1e8;
    }
    if (dVar2 <= local_1b0._s_0.Y) {
      return local_1e8;
    }
    if (local_190 <= dVar11) {
      return local_1e8;
    }
    if (dVar3 <= local_1b0._s_0.Z) {
      return local_1e8;
    }
    if (local_188 <= dVar12) {
      return local_1e8;
    }
    local_1d0._0_8_ = *(undefined8 *)param_6;
    unique0x00023d00 = *(undefined8 *)&param_6->field_0x8;
  }
  bVar18 = find_any_intersection
                     (this,local_1d8,param_2,param_3,local_1e0[0],param_5 + 1,
                      (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                       *)&local_1d0,param_7,param_8);
  return bVar18;
}

// find_intersections @ 14cb536e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_intersections(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                  int param_1,
                  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *param_2,
                  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                  *param_3,int param_4,int param_5,FIntersectionsQueryResult *param_6,
                  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                  *param_7,FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  FVertexID FVar17;
  code *pcVar18;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar19;
  FVertexID *pFVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar25;
  char cVar26;
  bool bVar27;
  undefined8 uVar28;
  TArrayView<FVertexID,int> *pTVar29;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar30;
  TVector<float> *pTVar31;
  uint uVar32;
  longlong *plVar33;
  longlong *plVar34;
  ulonglong uVar35;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar36;
  ulonglong uVar37;
  uint uVar38;
  double dVar39;
  undefined1 auStackY_498 [32];
  FIntersectionsQueryResult *pFVar40;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar41;
  uint local_448 [2];
  FIntersectionsQueryResult *local_440;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *local_438;
  FQueryOptions *local_430;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_428;
  uint local_420;
  int local_418 [2];
  uint local_410;
  uint local_40c;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *local_408;
  ulonglong local_400;
  ulonglong local_3f8;
  ulonglong local_3f0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_3e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3d0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3c0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3b0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3a0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_390;
  TVector<double>_u_0 local_380;
  double local_368;
  double local_360;
  double local_358;
  TVector<double>_u_0 local_350;
  double local_338;
  double local_330;
  double local_328;
  TVector<double>_u_0 local_320;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  double local_2b0;
  TAxisAlignedBox3<double> local_2a8;
  TArrayView<FVertexID,int> local_278 [3];
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
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_440 = param_6;
  local_430 = param_9;
  uVar37 = (ulonglong)((uint)param_1 >> 9);
  uVar35 = (ulonglong)(param_1 & 0x1ff);
  local_3e8 = param_7;
  uVar38 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar37 * 8) +
                    uVar35 * 4);
  uVar32 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_448[0] = param_1;
  local_438 = param_2;
  local_428 = param_3;
  local_420 = uVar38;
  local_408 = this;
  if ((int)uVar38 < this->TrianglesEnd) {
    if ((int)uVar32 < param_2->TrianglesEnd) {
      uVar38 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar38 >> 9) * 8) + (ulonglong)(uVar38 & 0x1ff) * 4);
      uVar14 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 4);
      local_3f0 = (ulonglong)uVar14;
      local_40c = uVar38;
      if ((int)uVar14 < 1) {
        return;
      }
      do {
        uVar32 = uVar32 + 1;
        local_3f8 = (ulonglong)uVar32;
        uVar32 = *(uint *)(*(longlong *)
                            ((local_438->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 4);
        local_410 = uVar32;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14cb538bf:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    ((FMeshDescriptionTriangleMeshAdapter *)local_438->Mesh,uVar32,
                     (TVector<double> *)&local_248._s_0,(TVector<double> *)&TStack_230._s_0,
                     (TVector<double> *)&local_218._s_0);
          pTVar25 = local_428;
          if (*(void **)local_428 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_428);
            puVar1 = &pTVar25->field_0x10;
            pcVar18 = *(code **)pTVar25;
            plVar33 = *(longlong **)&pTVar25->field_0x28;
            if (*(longlong **)&pTVar25->field_0x28 == (longlong *)0x0) {
              plVar33 = (longlong *)puVar1;
            }
            uVar28 = (**(code **)(*plVar33 + 8))();
            (*pcVar18)(&local_2f0,uVar28,&local_248);
            local_248._s_0.X = local_2f0;
            local_248._s_0.Y = dStack_2e8;
            local_248._s_0.Z = local_2e0;
            Core::Private::Function::CheckCallable(*(void **)pTVar25);
            pcVar18 = *(code **)pTVar25;
            plVar33 = *(longlong **)&pTVar25->field_0x28;
            if (*(longlong **)&pTVar25->field_0x28 == (longlong *)0x0) {
              plVar33 = (longlong *)puVar1;
            }
            uVar28 = (**(code **)(*plVar33 + 8))();
            (*pcVar18)(&local_2d8,uVar28,&TStack_230);
            TStack_230._s_0.X = local_2d8;
            TStack_230._s_0.Y = dStack_2d0;
            TStack_230._s_0.Z = local_2c8;
            Core::Private::Function::CheckCallable(*(void **)pTVar25);
            pcVar18 = *(code **)pTVar25;
            plVar33 = *(longlong **)&pTVar25->field_0x28;
            if (*(longlong **)&pTVar25->field_0x28 == (longlong *)0x0) {
              plVar33 = (longlong *)puVar1;
            }
            uVar28 = (**(code **)(*plVar33 + 8))();
            (*pcVar18)(&local_2c0,uVar28,&local_218);
            local_218._0_4_ = local_2c0;
            local_218._4_4_ = uStack_2bc;
            local_218._8_4_ = uStack_2b8;
            local_218._12_4_ = uStack_2b4;
            local_218._s_0.Z = local_2b0;
            this = local_408;
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
          if (0 < (int)uVar38) {
            local_400 = (ulonglong)uVar38;
            uVar38 = local_420;
            do {
              uVar38 = uVar38 + 1;
              iVar15 = *(int *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar38 >> 9) * 8) + (ulonglong)(uVar38 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14cb53aab:
                pFVar19 = this->Mesh;
                pTVar29 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                                    ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                                     (pFVar19->_padding_ + 200),local_278,iVar15);
                iVar16 = pTVar29->ArrayNum;
                pFVar20 = pTVar29->DataPtr;
                if ((iVar16 < 1) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar27)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                FVar17 = *pFVar20;
                pTVar30 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     pFVar19->_padding_,0);
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar30,(int)FVar17);
                fVar3 = (pTVar31->field0_0x0)._s_0.X;
                fVar4 = (pTVar31->field0_0x0)._s_0.Y;
                fVar5 = (pTVar31->field0_0x0)._s_0.Z;
                dVar39 = (double)pFVar19->_padding_;
                dVar9 = (double)pFVar19->_padding_;
                dVar10 = (double)pFVar19->_padding_;
                if ((iVar16 < 2) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar27)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                FVar17 = pFVar20[1];
                pTVar30 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     pFVar19->_padding_,0);
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar30,(int)FVar17);
                fVar6 = (pTVar31->field0_0x0)._s_0.X;
                fVar7 = (pTVar31->field0_0x0)._s_0.Y;
                fVar8 = (pTVar31->field0_0x0)._s_0.Z;
                dVar11 = (double)pFVar19->_padding_;
                dVar12 = (double)pFVar19->_padding_;
                dVar13 = (double)pFVar19->_padding_;
                if ((iVar16 < 3) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar27)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                FVar17 = pFVar20[2];
                pTVar30 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     pFVar19->_padding_,0);
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar30,(int)FVar17);
                local_180 = (double)(pTVar31->field0_0x0)._s_0.X * (double)pFVar19->_padding_;
                local_178 = (double)(pTVar31->field0_0x0)._s_0.Y * (double)pFVar19->_padding_;
                local_170 = (double)(pTVar31->field0_0x0)._s_0.Z * (double)pFVar19->_padding_;
                local_15c = local_15c & 0xffffffff00000000;
                local_1b0 = (double)fVar3 * dVar39;
                local_1a8 = (double)fVar4 * dVar9;
                local_1a0 = (double)fVar5 * dVar10;
                local_198 = (double)fVar6 * dVar11;
                local_190 = (double)fVar7 * dVar12;
                local_188 = (double)fVar8 * dVar13;
                cVar26 = (**(code **)local_3e8)(*(undefined8 *)&local_3e8->field_0x8,&local_1f8);
                this = local_408;
                if (cVar26 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,iVar15,local_410,
                             local_440);
                  this = local_408;
                }
              }
              else {
                local_418[0] = iVar15;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar33 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar18 = *(code **)&param_8->TriangleFilterF;
                plVar34 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar33 != (longlong *)0x0) {
                  plVar34 = plVar33;
                }
                uVar28 = (**(code **)(*plVar34 + 8))();
                cVar26 = (*pcVar18)(uVar28,local_418);
                if (cVar26 != '\0') goto LAB_14cb53aab;
              }
              local_400 = local_400 - 1;
            } while (local_400 != 0);
            local_400 = 0;
            param_9 = local_430;
            uVar38 = local_40c;
          }
        }
        else {
          local_448[0] = uVar32;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar33 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar18 = *(code **)&param_9->TriangleFilterF;
          plVar34 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar33 != (longlong *)0x0) {
            plVar34 = plVar33;
          }
          uVar28 = (**(code **)(*plVar34 + 8))();
          cVar26 = (*pcVar18)(uVar28,local_448);
          if (cVar26 != '\0') goto LAB_14cb538bf;
        }
        uVar32 = (uint)local_3f8;
        local_3f0 = local_3f0 - 1;
        if (local_3f0 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar32 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_2a8,param_4,param_3);
    uVar38 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar38 >> 9) * 8) + (ulonglong)(uVar38 & 0x1ff) * 4);
    if ((int)uVar38 < 0) {
      uVar38 = ~uVar38;
      bVar27 = box_box_intersect(this,uVar38,&local_2a8);
      if (!bVar27) {
        return;
      }
      local_3b0._0_8_ = *(undefined8 *)param_7;
      pTVar41 = &local_3b0;
      local_3b0._8_8_ = *(undefined8 *)&param_7->field_0x8;
      pTVar36 = local_438;
      pFVar40 = local_440;
    }
    else {
      bVar27 = box_box_intersect(this,uVar38 - 1,&local_2a8);
      pTVar36 = local_438;
      if (bVar27) {
        local_3a0._0_8_ = *(undefined8 *)param_7;
        local_3a0._8_8_ = *(undefined8 *)&param_7->field_0x8;
        find_intersections(this,uVar38 - 1,local_438,local_428,param_4,param_5 + 1,local_440,
                           &local_3a0,param_8,local_430);
      }
      iVar15 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(local_420 + 1 >> 9) * 8) +
                       (ulonglong)(local_420 + 1 & 0x1ff) * 4);
      bVar27 = box_box_intersect(this,iVar15 + -1,&local_2a8);
      if (!bVar27) {
        return;
      }
      local_390._0_8_ = *(undefined8 *)param_7;
      uVar38 = iVar15 - 1;
      local_390._8_8_ = *(undefined8 *)&param_7->field_0x8;
      pTVar41 = &local_390;
      pFVar40 = local_440;
    }
    goto LAB_14cb54146;
  }
  dVar39 = this->BoxEps;
  lVar21 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar37 * 8);
  dVar9 = *(double *)(lVar21 + uVar35 * 0x18);
  lVar22 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar37 * 8);
  dVar10 = *(double *)(lVar21 + 8 + uVar35 * 0x18);
  dVar11 = *(double *)(lVar21 + 0x10 + uVar35 * 0x18);
  pdVar2 = (double *)(lVar22 + uVar35 * 0x18);
  dVar13 = pdVar2[1] + dVar39;
  dVar12 = *pdVar2 + dVar39;
  dVar39 = *(double *)(lVar22 + 0x10 + uVar35 * 0x18) + dVar39;
  dVar23 = dVar10 - dVar13;
  uVar14 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 4);
  dVar10 = dVar10 + dVar13;
  dVar13 = dVar9 - dVar12;
  dVar24 = dVar11 - dVar39;
  dVar9 = dVar9 + dVar12;
  dVar11 = dVar11 + dVar39;
  if ((int)uVar14 < 0) {
    param_4 = ~uVar14;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_380._s_0,param_4,param_3);
    if (dVar9 <= local_380._s_0.X) {
      return;
    }
    if (local_368 <= dVar13) {
      return;
    }
    if (dVar10 <= local_380._s_0.Y) {
      return;
    }
    if (local_360 <= dVar23) {
      return;
    }
    if (dVar11 <= local_380._s_0.Z) {
      return;
    }
    if (local_358 <= dVar24) {
      return;
    }
    local_3e0._0_8_ = *(undefined8 *)param_7;
    pTVar41 = &local_3e0;
    local_3e0._8_8_ = *(undefined8 *)&param_7->field_0x8;
    pTVar36 = local_438;
    uVar38 = local_448[0];
    pFVar40 = local_440;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_350._s_0,uVar14 - 1,param_3);
    pFVar40 = local_440;
    uVar38 = local_448[0];
    if ((((local_350._s_0.X < dVar9) && (dVar13 < local_338)) && (local_350._s_0.Y < dVar10)) &&
       (((dVar23 < local_330 && (local_350._s_0.Z < dVar11)) && (dVar24 < local_328)))) {
      local_3d0._0_8_ = *(undefined8 *)param_7;
      local_3d0._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,local_448[0],local_438,local_428,uVar14 - 1,param_5 + 1,local_440,
                         &local_3d0,param_8,local_430);
    }
    param_4 = *(int *)(*(longlong *)
                        ((local_438->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar32 + 1 >> 9) * 8) + (ulonglong)(uVar32 + 1 & 0x1ff) * 4) - 1
    ;
    GetBox(local_438,(TAxisAlignedBox3<double> *)&local_320._s_0,param_4,local_428);
    if (dVar9 <= local_320._s_0.X) {
      return;
    }
    if (local_308 <= dVar13) {
      return;
    }
    if (dVar10 <= local_320._s_0.Y) {
      return;
    }
    if (local_300 <= dVar23) {
      return;
    }
    if (dVar11 <= local_320._s_0.Z) {
      return;
    }
    if (local_2f8 <= dVar24) {
      return;
    }
    local_3c0._0_8_ = *(undefined8 *)param_7;
    pTVar41 = &local_3c0;
    local_3c0._8_8_ = *(undefined8 *)&param_7->field_0x8;
    pTVar36 = local_438;
  }
LAB_14cb54146:
  find_intersections(this,uVar38,pTVar36,local_428,param_4,param_5 + 1,pFVar40,pTVar41,param_8,
                     local_430);
  return;
}

// find_intersections @ 14cb541a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_intersections(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                  int param_1,
                  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *param_2,
                  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                  *param_3,int param_4,int param_5,FIntersectionsQueryResult *param_6,
                  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                  *param_7,FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar18;
  char cVar19;
  bool bVar20;
  int iVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar29;
  ulonglong uVar30;
  undefined1 auStackY_328 [32];
  int local_2d0 [2];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_2c8;
  FIndex3i_u_0 local_2c0;
  uint local_2b0;
  ulonglong local_2a8;
  TVector<double>_u_0 local_2a0;
  double local_288;
  double local_280;
  double local_278;
  ulonglong local_270;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_268;
  FIntersectionsQueryResult *local_260;
  FQueryOptions *local_258;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *local_250;
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
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  uVar23 = (ulonglong)(param_1 & 0x1ff);
  uVar30 = (ulonglong)((uint)param_1 >> 9);
  local_268 = param_7;
  local_2b0 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar30 * 8)
                       + uVar23 * 4);
  local_2d0[0] = param_4;
  local_260 = param_6;
  local_258 = param_9;
  uVar25 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_2a8 = CONCAT44(local_2a8._4_4_,uVar25);
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_2c8 = param_3;
  local_250 = param_2;
  if ((int)local_2b0 < this->TrianglesEnd) {
    if ((int)uVar25 < param_2->TrianglesEnd) {
      uVar7 = *(uint *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(local_2b0 >> 9) * 8) + (ulonglong)(local_2b0 & 0x1ff) * 4);
      uVar8 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
      local_270 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        return;
      }
      do {
        pTVar18 = local_250;
        uVar25 = uVar25 + 1;
        local_2a8 = (ulonglong)uVar25;
        iVar21 = *(int *)(*(longlong *)
                           ((local_250->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14cb54359:
          FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                    ((FStaticMeshLODResourcesMeshAdapter *)pTVar18->Mesh,iVar21,
                     (TVector<double> *)&local_248._s_0,(TVector<double> *)&TStack_230._s_0,
                     (TVector<double> *)&local_218._s_0);
          pTVar29 = local_2c8;
          if (*(void **)local_2c8 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_2c8);
            puVar1 = &pTVar29->field_0x10;
            pcVar10 = *(code **)pTVar29;
            plVar26 = *(longlong **)&pTVar29->field_0x28;
            if (*(longlong **)&pTVar29->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar22 = (**(code **)(*plVar26 + 8))();
            (*pcVar10)(&local_2a0,uVar22,&local_248);
            local_248._s_0.X = (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_);
            local_248._s_0.Y = (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_);
            local_248._s_0.Z = local_2a0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)pTVar29);
            pcVar10 = *(code **)pTVar29;
            plVar26 = *(longlong **)&pTVar29->field_0x28;
            if (*(longlong **)&pTVar29->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar22 = (**(code **)(*plVar26 + 8))();
            (*pcVar10)(&local_2a0,uVar22,&TStack_230);
            TStack_230._s_0.X = (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_);
            TStack_230._s_0.Y = (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_);
            TStack_230._s_0.Z = local_2a0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)pTVar29);
            pcVar10 = *(code **)pTVar29;
            plVar26 = *(longlong **)&pTVar29->field_0x28;
            if (*(longlong **)&pTVar29->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar22 = (**(code **)(*plVar26 + 8))();
            (*pcVar10)(&local_2a0,uVar22,&local_218);
            local_218._0_4_ = local_2a0._0_4_;
            local_218._4_4_ = local_2a0._4_4_;
            local_218._8_4_ = local_2a0._8_4_;
            local_218._12_4_ = local_2a0._12_4_;
            local_218._s_0.Z = local_2a0._s_0.Z;
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
          if (0 < (int)uVar7) {
            uVar30 = (ulonglong)uVar7;
            uVar25 = local_2b0;
            do {
              uVar25 = uVar25 + 1;
              iVar9 = *(int *)(*(longlong *)
                                ((this->IndexList).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14cb544ec:
                this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
                FStaticMeshLODResourcesMeshAdapter::GetTriangle
                          (this_00,(FIndex3i *)&local_2c0,iVar9);
                local_180 = (this_00->BuildScale).field0_0x0._s_0.X;
                local_190 = (this_00->BuildScale).field0_0x0._s_0.Y;
                local_188 = (this_00->BuildScale).field0_0x0._s_0.Z;
                puVar11 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
                uVar8 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
                uVar23 = (ulonglong)(uVar8 * local_2c0._s_0.A);
                uVar24 = (ulonglong)(uVar8 * local_2c0._s_0.B);
                uVar28 = (ulonglong)(uVar8 * local_2c0._s_0.C);
                local_1b0 = (double)*(float *)(puVar11 + uVar23) * local_180;
                local_198 = (double)*(float *)(puVar11 + uVar24) * local_180;
                local_180 = (double)*(float *)(puVar11 + uVar28) * local_180;
                local_178 = (double)*(float *)(puVar11 + uVar28 + 4) * local_190;
                local_1a8 = (double)*(float *)(puVar11 + uVar23 + 4) * local_190;
                local_190 = (double)*(float *)(puVar11 + uVar24 + 4) * local_190;
                local_15c = local_15c & 0xffffffff00000000;
                local_170 = (double)*(float *)(puVar11 + uVar28 + 8) * local_188;
                local_1a0 = (double)*(float *)(puVar11 + uVar23 + 8) * local_188;
                local_188 = (double)*(float *)(puVar11 + uVar24 + 8) * local_188;
                cVar19 = (**(code **)local_268)(*(undefined8 *)&local_268->field_0x8,&local_1f8);
                if (cVar19 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,iVar9,iVar21,
                             local_260);
                }
              }
              else {
                local_2d0[0] = iVar9;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar26 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar10 = *(code **)&param_8->TriangleFilterF;
                plVar27 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar26 != (longlong *)0x0) {
                  plVar27 = plVar26;
                }
                uVar22 = (**(code **)(*plVar27 + 8))();
                cVar19 = (*pcVar10)(uVar22,local_2d0);
                if (cVar19 != '\0') goto LAB_14cb544ec;
              }
              uVar30 = uVar30 - 1;
              param_9 = local_258;
            } while (uVar30 != 0);
          }
        }
        else {
          local_2d0[0] = iVar21;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar26 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&param_9->TriangleFilterF;
          plVar27 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar26 != (longlong *)0x0) {
            plVar27 = plVar26;
          }
          uVar22 = (**(code **)(*plVar27 + 8))();
          cVar19 = (*pcVar10)(uVar22,local_2d0);
          if (cVar19 != '\0') goto LAB_14cb54359;
        }
        uVar25 = (uint)local_2a8;
        local_270 = local_270 - 1;
        if (local_270 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar25 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2a0._s_0,param_4,param_3);
    uVar25 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_2b0 >> 9) * 8) + (ulonglong)(local_2b0 & 0x1ff) * 4);
    if ((int)uVar25 < 0) {
      bVar20 = box_box_intersect(this,~uVar25,(TAxisAlignedBox3<double> *)&local_2a0._s_0);
      if (!bVar20) {
        return;
      }
      local_2c0._0_8_ = *(undefined8 *)param_7;
      unique0x00023d00 = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar25,param_2,local_2c8,local_2d0[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)&local_2c0,param_8,param_9);
      return;
    }
    bVar20 = box_box_intersect(this,uVar25 - 1,(TAxisAlignedBox3<double> *)&local_2a0._s_0);
    if (bVar20) {
      local_2c0._0_8_ = *(undefined8 *)param_7;
      unique0x00023d00 = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar25 - 1,param_2,local_2c8,local_2d0[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)&local_2c0,param_8,param_9);
    }
    iVar21 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_2b0 + 1 >> 9) * 8) + (ulonglong)(local_2b0 + 1 & 0x1ff) * 4
                     );
    bVar20 = box_box_intersect(this,iVar21 + -1,(TAxisAlignedBox3<double> *)&local_2a0._s_0);
    if (!bVar20) {
      return;
    }
    local_2c0._0_8_ = *(undefined8 *)param_7;
    unique0x00023d00 = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar21 + -1,param_2,local_2c8,local_2d0[0],param_5 + 1,param_6,
                       (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                        *)&local_2c0,param_8,param_9);
    return;
  }
  dVar3 = this->BoxEps;
  lVar12 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar30 * 8);
  dVar4 = *(double *)(lVar12 + uVar23 * 0x18);
  lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar30 * 8);
  dVar5 = *(double *)(lVar12 + 8 + uVar23 * 0x18);
  dVar6 = *(double *)(lVar12 + 0x10 + uVar23 * 0x18);
  pdVar2 = (double *)(lVar13 + uVar23 * 0x18);
  local_2a0._s_0.Z = *(double *)(lVar13 + 0x10 + uVar23 * 0x18);
  dVar15 = pdVar2[1] + dVar3;
  dVar14 = *pdVar2 + dVar3;
  dVar16 = dVar5 - dVar15;
  uVar25 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
  dVar5 = dVar5 + dVar15;
  dVar15 = dVar4 - dVar14;
  dVar17 = dVar6 - (local_2a0._s_0.Z + dVar3);
  dVar4 = dVar4 + dVar14;
  dVar6 = dVar6 + local_2a0._s_0.Z + dVar3;
  if ((int)uVar25 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2a0._s_0,~uVar25,param_3);
    if (dVar4 < (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_) ||
        dVar4 == (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_)) {
      return;
    }
    if (local_288 <= dVar15) {
      return;
    }
    if (dVar5 < (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_) ||
        dVar5 == (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_)) {
      return;
    }
    if (local_280 <= dVar16) {
      return;
    }
    if (dVar6 <= local_2a0._s_0.Z) {
      return;
    }
    if (local_278 <= dVar17) {
      return;
    }
    local_2c0._0_8_ = *(undefined8 *)param_7;
    unique0x00023d00 = *(undefined8 *)&param_7->field_0x8;
    pTVar29 = local_2c8;
    uVar25 = ~uVar25;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2a0._s_0,uVar25 - 1,param_3);
    pTVar29 = local_2c8;
    if (((((double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_) <= dVar4 &&
           dVar4 != (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_)) && (dVar15 < local_288)) &&
        ((double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_) <= dVar5 &&
         dVar5 != (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_))) &&
       (((dVar16 < local_280 && (local_2a0._s_0.Z < dVar6)) && (dVar17 < local_278)))) {
      local_2c0._0_8_ = *(undefined8 *)param_7;
      unique0x00023d00 = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,param_1,param_2,local_2c8,uVar25 - 1,param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)&local_2c0,param_8,param_9);
    }
    iVar21 = *(int *)(*(longlong *)
                       ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)local_2a8 + 1 >> 9) * 8) +
                     (ulonglong)((uint)local_2a8 + 1 & 0x1ff) * 4) + -1;
    local_2a8 = CONCAT44(local_2a8._4_4_,iVar21);
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2a0._s_0,iVar21,pTVar29);
    if (dVar4 < (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_) ||
        dVar4 == (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_)) {
      return;
    }
    if (local_288 <= dVar15) {
      return;
    }
    if (dVar5 < (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_) ||
        dVar5 == (double)CONCAT44(local_2a0._12_4_,local_2a0._8_4_)) {
      return;
    }
    if (local_280 <= dVar16) {
      return;
    }
    if (dVar6 <= local_2a0._s_0.Z) {
      return;
    }
    if (local_278 <= dVar17) {
      return;
    }
    local_2c0._0_8_ = *(undefined8 *)param_7;
    unique0x00023d00 = *(undefined8 *)&param_7->field_0x8;
    uVar25 = (uint)local_2a8;
  }
  find_intersections(this,param_1,param_2,pTVar29,uVar25,param_5 + 1,param_6,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_2c0,param_8,param_9);
  return;
}

// find_nearest_triangles @ 14cb54b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_nearest_triangles
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,
          TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *param_2,
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
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  FVertexID FVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar17;
  FVertexID *pFVar18;
  double dVar19;
  FIndex2i_u_0 FVar20;
  uint uVar21;
  char cVar22;
  bool bVar23;
  undefined8 uVar24;
  TArrayView<FVertexID,int> *pTVar25;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar26;
  TVector<float> *pTVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  longlong *plVar31;
  int iVar32;
  ulonglong uVar33;
  uint uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStackY_438 [32];
  ulonglong local_3c0;
  int local_3b8 [2];
  uint local_3b0;
  int local_3a8 [2];
  int local_3a0;
  int local_39c;
  FVertexID *local_398;
  int local_390;
  int iStack_38c;
  ulonglong local_388;
  ulonglong local_380;
  double local_378;
  double dStack_370;
  double local_368;
  TVector<double>_u_0 local_360;
  double local_348;
  double local_340;
  double local_338;
  TVector<double>_u_0 local_330;
  double local_318;
  double local_310;
  double local_308;
  TVector<double>_u_0 local_300;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  TVector<double>_u_0 local_2d0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  double local_260;
  TArrayView<FVertexID,int> local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar9 = __real_3fd0000000000000;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar34 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  iVar32 = param_5 + 1;
LAB_14cb54be0:
  do {
    while( true ) {
      dVar37 = __real_bff0000000000000;
      uVar33 = (ulonglong)(param_1 & 0x1ff);
      uVar29 = (ulonglong)((uint)param_1 >> 9);
      uVar11 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar29 * 8) +
                        uVar33 * 4);
      uVar28 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar11 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar28)) goto LAB_14cb54e47;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_360._s_0,param_4,param_3);
      pFVar16 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar28 = *(uint *)(*(longlong *)(pFVar16 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      if ((int)uVar28 < 0) {
        dStack_370 = this->BoxEps;
        param_1 = ~uVar28;
        uVar29 = (ulonglong)(param_1 & 0x1ff);
        lVar14 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar37 = *(double *)(lVar14 + 0x10 + uVar29 * 0x18);
        lVar15 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar41 = *(double *)(lVar14 + uVar29 * 0x18);
        dVar39 = *(double *)(lVar14 + 8 + uVar29 * 0x18);
        pdVar2 = (double *)(lVar15 + uVar29 * 0x18);
        local_368 = *(double *)(lVar15 + 0x10 + uVar29 * 0x18) + dStack_370;
        local_378 = *pdVar2 + dStack_370;
        dStack_370 = pdVar2[1] + dStack_370;
        dVar10 = dVar37 + local_368;
        dVar37 = dVar37 - local_368;
        dVar40 = dVar41 - local_378;
        dVar35 = dVar39 + dStack_370;
        dVar39 = dVar39 - dStack_370;
        dVar41 = dVar41 + local_378;
        dVar38 = (local_348 + local_360._s_0.X) - (dVar40 + dVar41);
        dVar41 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar21,
                                  SUB84(dVar38,0) & uVar34) -
                 ((dVar41 - dVar40) + (local_348 - local_360._s_0.X));
        dVar38 = (local_340 + local_360._s_0.Y) - (dVar39 + dVar35);
        if (dVar41 <= 0.0) {
          dVar41 = 0.0;
        }
        dVar39 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar21,
                                  SUB84(dVar38,0) & uVar34) -
                 ((dVar35 - dVar39) + (local_340 - local_360._s_0.Y));
        dVar35 = (local_338 + local_360._s_0.Z) - (dVar10 + dVar37);
        if (dVar39 <= 0.0) {
          dVar39 = 0.0;
        }
        dVar37 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar21,
                                  SUB84(dVar35,0) & uVar34) -
                 ((dVar10 - dVar37) + (local_338 - local_360._s_0.Z));
        if (dVar37 <= 0.0) {
          dVar37 = 0.0;
        }
        bVar23 = (dVar39 * dVar39 + dVar41 * dVar41 + dVar37 * dVar37) * dVar9 < *param_6;
        goto LAB_14cb55422;
      }
      uVar28 = uVar28 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar16 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                        (ulonglong)(uVar11 + 1 & 0x1ff) * 4) - 1;
      dVar37 = box_box_distsqr(this,uVar28,(TAxisAlignedBox3<double> *)&local_360._s_0);
      dVar41 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_360._s_0);
      if (dVar41 < dVar37) {
        if (dVar41 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar32,param_6,param_7,param_8,param_9);
        }
        bVar23 = dVar37 < *param_6;
        param_1 = uVar28;
        goto LAB_14cb55422;
      }
      if (dVar37 < *param_6) {
        find_nearest_triangles
                  (this,uVar28,param_2,param_3,param_4,iVar32,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar41) {
        return;
      }
      param_5 = param_5 + 1;
      iVar32 = iVar32 + 1;
    }
    if ((int)uVar28 < param_2->TrianglesEnd) {
      local_3b0 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar34 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 4);
      local_3c0 = (ulonglong)uVar34;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar34 < 1) {
        return;
      }
      break;
    }
LAB_14cb54e47:
    lVar14 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar29 * 8);
    dVar37 = *(double *)(lVar14 + uVar33 * 0x18);
    lVar15 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar29 * 8);
    dVar41 = *(double *)(lVar14 + 8 + uVar33 * 0x18);
    dVar39 = *(double *)(lVar14 + 0x10 + uVar33 * 0x18);
    pFVar16 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar35 = dVar37 - *(double *)(lVar15 + uVar33 * 0x18);
    dVar38 = dVar41 - *(double *)(lVar15 + 8 + uVar33 * 0x18);
    dVar40 = dVar39 - *(double *)(lVar15 + 0x10 + uVar33 * 0x18);
    dVar37 = dVar37 + *(double *)(lVar15 + uVar33 * 0x18);
    dVar41 = dVar41 + *(double *)(lVar15 + 8 + uVar33 * 0x18);
    dVar39 = dVar39 + *(double *)(lVar15 + 0x10 + uVar33 * 0x18);
    dVar10 = dVar37 - dVar35;
    dVar37 = dVar37 + dVar35;
    dVar35 = dVar41 + dVar38;
    dVar41 = dVar41 - dVar38;
    dVar38 = dVar39 + dVar40;
    dVar39 = dVar39 - dVar40;
    uVar11 = *(uint *)(*(longlong *)(pFVar16 + (ulonglong)(uVar28 >> 9) * 8) +
                      (ulonglong)(uVar28 & 0x1ff) * 4);
    if ((int)uVar11 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_330._s_0,~uVar11,param_3);
      dVar37 = dVar37 - (local_330._s_0.X + local_318);
      dVar37 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar21,SUB84(dVar37,0) & uVar34)
               - ((local_318 - local_330._s_0.X) + dVar10);
      if (dVar37 <= 0.0) {
        dVar37 = 0.0;
      }
      dVar35 = dVar35 - (local_330._s_0.Y + local_310);
      dVar41 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar21,SUB84(dVar35,0) & uVar34)
               - ((local_310 - local_330._s_0.Y) + dVar41);
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
      dVar38 = dVar38 - (local_308 + local_330._s_0.Z);
      dVar39 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar21,SUB84(dVar38,0) & uVar34)
               - ((local_308 - local_330._s_0.Z) + dVar39);
      if (dVar39 <= 0.0) {
        dVar39 = 0.0;
      }
      bVar23 = (dVar41 * dVar41 + dVar37 * dVar37 + dVar39 * dVar39) * dVar9 < *param_6;
      param_4 = ~uVar11;
    }
    else {
      uVar11 = uVar11 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar16 + (ulonglong)(uVar28 + 1 >> 9) * 8) +
                        (ulonglong)(uVar28 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_300._s_0,uVar11,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2d0._s_0,param_4,param_3);
      dVar40 = dVar37 - (local_2e8 + local_300._s_0.X);
      dVar40 = (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar21,SUB84(dVar40,0) & uVar34)
               - ((local_2e8 - local_300._s_0.X) + dVar10);
      if (dVar40 <= 0.0) {
        dVar40 = 0.0;
      }
      dVar19 = dVar35 - (local_2e0 + local_300._s_0.Y);
      dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar21,SUB84(dVar19,0) & uVar34)
               - ((local_2e0 - local_300._s_0.Y) + dVar41);
      if (dVar19 <= 0.0) {
        dVar19 = 0.0;
      }
      dVar36 = dVar38 - (local_2d8 + local_300._s_0.Z);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar21,SUB84(dVar36,0) & uVar34)
               - ((local_2d8 - local_300._s_0.Z) + dVar39);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar37 = dVar37 - (local_2b8 + local_2d0._s_0.X);
      dVar37 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar21,SUB84(dVar37,0) & uVar34)
               - ((local_2b8 - local_2d0._s_0.X) + dVar10);
      if (dVar37 <= 0.0) {
        dVar37 = 0.0;
      }
      dVar10 = (dVar19 * dVar19 + dVar40 * dVar40 + dVar36 * dVar36) * dVar9;
      dVar35 = dVar35 - (local_2b0 + local_2d0._s_0.Y);
      dVar41 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar21,SUB84(dVar35,0) & uVar34)
               - ((local_2b0 - local_2d0._s_0.Y) + dVar41);
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
      dVar38 = dVar38 - (local_2a8 + local_2d0._s_0.Z);
      dVar39 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar21,SUB84(dVar38,0) & uVar34)
               - ((local_2a8 - local_2d0._s_0.Z) + dVar39);
      if (dVar39 <= 0.0) {
        dVar39 = 0.0;
      }
      dVar37 = (dVar37 * dVar37 + dVar41 * dVar41 + dVar39 * dVar39) * dVar9;
      if (dVar10 <= dVar37) {
        if (dVar10 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar11,iVar32,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar37) {
          return;
        }
        param_5 = param_5 + 1;
        iVar32 = iVar32 + 1;
        goto LAB_14cb54be0;
      }
      if (dVar37 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar32,param_6,param_7,param_8,param_9);
      }
      bVar23 = dVar10 < *param_6;
      param_4 = uVar11;
    }
LAB_14cb55422:
    if (!bVar23) {
      return;
    }
    param_5 = param_5 + 1;
    iVar32 = iVar32 + 1;
  } while( true );
LAB_14cb54cb0:
  uVar28 = uVar28 + 1;
  local_380 = (ulonglong)uVar28;
  iVar32 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 4);
  local_39c = iVar32;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14cb54d0d:
    FMeshDescriptionTriangleMeshAdapter::GetTriVertices
              ((FMeshDescriptionTriangleMeshAdapter *)param_2->Mesh,iVar32,
               (TVector<double> *)&local_248._s_0,(TVector<double> *)&TStack_230._s_0,
               (TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar13 = *(code **)param_3;
      plVar30 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar30 = (longlong *)puVar1;
      }
      uVar24 = (**(code **)(*plVar30 + 8))();
      (*pcVar13)(&local_2a0,uVar24,&local_248);
      local_248._s_0.X = local_2a0;
      local_248._s_0.Y = dStack_298;
      local_248._s_0.Z = local_290;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar13 = *(code **)param_3;
      plVar30 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar30 = (longlong *)puVar1;
      }
      uVar24 = (**(code **)(*plVar30 + 8))();
      (*pcVar13)(&local_288,uVar24,&TStack_230);
      TStack_230._s_0.X = local_288;
      TStack_230._s_0.Y = dStack_280;
      TStack_230._s_0.Z = local_278;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar13 = *(code **)param_3;
      plVar30 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar30 = (longlong *)puVar1;
      }
      uVar24 = (**(code **)(*plVar30 + 8))();
      (*pcVar13)(&local_270,uVar24,&local_218);
      local_218._0_4_ = local_270;
      local_218._4_4_ = uStack_26c;
      local_218._8_4_ = uStack_268;
      local_218._12_4_ = uStack_264;
      local_218._s_0.Z = local_260;
    }
    local_1f8.DistanceSquared = dVar37;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    uVar34 = uVar11;
    uVar29 = (ulonglong)local_3b0;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = local_218._s_0.Z;
    if (0 < (int)local_3b0) {
      do {
        local_388 = uVar29;
        uVar34 = uVar34 + 1;
        iVar32 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar34 >> 9) * 8) + (ulonglong)(uVar34 & 0x1ff) * 4);
        local_3a0 = iVar32;
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14cb5556c:
          pFVar17 = this->Mesh;
          pTVar25 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                               (pFVar17->_padding_ + 200),&local_258,iVar32);
          iVar32 = pTVar25->ArrayNum;
          pFVar18 = pTVar25->DataPtr;
          local_398 = pFVar18;
          if ((iVar32 < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar12 = *pFVar18;
          pTVar26 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               pFVar17->_padding_,0);
          pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar26,(int)FVar12);
          fVar3 = (pTVar27->field0_0x0)._s_0.X;
          fVar4 = (pTVar27->field0_0x0)._s_0.Y;
          fVar5 = (pTVar27->field0_0x0)._s_0.Z;
          dVar9 = (double)pFVar17->_padding_;
          dVar41 = (double)pFVar17->_padding_;
          dVar39 = (double)pFVar17->_padding_;
          if ((iVar32 < 2) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar12 = local_398[1];
          pTVar26 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               pFVar17->_padding_,0);
          pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar26,(int)FVar12);
          fVar6 = (pTVar27->field0_0x0)._s_0.X;
          fVar7 = (pTVar27->field0_0x0)._s_0.Y;
          fVar8 = (pTVar27->field0_0x0)._s_0.Z;
          dVar35 = (double)pFVar17->_padding_;
          dVar38 = (double)pFVar17->_padding_;
          dVar10 = (double)pFVar17->_padding_;
          if ((iVar32 < 3) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar12 = local_398[2];
          pTVar26 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               pFVar17->_padding_,0);
          pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar26,(int)FVar12);
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X =
               (double)(pTVar27->field0_0x0)._s_0.X * (double)pFVar17->_padding_;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y =
               (double)(pTVar27->field0_0x0)._s_0.Y * (double)pFVar17->_padding_;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z =
               (double)(pTVar27->field0_0x0)._s_0.Z * (double)pFVar17->_padding_;
          local_1f8.DistanceSquared = dVar37;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = (double)fVar3 * dVar9;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = (double)fVar4 * dVar41;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = (double)fVar5 * dVar39;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = (double)fVar6 * dVar35;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = (double)fVar7 * dVar38;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = (double)fVar8 * dVar10;
          dVar9 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar9 < *param_6) {
            local_390 = local_3a0;
            iStack_38c = local_39c;
            FVar20._s_0.B = local_39c;
            FVar20._s_0.A = local_3a0;
            *param_6 = dVar9;
            param_7->field0_0x0 = FVar20;
          }
        }
        else {
          local_3a8[0] = iVar32;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar30 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar13 = *(code **)&param_8->TriangleFilterF;
          plVar31 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar30 != (longlong *)0x0) {
            plVar31 = plVar30;
          }
          uVar24 = (**(code **)(*plVar31 + 8))();
          cVar22 = (*pcVar13)(uVar24,local_3a8);
          if (cVar22 != '\0') goto LAB_14cb5556c;
        }
        uVar29 = local_388 - 1;
      } while (local_388 - 1 != 0);
      local_388 = 0;
    }
  }
  else {
    local_3b8[0] = iVar32;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar30 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar13 = *(code **)&param_9->TriangleFilterF;
    plVar31 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar30 != (longlong *)0x0) {
      plVar31 = plVar30;
    }
    uVar24 = (**(code **)(*plVar31 + 8))();
    cVar22 = (*pcVar13)(uVar24,local_3b8);
    if (cVar22 != '\0') goto LAB_14cb54d0d;
  }
  uVar28 = (uint)local_380;
  local_3c0 = local_3c0 - 1;
  if (local_3c0 == 0) {
    return;
  }
  goto LAB_14cb54cb0;
}

// find_nearest_triangles @ 14cb55850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_nearest_triangles
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  double *pdVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar13;
  FIndex2i_u_0 FVar14;
  char cVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  FQueryOptions *pFVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStackY_328 [32];
  int local_2c0 [2];
  FQueryOptions *local_2b8;
  FIndex2i_u_0 *local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  uint local_298;
  int local_294;
  int local_290;
  int iStack_28c;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  FIndex3i_u_0 local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar6 = __real_3fd0000000000000;
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  iVar22 = param_5 + 1;
  local_2b0 = &param_7->field0_0x0;
  local_2b8 = param_9;
LAB_14cb55930:
  do {
    while( true ) {
      dVar3 = __real_bff0000000000000;
      local_2a0 = (ulonglong)(param_1 & 0x1ff);
      local_2a8 = (ulonglong)((uint)param_1 >> 9);
      uVar7 = *(uint *)(*(longlong *)
                         ((this->BoxToIndex).Blocks.AllocatorInstance.Data + local_2a8 * 8) +
                       local_2a0 * 4);
      uVar18 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar7 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar18)) goto LAB_14cb55b62;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,param_4,param_3);
      pFVar12 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar18 = *(uint *)(*(longlong *)(pFVar12 + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar18 < 0) {
        dVar3 = this->BoxEps;
        param_1 = ~uVar18;
        uVar24 = (ulonglong)(param_1 & 0x1ff);
        lVar10 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar28 = *(double *)(lVar10 + uVar24 * 0x18);
        dVar32 = *(double *)(lVar10 + 8 + uVar24 * 0x18);
        lVar11 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar29 = *(double *)(lVar10 + 0x10 + uVar24 * 0x18);
        pdVar1 = (double *)(lVar11 + uVar24 * 0x18);
        local_288._s_0.Z = *(double *)(lVar11 + 0x10 + uVar24 * 0x18);
        dVar4 = *pdVar1 + dVar3;
        dVar5 = pdVar1[1] + dVar3;
        dVar30 = dVar28 + dVar4;
        dVar28 = dVar28 - dVar4;
        dVar4 = dVar32 + dVar5;
        dVar32 = dVar32 - dVar5;
        dVar5 = dVar29 + dVar3 + local_288._s_0.Z;
        dVar29 = dVar29 - (dVar3 + local_288._s_0.Z);
        dVar3 = (local_248._s_0.X + TStack_230._s_0.X) - (dVar30 + dVar28);
        dVar28 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar8,SUB84(dVar3,0) & uVar23)
                 - ((dVar30 - dVar28) + (TStack_230._s_0.X - local_248._s_0.X));
        dVar3 = (local_248._s_0.Y + TStack_230._s_0.Y) - (dVar4 + dVar32);
        if (dVar28 <= 0.0) {
          dVar28 = 0.0;
        }
        dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar8,SUB84(dVar3,0) & uVar23) -
                ((dVar4 - dVar32) + (TStack_230._s_0.Y - local_248._s_0.Y));
        dVar32 = (local_248._s_0.Z + TStack_230._s_0.Z) - (dVar5 + dVar29);
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar8,SUB84(dVar32,0) & uVar23
                                 ) - ((TStack_230._s_0.Z - local_248._s_0.Z) + (dVar5 - dVar29));
        if (dVar32 <= 0.0) {
          dVar32 = 0.0;
        }
        bVar26 = (dVar28 * dVar28 + dVar3 * dVar3 + dVar32 * dVar32) * dVar6 < *param_6;
        goto LAB_14cb56139;
      }
      uVar18 = uVar18 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar12 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar3 = box_box_distsqr(this,uVar18,(TAxisAlignedBox3<double> *)&local_248._s_0);
      dVar28 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_248._s_0);
      if (dVar28 < dVar3) {
        if (dVar28 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar22,param_6,
                     (FIndex2i *)&local_2b0->_s_0,param_8,local_2b8);
        }
        bVar26 = dVar3 < *param_6;
        param_1 = uVar18;
        goto LAB_14cb56139;
      }
      if (dVar3 < *param_6) {
        find_nearest_triangles
                  (this,uVar18,param_2,param_3,param_4,iVar22,param_6,(FIndex2i *)&local_2b0->_s_0,
                   param_8,local_2b8);
      }
      if (*param_6 <= dVar28) {
        return;
      }
      param_5 = param_5 + 1;
      iVar22 = iVar22 + 1;
    }
    if ((int)uVar18 < param_2->TrianglesEnd) {
      local_298 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar23 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
      local_2a0 = (ulonglong)uVar23;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      pFVar25 = local_2b8;
      if ((int)uVar23 < 1) {
        return;
      }
      break;
    }
LAB_14cb55b62:
    lVar10 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + local_2a8 * 8);
    dVar3 = *(double *)(lVar10 + local_2a0 * 0x18);
    lVar11 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + local_2a8 * 8);
    dVar28 = *(double *)(lVar10 + 8 + local_2a0 * 0x18);
    dVar32 = *(double *)(lVar10 + 0x10 + local_2a0 * 0x18);
    pFVar12 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar29 = *(double *)(lVar11 + local_2a0 * 0x18);
    dVar4 = *(double *)(lVar11 + 8 + local_2a0 * 0x18);
    dVar30 = dVar3 - dVar29;
    dVar5 = *(double *)(lVar11 + 0x10 + local_2a0 * 0x18);
    dVar27 = dVar28 - dVar4;
    dVar31 = dVar32 - dVar5;
    dVar3 = dVar3 + dVar29;
    dVar28 = dVar28 + dVar4;
    dVar32 = dVar32 + dVar5;
    dVar4 = dVar30 + dVar3;
    dVar29 = dVar27 + dVar28;
    uVar7 = *(uint *)(*(longlong *)(pFVar12 + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    dVar5 = dVar31 + dVar32;
    dVar3 = dVar3 - dVar30;
    dVar28 = dVar28 - dVar27;
    dVar32 = dVar32 - dVar31;
    if ((int)uVar7 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,~uVar7,param_3);
      dVar4 = dVar4 - (local_248._s_0.X + TStack_230._s_0.X);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar8,SUB84(dVar4,0) & uVar23) -
              ((TStack_230._s_0.X - local_248._s_0.X) + dVar3);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar29 = dVar29 - (local_248._s_0.Y + TStack_230._s_0.Y);
      dVar28 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar8,SUB84(dVar29,0) & uVar23)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar28);
      if (dVar28 <= 0.0) {
        dVar28 = 0.0;
      }
      dVar5 = dVar5 - (local_248._s_0.Z + TStack_230._s_0.Z);
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar8,SUB84(dVar5,0) & uVar23) -
               ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar32);
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      bVar26 = (dVar28 * dVar28 + dVar3 * dVar3 + dVar32 * dVar32) * dVar6 < *param_6;
      param_4 = ~uVar7;
    }
    else {
      uVar7 = uVar7 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar12 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                        (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,uVar7,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_288._s_0,param_4,param_3);
      dVar30 = dVar4 - (local_248._s_0.X + TStack_230._s_0.X);
      dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar8,SUB84(dVar30,0) & uVar23)
               - ((TStack_230._s_0.X - local_248._s_0.X) + dVar3);
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      dVar27 = dVar29 - (local_248._s_0.Y + TStack_230._s_0.Y);
      dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar8,SUB84(dVar27,0) & uVar23)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar28);
      if (dVar27 <= 0.0) {
        dVar27 = 0.0;
      }
      dVar31 = dVar5 - (local_248._s_0.Z + TStack_230._s_0.Z);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar8,SUB84(dVar31,0) & uVar23)
               - ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar32);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      dVar4 = dVar4 - ((double)CONCAT44(local_288._4_4_,local_288._0_4_) + local_270);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar8,SUB84(dVar4,0) & uVar23) -
              ((local_270 - (double)CONCAT44(local_288._4_4_,local_288._0_4_)) + dVar3);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar29 = dVar29 - ((double)CONCAT44(local_288._12_4_,local_288._8_4_) + local_268);
      dVar4 = (dVar27 * dVar27 + dVar30 * dVar30 + dVar31 * dVar31) * dVar6;
      dVar28 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar8,SUB84(dVar29,0) & uVar23)
               - ((local_268 - (double)CONCAT44(local_288._12_4_,local_288._8_4_)) + dVar28);
      if (dVar28 <= 0.0) {
        dVar28 = 0.0;
      }
      dVar5 = dVar5 - (local_288._s_0.Z + local_260);
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar8,SUB84(dVar5,0) & uVar23) -
               ((local_260 - local_288._s_0.Z) + dVar32);
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      dVar3 = (dVar28 * dVar28 + dVar3 * dVar3 + dVar32 * dVar32) * dVar6;
      if (dVar4 <= dVar3) {
        if (dVar4 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar7,iVar22,param_6,(FIndex2i *)&local_2b0->_s_0,
                     param_8,local_2b8);
        }
        if (*param_6 <= dVar3) {
          return;
        }
        param_5 = param_5 + 1;
        iVar22 = iVar22 + 1;
        goto LAB_14cb55930;
      }
      if (dVar3 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar22,param_6,(FIndex2i *)&local_2b0->_s_0,
                   param_8,local_2b8);
      }
      bVar26 = dVar4 < *param_6;
      param_4 = uVar7;
    }
LAB_14cb56139:
    if (!bVar26) {
      return;
    }
    param_5 = param_5 + 1;
    iVar22 = iVar22 + 1;
  } while( true );
LAB_14cb55a00:
  uVar18 = uVar18 + 1;
  local_2a8 = (ulonglong)uVar18;
  iVar22 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
  local_294 = iVar22;
  if (*(void **)&pFVar25->TriangleFilterF == (void *)0x0) {
LAB_14cb55a5f:
    FStaticMeshLODResourcesMeshAdapter::GetTriVertices
              ((FStaticMeshLODResourcesMeshAdapter *)param_2->Mesh,iVar22,
               (TVector<double> *)&local_248._s_0,(TVector<double> *)&TStack_230._s_0,
               (TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar2 = &param_3->field_0x10;
      pcVar9 = *(code **)param_3;
      plVar19 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)puVar2;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar9)(&local_288,uVar16,&local_248);
      local_248._s_0.X = (double)CONCAT44(local_288._4_4_,local_288._0_4_);
      local_248._s_0.Y = (double)CONCAT44(local_288._12_4_,local_288._8_4_);
      local_248._s_0.Z = local_288._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar9 = *(code **)param_3;
      plVar19 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)puVar2;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar9)(&local_288,uVar16,&TStack_230);
      TStack_230._s_0.X = (double)CONCAT44(local_288._4_4_,local_288._0_4_);
      TStack_230._s_0.Y = (double)CONCAT44(local_288._12_4_,local_288._8_4_);
      TStack_230._s_0.Z = local_288._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar9 = *(code **)param_3;
      plVar19 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)puVar2;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar9)(&local_288,uVar16,&local_218);
      local_218._0_4_ = local_288._0_4_;
      local_218._4_4_ = local_288._4_4_;
      local_218._8_4_ = local_288._8_4_;
      local_218._12_4_ = local_288._12_4_;
      local_218._s_0.Z = local_288._s_0.Z;
    }
    local_1f8.DistanceSquared = dVar3;
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
    if (0 < (int)local_298) {
      uVar24 = (ulonglong)local_298;
      uVar23 = uVar7;
      do {
        uVar23 = uVar23 + 1;
        iVar22 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14cb5626c:
          this_00 = (FStaticMeshLODResourcesMeshAdapter *)this->Mesh;
          FStaticMeshLODResourcesMeshAdapter::GetTriangle
                    (this_00,(FIndex3i *)&local_258._s_0,iVar22);
          dVar6 = (this_00->BuildScale).field0_0x0._s_0.Y;
          dVar28 = (this_00->BuildScale).field0_0x0._s_0.Z;
          dVar32 = (this_00->BuildScale).field0_0x0._s_0.X;
          puVar13 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
          uVar8 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
          uVar18 = uVar8 * local_258._s_0.A;
          uVar17 = (ulonglong)(uVar8 * local_258._s_0.B);
          uVar21 = (ulonglong)(uVar8 * local_258._s_0.C);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y =
               (double)*(float *)(puVar13 + (ulonglong)uVar18 + 4) * dVar6;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y =
               (double)*(float *)(puVar13 + uVar17 + 4) * dVar6;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y =
               (double)*(float *)(puVar13 + uVar21 + 4) * dVar6;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z =
               (double)*(float *)(puVar13 + uVar21 + 8) * dVar28;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z =
               (double)*(float *)(puVar13 + (ulonglong)uVar18 + 8) * dVar28;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z =
               (double)*(float *)(puVar13 + uVar17 + 8) * dVar28;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X =
               (double)*(float *)(puVar13 + uVar18) * dVar32;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X =
               (double)*(float *)(puVar13 + uVar17) * dVar32;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X =
               (double)*(float *)(puVar13 + uVar21) * dVar32;
          local_1f8.DistanceSquared = dVar3;
          dVar6 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar6 < *param_6) {
            iStack_28c = local_294;
            FVar14._s_0.B = local_294;
            FVar14._s_0.A = iVar22;
            *param_6 = dVar6;
            *local_2b0 = FVar14;
            local_290 = iVar22;
          }
        }
        else {
          local_2c0[0] = iVar22;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar19 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar9 = *(code **)&param_8->TriangleFilterF;
          plVar20 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar19 != (longlong *)0x0) {
            plVar20 = plVar19;
          }
          uVar16 = (**(code **)(*plVar20 + 8))();
          cVar15 = (*pcVar9)(uVar16,local_2c0);
          if (cVar15 != '\0') goto LAB_14cb5626c;
        }
        uVar24 = uVar24 - 1;
        pFVar25 = local_2b8;
      } while (uVar24 != 0);
    }
  }
  else {
    local_2c0[0] = iVar22;
    Core::Private::Function::CheckCallable(*(void **)&pFVar25->TriangleFilterF);
    plVar19 = *(longlong **)&(pFVar25->TriangleFilterF).field_0x28;
    pcVar9 = *(code **)&pFVar25->TriangleFilterF;
    plVar20 = (longlong *)&(pFVar25->TriangleFilterF).field_0x10;
    if (plVar19 != (longlong *)0x0) {
      plVar20 = plVar19;
    }
    uVar16 = (**(code **)(*plVar20 + 8))();
    cVar15 = (*pcVar9)(uVar16,local_2c0);
    if (cVar15 != '\0') goto LAB_14cb55a5f;
  }
  uVar18 = (uint)local_2a8;
  local_2a0 = local_2a0 - 1;
  if (local_2a0 == 0) {
    return;
  }
  goto LAB_14cb55a00;
}

// find_nearest_vertex @ 14cb56460

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_nearest_vertex(TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                   int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

{
  uint uVar1;
  FMeshDescriptionTriangleMeshSurfaceAdapter **ppFVar2;
  int iVar3;
  FVertexID FVar4;
  FVertexID FVar5;
  FVertexID FVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  FVertexID *pFVar10;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar11;
  char cVar12;
  bool bVar13;
  undefined8 uVar14;
  TArrayView<FVertexID,int> *pTVar15;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar16;
  TVector<float> *pTVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int local_res10 [2];
  ulonglong local_80;
  TArrayView<FVertexID,int> local_70 [3];
  
  uVar20 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar20) {
    do {
      pFVar7 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar19 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar20 >> 9) * 8) +
                        (ulonglong)(uVar20 & 0x1ff) * 4);
      if ((int)uVar19 < 0) {
        uVar19 = ~uVar19;
        dVar21 = BoxDistanceSqr(this,uVar19,param_2);
        if (*param_3 <= dVar21 && dVar21 != *param_3) {
          return;
        }
      }
      else {
        uVar1 = uVar19 - 1;
        uVar19 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                         (ulonglong)(uVar20 + 1 & 0x1ff) * 4) - 1;
        dVar21 = BoxDistanceSqr(this,uVar1,param_2);
        dVar22 = BoxDistanceSqr(this,uVar19,param_2);
        if (dVar22 <= dVar21) {
          if (*param_3 <= dVar22) {
            return;
          }
          find_nearest_vertex(this,uVar19,param_2,param_3,param_4,param_5);
          uVar19 = uVar1;
          if (*param_3 <= dVar21) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar21) {
            return;
          }
          find_nearest_vertex(this,uVar1,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar22) {
            return;
          }
        }
      }
      uVar20 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar20);
  }
  uVar19 = *(uint *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
  local_80 = (ulonglong)uVar19;
  if (0 < (int)uVar19) {
    do {
      uVar20 = uVar20 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14cb5667c:
        ppFVar2 = &this->Mesh;
        pTVar15 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                             (this->Mesh->_padding_ + 200),local_70,iVar3);
        iVar3 = pTVar15->ArrayNum;
        pFVar10 = pTVar15->DataPtr;
        if ((iVar3 < 3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar4 = pFVar10[2];
        if ((iVar3 < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar5 = pFVar10[1];
        if ((iVar3 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar11 = *ppFVar2;
        FVar6 = *pFVar10;
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar11->_padding_
                             ,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar16,(int)FVar6);
        dVar23 = (param_2->field0_0x0)._s_0.X -
                 (double)(pTVar17->field0_0x0)._s_0.X * (double)pFVar11->_padding_;
        dVar22 = (param_2->field0_0x0)._s_0.Y -
                 (double)(pTVar17->field0_0x0)._s_0.Y * (double)pFVar11->_padding_;
        dVar21 = (param_2->field0_0x0)._s_0.Z -
                 (double)(pTVar17->field0_0x0)._s_0.Z * (double)pFVar11->_padding_;
        dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar21 * dVar21;
        if (dVar21 < *param_3) {
          *param_3 = dVar21;
          *param_4 = (int)FVar6;
        }
        pFVar11 = *ppFVar2;
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar11->_padding_
                             ,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar16,(int)FVar5);
        dVar23 = (param_2->field0_0x0)._s_0.X -
                 (double)(pTVar17->field0_0x0)._s_0.X * (double)pFVar11->_padding_;
        dVar22 = (param_2->field0_0x0)._s_0.Y -
                 (double)(pTVar17->field0_0x0)._s_0.Y * (double)pFVar11->_padding_;
        dVar21 = (param_2->field0_0x0)._s_0.Z -
                 (double)(pTVar17->field0_0x0)._s_0.Z * (double)pFVar11->_padding_;
        dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar21 * dVar21;
        if (dVar21 < *param_3) {
          *param_3 = dVar21;
          *param_4 = (int)FVar5;
        }
        pFVar11 = *ppFVar2;
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar11->_padding_
                             ,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar16,(int)FVar4);
        dVar23 = (param_2->field0_0x0)._s_0.X -
                 (double)(pTVar17->field0_0x0)._s_0.X * (double)pFVar11->_padding_;
        dVar22 = (param_2->field0_0x0)._s_0.Y -
                 (double)(pTVar17->field0_0x0)._s_0.Y * (double)pFVar11->_padding_;
        dVar21 = (param_2->field0_0x0)._s_0.Z -
                 (double)(pTVar17->field0_0x0)._s_0.Z * (double)pFVar11->_padding_;
        dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar21 * dVar21;
        if (dVar21 < *param_3) {
          *param_3 = dVar21;
          *param_4 = (int)FVar4;
        }
      }
      else {
        local_res10[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar8 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar9 = *(code **)&param_5->TriangleFilterF;
        plVar18 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar8 != (longlong *)0x0) {
          plVar18 = plVar8;
        }
        uVar14 = (**(code **)(*plVar18 + 8))();
        cVar12 = (*pcVar9)(uVar14,local_res10);
        if (cVar12 != '\0') goto LAB_14cb5667c;
      }
      local_80 = local_80 - 1;
    } while (local_80 != 0);
  }
  return;
}

// find_nearest_vertex @ 14cb56960

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_nearest_vertex(TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                   int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_res10 [2];
  ulonglong local_70;
  FIndexArrayView local_68 [3];
  
  pTVar1 = &(this->IndexList).Blocks;
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  uVar14 = (ulonglong)uVar15;
  if (this->TrianglesEnd <= (int)uVar15) {
    do {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      uVar15 = *(uint *)(*(longlong *)(pFVar4 + (uVar14 >> 9) * 8) +
                        (ulonglong)((uint)uVar14 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar15 = ~uVar15;
        dVar19 = BoxDistanceSqr(this,uVar15,param_2);
        if (*param_3 <= dVar19 && dVar19 != *param_3) {
          return;
        }
      }
      else {
        uVar18 = (uint)uVar14 + 1;
        uVar11 = uVar15 - 1;
        uVar15 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4) - 1;
        dVar19 = BoxDistanceSqr(this,uVar11,param_2);
        dVar20 = BoxDistanceSqr(this,uVar15,param_2);
        if (dVar20 <= dVar19) {
          if (*param_3 <= dVar20) {
            return;
          }
          find_nearest_vertex(this,uVar15,param_2,param_3,param_4,param_5);
          uVar15 = uVar11;
          if (*param_3 <= dVar19) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar19) {
            return;
          }
          find_nearest_vertex(this,uVar11,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar20) {
            return;
          }
        }
      }
      uVar15 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
      uVar14 = (ulonglong)uVar15;
    } while (this->TrianglesEnd <= (int)uVar15);
  }
  uVar11 = (uint)uVar14;
  uVar15 = *(uint *)(*(longlong *)((pTVar1->AllocatorInstance).Data + (uVar14 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
  local_70 = (ulonglong)uVar15;
  if (0 < (int)uVar15) {
    do {
      uVar11 = uVar11 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14cb56b7c:
        pFVar7 = this->Mesh;
        iVar16 = 0;
        uVar15 = *(uint *)&pFVar7->field_0x58;
        uVar18 = uVar15;
        if (0 < (int)uVar15) {
          do {
            iVar2 = (uVar18 >> 1) + iVar16;
            if (*(int *)(*(longlong *)&pFVar7->field_0x50 + (longlong)iVar2 * 4) <= iVar3) {
              iVar16 = iVar2 + (uVar18 & 1);
            }
            uVar17 = uVar18 >> 1;
            uVar18 = uVar18 >> 1;
          } while (uVar17 != 0);
        }
        uVar18 = iVar16 - 1;
        uVar17 = 0;
        if ((int)uVar18 < (int)uVar15) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar16 = *(int *)(*(longlong *)&pFVar7->field_0x50 + (longlong)(int)uVar18 * 4);
        uVar15 = 0;
        if ((int)uVar18 < *(int *)&pFVar7->field_0x48) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar13 = *(longlong *)(*(longlong *)&pFVar7->field_0x40 + (longlong)(int)uVar18 * 8);
        FRawStaticIndexBuffer::GetArrayView
                  ((FRawStaticIndexBuffer *)(*(longlong *)pFVar7 + 0x228),local_68);
        lVar13 = (longlong)(*(int *)(lVar13 + 4) + (iVar3 - iVar16) * 3);
        if (local_68[0].b32Bit == false) {
          uVar15 = (uint)*(ushort *)((longlong)local_68[0].UntypedIndexData + lVar13 * 2 + 4);
          uVar18 = (uint)*(ushort *)((longlong)local_68[0].UntypedIndexData + lVar13 * 2 + 2);
          uVar17 = (uint)*(ushort *)((longlong)local_68[0].UntypedIndexData + lVar13 * 2);
        }
        else {
          uVar15 = *(uint *)((longlong)local_68[0].UntypedIndexData + lVar13 * 4 + 8);
          uVar18 = *(uint *)((longlong)local_68[0].UntypedIndexData + lVar13 * 4 + 4);
          uVar17 = *(uint *)((longlong)local_68[0].UntypedIndexData + lVar13 * 4);
        }
        pFVar7 = this->Mesh;
        uVar14 = (ulonglong)(uVar17 * *(int *)(*(longlong *)pFVar7 + 0x1c8));
        lVar13 = *(longlong *)(*(longlong *)pFVar7 + 0x1c0);
        dVar20 = (param_2->field0_0x0)._s_0.X -
                 (double)*(float *)(uVar14 + lVar13) * *(double *)&pFVar7->field_0x8;
        dVar21 = (param_2->field0_0x0)._s_0.Y -
                 (double)*(float *)(uVar14 + 4 + lVar13) * *(double *)&pFVar7->field_0x10;
        dVar19 = (param_2->field0_0x0)._s_0.Z -
                 (double)*(float *)(uVar14 + 8 + lVar13) * *(double *)&pFVar7->field_0x18;
        dVar19 = dVar21 * dVar21 + dVar20 * dVar20 + dVar19 * dVar19;
        if (dVar19 < *param_3) {
          *param_3 = dVar19;
          *param_4 = uVar17;
        }
        pFVar7 = this->Mesh;
        uVar14 = (ulonglong)(uVar18 * *(int *)(*(longlong *)pFVar7 + 0x1c8));
        lVar13 = *(longlong *)(*(longlong *)pFVar7 + 0x1c0);
        dVar20 = (param_2->field0_0x0)._s_0.X -
                 (double)*(float *)(uVar14 + lVar13) * *(double *)&pFVar7->field_0x8;
        dVar21 = (param_2->field0_0x0)._s_0.Y -
                 (double)*(float *)(uVar14 + 4 + lVar13) * *(double *)&pFVar7->field_0x10;
        dVar19 = (param_2->field0_0x0)._s_0.Z -
                 (double)*(float *)(uVar14 + 8 + lVar13) * *(double *)&pFVar7->field_0x18;
        dVar19 = dVar21 * dVar21 + dVar20 * dVar20 + dVar19 * dVar19;
        if (dVar19 < *param_3) {
          *param_3 = dVar19;
          *param_4 = uVar18;
        }
        pFVar7 = this->Mesh;
        uVar14 = (ulonglong)(uVar15 * *(int *)(*(longlong *)pFVar7 + 0x1c8));
        lVar13 = *(longlong *)(*(longlong *)pFVar7 + 0x1c0);
        dVar20 = (param_2->field0_0x0)._s_0.X -
                 (double)*(float *)(uVar14 + lVar13) * *(double *)&pFVar7->field_0x8;
        dVar21 = (param_2->field0_0x0)._s_0.Y -
                 (double)*(float *)(uVar14 + 4 + lVar13) * *(double *)&pFVar7->field_0x10;
        dVar19 = (param_2->field0_0x0)._s_0.Z -
                 (double)*(float *)(uVar14 + 8 + lVar13) * *(double *)&pFVar7->field_0x18;
        dVar19 = dVar21 * dVar21 + dVar20 * dVar20 + dVar19 * dVar19;
        if (dVar19 < *param_3) {
          *param_3 = dVar19;
          *param_4 = uVar15;
        }
      }
      else {
        local_res10[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_5->TriangleFilterF;
        plVar12 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar10 = (**(code **)(*plVar12 + 8))();
        cVar8 = (*pcVar6)(uVar10,local_res10);
        if (cVar8 != '\0') goto LAB_14cb56b7c;
      }
      local_70 = local_70 - 1;
    } while (local_70 != 0);
  }
  return;
}

// find_self_intersections @ 14cb56ea0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_self_intersections
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          FIntersectionsQueryResult *param_1,bool param_2,
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

// find_self_intersections @ 14cb57030

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_self_intersections
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          FIntersectionsQueryResult *param_1,bool param_2,
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

// find_self_intersections_acrossboxes @ 14cb571c0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,int param_2,FIntersectionsQueryResult *param_3,bool param_4,int param_5,
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
LAB_14cb57375:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14cb57375;
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
      goto joined_r0x00014cb57571;
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
joined_r0x00014cb57571:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_self_intersections_acrossboxes @ 14cb57800

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,int param_2,FIntersectionsQueryResult *param_3,bool param_4,int param_5,
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
LAB_14cb579b5:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14cb579b5;
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
      goto joined_r0x00014cb57bb1;
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
joined_r0x00014cb57bb1:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14cb57e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
find_tri_tri_intersections
          (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,int param_2,int param_3,FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  int iVar2;
  FVertexID FVar3;
  FVertexID FVar4;
  longlong *plVar5;
  code *pcVar6;
  FVertexID *pFVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  TArrayView<FVertexID,int> *pTVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStackY_2c8 [32];
  char local_298;
  int local_288 [2];
  int local_280 [2];
  int local_278;
  int local_274;
  FVertexID local_270 [4];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_260;
  FIntersectionsQueryResult *local_258;
  FIndex3i local_250 [2];
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 TStack_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 TStack_1d0;
  TVector<double>_u_0 local_1b8;
  TArrayView<FVertexID,int> local_198;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_260 = param_6;
  local_258 = param_4;
  local_278 = param_1;
  local_274 = param_3;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_288[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar5 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar6 = *(code **)&param_7->TriangleFilterF;
    plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar14 = plVar5;
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    cVar8 = (*pcVar6)(uVar11,local_288);
    if (cVar8 == '\0') {
      return false;
    }
  }
  local_298 = '\0';
  FMeshDescriptionTriangleMeshAdapter::GetTriVertices
            ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,param_1,
             (TVector<double> *)&local_238._s_0,(TVector<double> *)&TStack_220._s_0,
             (TVector<double> *)&local_208._s_0);
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_238._s_0.X;
  local_188._s_0.Y = local_238._s_0.Y;
  local_168 = TStack_220._s_0.Y;
  dStack_160 = TStack_220._s_0.Z;
  local_188._s_0.Z = local_238._s_0.Z;
  dStack_170 = TStack_220._s_0.X;
  local_148 = local_208._s_0.Z;
  local_f0 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_158 = local_208._s_0.X;
  dStack_150 = local_208._s_0.Y;
  FMeshDescriptionTriangleMeshAdapter::GetTriangle
            ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,local_250,param_1);
  cVar8 = '\0';
  if (param_2 < param_3) {
    do {
      iVar1 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14cb57fdd:
        pTVar12 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                             (this->Mesh->_padding_ + 200),&local_198,iVar1);
        iVar2 = pTVar12->ArrayNum;
        pFVar7 = pTVar12->DataPtr;
        if ((iVar2 < 3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        FVar3 = pFVar7[2];
        if ((iVar2 < 2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        FVar4 = pFVar7[1];
        if ((iVar2 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_270[0] = *pFVar7;
        local_270[1] = FVar4;
        local_270[2] = FVar3;
        if (param_5) {
          bVar9 = false;
          lVar15 = 0;
          do {
            if (bVar9) goto LAB_14cb581aa;
            lVar13 = 0;
            do {
              if (*(FVertexID *)(local_250[0].field0_0x0.ABC + lVar15) == local_270[lVar13]) {
                bVar9 = true;
                break;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 3);
            lVar15 = lVar15 + 1;
          } while (lVar15 < 3);
          if (bVar9) goto LAB_14cb581aa;
        }
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  ((FMeshDescriptionTriangleMeshAdapter *)this->Mesh,iVar1,
                   (TVector<double> *)&local_1e8._s_0,(TVector<double> *)&TStack_1d0._s_0,
                   (TVector<double> *)&local_1b8._s_0);
        local_140 = local_1e8._s_0.X;
        dStack_138 = local_1e8._s_0.Y;
        local_ec = 0;
        local_120 = TStack_1d0._s_0.Y;
        dStack_118 = TStack_1d0._s_0.Z;
        local_130 = local_1e8._s_0.Z;
        dStack_128 = TStack_1d0._s_0.X;
        local_100 = local_1b8._s_0.Z;
        local_110 = local_1b8._0_4_;
        uStack_10c = local_1b8._4_4_;
        uStack_108 = local_1b8._8_4_;
        uStack_104 = local_1b8._12_4_;
        local_298 = (**(code **)local_260)(*(undefined8 *)&local_260->field_0x8,&local_188);
        if (local_298 != '\0') {
          if (local_258 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,local_278,iVar1,local_258);
        }
      }
      else {
        local_280[0] = iVar1;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar5 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_7->TriangleFilterF;
        plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar14 = plVar5;
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        cVar8 = (*pcVar6)(uVar11,local_280);
        if (cVar8 != '\0') goto LAB_14cb57fdd;
      }
LAB_14cb581aa:
      param_2 = param_2 + 1;
      cVar8 = local_298;
    } while (param_2 < local_274);
  }
  return (bool)cVar8;
}

// find_tri_tri_intersections @ 14cb58200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
find_tri_tri_intersections
          (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,int param_1
          ,int param_2,int param_3,FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar5;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  undefined1 auStackY_2c8 [32];
  char local_298;
  int local_288 [2];
  int local_280 [2];
  int local_278;
  int local_274;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *local_270;
  uint local_268 [4];
  FIndex3i_u_0 local_258;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_248;
  FIntersectionsQueryResult *local_240;
  FIndexArrayView local_238;
  FIndex3i local_228;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 TStack_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_248 = param_6;
  local_240 = param_4;
  local_278 = param_1;
  local_274 = param_3;
  local_270 = this;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_288[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar3 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar4 = *(code **)&param_7->TriangleFilterF;
    plVar16 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar16 = plVar3;
    }
    uVar12 = (**(code **)(*plVar16 + 8))();
    cVar7 = (*pcVar4)(uVar12,local_288);
    if (cVar7 == '\0') {
      return false;
    }
  }
  local_298 = '\0';
  FStaticMeshLODResourcesMeshAdapter::GetTriVertices
            ((FStaticMeshLODResourcesMeshAdapter *)this->Mesh,param_1,
             (TVector<double> *)&local_218._s_0,(TVector<double> *)&TStack_200._s_0,
             (TVector<double> *)&local_1e8._s_0);
  local_138 = __real_3e45798ee2308c3a;
  local_1c8._s_0.X = local_218._s_0.X;
  local_1c8._s_0.Y = local_218._s_0.Y;
  local_1a8 = TStack_200._s_0.Y;
  dStack_1a0 = TStack_200._s_0.Z;
  local_1c8._s_0.Z = local_218._s_0.Z;
  dStack_1b0 = TStack_200._s_0.X;
  local_188 = local_1e8._s_0.Z;
  local_130 = 0;
  local_128 = 0;
  local_12c = 0;
  local_198 = local_1e8._s_0.X;
  dStack_190 = local_1e8._s_0.Y;
  FStaticMeshLODResourcesMeshAdapter::GetTriangle
            ((FStaticMeshLODResourcesMeshAdapter *)this->Mesh,&local_228,param_1);
  cVar7 = '\0';
  if (param_2 < param_3) {
    do {
      iVar2 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14cb583bd:
        pFVar5 = this->Mesh;
        iVar20 = 0;
        uVar11 = *(uint *)&pFVar5->field_0x58;
        uVar19 = uVar11;
        if (0 < (int)uVar11) {
          do {
            iVar1 = (uVar19 >> 1) + iVar20;
            if (*(int *)(*(longlong *)&pFVar5->field_0x50 + (longlong)iVar1 * 4) <= iVar2) {
              iVar20 = iVar1 + (uVar19 & 1);
            }
            uVar10 = uVar19 >> 1;
            uVar19 = uVar19 >> 1;
          } while (uVar10 != 0);
        }
        uVar19 = iVar20 - 1;
        uVar10 = 0;
        if ((int)uVar19 < (int)uVar11) {
          uVar10 = ~uVar19 >> 0x1f;
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
        iVar20 = *(int *)(*(longlong *)&pFVar5->field_0x50 + (longlong)(int)uVar19 * 4);
        uVar11 = 0;
        if ((int)uVar19 < *(int *)&pFVar5->field_0x48) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        lVar17 = *(longlong *)(*(longlong *)&pFVar5->field_0x40 + (longlong)(int)uVar19 * 8);
        FRawStaticIndexBuffer::GetArrayView
                  ((FRawStaticIndexBuffer *)(*(longlong *)pFVar5 + 0x228),&local_238);
        this = local_270;
        lVar17 = (longlong)(*(int *)(lVar17 + 4) + (iVar2 - iVar20) * 3);
        if (local_238.b32Bit == false) {
          local_268[2] = (uint)*(ushort *)((longlong)local_238.UntypedIndexData + lVar17 * 2 + 4);
          local_268[1] = (uint)*(ushort *)((longlong)local_238.UntypedIndexData + lVar17 * 2 + 2);
          local_268[0] = (uint)*(ushort *)((longlong)local_238.UntypedIndexData + lVar17 * 2);
        }
        else {
          local_268[2] = *(uint *)((longlong)local_238.UntypedIndexData + lVar17 * 4 + 8);
          local_268[1] = *(uint *)((longlong)local_238.UntypedIndexData + lVar17 * 4 + 4);
          local_268[0] = *(uint *)((longlong)local_238.UntypedIndexData + lVar17 * 4);
        }
        if (param_5) {
          bVar8 = false;
          lVar17 = 0;
          do {
            if (bVar8) goto LAB_14cb586a3;
            lVar13 = 0;
            do {
              if (local_228.field0_0x0.ABC[lVar17] == local_268[lVar13]) {
                bVar8 = true;
                break;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 3);
            lVar17 = lVar17 + 1;
          } while (lVar17 < 3);
          if (bVar8) goto LAB_14cb586a3;
        }
        this_00 = (FStaticMeshLODResourcesMeshAdapter *)local_270->Mesh;
        FStaticMeshLODResourcesMeshAdapter::GetTriangle(this_00,(FIndex3i *)&local_258._s_0,iVar2);
        local_150 = (this_00->BuildScale).field0_0x0._s_0.X;
        local_160 = (this_00->BuildScale).field0_0x0._s_0.Y;
        local_158 = (this_00->BuildScale).field0_0x0._s_0.Z;
        puVar6 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
        uVar11 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
        uVar14 = (ulonglong)(uVar11 * local_258._s_0.A);
        uVar15 = (ulonglong)(uVar11 * local_258._s_0.B);
        uVar18 = (ulonglong)(uVar11 * local_258._s_0.C);
        local_180 = (double)*(float *)(puVar6 + uVar14) * local_150;
        local_168 = (double)*(float *)(puVar6 + uVar15) * local_150;
        local_150 = (double)*(float *)(puVar6 + uVar18) * local_150;
        local_148 = (double)*(float *)(puVar6 + uVar18 + 4) * local_160;
        local_178 = (double)*(float *)(puVar6 + uVar14 + 4) * local_160;
        local_160 = (double)*(float *)(puVar6 + uVar15 + 4) * local_160;
        local_12c = 0;
        local_140 = (double)*(float *)(puVar6 + uVar18 + 8) * local_158;
        local_170 = (double)*(float *)(puVar6 + uVar14 + 8) * local_158;
        local_158 = (double)*(float *)(puVar6 + uVar15 + 8) * local_158;
        local_298 = (**(code **)local_248)(*(undefined8 *)&local_248->field_0x8,&local_1c8);
        if (local_298 != '\0') {
          if (local_240 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_1c8._s_0,local_278,iVar2,local_240);
        }
      }
      else {
        local_280[0] = iVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar3 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_7->TriangleFilterF;
        plVar16 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar16 = plVar3;
        }
        uVar12 = (**(code **)(*plVar16 + 8))();
        cVar7 = (*pcVar4)(uVar12,local_280);
        if (cVar7 != '\0') goto LAB_14cb583bd;
      }
LAB_14cb586a3:
      param_2 = param_2 + 1;
      cVar7 = local_298;
    } while (param_2 < local_274);
  }
  return (bool)cVar7;
}

