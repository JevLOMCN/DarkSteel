// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 150

// <lambda_invoker_cdecl> @ 14c6bcec0

int __cdecl
`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::MakeDefaultSplitAxisFunc'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14c6bcee0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllIntersections'::__l5::<lambda_1>
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

// <lambda_invoker_cdecl> @ 14c6bcf20

bool __cdecl
`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllSelfIntersections'::__l5::
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

// FindHitTriangle<UE::Math::TRay<double>_> @ 14c6cc470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TRay<double> *param_2,
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
LAB_14c6cc6e8:
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this->Mesh->Mesh,uVar11,(TVector<double> *)&local_178._s_0,
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
        if (cVar7 != '\0') goto LAB_14c6cc6e8;
      }
      local_198 = local_198 - 1;
      pTVar13 = local_190;
    } while (local_198 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14c6cc7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TRay<double> *param_2,
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
LAB_14c6cca49:
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this->Mesh->Mesh,iVar3,(TVector<double> *)&local_1c8._s_0,
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
        if (cVar12 != '\0') goto LAB_14c6cca49;
      }
      local_1e0 = local_1e0 - 1;
      pTVar19 = local_1d8;
    } while (local_1e0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14c6db520

double __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TRay<double> *param_2)

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

// find_nearest_tri<1> @ 14c6db6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_nearest_tri<1>
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TVector<double> *param_2,
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
LAB_14c6db7ac:
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this->Mesh->Mesh,iVar1,(TVector<double> *)&local_158._s_0,
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
      if (cVar8 != '\0') goto LAB_14c6db7ac;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14c6db9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_nearest_tri<0>
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TVector<double> *param_2,
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
LAB_14c6dbacc:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh->Mesh,iVar14,(TVector<double> *)&local_158._s_0,
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
          if (cVar9 != '\0') goto LAB_14c6dbacc;
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

// ~TMeshAABBTree3<FSkipTransparentMeshWrapper> @ 14c6e0990

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::
~TMeshAABBTree3<FSkipTransparentMeshWrapper>(TMeshAABBTree3<FSkipTransparentMeshWrapper> *this)

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

// operator() @ 14c6eae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestSelfIntersection'::__l2::<lambda_1>
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

// AddTriTriIntersectionResult @ 14c6ff250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::AddTriTriIntersectionResult
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

// BoxDistanceSqr @ 14c715da0

double __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::BoxDistanceSqr
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TVector<double> *param_2)

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

// BuildTopDown @ 14c718400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::BuildTopDown
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
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

// BuildTopDown @ 14c718b40

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::BuildTopDown
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,bool param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  FSkipTransparentMeshWrapper *pFVar8;
  FDynamicMesh3 *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  uint local_res8 [2];
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
  
  uVar11 = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  uVar10 = this->Mesh->TriCount;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar10 = this->Mesh->TriCount;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar10,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  dVar3 = __real_3fd5555555555555;
  pFVar8 = this->Mesh;
  local_f8[0] = 0;
  pFVar9 = pFVar8->Mesh;
  if (0 < (int)((pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      uVar10 = (uint)uVar11;
      if ((((-1 < (int)uVar10) &&
           ((int)uVar10 <
            (int)((pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
          ((ushort)(*(short *)(*(longlong *)
                                ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                + (uVar11 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) <
           0xfffe)) &&
         (local_res8[0] = uVar10,
         cVar4 = (**(code **)&pFVar8->IsTriTransparent)
                           (*(undefined8 *)&(pFVar8->IsTriTransparent).field_0x8,local_res8),
         uVar10 = local_f8[0], cVar4 == '\0')) {
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this->Mesh->Mesh,local_f8[0],(TVector<double> *)&local_b8._s_0,
                   (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
        dVar13 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar3;
        dVar2 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar3;
        dVar12 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar3;
        sVar6 = _dclass(SUB84(dVar2 * dVar2 + dVar13 * dVar13 + dVar12 * dVar12,0));
        uVar10 = local_f8[0];
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
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar7 = local_f0.ArrayNum;
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
          local_f0.ArrayNum = iVar7 + 1;
          *(uint *)(local_f0.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_f8[0];
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh->Mesh,local_f8[0],(TVector<double> *)&local_68._s_0,
                     (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38[0]._s_0);
          local_d0 = (local_68._s_0.X + local_50._s_0.X + (double)local_38[0]._0_8_) * dVar3;
          dStack_c8 = (local_68._s_0.Y + local_50._s_0.Y + (double)local_38[0]._8_8_) * dVar3;
          local_c0 = (local_68._s_0.Z + local_50._s_0.Z + (double)local_38[0]._16_8_) * dVar3;
          if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 <
               local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x18)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
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
          uVar10 = local_f8[0];
        }
      }
      pFVar8 = this->Mesh;
      local_f8[0] = uVar10 + 1;
      uVar11 = (ulonglong)local_f8[0];
      pFVar9 = pFVar8->Mesh;
    } while ((int)local_f8[0] <
             (int)((pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed));
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

// DoTraversal @ 14c72e3a0

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::DoTraversal
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,FTreeTraversal *param_1,
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

// FindAllHitTriangles @ 14c730df0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTriangles
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14c730e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllIntersections
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<FSkipTransparentMeshWrapper> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4c6bcee0;
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
LAB_14c730fac:
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
      uVar5 = FDynamicMesh3::GetChangeStamp(this->Mesh->Mesh);
      if (this->MeshChangeStamp != uVar5) goto LAB_14c730fac;
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

// FindAllSelfIntersections @ 14c731020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllSelfIntersections
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4c6bcf20;
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

// FindNearestHitTriangle @ 14c731d90

int __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestHitTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c731e10

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestHitTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TRay<double> *param_1,double *param_2,
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

// FindNearestHitTriangle @ 14c731e90

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestHitTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TRay<double> *param_1,double *param_2,
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

// FindNearestPoint @ 14c731f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestPoint
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TVector<double> *__return_storage_ptr__
          ,TVector<double> *param_1,FQueryOptions *param_2)

{
  undefined8 uVar1;
  FSkipTransparentMeshWrapper *pFVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStackY_188 [32];
  uint local_158 [4];
  double local_148;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar7 = (**(code **)(this->_padding_ + 0x20))(this,param_1,local_138);
  local_128 = (param_1->field0_0x0)._s_0.X;
  dStack_120 = (param_1->field0_0x0)._s_0.Y;
  if ((int)uVar7 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_128;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_120;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar9 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
    goto LAB_14c73209e;
  }
  local_148 = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = this->Mesh;
  pFVar3 = pFVar2->Mesh;
  if (((int)uVar7 <
       (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    local_158[0] = uVar7;
    cVar5 = (**(code **)&pFVar2->IsTriTransparent)
                      (*(undefined8 *)&(pFVar2->IsTriTransparent).field_0x8,local_158);
    if (cVar5 != '\0') goto LAB_14c731fbe;
  }
  else {
LAB_14c731fbe:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.IsTriangle(TriIdx)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                       ,0x1e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (pFVar2->Mesh,uVar7,(TVector<double> *)&local_118._s_0,
             (TVector<double> *)&TStack_100._s_0,(TVector<double> *)&local_e8._s_0);
  local_c8._s_0.X = local_128;
  local_c8._s_0.Y = dStack_120;
  local_b0 = local_118._s_0.X;
  dStack_a8 = local_118._s_0.Y;
  local_c8._s_0.Z = local_148;
  local_90 = TStack_100._s_0.Y;
  dStack_88 = TStack_100._s_0.Z;
  local_a0 = local_118._s_0.Z;
  dStack_98 = TStack_100._s_0.X;
  local_70 = local_e8._s_0.Z;
  local_80 = local_e8._s_0.X;
  dStack_78 = local_e8._s_0.Y;
  TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_c8._s_0);
  uVar9 = (undefined4)local_40;
  uVar10 = (undefined4)((ulonglong)local_40 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_50;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_48;
LAB_14c73209e:
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 14c7320d0

int __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TVector<double> *param_1,
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

// FindNearestTriangles @ 14c732130

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestTriangles
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
          TMeshAABBTree3<FSkipTransparentMeshWrapper> *param_1,
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
            (this,this->RootIndex,(TMeshAABBTree3<FSkipTransparentMeshWrapper> *)param_2,
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

// FindNearestVertex @ 14c7321f0

int __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindNearestVertex
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TVector<double> *param_1,
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

// GetBox @ 14c739320

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
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

// GetBox @ 14c7393e0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 14c750d00

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::IsInside
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 14c751450

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::IsWithinDistanceSquared
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TVector<double> *param_1,double param_2
          ,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 14c76a0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::SplitTriSetMidpoint
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
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
  FDynamicMesh3 *pFVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FBoxesSet *pFVar18;
  TAxisAlignedBox3<double> *pTVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  double *pdVar24;
  longlong lVar25;
  undefined8 uVar26;
  uint uVar27;
  longlong *plVar28;
  uint uVar29;
  ulonglong uVar30;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  int iVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
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
  
  pTVar19 = param_9;
  pFVar18 = param_7;
  iVar21 = param_4;
  pdVar24 = &local_128;
  uVar34 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar24 = &local_c8;
    local_c8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_c0 = _UNK_150a9e648;
    local_a8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a0 = _UNK_1508ffb58;
    local_b8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b0 = _UNK_150a9e6d8;
  }
  dVar41 = pdVar24[1];
  dVar40 = pdVar24[2];
  dVar44 = pdVar24[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar24;
  (param_9->Min).field0_0x0._s_0.Y = dVar41;
  dVar41 = pdVar24[4];
  dVar45 = pdVar24[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar40;
  (param_9->Max).field0_0x0._s_0.X = dVar44;
  (param_9->Max).field0_0x0._s_0.Y = dVar41;
  (param_9->Max).field0_0x0._s_0.Z = dVar45;
  if (param_6 < param_4) {
    local_198[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar10 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar13 = *(code **)&this->GetSplitAxis;
    plVar28 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar10 != (longlong *)0x0) {
      plVar28 = plVar10;
    }
    uVar26 = (**(code **)(*plVar28 + 8))();
    uVar49 = (undefined4)__real_7fefffffffffffff;
    uVar51 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar42 = (undefined4)__real_ffefffffffffffff;
    uVar43 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar22 = (*pcVar13)(uVar26,local_198,pTVar19);
    iVar39 = 0;
    uVar32 = 0;
    uVar30 = (ulonglong)(int)uVar22;
    uVar38 = 0;
    if (0 < iVar21) {
      lVar37 = (uVar30 + uVar34 * 3) * 8;
      uVar29 = param_3;
      do {
        uVar36 = uVar38;
        if ((int)uVar29 < param_2->ArrayNum) {
          uVar36 = ~uVar29 >> 0x1f;
        }
        if (uVar36 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar13 = (code *)swi(3);
            iVar21 = (*pcVar13)();
            return iVar21;
          }
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        if (2 < uVar30) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar20) {
            pcVar13 = (code *)swi(3);
            iVar21 = (*pcVar13)();
            return iVar21;
          }
        }
        dVar41 = *(double *)(pFVar8 + lVar37);
        if (dVar41 <= (double)CONCAT44(uVar51,uVar49)) {
          uVar49 = SUB84(dVar41,0);
          uVar51 = (undefined4)((ulonglong)dVar41 >> 0x20);
        }
        dVar41 = *(double *)(pFVar8 + lVar37);
        if ((double)CONCAT44(uVar43,uVar42) <= dVar41) {
          uVar42 = SUB84(dVar41,0);
          uVar43 = (undefined4)((ulonglong)dVar41 >> 0x20);
        }
        uVar29 = uVar29 + 1;
        lVar37 = lVar37 + 0x18;
      } while ((int)(uVar29 - param_3) < iVar21);
    }
    dVar40 = __real_3fe0000000000000;
    dVar41 = ((double)CONCAT44(uVar43,uVar42) + (double)CONCAT44(uVar51,uVar49)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar43,uVar42) - (double)CONCAT44(uVar51,uVar49) <= __real_3e45798ee2308c3a
       ) {
      iVar39 = iVar21 / 2;
      iVar21 = iVar21 - iVar39;
    }
    else {
      local_1c8 = iVar21 + -1;
      local_188 = (longlong)local_1c8;
      if (0 < local_1c8) {
        local_1c0 = 0;
        uVar35 = uVar34;
        iVar39 = 0;
        while( true ) {
          uVar29 = iVar39 + (int)uVar35;
          lVar37 = (uVar30 + ((int)uVar35 + local_1c0) * 3) * 8;
          while( true ) {
            uVar36 = uVar38;
            if ((int)uVar29 < param_2->ArrayNum) {
              uVar36 = ~uVar29 >> 0x1f;
            }
            if (uVar36 == 0) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar13 = (code *)swi(3);
                iVar21 = (*pcVar13)();
                return iVar21;
              }
            }
            pFVar8 = (param_2->AllocatorInstance).Data;
            if (2 < uVar22) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar20) {
                pcVar13 = (code *)swi(3);
                iVar21 = (*pcVar13)();
                return iVar21;
              }
            }
            if (dVar41 < *(double *)(pFVar8 + lVar37)) break;
            local_1c0 = local_1c0 + 1;
            iVar39 = iVar39 + 1;
            uVar29 = uVar29 + 1;
            lVar37 = lVar37 + 0x18;
          }
          lVar25 = (param_3 + local_188) * 0x18;
          uVar29 = local_1c8 + param_3;
          lVar37 = local_188;
          while( true ) {
            uVar23 = 0;
            uVar36 = uVar23;
            if ((int)uVar29 < param_2->ArrayNum) {
              uVar36 = ~uVar29 >> 0x1f;
            }
            if (uVar36 == 0) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar13 = (code *)swi(3);
                iVar21 = (*pcVar13)();
                return iVar21;
              }
            }
            pFVar8 = (param_2->AllocatorInstance).Data;
            if (2 < uVar22) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar20) {
                pcVar13 = (code *)swi(3);
                iVar21 = (*pcVar13)();
                return iVar21;
              }
            }
            if (*(double *)(pFVar8 + uVar30 * 8 + lVar25) <= dVar41) break;
            local_1c8 = local_1c8 + -1;
            uVar29 = uVar29 - 1;
            lVar37 = lVar37 + -1;
            lVar25 = lVar25 + -0x18;
          }
          iVar21 = param_4;
          local_188 = lVar37;
          if (lVar37 <= local_1c0) break;
          uVar36 = param_3 + iVar39;
          uVar29 = uVar23;
          if ((int)uVar36 < param_2->ArrayNum) {
            uVar29 = ~uVar36 >> 0x1f;
          }
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          pFVar11 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar11 + (uVar34 + local_1c0) * 0x18;
          uVar14 = *(undefined8 *)pFVar8;
          uVar15 = *(undefined8 *)(pFVar8 + 8);
          lVar25 = uVar34 + lVar37;
          uVar26 = *(undefined8 *)(pFVar11 + (uVar34 + local_1c0) * 0x18 + 0x10);
          uVar27 = (uint)~(param_3 + local_1c8) >> 0x1f;
          uVar29 = uVar23;
          if (param_3 + local_1c8 < param_2->ArrayNum) {
            uVar29 = uVar27;
          }
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          pFVar11 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar11 + lVar25 * 0x18;
          uVar16 = *(undefined8 *)pFVar8;
          uVar17 = *(undefined8 *)(pFVar8 + 8);
          uVar6 = *(undefined8 *)(pFVar11 + lVar25 * 0x18 + 0x10);
          uVar29 = uVar23;
          if ((int)uVar36 < param_2->ArrayNum) {
            uVar29 = ~uVar36 >> 0x1f;
          }
          uVar35 = (ulonglong)(uint)param_3;
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          pFVar11 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar11 + (param_3 + local_1c0) * 0x18;
          *(undefined8 *)pFVar8 = uVar16;
          *(undefined8 *)(pFVar8 + 8) = uVar17;
          *(undefined8 *)(pFVar11 + (param_3 + local_1c0) * 0x18 + 0x10) = uVar6;
          uVar29 = uVar23;
          if (local_1c8 + param_3 < param_2->ArrayNum) {
            uVar29 = uVar27;
          }
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          pFVar11 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar11 + lVar25 * 0x18;
          *(undefined8 *)pFVar8 = uVar14;
          *(undefined8 *)(pFVar8 + 8) = uVar15;
          *(undefined8 *)(pFVar11 + lVar25 * 0x18 + 0x10) = uVar26;
          uVar29 = uVar23;
          if (iVar39 + param_3 < param_1->ArrayNum) {
            uVar29 = (uint)~(iVar39 + param_3) >> 0x1f;
          }
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          uVar42 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_1c0) * 4);
          uVar29 = uVar23;
          if (local_1c8 + param_3 < param_1->ArrayNum) {
            uVar29 = (uint)~(local_1c8 + param_3) >> 0x1f;
          }
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          uVar43 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar37) * 4);
          if (iVar39 + param_3 < param_1->ArrayNum) {
            uVar23 = (uint)~(iVar39 + param_3) >> 0x1f;
          }
          if (uVar23 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_1c0) * 4) = uVar43;
          uVar29 = uVar38;
          if (local_1c8 + param_3 < param_1->ArrayNum) {
            uVar29 = (uint)~(local_1c8 + param_3) >> 0x1f;
          }
          if (uVar29 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              iVar21 = (*pcVar13)();
              return iVar21;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar37) * 4) = uVar42;
        }
      }
      iVar21 = iVar21 - iVar39;
    }
    pFVar18 = param_7;
    iVar33 = param_5 + 1;
    local_f8._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_f8._s_0.Y = _UNK_150a9e648;
    local_f8._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e0 = _UNK_150a9e6d8;
    local_d8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d0 = _UNK_1508ffb58;
    local_190 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar39,iVar33,param_6,param_7,
                                    param_8,param_9);
    local_18c = SplitTriSetMidpoint(this,param_1,param_2,iVar39 + param_3,iVar21,iVar33,param_6,
                                    pFVar18,param_8,(TAxisAlignedBox3<double> *)&local_f8._s_0);
    pTVar19 = param_9;
    pFVar18 = param_8;
    pTVar3 = &param_9->Max;
    uVar26 = (param_9->Min).field0_0x0._s_0.X;
    if (local_f8._s_0.X <= (double)uVar26) {
      uVar26 = local_f8._s_0.X;
    }
    (param_9->Min).field0_0x0._s_0.X = (double)uVar26;
    uVar26 = (param_9->Min).field0_0x0._s_0.Y;
    if (local_f8._s_0.Y <= (double)uVar26) {
      uVar26 = local_f8._s_0.Y;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar26;
    dVar41 = (param_9->Min).field0_0x0._s_0.Z;
    uVar26 = local_f8._s_0.Z;
    if (dVar41 <= local_f8._s_0.Z) {
      uVar26 = dVar41;
    }
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar26;
    dVar41 = (pTVar3->field0_0x0)._s_0.X;
    if (dVar41 <= dStack_e0) {
      dVar41 = dStack_e0;
    }
    dVar44 = (param_9->Max).field0_0x0._s_0.Z;
    (pTVar3->field0_0x0)._s_0.X = dVar41;
    dVar41 = (param_9->Max).field0_0x0._s_0.Y;
    if (dVar41 <= local_d8) {
      dVar41 = local_d8;
    }
    if (dVar44 <= dStack_d0) {
      dVar44 = dStack_d0;
    }
    (param_9->Max).field0_0x0._s_0.Y = dVar41;
    (param_9->Max).field0_0x0._s_0.Z = dVar44;
    uVar22 = param_8->IBoxCur;
    param_8->IBoxCur = uVar22 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar22);
    uVar38 = pFVar18->IIndicesCur;
    pFVar18->IIndicesCur = uVar38 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar18->IndexList,&local_190,uVar38);
    uVar38 = pFVar18->IIndicesCur;
    pFVar18->IIndicesCur = uVar38 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar18->IndexList,&local_18c,uVar38);
    uVar29 = (pFVar18->BoxCenters).CurBlock;
    pTVar31 = &pFVar18->BoxCenters;
    uVar38 = (pFVar18->BoxCenters).CurBlockUsed;
    uVar36 = uVar29 * 0x200 + uVar38;
    dVar41 = ((pTVar3->field0_0x0)._s_0.X + (pTVar19->Min).field0_0x0._s_0.X) * dVar40;
    dVar44 = ((pTVar19->Max).field0_0x0._s_0.Y + (pTVar19->Min).field0_0x0._s_0.Y) * dVar40;
    dVar45 = ((pTVar19->Max).field0_0x0._s_0.Z + (pTVar19->Min).field0_0x0._s_0.Z) * dVar40;
    if (uVar22 == uVar36) {
      if (uVar38 == 0x200) {
        if (uVar29 == (pFVar18->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        uVar29 = pTVar31->CurBlock;
        (pFVar18->BoxCenters).CurBlockUsed = 0;
        uVar38 = uVar32;
      }
    }
    else {
      if (uVar22 <= uVar36) {
        uVar34 = (ulonglong)(uVar22 & 0x1ff);
        lVar37 = *(longlong *)
                  ((pFVar18->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        *(double *)(lVar37 + uVar34 * 0x18) = dVar41;
        *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar44;
        *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar45;
        goto LAB_14c76b1bd;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar31,uVar22);
      uVar38 = (pFVar18->BoxCenters).CurBlockUsed;
      if (uVar38 == 0x200) {
        if (pTVar31->CurBlock == (pFVar18->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        (pFVar18->BoxCenters).CurBlockUsed = 0;
        uVar38 = uVar32;
      }
      uVar29 = pTVar31->CurBlock;
    }
    lVar25 = (longlong)(int)uVar38;
    lVar37 = *(longlong *)
              ((pFVar18->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
    *(double *)(lVar37 + lVar25 * 0x18) = dVar41;
    *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar44;
    *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar45;
    puVar2 = &(pFVar18->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_14c76b1bd:
    pFVar18 = param_8;
    pTVar31 = &param_8->BoxExtents;
    uVar29 = pTVar31->CurBlock;
    uVar38 = (param_8->BoxExtents).CurBlockUsed;
    uVar36 = uVar29 * 0x200 + uVar38;
    dVar41 = ((pTVar19->Max).field0_0x0._s_0.X - (pTVar19->Min).field0_0x0._s_0.X) * dVar40;
    dVar44 = ((pTVar19->Max).field0_0x0._s_0.Y - (pTVar19->Min).field0_0x0._s_0.Y) * dVar40;
    dVar40 = ((pTVar19->Max).field0_0x0._s_0.Z - (pTVar19->Min).field0_0x0._s_0.Z) * dVar40;
    if (uVar22 == uVar36) {
      if (uVar38 == 0x200) {
        if (uVar29 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        uVar29 = pTVar31->CurBlock;
        (pFVar18->BoxExtents).CurBlockUsed = 0;
        uVar38 = uVar32;
      }
    }
    else {
      if (uVar22 <= uVar36) {
        uVar34 = (ulonglong)(uVar22 & 0x1ff);
        lVar37 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        *(double *)(lVar37 + uVar34 * 0x18) = dVar41;
        *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar44;
        *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar40;
        return uVar22;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar31,uVar22);
      uVar38 = (pFVar18->BoxExtents).CurBlockUsed;
      if (uVar38 == 0x200) {
        if (pTVar31->CurBlock == (pFVar18->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar31);
        }
        pTVar31->CurBlock = pTVar31->CurBlock + 1;
        (pFVar18->BoxExtents).CurBlockUsed = 0;
        uVar38 = uVar32;
      }
      uVar29 = pTVar31->CurBlock;
    }
    lVar25 = (longlong)(int)uVar38;
    lVar37 = *(longlong *)
              ((pFVar18->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
    *(double *)(lVar37 + lVar25 * 0x18) = dVar41;
    *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar44;
    *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar40;
    puVar2 = &(pFVar18->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar22;
  }
  uVar22 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar22 + 1;
  param_9._0_4_ = uVar22;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar22);
  uVar38 = *piVar1;
  this_00 = &pFVar18->IndexList;
  *piVar1 = uVar38 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar38);
  if (0 < iVar21) {
    lVar37 = uVar34 * 4;
    param_6 = param_3;
    do {
      uVar22 = *piVar1;
      *piVar1 = uVar22 + 1;
      uVar32 = ~param_6;
      uVar38 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar38 = uVar32 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar13 = (code *)swi(3);
        iVar21 = (*pcVar13)();
        return iVar21;
      }
      uVar38 = this_00->CurBlock;
      uVar29 = (pFVar18->IndexList).CurBlockUsed;
      uVar36 = uVar38 * 0x200 + uVar29;
      pFVar8 = (param_1->AllocatorInstance).Data;
      if (uVar22 == uVar36) {
        if (uVar29 == 0x200) {
          if (uVar38 == (pFVar18->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar29 = 0;
          uVar38 = this_00->CurBlock;
          (pFVar18->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar18->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar38 * 8) +
         (longlong)(int)uVar29 * 4) = *(undefined4 *)(pFVar8 + lVar37);
        puVar2 = &(pFVar18->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar36 < uVar22) {
        TDynamicVector<int,512>::Resize(this_00,uVar22);
        uVar22 = (pFVar18->IndexList).CurBlockUsed;
        if (uVar22 == 0x200) {
          if (this_00->CurBlock == (pFVar18->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar22 = 0;
          (pFVar18->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar18->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar22 * 4) =
             *(undefined4 *)(pFVar8 + lVar37);
        puVar2 = &(pFVar18->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar18->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8) +
         (ulonglong)(uVar22 & 0x1ff) * 4) = *(undefined4 *)(pFVar8 + lVar37);
      }
      uVar22 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar22 = uVar32 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar13 = (code *)swi(3);
        iVar21 = (*pcVar13)();
        return iVar21;
      }
      uVar22 = *(uint *)((param_1->AllocatorInstance).Data + lVar37);
      uVar34 = (ulonglong)(uVar22 & 0x1ff);
      pFVar9 = this->Mesh->Mesh;
      pFVar8 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
      lVar25 = *(longlong *)
                ((pFVar9->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
      local_180 = *(ulonglong *)(lVar25 + uVar34 * 0xc);
      local_178 = *(uint *)(lVar25 + 8 + uVar34 * 0xc);
      local_170 = *(undefined1 (*) [16])
                   (*(longlong *)(pFVar8 + (ulonglong)((uint)local_180 >> 9) * 8) +
                   (ulonglong)((uint)local_180 & 0x1ff) * 0x18);
      uVar42 = local_170._0_4_;
      uVar43 = local_170._4_4_;
      local_160 = *(double *)
                   (*(longlong *)(pFVar8 + (ulonglong)((uint)local_180 >> 9) * 8) + 0x10 +
                   (ulonglong)((uint)local_180 & 0x1ff) * 0x18);
      uVar34 = (ulonglong)((uint)(local_180 >> 0x20) & 0x1ff);
      auVar7 = *(undefined1 (*) [16])
                (*(longlong *)(pFVar8 + (local_180 >> 0x29) * 8) + uVar34 * 0x18);
      dVar41 = *(double *)(*(longlong *)(pFVar8 + (local_180 >> 0x29) * 8) + 0x10 + uVar34 * 0x18);
      uVar49 = auVar7._0_4_;
      uVar51 = auVar7._4_4_;
      if ((local_170._0_8_ <= auVar7._0_8_) &&
         (uVar49 = uVar42, uVar51 = uVar43, local_170._0_8_ < auVar7._0_8_)) {
        uVar42 = auVar7._0_4_;
        uVar43 = auVar7._4_4_;
      }
      local_158._8_8_ = local_170._8_8_;
      uVar46 = local_170._8_4_;
      uVar47 = local_170._12_4_;
      dVar40 = auVar7._8_8_;
      if (((double)local_158._8_8_ <= dVar40) &&
         (bVar20 = (double)local_158._8_8_ < dVar40, dVar40 = (double)local_158._8_8_, bVar20)) {
        uVar46 = auVar7._8_4_;
        uVar47 = auVar7._12_4_;
      }
      dVar44 = dVar41;
      dVar45 = local_160;
      if ((local_160 <= dVar41) && (dVar44 = local_160, local_160 < dVar41)) {
        dVar45 = dVar41;
      }
      auVar7 = *(undefined1 (*) [16])
                (*(longlong *)(pFVar8 + (ulonglong)(local_178 >> 9) * 8) +
                (ulonglong)(local_178 & 0x1ff) * 0x18);
      dVar41 = auVar7._0_8_;
      local_130 = *(double *)
                   (*(longlong *)(pFVar8 + (ulonglong)(local_178 >> 9) * 8) + 0x10 +
                   (ulonglong)(local_178 & 0x1ff) * 0x18);
      uVar48 = auVar7._0_4_;
      uVar50 = auVar7._4_4_;
      if (((double)CONCAT44(uVar51,uVar49) <= dVar41) &&
         (uVar48 = uVar49, uVar50 = uVar51,
         (double)CONCAT44(uVar43,uVar42) <= dVar41 && dVar41 != (double)CONCAT44(uVar43,uVar42))) {
        uVar42 = auVar7._0_4_;
        uVar43 = auVar7._4_4_;
      }
      dVar41 = auVar7._8_8_;
      if ((dVar40 <= dVar41) &&
         (bVar20 = dVar41 != (double)CONCAT44(uVar47,uVar46),
         bVar12 = (double)CONCAT44(uVar47,uVar46) <= dVar41, dVar41 = dVar40, bVar12 && bVar20)) {
        uVar46 = auVar7._8_4_;
        uVar47 = auVar7._12_4_;
      }
      dVar40 = local_130;
      if ((dVar44 <= local_130) && (dVar40 = dVar44, dVar45 < local_130)) {
        dVar45 = local_130;
      }
      dVar44 = (pTVar19->Max).field0_0x0._s_0.Y;
      dVar4 = (pTVar19->Max).field0_0x0._s_0.Z;
      if (dVar44 <= (double)CONCAT44(uVar47,uVar46)) {
        dVar44 = (double)CONCAT44(uVar47,uVar46);
      }
      dVar5 = *(double *)&(pTVar19->Max).field0_0x0;
      if ((double)CONCAT44(uVar43,uVar42) <= dVar5) {
        uVar42 = SUB84(dVar5,0);
        uVar43 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      dVar5 = *(double *)&(pTVar19->Min).field0_0x0;
      if (dVar5 <= (double)CONCAT44(uVar50,uVar48)) {
        uVar48 = SUB84(dVar5,0);
        uVar50 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      dVar5 = (pTVar19->Min).field0_0x0._s_0.Y;
      if (dVar5 <= dVar41) {
        dVar41 = dVar5;
      }
      dVar5 = (pTVar19->Min).field0_0x0._s_0.Z;
      if (dVar5 <= dVar40) {
        dVar40 = dVar5;
      }
      param_6 = param_6 + 1;
      (pTVar19->Max).field0_0x0._s_0.Y = dVar44;
      (pTVar19->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar43,uVar42);
      lVar37 = lVar37 + 4;
      if (dVar4 <= dVar45) {
        dVar4 = dVar45;
      }
      (pTVar19->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar50,uVar48);
      (pTVar19->Min).field0_0x0._s_0.Y = dVar41;
      (pTVar19->Min).field0_0x0._s_0.Z = dVar40;
      (pTVar19->Max).field0_0x0._s_0.Z = dVar4;
      uVar22 = (uint)param_9;
      local_158 = local_170;
      local_148 = local_160;
    } while (param_6 - param_3 < iVar21);
  }
  pFVar18 = param_7;
  dVar45 = __real_3fe0000000000000;
  uVar32 = (param_7->BoxCenters).CurBlock;
  uVar38 = (param_7->BoxCenters).CurBlockUsed;
  uVar29 = uVar32 * 0x200 + uVar38;
  dVar41 = ((pTVar19->Max).field0_0x0._s_0.X + (pTVar19->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar40 = ((pTVar19->Max).field0_0x0._s_0.Y + (pTVar19->Min).field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar44 = ((pTVar19->Max).field0_0x0._s_0.Z + (pTVar19->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar22 == uVar29) {
    if (uVar38 == 0x200) {
      if (uVar32 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&param_7->BoxCenters);
      }
      (pFVar18->BoxCenters).CurBlock = (pFVar18->BoxCenters).CurBlock + 1;
      uVar38 = 0;
      uVar32 = (pFVar18->BoxCenters).CurBlock;
      (pFVar18->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar22 <= uVar29) {
      uVar34 = (ulonglong)(uVar22 & 0x1ff);
      lVar37 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8)
      ;
      *(double *)(lVar37 + uVar34 * 0x18) = dVar41;
      *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar40;
      *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar44;
      goto LAB_14c76a739;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&param_7->BoxCenters,uVar22);
    uVar38 = (pFVar18->BoxCenters).CurBlockUsed;
    if (uVar38 == 0x200) {
      if ((pFVar18->BoxCenters).CurBlock == (pFVar18->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar18->BoxCenters);
      }
      (pFVar18->BoxCenters).CurBlock = (pFVar18->BoxCenters).CurBlock + 1;
      uVar38 = 0;
      (pFVar18->BoxCenters).CurBlockUsed = 0;
    }
    uVar32 = (pFVar18->BoxCenters).CurBlock;
  }
  lVar25 = (longlong)(int)uVar38;
  lVar37 = *(longlong *)
            ((pFVar18->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
  *(double *)(lVar37 + lVar25 * 0x18) = dVar41;
  *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar40;
  *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar44;
  puVar2 = &(pFVar18->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_14c76a739:
  uVar32 = (pFVar18->BoxExtents).CurBlock;
  uVar38 = (pFVar18->BoxExtents).CurBlockUsed;
  uVar29 = uVar32 * 0x200 + uVar38;
  dVar41 = ((pTVar19->Max).field0_0x0._s_0.X - (pTVar19->Min).field0_0x0._s_0.X) * dVar45;
  dVar40 = ((pTVar19->Max).field0_0x0._s_0.Y - (pTVar19->Min).field0_0x0._s_0.Y) * dVar45;
  dVar45 = ((pTVar19->Max).field0_0x0._s_0.Z - (pTVar19->Min).field0_0x0._s_0.Z) * dVar45;
  if (uVar22 == uVar29) {
    if (uVar38 == 0x200) {
      if (uVar32 == (pFVar18->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar18->BoxExtents);
      }
      (pFVar18->BoxExtents).CurBlock = (pFVar18->BoxExtents).CurBlock + 1;
      uVar38 = 0;
      uVar32 = (pFVar18->BoxExtents).CurBlock;
      (pFVar18->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar22 <= uVar29) {
      uVar34 = (ulonglong)(uVar22 & 0x1ff);
      lVar37 = *(longlong *)
                ((pFVar18->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8)
      ;
      *(double *)(lVar37 + uVar34 * 0x18) = dVar41;
      *(double *)(lVar37 + 8 + uVar34 * 0x18) = dVar40;
      *(double *)(lVar37 + 0x10 + uVar34 * 0x18) = dVar45;
      return ~uVar22;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&pFVar18->BoxExtents,uVar22);
    uVar38 = (pFVar18->BoxExtents).CurBlockUsed;
    if (uVar38 == 0x200) {
      if ((pFVar18->BoxExtents).CurBlock == (pFVar18->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar18->BoxExtents);
      }
      (pFVar18->BoxExtents).CurBlock = (pFVar18->BoxExtents).CurBlock + 1;
      (pFVar18->BoxExtents).CurBlockUsed = 0;
      uVar38 = 0;
    }
    uVar32 = (pFVar18->BoxExtents).CurBlock;
  }
  lVar25 = (longlong)(int)uVar38;
  lVar37 = *(longlong *)
            ((pFVar18->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
  *(double *)(lVar37 + lVar25 * 0x18) = dVar41;
  *(double *)(lVar37 + 8 + lVar25 * 0x18) = dVar40;
  *(double *)(lVar37 + 0x10 + lVar25 * 0x18) = dVar45;
  puVar2 = &(pFVar18->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar22;
}

// SupportsNearestTriangle @ 14c76b510

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::SupportsNearestTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this)

{
  return true;
}

// SupportsPointContainment @ 14c76b520

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::SupportsPointContainment
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 14c76b530

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this)

{
  return true;
}

// TestAnyHitTriangle @ 14c76b540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestAnyHitTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TRay<double> *param_2,
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
  FDynamicMesh3 *pFVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  bool bVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
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
    uVar26 = *(uint *)(lVar8 + (ulonglong)(uVar4 & 0x1ff) * 4);
    dVar15 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar26 < 0) {
      uVar26 = ~uVar26;
      dVar13 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar26,param_2);
    }
    else {
      iVar25 = uVar26 - 1;
      uVar26 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                       (ulonglong)(uVar4 + 1 & 0x1ff) * 4) - 1;
      dVar14 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar25,param_2);
      dVar13 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar26,param_2);
      if (dVar13 <= dVar14) {
        if (dVar15 < dVar13) {
          return false;
        }
        bVar19 = TestAnyHitTriangle(this,uVar26,param_2,param_3,param_4,param_5);
        if (!bVar19) {
          if (dVar15 < dVar14) {
            return false;
          }
          bVar19 = TestAnyHitTriangle(this,iVar25,param_2,param_3,param_4,param_5);
          return bVar19;
        }
        return true;
      }
      if (dVar15 < dVar14) {
        return false;
      }
      bVar19 = TestAnyHitTriangle(this,iVar25,param_2,param_3,param_4,param_5);
      if (bVar19) {
        return true;
      }
    }
    if ((dVar13 <= dVar15) &&
       (bVar19 = TestAnyHitTriangle(this,uVar26,param_2,param_3,param_4,param_5), bVar19)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar8 + (ulonglong)(uVar4 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar26 = uVar4 + 1;
  do {
    uVar5 = *(uint *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c76b64c:
      pFVar11 = this->Mesh->Mesh;
      uVar21 = (ulonglong)(uVar5 & 0x1ff);
      lVar8 = *(longlong *)
               ((pFVar11->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
      pFVar7 = (pFVar11->Vertices).Blocks.AllocatorInstance.Data;
      uVar5 = *(uint *)(lVar8 + uVar21 * 0xc);
      uVar23 = (ulonglong)(uVar5 & 0x1ff);
      uVar6 = *(uint *)(lVar8 + 4 + uVar21 * 0xc);
      lVar12 = *(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8);
      uVar24 = (ulonglong)(uVar6 & 0x1ff);
      pdVar1 = (double *)(lVar12 + uVar23 * 0x18);
      local_1a0._s_0.X = *pdVar1;
      local_1a0._s_0.Y = pdVar1[1];
      local_1e8 = *(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8);
      local_1f8 = uVar24 * 3;
      local_1a0._s_0.Z = *(double *)(lVar12 + 0x10 + uVar23 * 0x18);
      pdVar1 = (double *)(local_1e8 + uVar24 * 0x18);
      local_1b8._s_0.X = *pdVar1;
      local_1b8._s_0.Y = pdVar1[1];
      local_1b8._s_0.Z = *(double *)(local_1e8 + 0x10 + uVar24 * 0x18);
      uVar5 = *(uint *)(lVar8 + 8 + uVar21 * 0xc);
      uVar21 = (ulonglong)(uVar5 & 0x1ff);
      local_1d8 = *(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8);
      local_1e0 = uVar21 * 3;
      pdVar1 = (double *)(local_1d8 + uVar21 * 0x18);
      local_1d0._s_0.X = *pdVar1;
      local_1d0._s_0.Y = pdVar1[1];
      local_1d0._s_0.Z = *(double *)(local_1d8 + 0x10 + uVar21 * 0x18);
      bVar19 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1a0._s_0,
                          (TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_1d0._s_0);
      if (bVar19) {
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        pdVar1 = (double *)(lVar12 + uVar23 * 0x18);
        local_108._s_0.X = *pdVar1;
        local_108._s_0.Y = pdVar1[1];
        puVar2 = (undefined8 *)(local_1e8 + local_1f8 * 8);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        uVar20 = *(undefined8 *)(local_1e8 + 0x10 + local_1f8 * 8);
        puVar3 = (undefined4 *)(lVar12 + 0x10 + uVar23 * 0x18);
        uStack_178 = *puVar3;
        uStack_174 = puVar3[1];
        puVar2 = (undefined8 *)(local_1d8 + local_1e0 * 8);
        local_d8 = *puVar2;
        uStack_d0 = puVar2[1];
        local_c8 = *(undefined8 *)(local_1d8 + 0x10 + local_1e0 * 8);
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_168._0_4_ = (undefined4)uVar17;
        uStack_168._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_160 = (undefined4)uVar20;
        uStack_15c = (undefined4)((ulonglong)uVar20 >> 0x20);
        local_170._0_4_ = (undefined4)uVar16;
        local_170._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = uVar16;
        uStack_168 = uVar17;
        local_108._16_4_ = uStack_178;
        local_108._20_4_ = uStack_174;
        uStack_e0 = uStack_160;
        uStack_dc = uStack_15c;
        bVar19 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar19) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_1f8 = CONCAT44(local_1f8._4_4_,uVar5);
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar9 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar10 = *(code **)&param_5->TriangleFilterF;
      plVar22 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar9 != (longlong *)0x0) {
        plVar22 = plVar9;
      }
      uVar20 = (**(code **)(*plVar22 + 8))();
      cVar18 = (*pcVar10)(uVar20,&local_1f8);
      if (cVar18 != '\0') goto LAB_14c76b64c;
    }
    uVar26 = uVar26 + 1;
    if (local_1f0 < (int)(uVar26 - uVar4)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14c76b980

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestAnyHitTriangle
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TRay<double> *param_1,
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

// TestIntersection @ 14c76b9d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,TTriangle3<double> *param_1,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14c76bab0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,
          TMeshAABBTree3<FSkipTransparentMeshWrapper> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<FSkipTransparentMeshWrapper> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<FSkipTransparentMeshWrapper> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14c76bb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,FSkipTransparentMeshWrapper *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  uint uVar5;
  FDynamicMesh3 *this_00;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  TAxisAlignedBox3<double> *pTVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  undefined1 auStackY_168 [32];
  uint local_130;
  uint uStack_12c;
  undefined1 local_118 [16];
  undefined **local_108;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_100;
  undefined8 local_f0;
  FQueryOptions *local_e8;
  TVector<double>_u_0 local_e0 [2];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  uVar16 = 0;
  local_e8 = param_4;
  if (((dVar4 < (param_2->Max).field0_0x0._s_0.X || dVar4 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar4 = (param_2->Min).field0_0x0._s_0.Y, pdVar2 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar4 < *pdVar2 || dVar4 == *pdVar2)) &&
     (dVar4 = (param_2->Min).field0_0x0._s_0.Z, pdVar2 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar4 < *pdVar2 || dVar4 == *pdVar2)) {
    if (*(longlong *)param_3 != 0) {
      local_f0 = 0;
      local_108 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__UEBA_NPEBUFSkipTransparentMeshWrapper__U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
           ::Call;
      local_100 = param_3;
      pTVar13 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          ((TAxisAlignedBox3<double> *)&local_e0[0]._s_0,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_118);
      dVar4 = (pTVar13->Min).field0_0x0._s_0.Y;
      dVar8 = (pTVar13->Min).field0_0x0._s_0.Z;
      dVar9 = (pTVar13->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar13->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar13->Max).field0_0x0._s_0.Y;
      dVar10 = (pTVar13->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar8;
      (param_2->Max).field0_0x0._s_0.X = dVar9;
      (param_2->Max).field0_0x0._s_0.Y = dVar4;
      (param_2->Max).field0_0x0._s_0.Z = dVar10;
    }
    bVar11 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar11) {
      return false;
    }
  }
  iVar18 = (param_1->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar18) {
    do {
      uVar19 = (uint)uVar16;
      this_00 = param_1->Mesh;
      if (*(void **)param_3 == (void *)0x0) {
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this_00,uVar19,(TVector<double> *)&local_a8._s_0,
                   (TVector<double> *)&local_90._s_0,(TVector<double> *)&local_78._s_0);
      }
      else {
        lVar6 = *(longlong *)
                 ((this_00->Triangles).Blocks.AllocatorInstance.Data + (uVar16 >> 9) * 8);
        uVar15 = *(undefined8 *)(lVar6 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
        uVar5 = *(uint *)(lVar6 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
        local_130 = (uint)uVar15;
        lVar6 = *(longlong *)
                 ((this_00->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_130 >> 9) * 8);
        pdVar2 = (double *)(lVar6 + (ulonglong)(local_130 & 0x1ff) * 0x18);
        local_e0[0]._0_8_ = *pdVar2;
        local_e0[0]._8_8_ = pdVar2[1];
        local_e0[0]._16_8_ = *(double *)(lVar6 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        puVar1 = &param_3->field_0x10;
        pcVar7 = *(code **)param_3;
        plVar17 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar17 = (longlong *)puVar1;
        }
        uVar14 = (**(code **)(*plVar17 + 8))();
        (*pcVar7)(local_118,uVar14,local_e0);
        uStack_12c = (uint)((ulonglong)uVar15 >> 0x20);
        local_a8._s_0.X = (double)local_118._0_8_;
        local_a8._s_0.Y = (double)local_118._8_8_;
        local_a8._s_0.Z = (double)local_108;
        lVar6 = *(longlong *)
                 ((param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uStack_12c >> 9) * 8);
        puVar3 = (undefined8 *)(lVar6 + (ulonglong)(uStack_12c & 0x1ff) * 0x18);
        local_118._0_8_ = *puVar3;
        local_118._8_8_ = puVar3[1];
        local_108 = *(undefined ***)(lVar6 + 0x10 + (ulonglong)(uStack_12c & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar7 = *(code **)param_3;
        plVar17 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar17 = (longlong *)puVar1;
        }
        uVar15 = (**(code **)(*plVar17 + 8))();
        (*pcVar7)(local_e0,uVar15,local_118);
        local_90._0_8_ = local_e0[0]._s_0.X;
        local_90._8_8_ = local_e0[0]._s_0.Y;
        local_90._s_0.Z = (double)local_e0[0]._16_8_;
        uVar16 = (ulonglong)(uVar5 & 0x1ff);
        lVar6 = *(longlong *)
                 ((param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar5 >> 9) * 8);
        puVar3 = (undefined8 *)(lVar6 + uVar16 * 0x18);
        local_118._0_8_ = *puVar3;
        local_118._8_8_ = puVar3[1];
        local_108 = *(undefined ***)(lVar6 + 0x10 + uVar16 * 0x18);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar7 = *(code **)param_3;
        plVar17 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar17 = (longlong *)puVar1;
        }
        uVar15 = (**(code **)(*plVar17 + 8))();
        (*pcVar7)(local_e0,uVar15,local_118);
        local_78._0_4_ = local_e0[0]._0_4_;
        local_78._4_4_ = local_e0[0]._4_4_;
        local_78._8_4_ = local_e0[0]._8_4_;
        local_78._12_4_ = local_e0[0]._12_4_;
        local_78._s_0.Z = (double)local_e0[0]._16_8_;
      }
      cVar12 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,local_e8);
      if (cVar12 != '\0') {
        return true;
      }
      uVar16 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < iVar18);
  }
  return false;
}

// TestSelfIntersection @ 14c76be40

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestSelfIntersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 14c76fad0

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TreeTraversalImpl
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,int param_2,
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
LAB_14c76fbe6:
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
          if (cVar10 != '\0') goto LAB_14c76fbe6;
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

// box_box_distsqr @ 14c77c2a0

double __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::box_box_distsqr
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,
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

// box_box_intersect @ 14c77c380

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::box_box_intersect
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,
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

// find_any_intersection @ 14c77c4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_any_intersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TTriangle3<double> *param_2
          ,TAxisAlignedBox3<double> *param_3,
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
LAB_14c77c5a8:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh->Mesh,iVar10,&local_a8,&local_90,&local_78);
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
          if (cVar7 != '\0') goto LAB_14c77c5a8;
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

// find_any_intersection @ 14c77c730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_any_intersection
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,
          TMeshAABBTree3<FSkipTransparentMeshWrapper> *param_2,
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
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TMeshAABBTree3<FSkipTransparentMeshWrapper> *pTVar12;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar13;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar14;
  FQueryOptions *pFVar15;
  char cVar16;
  bool bVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 auStackY_228 [32];
  bool local_1d8;
  int local_1d0 [2];
  int local_1c8;
  int local_1c4;
  TMeshAABBTree3<FSkipTransparentMeshWrapper> *local_1c0 [2];
  int local_1b0 [2];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1a8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double local_180;
  double local_178;
  int local_170;
  ulonglong local_168;
  FQueryOptions *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double> local_108;
  TVector<double> local_f0;
  TVector<double> local_d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar24 = (ulonglong)(param_1 & 0x1ff);
  uVar23 = (ulonglong)((uint)param_1 >> 9);
  uVar4 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar23 * 8) +
                   uVar24 * 4);
  local_1d0[0] = param_4;
  local_160 = param_8;
  uVar19 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_1c8 = param_1;
  local_1c0[0] = param_2;
  local_1a8 = param_3;
  if ((int)uVar4 < this->TrianglesEnd) {
    if ((int)uVar19 < param_2->TrianglesEnd) {
      local_1c8 = 1;
      iVar25 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      local_1c4 = *(int *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
      local_170 = iVar25;
      if (local_1c4 < 1) {
        return false;
      }
      do {
        pFVar15 = local_160;
        pTVar12 = local_1c0[0];
        uVar19 = uVar19 + 1;
        local_168 = (ulonglong)uVar19;
        local_1b0[0] = *(int *)(*(longlong *)
                                 ((local_1c0[0]->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
        if (*(void **)&local_160->TriangleFilterF == (void *)0x0) {
LAB_14c77c8d3:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (pTVar12->Mesh->Mesh,local_1b0[0],(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          pTVar13 = local_1a8;
          if (*(void **)local_1a8 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_1a8);
            pcVar5 = *(code **)pTVar13;
            puVar22 = &pTVar13->field_0x10;
            plVar20 = *(longlong **)&pTVar13->field_0x28;
            if (*(longlong **)&pTVar13->field_0x28 == (longlong *)0x0) {
              plVar20 = (longlong *)puVar22;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*pcVar5)(&local_1a0,uVar18,&local_158);
            pTVar14 = local_1a8;
            local_158._s_0.X = local_1a0._s_0.X;
            local_158._s_0.Y = local_1a0._s_0.Y;
            local_158._s_0.Z = local_1a0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1a8);
            pcVar5 = *(code **)pTVar14;
            plVar20 = *(longlong **)&pTVar13->field_0x28;
            if (*(longlong **)&pTVar13->field_0x28 == (longlong *)0x0) {
              plVar20 = (longlong *)puVar22;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*pcVar5)(&local_1a0,uVar18,&local_140);
            pTVar14 = local_1a8;
            local_140._s_0.X = local_1a0._s_0.X;
            local_140._s_0.Y = local_1a0._s_0.Y;
            local_140._s_0.Z = local_1a0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1a8);
            pcVar5 = *(code **)pTVar14;
            plVar20 = *(longlong **)&pTVar13->field_0x28;
            if (*(longlong **)&pTVar13->field_0x28 == (longlong *)0x0) {
              plVar20 = (longlong *)puVar22;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*pcVar5)(&local_1a0,uVar18,&local_128);
            local_128._s_0.X = local_1a0._s_0.X;
            local_128._s_0.Y = local_1a0._s_0.Y;
            local_128._s_0.Z = local_1a0._s_0.Z;
          }
          if (0 < iVar25) {
            uVar19 = uVar4 + 1;
            do {
              iVar25 = *(int *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c77ca28:
                FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (this->Mesh->Mesh,iVar25,&local_108,&local_f0,&local_d8);
                cVar16 = (**(code **)param_6)
                                   (*(undefined8 *)&param_6->field_0x8,&local_158,&local_108);
                if (cVar16 != '\0') {
                  return true;
                }
              }
              else {
                local_1b0[0] = iVar25;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar20 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar5 = *(code **)&param_7->TriangleFilterF;
                plVar21 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar20 != (longlong *)0x0) {
                  plVar21 = plVar20;
                }
                uVar18 = (**(code **)(*plVar21 + 8))();
                cVar16 = (*pcVar5)(uVar18,local_1b0);
                if (cVar16 != '\0') goto LAB_14c77ca28;
              }
              uVar19 = uVar19 + 1;
              iVar25 = local_170;
            } while ((int)(uVar19 - uVar4) <= local_170);
          }
        }
        else {
          local_1d0[0] = local_1b0[0];
          Core::Private::Function::CheckCallable(*(void **)&local_160->TriangleFilterF);
          pcVar5 = *(code **)&pFVar15->TriangleFilterF;
          plVar20 = *(longlong **)&(local_160->TriangleFilterF).field_0x28;
          plVar21 = (longlong *)&(local_160->TriangleFilterF).field_0x10;
          if (plVar20 != (longlong *)0x0) {
            plVar21 = plVar20;
          }
          uVar18 = (**(code **)(*plVar21 + 8))();
          cVar16 = (*pcVar5)(uVar18,local_1d0);
          if (cVar16 != '\0') goto LAB_14c77c8d3;
        }
        local_1c8 = local_1c8 + 1;
        uVar19 = (uint)local_168;
        if (local_1c4 < local_1c8) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar19 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,param_4,param_3);
    pFVar8 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar19 = *(uint *)(*(longlong *)(pFVar8 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)uVar19 < 0) {
      bVar17 = box_box_intersect(this,~uVar19,(TAxisAlignedBox3<double> *)&local_1a0._s_0);
      if (!bVar17) {
        return false;
      }
      local_1c0[0] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)param_6;
      local_1c0[1] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,~uVar19,param_2,local_1a8,local_1d0[0],param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_1c0,param_7,param_8);
      return bVar17;
    }
    local_1c8 = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                        (ulonglong)(uVar4 + 1 & 0x1ff) * 4) + -1;
    local_1c4 = param_5 + 1;
    bVar17 = box_box_intersect(this,uVar19 - 1,(TAxisAlignedBox3<double> *)&local_1a0._s_0);
    pTVar13 = local_1a8;
    if (bVar17) {
      local_1c0[0] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)param_6;
      local_1c0[1] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,uVar19 - 1,param_2,local_1a8,local_1d0[0],param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_1c0,param_7,param_8);
      if (bVar17) {
        return true;
      }
    }
    bVar17 = box_box_intersect(this,local_1c8,(TAxisAlignedBox3<double> *)&local_1a0._s_0);
    if (!bVar17) {
      return false;
    }
    local_1c0[0] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)param_6;
    local_1c0[1] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)&param_6->field_0x8;
    bVar17 = find_any_intersection
                       (this,local_1c8,param_2,pTVar13,local_1d0[0],local_1c4,
                        (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                         *)local_1c0,param_7,param_8);
    return bVar17;
  }
  lVar6 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar23 * 8);
  dVar1 = *(double *)(lVar6 + uVar24 * 0x18);
  lVar7 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar23 * 8);
  dVar2 = *(double *)(lVar6 + 8 + uVar24 * 0x18);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar24 * 0x18);
  dVar9 = dVar1 - *(double *)(lVar7 + uVar24 * 0x18);
  dVar10 = dVar2 - *(double *)(lVar7 + 8 + uVar24 * 0x18);
  dVar11 = dVar3 - *(double *)(lVar7 + 0x10 + uVar24 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar7 + uVar24 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar7 + 8 + uVar24 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar7 + 0x10 + uVar24 * 0x18);
  pFVar8 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)(pFVar8 + (ulonglong)(uVar19 >> 9) * 8) +
                   (ulonglong)(uVar19 & 0x1ff) * 4);
  if ((int)uVar4 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,~uVar4,param_3);
    if (((dVar1 <= local_1a0._s_0.X) || (local_188 <= dVar9)) ||
       ((dVar2 <= local_1a0._s_0.Y ||
        (((local_180 <= dVar10 || (dVar3 <= local_1a0._s_0.Z)) || (local_178 <= dVar11)))))) {
      return false;
    }
    local_1c0[0] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)param_6;
    local_1c0[1] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)&param_6->field_0x8;
  }
  else {
    local_1d8 = false;
    local_1c4 = uVar4 - 1;
    local_1d0[0] = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                           (ulonglong)(uVar19 + 1 & 0x1ff) * 4) + -1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,local_1c4,param_3);
    if ((((local_1a0._s_0.X < dVar1) && (dVar9 < local_188)) && (local_1a0._s_0.Y < dVar2)) &&
       (((dVar10 < local_180 && (local_1a0._s_0.Z < dVar3)) && (dVar11 < local_178)))) {
      local_1c0[0] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)param_6;
      local_1c0[1] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)&param_6->field_0x8;
      local_1d8 = find_any_intersection
                            (this,local_1c8,param_2,param_3,local_1c4,param_5 + 1,
                             (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                              *)local_1c0,param_7,param_8);
      if (local_1d8) {
        return true;
      }
    }
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,local_1d0[0],param_3);
    if (dVar1 <= local_1a0._s_0.X) {
      return local_1d8;
    }
    if (local_188 <= dVar9) {
      return local_1d8;
    }
    if (dVar2 <= local_1a0._s_0.Y) {
      return local_1d8;
    }
    if (local_180 <= dVar10) {
      return local_1d8;
    }
    if (dVar3 <= local_1a0._s_0.Z) {
      return local_1d8;
    }
    if (local_178 <= dVar11) {
      return local_1d8;
    }
    local_1c0[0] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)param_6;
    local_1c0[1] = *(TMeshAABBTree3<FSkipTransparentMeshWrapper> **)&param_6->field_0x8;
  }
  bVar17 = find_any_intersection
                     (this,local_1c8,param_2,param_3,local_1d0[0],param_5 + 1,
                      (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                       *)local_1c0,param_7,param_8);
  return bVar17;
}

// find_intersections @ 14c77cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_intersections
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,
          TMeshAABBTree3<FSkipTransparentMeshWrapper> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar12;
  char cVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 *puVar19;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auStackY_368 [32];
  uint uVar24;
  int local_310 [2];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_308;
  uint local_300;
  uint local_2fc;
  FQueryOptions *local_2f8 [2];
  TVector<double>_u_0 local_2e8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  FIntersectionsQueryResult *local_2a8;
  TMeshAABBTree3<FSkipTransparentMeshWrapper> *local_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 TStack_280;
  TVector<double>_u_0 local_268;
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
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uVar22 = (ulonglong)(param_1 & 0x1ff);
  uVar21 = (ulonglong)((uint)param_1 >> 9);
  local_310[0] = param_4;
  local_2fc = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar21 * 8)
                       + uVar22 * 4);
  local_2a8 = param_6;
  local_2f8[0] = param_9;
  local_300 = *(uint *)(*(longlong *)
                         ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_308 = param_3;
  local_2a0 = param_2;
  if ((int)local_2fc < this->TrianglesEnd) {
    if ((int)local_300 < param_2->TrianglesEnd) {
      uVar24 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_2fc >> 9) * 8) + (ulonglong)(local_2fc & 0x1ff) * 4);
      uVar18 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_300 >> 9) * 8) + (ulonglong)(local_300 & 0x1ff) * 4);
      local_2b0 = (ulonglong)uVar18;
      if ((int)uVar18 < 1) {
        return;
      }
      do {
        local_300 = local_300 + 1;
        local_2b8 = (ulonglong)local_300;
        iVar6 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_300 >> 9) * 8) + (ulonglong)(local_300 & 0x1ff) * 4);
        local_300 = iVar6;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c77d0cf:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (param_2->Mesh->Mesh,iVar6,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar20 = local_308;
          if (*(void **)local_308 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_308);
            pcVar7 = *(code **)pTVar20;
            puVar19 = &pTVar20->field_0x10;
            plVar16 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar16 = (longlong *)puVar19;
            }
            uVar15 = (**(code **)(*plVar16 + 8))();
            (*pcVar7)(&local_2e8,uVar15,&local_248);
            pTVar12 = local_308;
            local_248._s_0.X = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_);
            local_248._s_0.Y = (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_);
            local_248._s_0.Z = local_2e8._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_308);
            pcVar7 = *(code **)pTVar12;
            plVar16 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar16 = (longlong *)puVar19;
            }
            uVar15 = (**(code **)(*plVar16 + 8))();
            (*pcVar7)(&local_2e8,uVar15,&TStack_230);
            pTVar12 = local_308;
            TStack_230._s_0.X = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_);
            TStack_230._s_0.Y = (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_);
            TStack_230._s_0.Z = local_2e8._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_308);
            pcVar7 = *(code **)pTVar12;
            plVar16 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar16 = (longlong *)puVar19;
            }
            uVar15 = (**(code **)(*plVar16 + 8))();
            (*pcVar7)(&local_2e8,uVar15,&local_218);
            local_218._0_4_ = local_2e8._0_4_;
            local_218._4_4_ = local_2e8._4_4_;
            local_218._8_4_ = local_2e8._8_4_;
            local_218._12_4_ = local_2e8._12_4_;
            local_218._s_0.Z = local_2e8._s_0.Z;
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
          if (0 < (int)uVar24) {
            uVar22 = (ulonglong)uVar24;
            uVar18 = local_2fc;
            do {
              uVar18 = uVar18 + 1;
              iVar6 = *(int *)(*(longlong *)
                                ((this->IndexList).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c77d27a:
                FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (this->Mesh->Mesh,iVar6,(TVector<double> *)&local_298._s_0,
                           (TVector<double> *)&TStack_280._s_0,(TVector<double> *)&local_268._s_0);
                local_1b0 = local_298._s_0.X;
                dStack_1a8 = local_298._s_0.Y;
                local_15c = local_15c & 0xffffffff00000000;
                local_190 = TStack_280._s_0.Y;
                dStack_188 = TStack_280._s_0.Z;
                local_1a0 = local_298._s_0.Z;
                dStack_198 = TStack_280._s_0.X;
                local_170 = local_268._s_0.Z;
                local_180 = local_268._0_4_;
                uStack_17c = local_268._4_4_;
                uStack_178 = local_268._8_4_;
                uStack_174 = local_268._12_4_;
                cVar13 = (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_1f8);
                if (cVar13 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,iVar6,local_300,
                             local_2a8);
                }
              }
              else {
                local_310[0] = iVar6;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar16 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar7 = *(code **)&param_8->TriangleFilterF;
                plVar17 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar16 != (longlong *)0x0) {
                  plVar17 = plVar16;
                }
                uVar15 = (**(code **)(*plVar17 + 8))();
                cVar13 = (*pcVar7)(uVar15,local_310);
                if (cVar13 != '\0') goto LAB_14c77d27a;
              }
              uVar22 = uVar22 - 1;
              param_2 = local_2a0;
              param_9 = local_2f8[0];
            } while (uVar22 != 0);
          }
        }
        else {
          local_310[0] = iVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar16 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_9->TriangleFilterF;
          plVar17 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar16 != (longlong *)0x0) {
            plVar17 = plVar16;
          }
          uVar15 = (**(code **)(*plVar17 + 8))();
          cVar13 = (*pcVar7)(uVar15,local_310);
          if (cVar13 != '\0') goto LAB_14c77d0cf;
        }
        local_300 = (uint)local_2b8;
        local_2b0 = local_2b0 - 1;
        if (local_2b0 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)local_300 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2e8._s_0,param_4,param_3);
    uVar24 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_2fc >> 9) * 8) + (ulonglong)(local_2fc & 0x1ff) * 4);
    if ((int)uVar24 < 0) {
      bVar14 = box_box_intersect(this,~uVar24,(TAxisAlignedBox3<double> *)&local_2e8._s_0);
      if (!bVar14) {
        return;
      }
      local_2f8[0] = *(FQueryOptions **)param_7;
      local_2f8[1] = *(FQueryOptions **)&param_7->field_0x8;
      find_intersections(this,~uVar24,param_2,local_308,local_310[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_2f8,param_8,param_9);
      return;
    }
    bVar14 = box_box_intersect(this,uVar24 - 1,(TAxisAlignedBox3<double> *)&local_2e8._s_0);
    if (bVar14) {
      local_2f8[0] = *(FQueryOptions **)param_7;
      local_2f8[1] = *(FQueryOptions **)&param_7->field_0x8;
      find_intersections(this,uVar24 - 1,param_2,local_308,local_310[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_2f8,param_8,param_9);
    }
    iVar6 = *(int *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_2fc + 1 >> 9) * 8) + (ulonglong)(local_2fc + 1 & 0x1ff) * 4)
    ;
    bVar14 = box_box_intersect(this,iVar6 + -1,(TAxisAlignedBox3<double> *)&local_2e8._s_0);
    if (!bVar14) {
      return;
    }
    local_2f8[0] = *(FQueryOptions **)param_7;
    local_2f8[1] = *(FQueryOptions **)&param_7->field_0x8;
    find_intersections(this,iVar6 + -1,param_2,local_308,local_310[0],param_5 + 1,param_6,
                       (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                        *)local_2f8,param_8,param_9);
    return;
  }
  dVar2 = this->BoxEps;
  lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar21 * 8);
  dVar3 = *(double *)(lVar8 + uVar22 * 0x18);
  lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar21 * 8);
  dVar4 = *(double *)(lVar8 + 8 + uVar22 * 0x18);
  dVar5 = *(double *)(lVar8 + 0x10 + uVar22 * 0x18);
  pdVar1 = (double *)(lVar9 + uVar22 * 0x18);
  local_2e8._s_0.Z = *(double *)(lVar9 + 0x10 + uVar22 * 0x18);
  dVar23 = dVar2 + *pdVar1;
  dVar10 = dVar2 + pdVar1[1];
  dVar11 = dVar3 - dVar23;
  uVar24 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_300 >> 9) * 8) + (ulonglong)(local_300 & 0x1ff) * 4);
  dVar3 = dVar3 + dVar23;
  dVar23 = dVar4 - dVar10;
  dVar4 = dVar4 + dVar10;
  dVar10 = dVar5 - (dVar2 + local_2e8._s_0.Z);
  dVar5 = dVar5 + dVar2 + local_2e8._s_0.Z;
  if ((int)uVar24 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2e8._s_0,~uVar24,param_3);
    if (dVar3 < (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_) ||
        dVar3 == (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_)) {
      return;
    }
    if (local_2d0 <= dVar11) {
      return;
    }
    if (dVar4 < (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_) ||
        dVar4 == (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_)) {
      return;
    }
    if (local_2c8 <= dVar23) {
      return;
    }
    if (dVar5 <= local_2e8._s_0.Z) {
      return;
    }
    if (local_2c0 <= dVar10) {
      return;
    }
    local_2f8[0] = *(FQueryOptions **)param_7;
    local_2f8[1] = *(FQueryOptions **)&param_7->field_0x8;
    pTVar20 = local_308;
    uVar24 = ~uVar24;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2e8._s_0,uVar24 - 1,param_3);
    pTVar20 = local_308;
    if (((((double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_) <= dVar3 &&
           dVar3 != (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_)) && (dVar11 < local_2d0)) &&
        ((double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_) <= dVar4 &&
         dVar4 != (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_))) &&
       (((dVar23 < local_2c8 && (local_2e8._s_0.Z < dVar5)) && (dVar10 < local_2c0)))) {
      local_2f8[0] = *(FQueryOptions **)param_7;
      local_2f8[1] = *(FQueryOptions **)&param_7->field_0x8;
      find_intersections(this,param_1,param_2,local_308,uVar24 - 1,param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_2f8,param_8,param_9);
    }
    local_300 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_300 + 1 >> 9) * 8) +
                        (ulonglong)(local_300 + 1 & 0x1ff) * 4) - 1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2e8._s_0,local_300,pTVar20);
    if (dVar3 < (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_) ||
        dVar3 == (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_)) {
      return;
    }
    if (local_2d0 <= dVar11) {
      return;
    }
    if (dVar4 < (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_) ||
        dVar4 == (double)CONCAT44(local_2e8._12_4_,local_2e8._8_4_)) {
      return;
    }
    if (local_2c8 <= dVar23) {
      return;
    }
    if (dVar5 <= local_2e8._s_0.Z) {
      return;
    }
    if (local_2c0 <= dVar10) {
      return;
    }
    local_2f8[0] = *(FQueryOptions **)param_7;
    local_2f8[1] = *(FQueryOptions **)&param_7->field_0x8;
    uVar24 = local_300;
  }
  find_intersections(this,param_1,param_2,pTVar20,uVar24,param_5 + 1,param_6,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     local_2f8,param_8,param_9);
  return;
}

// find_nearest_triangles @ 14c77d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_nearest_triangles
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,
          TMeshAABBTree3<FSkipTransparentMeshWrapper> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  double *pdVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  FIndex2i_u_0 FVar12;
  uint uVar13;
  char cVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  FQueryOptions *pFVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStackY_368 [32];
  int local_300 [2];
  FQueryOptions *local_2f8;
  FIndex2i_u_0 *local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  uint local_2d8;
  int local_2d4;
  int local_2d0;
  int iStack_2cc;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 TStack_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar11 = __real_3fd0000000000000;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  iVar19 = param_5 + 1;
  local_2f0 = &param_7->field0_0x0;
  local_2f8 = param_9;
LAB_14c77d8e0:
  do {
    while( true ) {
      dVar3 = __real_bff0000000000000;
      local_2e0 = (ulonglong)(param_1 & 0x1ff);
      local_2e8 = (ulonglong)((uint)param_1 >> 9);
      uVar6 = *(uint *)(*(longlong *)
                         ((this->BoxToIndex).Blocks.AllocatorInstance.Data + local_2e8 * 8) +
                       local_2e0 * 4);
      uVar16 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar6 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar16)) goto LAB_14c77db15;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,param_4,param_3);
      pFVar10 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar16 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar6 >> 9) * 8) +
                        (ulonglong)(uVar6 & 0x1ff) * 4);
      if ((int)uVar16 < 0) {
        dVar3 = this->BoxEps;
        param_1 = ~uVar16;
        uVar21 = (ulonglong)(param_1 & 0x1ff);
        lVar8 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        dVar25 = *(double *)(lVar8 + uVar21 * 0x18);
        dVar29 = *(double *)(lVar8 + 8 + uVar21 * 0x18);
        lVar9 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        dVar26 = *(double *)(lVar8 + 0x10 + uVar21 * 0x18);
        pdVar1 = (double *)(lVar9 + uVar21 * 0x18);
        local_2c8._s_0.Z = *(double *)(lVar9 + 0x10 + uVar21 * 0x18);
        dVar4 = *pdVar1 + dVar3;
        dVar5 = pdVar1[1] + dVar3;
        dVar27 = dVar25 + dVar4;
        dVar25 = dVar25 - dVar4;
        dVar4 = dVar29 + dVar5;
        dVar29 = dVar29 - dVar5;
        dVar5 = dVar26 + local_2c8._s_0.Z + dVar3;
        dVar26 = dVar26 - (local_2c8._s_0.Z + dVar3);
        dVar3 = (local_248._s_0.X + TStack_230._s_0.X) - (dVar27 + dVar25);
        dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar13,SUB84(dVar3,0) & uVar20)
                - ((TStack_230._s_0.X - local_248._s_0.X) + (dVar27 - dVar25));
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        dVar25 = (local_248._s_0.Y + TStack_230._s_0.Y) - (dVar4 + dVar29);
        dVar25 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar13,
                                  SUB84(dVar25,0) & uVar20) -
                 ((TStack_230._s_0.Y - local_248._s_0.Y) + (dVar4 - dVar29));
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        dVar29 = (local_248._s_0.Z + TStack_230._s_0.Z) - (dVar5 + dVar26);
        dVar29 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar13,
                                  SUB84(dVar29,0) & uVar20) -
                 ((TStack_230._s_0.Z - local_248._s_0.Z) + (dVar5 - dVar26));
        if (dVar29 <= 0.0) {
          dVar29 = 0.0;
        }
        bVar23 = (dVar25 * dVar25 + dVar3 * dVar3 + dVar29 * dVar29) * dVar11 < *param_6;
        goto LAB_14c77e0eb;
      }
      uVar16 = uVar16 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      dVar3 = box_box_distsqr(this,uVar16,(TAxisAlignedBox3<double> *)&local_248._s_0);
      dVar25 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_248._s_0);
      if (dVar25 < dVar3) {
        if (dVar25 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar19,param_6,
                     (FIndex2i *)&local_2f0->_s_0,param_8,local_2f8);
        }
        bVar23 = dVar3 < *param_6;
        param_1 = uVar16;
        goto LAB_14c77e0eb;
      }
      if (dVar3 < *param_6) {
        find_nearest_triangles
                  (this,uVar16,param_2,param_3,param_4,iVar19,param_6,(FIndex2i *)&local_2f0->_s_0,
                   param_8,local_2f8);
      }
      if (*param_6 <= dVar25) {
        return;
      }
      param_5 = param_5 + 1;
      iVar19 = iVar19 + 1;
    }
    if ((int)uVar16 < param_2->TrianglesEnd) {
      local_2d8 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
      uVar20 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
      local_2e0 = (ulonglong)uVar20;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      pFVar22 = local_2f8;
      if ((int)uVar20 < 1) {
        return;
      }
      break;
    }
LAB_14c77db15:
    lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + local_2e8 * 8);
    dVar3 = *(double *)(lVar8 + local_2e0 * 0x18);
    lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + local_2e8 * 8);
    dVar25 = *(double *)(lVar8 + 8 + local_2e0 * 0x18);
    dVar29 = *(double *)(lVar8 + 0x10 + local_2e0 * 0x18);
    pFVar10 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar26 = *(double *)(lVar9 + local_2e0 * 0x18);
    dVar4 = *(double *)(lVar9 + 8 + local_2e0 * 0x18);
    dVar27 = dVar3 - dVar26;
    dVar5 = *(double *)(lVar9 + 0x10 + local_2e0 * 0x18);
    dVar24 = dVar25 - dVar4;
    dVar28 = dVar29 - dVar5;
    dVar3 = dVar3 + dVar26;
    dVar25 = dVar25 + dVar4;
    dVar29 = dVar29 + dVar5;
    dVar4 = dVar27 + dVar3;
    dVar26 = dVar24 + dVar25;
    uVar6 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar16 >> 9) * 8) +
                     (ulonglong)(uVar16 & 0x1ff) * 4);
    dVar5 = dVar28 + dVar29;
    dVar3 = dVar3 - dVar27;
    dVar25 = dVar25 - dVar24;
    dVar29 = dVar29 - dVar28;
    if ((int)uVar6 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,~uVar6,param_3);
      dVar4 = dVar4 - (local_248._s_0.X + TStack_230._s_0.X);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar13,SUB84(dVar4,0) & uVar20) -
              ((TStack_230._s_0.X - local_248._s_0.X) + dVar3);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar26 = dVar26 - (local_248._s_0.Y + TStack_230._s_0.Y);
      dVar25 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,SUB84(dVar26,0) & uVar20)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar25);
      if (dVar25 <= 0.0) {
        dVar25 = 0.0;
      }
      dVar5 = dVar5 - (local_248._s_0.Z + TStack_230._s_0.Z);
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar13,SUB84(dVar5,0) & uVar20) -
               ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar29);
      if (dVar29 <= 0.0) {
        dVar29 = 0.0;
      }
      bVar23 = (dVar25 * dVar25 + dVar3 * dVar3 + dVar29 * dVar29) * dVar11 < *param_6;
      param_4 = ~uVar6;
    }
    else {
      uVar6 = uVar6 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,uVar6,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2c8._s_0,param_4,param_3);
      dVar27 = dVar4 - (local_248._s_0.X + TStack_230._s_0.X);
      dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar13,SUB84(dVar27,0) & uVar20)
               - ((TStack_230._s_0.X - local_248._s_0.X) + dVar3);
      if (dVar27 <= 0.0) {
        dVar27 = 0.0;
      }
      dVar24 = dVar26 - (local_248._s_0.Y + TStack_230._s_0.Y);
      dVar24 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar13,SUB84(dVar24,0) & uVar20)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar25);
      if (dVar24 <= 0.0) {
        dVar24 = 0.0;
      }
      dVar28 = dVar5 - (local_248._s_0.Z + TStack_230._s_0.Z);
      dVar28 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar13,SUB84(dVar28,0) & uVar20)
               - ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar29);
      if (dVar28 <= 0.0) {
        dVar28 = 0.0;
      }
      dVar4 = dVar4 - ((double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_) + local_2b0);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar13,SUB84(dVar4,0) & uVar20) -
              ((local_2b0 - (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_)) + dVar3);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar26 = dVar26 - ((double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_) + local_2a8);
      dVar4 = (dVar24 * dVar24 + dVar27 * dVar27 + dVar28 * dVar28) * dVar11;
      dVar25 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,SUB84(dVar26,0) & uVar20)
               - ((local_2a8 - (double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_)) + dVar25);
      if (dVar25 <= 0.0) {
        dVar25 = 0.0;
      }
      dVar5 = dVar5 - (local_2c8._s_0.Z + local_2a0);
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar13,SUB84(dVar5,0) & uVar20) -
               ((local_2a0 - local_2c8._s_0.Z) + dVar29);
      if (dVar29 <= 0.0) {
        dVar29 = 0.0;
      }
      dVar3 = (dVar25 * dVar25 + dVar3 * dVar3 + dVar29 * dVar29) * dVar11;
      if (dVar4 <= dVar3) {
        if (dVar4 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar6,iVar19,param_6,(FIndex2i *)&local_2f0->_s_0,
                     param_8,local_2f8);
        }
        if (*param_6 <= dVar3) {
          return;
        }
        param_5 = param_5 + 1;
        iVar19 = iVar19 + 1;
        goto LAB_14c77d8e0;
      }
      if (dVar3 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar19,param_6,(FIndex2i *)&local_2f0->_s_0,
                   param_8,local_2f8);
      }
      bVar23 = dVar4 < *param_6;
      param_4 = uVar6;
    }
LAB_14c77e0eb:
    if (!bVar23) {
      return;
    }
    param_5 = param_5 + 1;
    iVar19 = iVar19 + 1;
  } while( true );
LAB_14c77d9b0:
  uVar16 = uVar16 + 1;
  local_2e8 = (ulonglong)uVar16;
  iVar19 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
  local_2d4 = iVar19;
  if (*(void **)&pFVar22->TriangleFilterF == (void *)0x0) {
LAB_14c77da0f:
    FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (param_2->Mesh->Mesh,iVar19,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar2 = &param_3->field_0x10;
      pcVar7 = *(code **)param_3;
      plVar17 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar17 = (longlong *)puVar2;
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      (*pcVar7)(&local_2c8,uVar15,&local_248);
      local_248._s_0.X = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_);
      local_248._s_0.Y = (double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_);
      local_248._s_0.Z = local_2c8._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar17 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar17 = (longlong *)puVar2;
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      (*pcVar7)(&local_2c8,uVar15,&TStack_230);
      TStack_230._s_0.X = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_);
      TStack_230._s_0.Y = (double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_);
      TStack_230._s_0.Z = local_2c8._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar17 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar17 = (longlong *)puVar2;
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      (*pcVar7)(&local_2c8,uVar15,&local_218);
      local_218._0_4_ = local_2c8._0_4_;
      local_218._4_4_ = local_2c8._4_4_;
      local_218._8_4_ = local_2c8._8_4_;
      local_218._12_4_ = local_2c8._12_4_;
      local_218._s_0.Z = local_2c8._s_0.Z;
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
    if (0 < (int)local_2d8) {
      uVar21 = (ulonglong)local_2d8;
      uVar20 = uVar6;
      do {
        uVar20 = uVar20 + 1;
        iVar19 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c77e21c:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh->Mesh,iVar19,(TVector<double> *)&local_298._s_0,
                     (TVector<double> *)&TStack_280._s_0,(TVector<double> *)&local_268._s_0);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298._s_0.X;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = local_298._s_0.Y;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = TStack_280._s_0.Y;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = TStack_280._s_0.Z;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = local_298._s_0.Z;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = TStack_280._s_0.X;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_268._s_0.Z;
          local_1f8.DistanceSquared = dVar3;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268._s_0.X;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = local_268._s_0.Y;
          dVar11 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar11 < *param_6) {
            iStack_2cc = local_2d4;
            FVar12._s_0.B = local_2d4;
            FVar12._s_0.A = iVar19;
            *param_6 = dVar11;
            *local_2f0 = FVar12;
            local_2d0 = iVar19;
          }
        }
        else {
          local_300[0] = iVar19;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar17 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar18 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar17 != (longlong *)0x0) {
            plVar18 = plVar17;
          }
          uVar15 = (**(code **)(*plVar18 + 8))();
          cVar14 = (*pcVar7)(uVar15,local_300);
          if (cVar14 != '\0') goto LAB_14c77e21c;
        }
        uVar21 = uVar21 - 1;
        pFVar22 = local_2f8;
      } while (uVar21 != 0);
    }
  }
  else {
    local_300[0] = iVar19;
    Core::Private::Function::CheckCallable(*(void **)&pFVar22->TriangleFilterF);
    plVar17 = *(longlong **)&(pFVar22->TriangleFilterF).field_0x28;
    pcVar7 = *(code **)&pFVar22->TriangleFilterF;
    plVar18 = (longlong *)&(pFVar22->TriangleFilterF).field_0x10;
    if (plVar17 != (longlong *)0x0) {
      plVar18 = plVar17;
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    cVar14 = (*pcVar7)(uVar15,local_300);
    if (cVar14 != '\0') goto LAB_14c77da0f;
  }
  uVar16 = (uint)local_2e8;
  local_2e0 = local_2e0 - 1;
  if (local_2e0 == 0) {
    return;
  }
  goto LAB_14c77d9b0;
}

// find_nearest_vertex @ 14c77e360

void __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_nearest_vertex
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong local_res8;
  uint local_res10 [2];
  uint local_80;
  ulonglong uVar12;
  
  pTVar1 = &(this->IndexList).Blocks;
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar15) {
    do {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      uVar14 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
      if ((int)uVar14 < 0) {
        uVar14 = ~uVar14;
        dVar16 = BoxDistanceSqr(this,uVar14,param_2);
        if (*param_3 <= dVar16 && dVar16 != *param_3) {
          return;
        }
      }
      else {
        uVar10 = uVar14 - 1;
        uVar14 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        dVar16 = BoxDistanceSqr(this,uVar10,param_2);
        dVar17 = BoxDistanceSqr(this,uVar14,param_2);
        if (dVar17 <= dVar16) {
          if (*param_3 <= dVar17) {
            return;
          }
          find_nearest_vertex(this,uVar14,param_2,param_3,param_4,param_5);
          uVar14 = uVar10;
          if (*param_3 <= dVar16) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar16) {
            return;
          }
          find_nearest_vertex(this,uVar10,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar17) {
            return;
          }
        }
      }
      uVar15 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar15);
  }
  uVar14 = *(uint *)(*(longlong *)((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar15 >> 9) * 8)
                    + (ulonglong)(uVar15 & 0x1ff) * 4);
  local_res8 = (ulonglong)uVar14;
  if (0 < (int)uVar14) {
    do {
      uVar15 = uVar15 + 1;
      uVar14 = *(uint *)(*(longlong *)
                          ((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c77e580:
        pFVar7 = this->Mesh->Mesh;
        lVar8 = *(longlong *)
                 ((pFVar7->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
        uVar3 = *(ulonglong *)(lVar8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
        uVar14 = *(uint *)(lVar8 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
        local_80 = (uint)uVar3;
        lVar8 = *(longlong *)
                 ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(local_80 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar8 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar17 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar18 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar16 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar8 + 0x10 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
        if (dVar16 < *param_3) {
          *param_3 = dVar16;
          *param_4 = local_80;
        }
        uVar10 = (uint)(uVar3 >> 0x20);
        uVar12 = (ulonglong)(uVar10 & 0x1ff);
        lVar8 = *(longlong *)
                 ((this->Mesh->Mesh->Vertices).Blocks.AllocatorInstance.Data + (uVar3 >> 0x29) * 8);
        pdVar2 = (double *)(lVar8 + uVar12 * 0x18);
        dVar16 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar8 + 0x10 + uVar12 * 0x18);
        dVar17 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar18 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
        if (dVar16 < *param_3) {
          *param_3 = dVar16;
          *param_4 = uVar10;
        }
        lVar8 = *(longlong *)
                 ((this->Mesh->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar14 >> 9) * 8);
        pdVar2 = (double *)(lVar8 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        dVar16 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar8 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        dVar17 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar18 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
        if (dVar16 < *param_3) {
          *param_3 = dVar16;
          *param_4 = uVar14;
        }
      }
      else {
        local_res10[0] = uVar14;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_5->TriangleFilterF;
        plVar13 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar13 = plVar5;
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        cVar9 = (*pcVar6)(uVar11,local_res10);
        if (cVar9 != '\0') goto LAB_14c77e580;
      }
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return;
}

// find_self_intersections @ 14c77e740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_self_intersections
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,FIntersectionsQueryResult *param_1,
          bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_2c8 [32];
  char local_288;
  bool local_287;
  uint local_280 [2];
  uint local_278;
  uint local_274;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_270;
  undefined8 local_260;
  code *local_258;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_250;
  undefined8 local_248;
  undefined4 local_240;
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
  
  uVar4 = __real_3e45798ee2308c3a;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar11 = false;
  uVar13 = 0;
  local_287 = false;
  local_250 = param_3;
  if (0 < this->TrianglesEnd) {
    do {
      uVar14 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4) + 1 +
               uVar13;
      uVar12 = uVar13 + 2;
      local_278 = uVar13;
      while (local_278 = local_278 + 1, local_274 = uVar12, (int)uVar12 < (int)uVar14) {
        uVar13 = *(uint *)(*(longlong *)
                            ((this->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(local_278 >> 9) * 8) + (ulonglong)(local_278 & 0x1ff) * 4);
        local_258 = *(code **)param_3;
        local_260 = *(undefined8 *)&param_3->field_0x8;
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c77e860:
          local_288 = '\0';
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh->Mesh,uVar13,(TVector<double> *)&local_238._s_0,
                     (TVector<double> *)&TStack_220._s_0,(TVector<double> *)&local_208._s_0);
          local_198._s_0.X = local_238._s_0.X;
          local_198._s_0.Y = local_238._s_0.Y;
          local_178 = TStack_220._s_0.Y;
          dStack_170 = TStack_220._s_0.Z;
          local_198._s_0.Z = local_238._s_0.Z;
          dStack_180 = TStack_220._s_0.X;
          local_158 = local_208._s_0.Z;
          local_108 = uVar4;
          local_100 = 0;
          local_f8 = 0;
          local_fc = 0;
          local_168 = local_208._s_0.X;
          dStack_160 = local_208._s_0.Y;
          lVar10 = *(longlong *)
                    ((this->Mesh->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar13 >> 9) * 8);
          local_248 = *(undefined8 *)(lVar10 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          local_240 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          do {
            uVar1 = *(uint *)(*(longlong *)
                               ((this->IndexList).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
            if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c77e96d:
              lVar10 = *(longlong *)
                        ((this->Mesh->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar1 >> 9) * 8);
              local_270._0_8_ = *(undefined8 *)(lVar10 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
              local_270._8_4_ = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
              if (param_2) {
                bVar11 = false;
                lVar10 = 0;
                do {
                  if (bVar11) goto LAB_14c77ea75;
                  lVar8 = 0;
                  do {
                    if (*(int *)((longlong)&local_248 + lVar10 * 4) ==
                        *(int *)(&local_270.field_0x0 + lVar8 * 4)) {
                      bVar11 = true;
                      break;
                    }
                    lVar8 = lVar8 + 1;
                  } while (lVar8 < 3);
                  lVar10 = lVar10 + 1;
                } while (lVar10 < 3);
                if (bVar11) goto LAB_14c77ea75;
              }
              FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                        (this->Mesh->Mesh,uVar1,(TVector<double> *)&local_1e8._s_0,
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
                if (param_1 == (FIntersectionsQueryResult *)0x0) goto LAB_14c77ea93;
                AddTriTriIntersectionResult
                          ((TIntrTriangle3Triangle3<double> *)&local_198._s_0,uVar13,uVar1,param_1);
              }
            }
            else {
              local_280[0] = uVar1;
              Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
              plVar2 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
              pcVar3 = *(code **)&param_4->TriangleFilterF;
              plVar9 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = plVar2;
              }
              uVar7 = (**(code **)(*plVar9 + 8))();
              cVar5 = (*pcVar3)(uVar7,local_280);
              if (cVar5 != '\0') goto LAB_14c77e96d;
            }
LAB_14c77ea75:
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar14);
          if (local_288 == '\0') goto LAB_14c77ea88;
LAB_14c77ea93:
          bVar11 = true;
        }
        else {
          local_280[0] = uVar13;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar2 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar3 = *(code **)&param_4->TriangleFilterF;
          plVar9 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = plVar2;
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          cVar5 = (*pcVar3)(uVar7,local_280);
          if (cVar5 != '\0') goto LAB_14c77e860;
LAB_14c77ea88:
          if (local_287 != false) goto LAB_14c77ea93;
          bVar11 = false;
        }
        if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar11 != false)) {
          return bVar11;
        }
        param_3 = local_250;
        local_287 = bVar11;
        uVar12 = local_274 + 1;
      }
      uVar13 = uVar14;
    } while ((int)uVar14 < this->TrianglesEnd);
  }
  local_270._0_8_ = *(undefined8 *)param_3;
  local_270._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar6 = find_self_intersections_acrossboxes
                    (this,this->RootIndex,-1,param_1,param_2,0,&local_270,param_4);
  if ((bVar6) || (bVar6 = false, bVar11 != false)) {
    bVar6 = true;
  }
  return bVar6;
}

// find_self_intersections_acrossboxes @ 14c77eb70

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_self_intersections_acrossboxes
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,int param_2,
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
LAB_14c77ed25:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14c77ed25;
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
      goto joined_r0x00014c77ef21;
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
joined_r0x00014c77ef21:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14c77f1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::find_tri_tri_intersections
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,int param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  uint uVar1;
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
  double dStack_160;
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
  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (this->Mesh->Mesh,param_1,(TVector<double> *)&local_1d8._s_0,
             (TVector<double> *)&TStack_1c0._s_0,(TVector<double> *)&local_1a8._s_0);
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
  lVar10 = *(longlong *)
            ((this->Mesh->Mesh->Triangles).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8);
  local_1f8 = *(undefined8 *)(lVar10 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_1f0 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  if (param_2 < param_3) {
    do {
      uVar1 = *(uint *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c77f35d:
        lVar10 = *(longlong *)
                  ((this->Mesh->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar1 >> 9) * 8);
        local_1e8 = *(undefined8 *)(lVar10 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
        local_1e0 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
        if (param_5) {
          bVar4 = false;
          lVar10 = 0;
          do {
            if (bVar4) goto LAB_14c77f459;
            lVar8 = 0;
            do {
              if (*(int *)((longlong)&local_1f8 + lVar10 * 4) ==
                  *(int *)((longlong)&local_1e8 + lVar8 * 4)) {
                bVar4 = true;
                break;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < 3);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 3);
          if (bVar4) goto LAB_14c77f459;
        }
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this->Mesh->Mesh,uVar1,(TVector<double> *)&local_1d8._s_0,
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
        cVar5 = (**(code **)local_200)(*(undefined8 *)&local_200->field_0x8,&local_188);
        if (cVar5 != '\0') {
          if (param_4 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,param_1,uVar1,param_4);
        }
      }
      else {
        local_210[0] = uVar1;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_7->TriangleFilterF;
        plVar9 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar3)(uVar7,local_210);
        if (cVar6 != '\0') goto LAB_14c77f35d;
      }
LAB_14c77f459:
      param_2 = param_2 + 1;
    } while (param_2 < local_208);
  }
  return (bool)cVar5;
}

// <lambda_invoker_cdecl> @ 14c77f540

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::MakeDefaultSplitAxisFunc'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14c77f560

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindAllIntersections'::__l5::
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

// <lambda_invoker_cdecl> @ 14c77f5a0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindAllSelfIntersections'::__l5::
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

// FindHitTriangle<UE::Math::TRay<double>_> @ 14c7952f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TRay<double> *param_2,double *param_3,int *param_4,TVector<double> *param_5,
          FQueryOptions *param_6)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FComponent *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStackY_1e8 [32];
  uint local_1a8 [2];
  uint *local_1a0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_198;
  FDynamicMesh3 *local_190;
  TRay<double> *local_188;
  TVector<double> *local_180;
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
  
  dVar7 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_198 = &(this->IndexList).Blocks;
  local_1a0 = (uint *)param_4;
  local_180 = param_5;
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_188 = param_2;
  if (this->TrianglesEnd <= (int)uVar15) {
    do {
      pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar13 = *(uint *)(*(longlong *)(pFVar1 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
      if ((int)uVar13 < 0) {
        uVar13 = ~uVar13;
        dVar5 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar13,param_2);
        if (*param_3 + dVar7 < dVar5) {
          return;
        }
      }
      else {
        uVar10 = uVar13 - 1;
        uVar13 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        dVar5 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar10,param_2);
        dVar6 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar13,param_2);
        if (dVar6 <= dVar5) {
          if (*param_3 + dVar7 < dVar6) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar13,param_2,param_3,(int *)local_1a0,param_5,param_6);
          uVar13 = uVar10;
          if (*param_3 + dVar7 < dVar5) {
            return;
          }
        }
        else {
          if (*param_3 + dVar7 < dVar5) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar10,param_2,param_3,(int *)local_1a0,param_5,param_6);
          if (*param_3 + dVar7 < dVar6) {
            return;
          }
        }
      }
      uVar15 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar15);
  }
  pTVar14 = &(this->IndexList).Blocks;
  uVar13 = *(uint *)(*(longlong *)((pTVar14->AllocatorInstance).Data + (ulonglong)(uVar15 >> 9) * 8)
                    + (ulonglong)(uVar15 & 0x1ff) * 4);
  if (0 < (int)uVar13) {
    uVar16 = (ulonglong)uVar13;
    do {
      uVar15 = uVar15 + 1;
      uVar13 = *(uint *)(*(longlong *)
                          ((pTVar14->AllocatorInstance).Data + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14c795578:
        local_190 = this->Mesh->Mesh;
        pFVar4 = this->Mesh->Component;
        uVar10 = 0;
        if ((int)uVar13 < (pFVar4->Indices).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (local_190,
                   *(int *)((pFVar4->Indices).AllocatorInstance.Data + (longlong)(int)uVar13 * 4),
                   (TVector<double> *)&local_178._s_0,(TVector<double> *)&TStack_160._s_0,
                   (TVector<double> *)&local_148._s_0);
        local_128._s_0.X = (local_188->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (local_188->Origin).field0_0x0._s_0.Y;
        local_128._s_0.Z = (local_188->Origin).field0_0x0._s_0.Z;
        dStack_110 = (local_188->Direction).field0_0x0._s_0.X;
        local_108 = (local_188->Direction).field0_0x0._s_0.Y;
        dStack_100 = (local_188->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = local_178._s_0.X;
        local_f8._s_0.Y = local_178._s_0.Y;
        local_f8._s_0.Z = local_178._s_0.Z;
        dStack_e0 = TStack_160._s_0.X;
        local_d8 = TStack_160._s_0.Y;
        dStack_d0 = TStack_160._s_0.Z;
        local_c8 = local_148._s_0.X;
        dStack_c0 = local_148._s_0.Y;
        local_b8 = local_148._s_0.Z;
        bVar9 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                          ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                           &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar9) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1a0 = uVar13;
          (local_180->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_180->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_180->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1a8[0] = uVar13;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar2 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_6->TriangleFilterF;
        plVar12 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = plVar2;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        cVar8 = (*pcVar3)(uVar11,local_1a8);
        if (cVar8 != '\0') goto LAB_14c795578;
      }
      uVar16 = uVar16 - 1;
      pTVar14 = local_198;
    } while (uVar16 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14c7956d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double dVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FComponent *pFVar6;
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
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_218 [32];
  uint local_1e8 [2];
  ulonglong local_1e0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1d8;
  FDynamicMesh3 *local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 TStack_1b0;
  TVector<double>_u_0 local_198;
  uint local_178;
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
  local_1d8 = &(this->IndexList).Blocks;
  uVar23 = SUB84(__real_47efffffe0000000,0);
  uVar24 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar1 = param_4->MaxDistance;
  uVar21 = SUB84(dVar1,0);
  uVar22 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar21 = uVar23;
    uVar22 = uVar24;
  }
  uVar19 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar19) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      dVar1 = (double)CONCAT44(uVar22,uVar21) + dVar9;
      uVar2 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) +
                       (ulonglong)(uVar19 & 0x1ff) * 4);
      if ((int)uVar2 < 0) {
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar2,param_2);
        uVar19 = ~uVar2;
      }
      else {
        uVar2 = uVar2 - 1;
        uVar19 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar2,param_2);
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar19,param_2);
        if (dVar7 <= dVar8) {
          if (dVar1 < dVar7) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar19,param_2,param_3,param_4);
          uVar19 = uVar2;
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
      uVar21 = SUB84(dVar1,0);
      uVar22 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar10 <= dVar1) {
        uVar21 = uVar23;
        uVar22 = uVar24;
      }
      uVar19 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar19);
  }
  pTVar20 = &(this->IndexList).Blocks;
  uVar2 = *(uint *)(*(longlong *)((pTVar20->AllocatorInstance).Data + (ulonglong)(uVar19 >> 9) * 8)
                   + (ulonglong)(uVar19 & 0x1ff) * 4);
  local_1e0 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar19 = uVar19 + 1;
      uVar2 = *(uint *)(*(longlong *)
                         ((pTVar20->AllocatorInstance).Data + (ulonglong)(uVar19 >> 9) * 8) +
                       (ulonglong)(uVar19 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c795928:
        local_1d0 = this->Mesh->Mesh;
        pFVar6 = this->Mesh->Component;
        uVar14 = 0;
        if ((int)uVar2 < (pFVar6->Indices).ArrayNum) {
          uVar14 = ~uVar2 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (local_1d0,
                   *(int *)((pFVar6->Indices).AllocatorInstance.Data + (longlong)(int)uVar2 * 4),
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
        uVar16 = local_c8._s_0.X;
        if ((bVar13) && (local_d0 <= (double)CONCAT44(uVar22,uVar21) + dVar9)) {
          iVar15 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = uVar2;
          if (iVar15 == param_3->ArrayMax) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar17 = (longlong)iVar15;
          param_3->ArrayNum = iVar15 + 1;
          pFVar3 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar3 + lVar17 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar3 + lVar17 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar3 + lVar17 * 0x28 + 0x10) = uVar16;
          *(undefined8 *)(pFVar3 + lVar17 * 0x28 + 0x10 + 8) = uVar11;
          *(double *)(pFVar3 + lVar17 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1e8[0] = uVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar4 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_4->TriangleFilterF;
        plVar18 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar18 = plVar4;
        }
        uVar16 = (**(code **)(*plVar18 + 8))();
        cVar12 = (*pcVar5)(uVar16,local_1e8);
        if (cVar12 != '\0') goto LAB_14c795928;
      }
      local_1e0 = local_1e0 - 1;
      pTVar20 = local_1d8;
    } while (local_1e0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14c7a5f20

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TRay<double> *param_2)

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

// find_nearest_tri<1> @ 14c7a9bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FComponent *pFVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStackY_1a8 [32];
  uint local_178 [2];
  int local_170;
  FDynamicMesh3 *local_168;
  uint *local_160;
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
  local_160 = (uint *)param_4;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar1) {
    uVar17 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar17 < 0) {
      uVar17 = ~uVar17;
      dVar8 = BoxDistanceSqr(this,uVar17,param_2);
      if (*param_3 <= dVar8 && dVar8 != *param_3) {
        return false;
      }
    }
    else {
      iVar16 = uVar17 - 1;
      uVar17 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) - 1;
      dVar8 = BoxDistanceSqr(this,iVar16,param_2);
      dVar9 = BoxDistanceSqr(this,uVar17,param_2);
      if (dVar9 <= dVar8) {
        if (*param_3 <= dVar9) {
          return false;
        }
        bVar11 = find_nearest_tri<1>(this,uVar17,param_2,param_3,param_4,param_5);
        if (!bVar11) {
          if (*param_3 <= dVar8) {
            return false;
          }
          bVar11 = find_nearest_tri<1>(this,iVar16,param_2,param_3,param_4,param_5);
          return bVar11;
        }
        return true;
      }
      if (*param_3 <= dVar8) {
        return false;
      }
      bVar11 = find_nearest_tri<1>(this,iVar16,param_2,param_3,param_4,param_5);
      if (bVar11) {
        return true;
      }
      if (*param_3 <= dVar9) {
        return false;
      }
    }
    bVar11 = find_nearest_tri<1>(this,uVar17,param_2,param_3,param_4,param_5);
    if (!bVar11) {
      return false;
    }
    return true;
  }
  local_170 = *(int *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
  if (local_170 < 1) {
    return false;
  }
  uVar17 = uVar1 + 1;
  do {
    uVar2 = *(uint *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c7a9ccb:
      local_168 = this->Mesh->Mesh;
      pFVar7 = this->Mesh->Component;
      uVar13 = 0;
      if ((int)uVar2 < (pFVar7->Indices).ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (local_168,
                 *(int *)((pFVar7->Indices).AllocatorInstance.Data + (longlong)(int)uVar2 * 4),
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
      dVar8 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_108._s_0);
      if (dVar8 < *param_3) {
        *param_3 = dVar8;
        *local_160 = uVar2;
        return true;
      }
    }
    else {
      local_178[0] = uVar2;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar6 = *(code **)&param_5->TriangleFilterF;
      plVar15 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar15 = plVar5;
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      cVar10 = (*pcVar6)(uVar14,local_178);
      if (cVar10 != '\0') goto LAB_14c7a9ccb;
    }
    uVar17 = uVar17 + 1;
    if (local_170 < (int)(uVar17 - uVar1)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14c7a9f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FComponent *pFVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined1 auStackY_1a8 [32];
  uint local_178 [2];
  ulonglong local_170;
  FDynamicMesh3 *local_168;
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
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if ((int)uVar1 < this->TrianglesEnd) {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    local_170 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar1 = uVar1 + 1;
        uVar2 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c7aa03b:
          local_168 = this->Mesh->Mesh;
          pFVar7 = this->Mesh->Component;
          uVar13 = 0;
          if ((int)uVar2 < (pFVar7->Indices).ArrayNum) {
            uVar13 = ~uVar2 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (local_168,
                     *(int *)((pFVar7->Indices).AllocatorInstance.Data + (longlong)(int)uVar2 * 4),
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
          dVar8 = TDistPoint3Triangle3<double>::ComputeResult
                            ((TDistPoint3Triangle3<double> *)&local_108._s_0);
          if (dVar8 < *param_3) {
            *param_3 = dVar8;
            *param_4 = uVar2;
          }
        }
        else {
          local_178[0] = uVar2;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar15 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar15 = plVar5;
          }
          uVar14 = (**(code **)(*plVar15 + 8))();
          cVar10 = (*pcVar6)(uVar14,local_178);
          if (cVar10 != '\0') goto LAB_14c7aa03b;
        }
        local_170 = local_170 - 1;
      } while (local_170 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar8 = BoxDistanceSqr(this,~uVar2,param_2);
      if (dVar8 < *param_3 || dVar8 == *param_3) {
        find_nearest_tri<0>(this,~uVar2,param_2,param_3,param_4,param_5);
      }
    }
    else {
      iVar16 = uVar2 - 1;
      iVar17 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) + -1;
      dVar8 = BoxDistanceSqr(this,iVar16,param_2);
      dVar9 = BoxDistanceSqr(this,iVar17,param_2);
      if (dVar9 <= dVar8) {
        if (*param_3 <= dVar9) {
          return false;
        }
        find_nearest_tri<0>(this,iVar17,param_2,param_3,param_4,param_5);
        iVar17 = iVar16;
        if (*param_3 <= dVar8) {
          return false;
        }
      }
      else {
        if (*param_3 <= dVar8) {
          return false;
        }
        find_nearest_tri<0>(this,iVar16,param_2,param_3,param_4,param_5);
        if (*param_3 <= dVar9) {
          return false;
        }
      }
      find_nearest_tri<0>(this,iVar17,param_2,param_3,param_4,param_5);
    }
  }
  return false;
}

// operator() @ 14c7c2bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestSelfIntersection'::__l2::
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

// AddTriTriIntersectionResult @ 14c7d9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::AddTriTriIntersectionResult
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

// BoxDistanceSqr @ 14c7e4e70

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BoxDistanceSqr
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2)

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

// BuildTopDown @ 14c7e4f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BuildTopDown
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
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

// BuildTopDown @ 14c7e5650

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BuildTopDown
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,bool param_1)

{
  FComponent *pFVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  FComponentMesh *pFVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  uint local_108 [2];
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
  
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  uVar8 = (this->Mesh->Component->Indices).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
  }
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  uVar8 = (this->Mesh->Component->Indices).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar8,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  dVar5 = __real_3fd5555555555555;
  pFVar10 = this->Mesh;
  local_108[0] = 0;
  if (0 < (pFVar10->Component->Indices).ArrayNum) {
    do {
      uVar8 = local_108[0];
      if ((-1 < (int)local_108[0]) &&
         (pFVar1 = pFVar10->Component, (int)local_108[0] < (pFVar1->Indices).ArrayNum)) {
        pFVar2 = pFVar10->Mesh;
        if (((int)local_108[0] < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(uint *)((pFVar1->Indices).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
        if (((-1 < (int)uVar8) &&
            ((int)uVar8 <
             (int)((pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar8 >> 9) * 8) +
                               (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          lVar11 = (longlong)(int)local_108[0];
          pFVar1 = this->Mesh->Component;
          pFVar2 = this->Mesh->Mesh;
          uVar8 = 0;
          if ((int)local_108[0] < (pFVar1->Indices).ArrayNum) {
            uVar8 = ~local_108[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (pFVar2,*(int *)((pFVar1->Indices).AllocatorInstance.Data + lVar11 * 4),
                     (TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_b0._s_0,
                     (TVector<double> *)&local_98._s_0);
          dVar13 = (local_c8._s_0.X + local_b0._s_0.X + local_98._s_0.X) * dVar5;
          dVar4 = (local_c8._s_0.Y + local_b0._s_0.Y + local_98._s_0.Y) * dVar5;
          dVar12 = (local_c8._s_0.Z + local_b0._s_0.Z + local_98._s_0.Z) * dVar5;
          sVar7 = _dclass(SUB84(dVar4 * dVar4 + dVar13 * dVar13 + dVar12 * dVar12,0));
          if ((sVar7 != 2) && (sVar7 < 1)) {
            if ((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_108) &&
               (((FScriptContainerElement *)local_108 <
                 local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4 &&
                (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)))) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar9 = local_100.ArrayNum;
            if (local_100.ArrayNum == local_100.ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
            }
            local_100.ArrayNum = iVar9 + 1;
            *(uint *)(local_100.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_108[0];
            lVar11 = (longlong)(int)local_108[0];
            pFVar1 = this->Mesh->Component;
            pFVar2 = this->Mesh->Mesh;
            uVar8 = 0;
            if ((int)local_108[0] < (pFVar1->Indices).ArrayNum) {
              uVar8 = ~local_108[0] >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                      (pFVar2,*(int *)((pFVar1->Indices).AllocatorInstance.Data + lVar11 * 4),
                       (TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,
                       (TVector<double> *)&local_48[0]._s_0);
            local_e0 = (local_78._s_0.X + local_60._s_0.X + (double)local_48[0]._0_8_) * dVar5;
            dStack_d8 = (local_78._s_0.Y + local_60._s_0.Y + (double)local_48[0]._8_8_) * dVar5;
            local_d0 = (local_78._s_0.Z + local_60._s_0.Z + (double)local_48[0]._16_8_) * dVar5;
            if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
                ((FScriptContainerElement *)&local_e0 <
                 local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 0x18)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar9 = local_f0.ArrayNum;
            if (local_f0.ArrayNum == local_f0.ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
            }
            local_f0.ArrayNum = iVar9 + 1;
            *(double *)(local_f0.AllocatorInstance.Data + (longlong)iVar9 * 0x18) = local_e0;
            *(double *)(local_f0.AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 8) = dStack_d8;
            *(double *)(local_f0.AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 0x10) = local_d0;
          }
        }
      }
      pFVar10 = this->Mesh;
      local_108[0] = local_108[0] + 1;
    } while ((int)local_108[0] < (pFVar10->Component->Indices).ArrayNum);
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

// DoTraversal @ 14c8008d0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::DoTraversal
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,FTreeTraversal *param_1,
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

// FindAllHitTriangles @ 14c806250

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindAllHitTriangles
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14c8062a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindAllIntersections
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4c77f560;
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

// FindAllSelfIntersections @ 14c806480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindAllSelfIntersections
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4c77f5a0;
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

// FindNearestHitTriangle @ 14c806f60

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c806fe0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c807060

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TRay<double> *param_1,
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

// FindNearestPoint @ 14c8070e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestPoint
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FComponentMesh *this_00;
  FDynamicMesh3 *this_01;
  FComponent *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  uVar6 = (**(code **)(this->_padding_ + 0x20))(this,param_1,local_138);
  local_128 = (param_1->field0_0x0)._s_0.X;
  dStack_120 = (param_1->field0_0x0)._s_0.Y;
  if ((int)uVar6 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_128;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_120;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar9 = (undefined4)uVar2;
    uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    this_00 = this->Mesh;
    bVar5 = MeshAutoRepair::FComponentMesh::IsTriangle(this_00,uVar6);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
    }
    this_01 = this_00->Mesh;
    pFVar3 = this_00->Component;
    uVar7 = 0;
    if ((int)uVar6 < (pFVar3->Indices).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
    }
    FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_01,*(int *)((pFVar3->Indices).AllocatorInstance.Data + (longlong)(int)uVar6 * 4)
               ,(TVector<double> *)&local_118._s_0,(TVector<double> *)&TStack_100._s_0,
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
    uVar9 = (undefined4)local_40;
    uVar10 = (undefined4)((ulonglong)local_40 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_48;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 14c8072b0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TVector<double> *param_1,
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

// FindNearestTriangles @ 14c807310

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestTriangles
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_1,
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
            (this,this->RootIndex,(TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *)param_2,
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

// FindNearestVertex @ 14c8073d0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::FindNearestVertex
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TVector<double> *param_1,
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

// GetBox @ 14c80ee20

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::GetBox
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
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

// GetBox @ 14c80eee0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::GetBox
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 14c818a30

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::IsInside
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 14c819190

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TVector<double> *param_1,
          double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 14c8389b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
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
        goto LAB_14c8398df;
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
LAB_14c8398df:
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
      pTVar21 = TMeshQueries<UE::MeshAutoRepair::FComponentMesh>::GetTriBounds
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
      goto LAB_14c838e97;
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
LAB_14c838e97:
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

// SupportsNearestTriangle @ 14c83be70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::SupportsNearestTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this)

{
  return true;
}

// SupportsPointContainment @ 14c83be80

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::SupportsPointContainment
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 14c83be90

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this)

{
  return true;
}

// TestAnyHitTriangle @ 14c843150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TRay<double> *param_2,int *param_3,double param_4,FQueryOptions *param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  FComponent *pFVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  undefined1 auStackY_238 [32];
  uint local_208 [2];
  int local_200;
  FDynamicMesh3 *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
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
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar6 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar7 = *(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar4) {
    uVar27 = *(uint *)(lVar7 + (ulonglong)(uVar4 & 0x1ff) * 4);
    dVar14 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar27 < 0) {
      uVar27 = ~uVar27;
      dVar12 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar27,param_2);
    }
    else {
      iVar26 = uVar27 - 1;
      uVar27 = *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                       (ulonglong)(uVar4 + 1 & 0x1ff) * 4) - 1;
      dVar13 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar26,param_2);
      dVar12 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar27,param_2);
      if (dVar12 <= dVar13) {
        if (dVar14 < dVar12) {
          return false;
        }
        bVar18 = TestAnyHitTriangle(this,uVar27,param_2,param_3,param_4,param_5);
        if (!bVar18) {
          if (dVar14 < dVar13) {
            return false;
          }
          bVar18 = TestAnyHitTriangle(this,iVar26,param_2,param_3,param_4,param_5);
          return bVar18;
        }
        return true;
      }
      if (dVar14 < dVar13) {
        return false;
      }
      bVar18 = TestAnyHitTriangle(this,iVar26,param_2,param_3,param_4,param_5);
      if (bVar18) {
        return true;
      }
    }
    if ((dVar12 <= dVar14) &&
       (bVar18 = TestAnyHitTriangle(this,uVar27,param_2,param_3,param_4,param_5), bVar18)) {
      return true;
    }
    return false;
  }
  local_200 = *(int *)(lVar7 + (ulonglong)(uVar4 & 0x1ff) * 4);
  if (local_200 < 1) {
    return false;
  }
  uVar27 = uVar4 + 1;
  do {
    uVar5 = *(uint *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c84325c:
      local_1f8 = this->Mesh->Mesh;
      pFVar10 = this->Mesh->Component;
      uVar20 = 0;
      if ((int)uVar5 < (pFVar10->Indices).ArrayNum) {
        uVar20 = ~uVar5 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar19 = (*pcVar9)();
        return (bool)uVar19;
      }
      uVar5 = *(uint *)((pFVar10->Indices).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      pFVar6 = (local_1f8->Vertices).Blocks.AllocatorInstance.Data;
      uVar25 = (ulonglong)(uVar5 & 0x1ff);
      lVar7 = *(longlong *)
               ((local_1f8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
      uVar5 = *(uint *)(lVar7 + uVar25 * 0xc);
      uVar23 = (ulonglong)(uVar5 & 0x1ff);
      uVar20 = *(uint *)(lVar7 + 4 + uVar25 * 0xc);
      lVar11 = *(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8);
      uVar24 = (ulonglong)(uVar20 & 0x1ff);
      pdVar1 = (double *)(lVar11 + uVar23 * 0x18);
      local_1a8._s_0.X = *pdVar1;
      local_1a8._s_0.Y = pdVar1[1];
      local_1f0 = *(longlong *)(pFVar6 + (ulonglong)(uVar20 >> 9) * 8);
      local_1f8 = (FDynamicMesh3 *)(uVar24 * 3);
      local_1a8._s_0.Z = *(double *)(lVar11 + 0x10 + uVar23 * 0x18);
      pdVar1 = (double *)(local_1f0 + uVar24 * 0x18);
      local_1c0._s_0.X = *pdVar1;
      local_1c0._s_0.Y = pdVar1[1];
      local_1c0._s_0.Z = *(double *)(local_1f0 + 0x10 + uVar24 * 0x18);
      uVar5 = *(uint *)(lVar7 + 8 + uVar25 * 0xc);
      uVar24 = (ulonglong)(uVar5 & 0x1ff);
      local_1e0 = *(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8);
      local_1e8 = uVar24 * 3;
      pdVar1 = (double *)(local_1e0 + uVar24 * 0x18);
      local_1d8._s_0.X = *pdVar1;
      local_1d8._s_0.Y = pdVar1[1];
      local_1d8._s_0.Z = *(double *)(local_1e0 + 0x10 + uVar24 * 0x18);
      bVar18 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1a8._s_0,
                          (TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1d8._s_0);
      if (bVar18) {
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        pdVar1 = (double *)(lVar11 + uVar23 * 0x18);
        local_188 = *pdVar1;
        dStack_180 = pdVar1[1];
        puVar2 = (undefined8 *)(local_1f0 + (longlong)local_1f8 * 8);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar21 = *(undefined8 *)(local_1f0 + 0x10 + (longlong)local_1f8 * 8);
        puVar3 = (undefined4 *)(lVar11 + 0x10 + uVar23 * 0x18);
        uStack_178 = *puVar3;
        uStack_174 = puVar3[1];
        puVar2 = (undefined8 *)(local_1e0 + local_1e8 * 8);
        local_158 = *puVar2;
        uStack_150 = puVar2[1];
        local_148 = *(undefined8 *)(local_1e0 + 0x10 + local_1e8 * 8);
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_168._0_4_ = (undefined4)uVar16;
        uStack_168._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_160 = (undefined4)uVar21;
        uStack_15c = (undefined4)((ulonglong)uVar21 >> 0x20);
        local_170._0_4_ = (undefined4)uVar15;
        local_170._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = uVar15;
        uStack_168 = uVar16;
        local_108._s_0.X = local_188;
        local_108._s_0.Y = dStack_180;
        local_108._16_4_ = uStack_178;
        local_108._20_4_ = uStack_174;
        uStack_e0 = uStack_160;
        uStack_dc = uStack_15c;
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        bVar18 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar18) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_208[0] = uVar5;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar8 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar9 = *(code **)&param_5->TriangleFilterF;
      plVar22 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar8 != (longlong *)0x0) {
        plVar22 = plVar8;
      }
      uVar21 = (**(code **)(*plVar22 + 8))();
      cVar17 = (*pcVar9)(uVar21,local_208);
      if (cVar17 != '\0') goto LAB_14c84325c;
    }
    uVar27 = uVar27 + 1;
    if (local_200 < (int)(uVar27 - uVar4)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14c8435f0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TRay<double> *param_1,
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

// TestIntersection @ 14c843640

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestIntersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,TTriangle3<double> *param_1,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14c843720

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestIntersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14c843790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestIntersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,FComponentMesh *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  FComponent *pFVar6;
  FDynamicMesh3 *this_00;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  TAxisAlignedBox3<double> *pTVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auStackY_1f8 [32];
  uint local_1b8;
  uint uStack_1b4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  dVar3 = (param_2->Min).field0_0x0._s_0.X;
  if (((dVar3 < (param_2->Max).field0_0x0._s_0.X || dVar3 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar3 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar3 < *pdVar1 || dVar3 == *pdVar1)) &&
     (dVar3 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar3 < *pdVar1 || dVar3 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_e0 = 0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__UEBA_NPEBUFComponentMesh_MeshAutoRepair_5_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_f0 = param_3;
      pTVar16 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_108);
      dVar3 = (pTVar16->Min).field0_0x0._s_0.Y;
      dVar9 = (pTVar16->Min).field0_0x0._s_0.Z;
      dVar10 = (pTVar16->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar16->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar16->Max).field0_0x0._s_0.Y;
      dVar11 = (pTVar16->Max).field0_0x0._s_0.Z;
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
  uVar22 = 0;
  iVar4 = (param_1->Component->Indices).ArrayNum;
  if (0 < iVar4) {
    lVar23 = 0;
    do {
      pFVar6 = param_1->Component;
      this_00 = param_1->Mesh;
      iVar5 = (pFVar6->Indices).ArrayNum;
      if (*(longlong *)param_3 == 0) {
        uVar15 = 0;
        if ((int)uVar22 < iVar5) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this_00,*(int *)((pFVar6->Indices).AllocatorInstance.Data + lVar23 * 4),
                   (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90._s_0,
                   (TVector<double> *)&local_78._s_0);
      }
      else {
        uVar15 = 0;
        if ((int)uVar22 < iVar5) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        uVar15 = *(uint *)((pFVar6->Indices).AllocatorInstance.Data + lVar23 * 4);
        uVar19 = (ulonglong)(uVar15 & 0x1ff);
        lVar7 = *(longlong *)
                 ((this_00->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8)
        ;
        uVar18 = *(undefined8 *)(lVar7 + uVar19 * 0xc);
        uVar15 = *(uint *)(lVar7 + 8 + uVar19 * 0xc);
        local_1b8 = (uint)uVar18;
        lVar7 = *(longlong *)
                 ((param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_1b8 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar7 + (ulonglong)(local_1b8 & 0x1ff) * 0x18);
        local_1a0 = *puVar2;
        uStack_198 = puVar2[1];
        local_190 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(local_1b8 & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        puVar21 = &param_3->field_0x10;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)puVar21;
        }
        uVar17 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(&local_188,uVar17,&local_1a0);
        uStack_1b4 = (uint)((ulonglong)uVar18 >> 0x20);
        local_a8._s_0.X = local_188;
        local_a8._s_0.Y = dStack_180;
        local_a8._s_0.Z = local_178;
        lVar7 = *(longlong *)
                 ((param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uStack_1b4 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar7 + (ulonglong)(uStack_1b4 & 0x1ff) * 0x18);
        local_170 = *puVar2;
        uStack_168 = puVar2[1];
        local_160 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uStack_1b4 & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)puVar21;
        }
        uVar18 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(&local_158,uVar18,&local_170);
        local_90._s_0.X = local_158;
        local_90._s_0.Y = dStack_150;
        local_90._s_0.Z = local_148;
        uVar19 = (ulonglong)(uVar15 & 0x1ff);
        lVar7 = *(longlong *)
                 ((param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar15 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar7 + uVar19 * 0x18);
        local_140 = *puVar2;
        uStack_138 = puVar2[1];
        local_130 = *(undefined8 *)(lVar7 + 0x10 + uVar19 * 0x18);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)puVar21;
        }
        uVar18 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(&local_128,uVar18,&local_140);
        local_78._0_4_ = local_128;
        local_78._4_4_ = uStack_124;
        local_78._8_4_ = uStack_120;
        local_78._12_4_ = uStack_11c;
        local_78._s_0.Z = local_118;
      }
      cVar14 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,param_4);
      if (cVar14 != '\0') {
        return true;
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar4);
  }
  return false;
}

// TestSelfIntersection @ 14c843b50

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestSelfIntersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,bool param_1,
          FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 14c84ca10

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::TreeTraversalImpl
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,int param_2,
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
LAB_14c84cb26:
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
          if (cVar10 != '\0') goto LAB_14c84cb26;
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

// box_box_distsqr @ 14c852d20

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::box_box_distsqr
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
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

// box_box_intersect @ 14c852e00

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::box_box_intersect
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
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

// box_contains @ 14c852f20

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::box_contains
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2)

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

// find_any_intersection @ 14c8544d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_any_intersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FComponent *pFVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 auStackY_128 [32];
  uint local_f8 [2];
  FDynamicMesh3 *local_f0;
  TTriangle3<double> *local_e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_d0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_c0;
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar4 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar2 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar1 = (ulonglong)(uVar2 & 0x1ff) * 4;
  lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar2 >> 9) * 8);
  local_e8 = param_2;
  if ((int)uVar2 < this->TrianglesEnd) {
    iVar12 = *(int *)(lVar1 + lVar5);
    if (0 < iVar12) {
      uVar16 = uVar2 + 1;
      do {
        uVar3 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c8545db:
          local_f0 = this->Mesh->Mesh;
          pFVar8 = this->Mesh->Component;
          uVar11 = 0;
          if ((int)uVar3 < (pFVar8->Indices).ArrayNum) {
            uVar11 = ~uVar3 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            iVar12 = (*pcVar7)();
            return iVar12;
          }
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (local_f0,*(int *)((pFVar8->Indices).AllocatorInstance.Data +
                                      (longlong)(int)uVar3 * 4),&local_a8,&local_90,&local_78);
          cVar9 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_e8,&local_a8);
          if (cVar9 != '\0') {
            return uVar3;
          }
        }
        else {
          local_f8[0] = uVar3;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar6 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_5->TriangleFilterF;
          plVar15 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar6 != (longlong *)0x0) {
            plVar15 = plVar6;
          }
          uVar14 = (**(code **)(*plVar15 + 8))();
          cVar9 = (*pcVar7)(uVar14,local_f8);
          if (cVar9 != '\0') goto LAB_14c8545db;
        }
        uVar16 = uVar16 + 1;
      } while ((int)(uVar16 - uVar2) <= iVar12);
    }
  }
  else {
    uVar16 = *(uint *)(lVar1 + lVar5);
    if (-1 < (int)uVar16) {
      iVar13 = -1;
      iVar12 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                       (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      bVar10 = box_box_intersect(this,uVar16 - 1,param_3);
      if (bVar10) {
        local_d0._0_8_ = *(undefined8 *)param_4;
        local_d0._8_8_ = *(undefined8 *)&param_4->field_0x8;
        iVar13 = find_any_intersection(this,uVar16 - 1,param_2,param_3,&local_d0,param_5);
        if (iVar13 != -1) {
          return iVar13;
        }
      }
      bVar10 = box_box_intersect(this,iVar12 + -1,param_3);
      if (!bVar10) {
        return iVar13;
      }
      local_c0._0_8_ = *(undefined8 *)param_4;
      local_c0._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar12 = find_any_intersection(this,iVar12 + -1,param_2,param_3,&local_c0,param_5);
      return iVar12;
    }
    bVar10 = box_box_intersect(this,~uVar16,param_3);
    if (bVar10) {
      local_e0._0_8_ = *(undefined8 *)param_4;
      local_e0._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar12 = find_any_intersection(this,~uVar16,param_2,param_3,&local_e0,param_5);
      return iVar12;
    }
  }
  return -1;
}

// find_any_intersection @ 14c8547d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_any_intersection
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
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
  code *pcVar6;
  FComponent *pFVar7;
  FDynamicMesh3 *this_00;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auStackY_358 [32];
  int local_304;
  uint local_2e8 [2];
  uint local_2e0 [2];
  ulonglong local_2d8;
  FDynamicMesh3 *local_2d0;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *local_2c8;
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
  TVector<double> local_108;
  TVector<double> local_f0;
  TVector<double> local_d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  uVar26 = (ulonglong)((uint)param_1 >> 9);
  uVar25 = (ulonglong)(param_1 & 0x1ff);
  uVar4 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar26 * 8) +
                   uVar25 * 4);
  uVar21 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_2c8 = param_2;
  if ((int)uVar4 < this->TrianglesEnd) {
    if ((int)uVar21 < param_2->TrianglesEnd) {
      local_304 = 1;
      iVar19 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      iVar5 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
      if (iVar5 < 1) {
        return false;
      }
      do {
        uVar21 = uVar21 + 1;
        local_2d8 = (ulonglong)uVar21;
        uVar21 = *(uint *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c85496d:
          local_2d0 = param_2->Mesh->Mesh;
          pFVar7 = param_2->Mesh->Component;
          uVar17 = 0;
          if ((int)uVar21 < (pFVar7->Indices).ArrayNum) {
            uVar17 = ~uVar21 >> 0x1f;
          }
          if ((uVar17 == 0) &&
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
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (local_2d0,
                     *(int *)((pFVar7->Indices).AllocatorInstance.Data + (longlong)(int)uVar21 * 4),
                     (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_140._s_0,
                     (TVector<double> *)&local_128._s_0);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar6 = *(code **)param_3;
            puVar24 = &param_3->field_0x10;
            plVar22 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar24;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar6)(&local_1d0,uVar20,&local_158);
            local_158._s_0.X = local_1d0;
            local_158._s_0.Y = dStack_1c8;
            local_158._s_0.Z = local_1c0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar6 = *(code **)param_3;
            plVar22 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar24;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar6)(&local_1b8,uVar20,&local_140);
            local_140._s_0.X = local_1b8;
            local_140._s_0.Y = dStack_1b0;
            local_140._s_0.Z = local_1a8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar6 = *(code **)param_3;
            plVar22 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar24;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar6)(&local_1a0,uVar20,&local_128);
            local_128._s_0.X = local_1a0;
            local_128._s_0.Y = dStack_198;
            local_128._s_0.Z = local_190;
          }
          if (0 < iVar19) {
            uVar21 = uVar4 + 1;
            do {
              uVar17 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c854b5b:
                pFVar7 = this->Mesh->Component;
                this_00 = this->Mesh->Mesh;
                uVar18 = 0;
                if ((int)uVar17 < (pFVar7->Indices).ArrayNum) {
                  uVar18 = ~uVar17 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar6 = (code *)swi(3);
                  uVar16 = (*pcVar6)();
                  return (bool)uVar16;
                }
                FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (this_00,*(int *)((pFVar7->Indices).AllocatorInstance.Data +
                                           (longlong)(int)uVar17 * 4),&local_108,&local_f0,&local_d8
                          );
                cVar14 = (**(code **)param_6)
                                   (*(undefined8 *)&param_6->field_0x8,&local_158,&local_108);
                if (cVar14 != '\0') {
                  return true;
                }
              }
              else {
                local_2e0[0] = uVar17;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar22 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar6 = *(code **)&param_7->TriangleFilterF;
                plVar23 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar22 != (longlong *)0x0) {
                  plVar23 = plVar22;
                }
                uVar20 = (**(code **)(*plVar23 + 8))();
                cVar14 = (*pcVar6)(uVar20,local_2e0);
                if (cVar14 != '\0') goto LAB_14c854b5b;
              }
              uVar21 = uVar21 + 1;
              param_2 = local_2c8;
            } while ((int)(uVar21 - uVar4) <= iVar19);
          }
        }
        else {
          local_2e8[0] = uVar21;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          pcVar6 = *(code **)&param_8->TriangleFilterF;
          plVar22 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          plVar23 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar22 != (longlong *)0x0) {
            plVar23 = plVar22;
          }
          uVar20 = (**(code **)(*plVar23 + 8))();
          cVar14 = (*pcVar6)(uVar20,local_2e8);
          if (cVar14 != '\0') goto LAB_14c85496d;
        }
        local_304 = local_304 + 1;
        uVar21 = (uint)local_2d8;
        if (iVar5 < local_304) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar21 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_188,param_4,param_3);
    pFVar10 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar21 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)uVar21 < 0) {
      bVar15 = box_box_intersect(this,~uVar21,&local_188);
      if (!bVar15) {
        return false;
      }
      local_290._0_8_ = *(undefined8 *)param_6;
      local_290._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,~uVar21,param_2,param_3,param_4,param_5 + 1,&local_290,param_7,
                          param_8);
      return bVar15;
    }
    iVar19 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                     (ulonglong)(uVar4 + 1 & 0x1ff) * 4) + -1;
    bVar15 = box_box_intersect(this,uVar21 - 1,&local_188);
    if (bVar15) {
      local_280._0_8_ = *(undefined8 *)param_6;
      local_280._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,uVar21 - 1,param_2,param_3,param_4,param_5 + 1,&local_280,param_7,
                          param_8);
      if (bVar15) {
        return true;
      }
    }
    bVar15 = box_box_intersect(this,iVar19,&local_188);
    if (!bVar15) {
      return false;
    }
    local_270._0_8_ = *(undefined8 *)param_6;
    local_270._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar15 = find_any_intersection
                       (this,iVar19,param_2,param_3,param_4,param_5 + 1,&local_270,param_7,param_8);
    return bVar15;
  }
  lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar26 * 8);
  dVar1 = *(double *)(lVar8 + uVar25 * 0x18);
  lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar26 * 8);
  dVar2 = *(double *)(lVar8 + 8 + uVar25 * 0x18);
  dVar3 = *(double *)(lVar8 + 0x10 + uVar25 * 0x18);
  dVar11 = dVar1 - *(double *)(lVar9 + uVar25 * 0x18);
  dVar12 = dVar2 - *(double *)(lVar9 + 8 + uVar25 * 0x18);
  dVar13 = dVar3 - *(double *)(lVar9 + 0x10 + uVar25 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar9 + uVar25 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar9 + 8 + uVar25 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar9 + 0x10 + uVar25 * 0x18);
  pFVar10 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar21 >> 9) * 8) +
                   (ulonglong)(uVar21 & 0x1ff) * 4);
  if ((int)uVar4 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_260._s_0,~uVar4,param_3);
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
  iVar19 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                   (ulonglong)(uVar21 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_230._s_0,uVar4 - 1,param_3);
  if ((((local_230._s_0.X < dVar1) && (dVar11 < local_218)) && (local_230._s_0.Y < dVar2)) &&
     (((dVar12 < local_210 && (local_230._s_0.Z < dVar3)) && (dVar13 < local_208)))) {
    local_2b0._0_8_ = *(undefined8 *)param_6;
    local_2b0._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar15 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar4 - 1,param_5 + 1,&local_2b0,param_7,
                        param_8);
    if (bVar15) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_200._s_0,iVar19,param_3);
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
  if (dVar3 <= local_200._s_0.Z) {
    return false;
  }
  if (local_1d8 <= dVar13) {
    return false;
  }
  local_2a0._0_8_ = *(undefined8 *)param_6;
  local_2a0._8_8_ = *(undefined8 *)&param_6->field_0x8;
  bVar15 = find_any_intersection
                     (this,param_1,param_2,param_3,iVar19,param_5 + 1,&local_2a0,param_7,param_8);
  return bVar15;
}

// find_intersections @ 14c8550d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_intersections
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  double *pdVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  FComponent *pFVar11;
  FDynamicMesh3 *this_00;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  FQueryOptions *pFVar16;
  char cVar17;
  bool bVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  undefined1 auStackY_4d8 [32];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar30;
  uint local_480 [2];
  uint local_478;
  uint local_470 [2];
  FQueryOptions *local_468;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_460;
  ulonglong local_458;
  ulonglong local_450;
  FDynamicMesh3 *local_448;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_440;
  FIntersectionsQueryResult *local_438;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *local_430;
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
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 TStack_2d0;
  TVector<double>_u_0 local_2b8;
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
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar27 = (ulonglong)(param_1 & 0x1ff);
  uVar25 = (ulonglong)((uint)param_1 >> 9);
  local_440 = param_7;
  local_480[0] = param_4;
  local_478 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar25 * 8)
                       + uVar27 * 4);
  local_438 = param_6;
  local_468 = param_9;
  uVar21 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_460 = param_3;
  local_430 = param_2;
  if ((int)local_478 < this->TrianglesEnd) {
    if ((int)uVar21 < param_2->TrianglesEnd) {
      uVar7 = *(uint *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(local_478 >> 9) * 8) + (ulonglong)(local_478 & 0x1ff) * 4);
      uVar24 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
      local_450 = (ulonglong)uVar24;
      if ((int)uVar24 < 1) {
        return;
      }
      do {
        pFVar16 = local_468;
        uVar21 = uVar21 + 1;
        local_458 = (ulonglong)uVar21;
        uVar21 = *(uint *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
        if (*(void **)&local_468->TriangleFilterF == (void *)0x0) {
LAB_14c855279:
          pFVar11 = param_2->Mesh->Component;
          this_00 = param_2->Mesh->Mesh;
          uVar24 = 0;
          if ((int)uVar21 < (pFVar11->Indices).ArrayNum) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this_00,*(int *)((pFVar11->Indices).AllocatorInstance.Data +
                                     (longlong)(int)uVar21 * 4),(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar26 = local_460;
          if (*(void **)local_460 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_460);
            puVar2 = &pTVar26->field_0x10;
            pcVar10 = *(code **)pTVar26;
            plVar22 = *(longlong **)&pTVar26->field_0x28;
            if (*(longlong **)&pTVar26->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar2;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar10)(&local_338,uVar20,&local_248);
            local_248._s_0.X = local_338;
            local_248._s_0.Y = dStack_330;
            local_248._s_0.Z = local_328;
            Core::Private::Function::CheckCallable(*(void **)pTVar26);
            pcVar10 = *(code **)pTVar26;
            plVar22 = *(longlong **)&pTVar26->field_0x28;
            if (*(longlong **)&pTVar26->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar2;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar10)(&local_320,uVar20,&TStack_230);
            TStack_230._s_0.X = local_320;
            TStack_230._s_0.Y = dStack_318;
            TStack_230._s_0.Z = local_310;
            Core::Private::Function::CheckCallable(*(void **)pTVar26);
            pcVar10 = *(code **)pTVar26;
            plVar22 = *(longlong **)&pTVar26->field_0x28;
            if (*(longlong **)&pTVar26->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar2;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar10)(&local_308,uVar20,&local_218);
            local_218._0_4_ = local_308;
            local_218._4_4_ = uStack_304;
            local_218._8_4_ = uStack_300;
            local_218._12_4_ = uStack_2fc;
            local_218._s_0.Z = local_2f8;
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
            uVar25 = (ulonglong)uVar7;
            uVar24 = local_478;
            do {
              uVar24 = uVar24 + 1;
              uVar8 = *(uint *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c8554cb:
                local_448 = this->Mesh->Mesh;
                pFVar11 = this->Mesh->Component;
                uVar19 = 0;
                if ((int)uVar8 < (pFVar11->Indices).ArrayNum) {
                  uVar19 = ~uVar8 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (local_448,
                           *(int *)((pFVar11->Indices).AllocatorInstance.Data +
                                   (longlong)(int)uVar8 * 4),(TVector<double> *)&local_2e8._s_0,
                           (TVector<double> *)&TStack_2d0._s_0,(TVector<double> *)&local_2b8._s_0);
                local_1b0 = local_2e8._s_0.X;
                dStack_1a8 = local_2e8._s_0.Y;
                local_15c = local_15c & 0xffffffff00000000;
                local_190 = TStack_2d0._s_0.Y;
                dStack_188 = TStack_2d0._s_0.Z;
                local_1a0 = local_2e8._s_0.Z;
                dStack_198 = TStack_2d0._s_0.X;
                local_170 = local_2b8._s_0.Z;
                local_180 = local_2b8._0_4_;
                uStack_17c = local_2b8._4_4_;
                uStack_178 = local_2b8._8_4_;
                uStack_174 = local_2b8._12_4_;
                cVar17 = (**(code **)local_440)(*(undefined8 *)&local_440->field_0x8,&local_1f8);
                if (cVar17 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar8,uVar21,
                             local_438);
                }
              }
              else {
                local_470[0] = uVar8;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar22 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar10 = *(code **)&param_8->TriangleFilterF;
                plVar23 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar22 != (longlong *)0x0) {
                  plVar23 = plVar22;
                }
                uVar20 = (**(code **)(*plVar23 + 8))();
                cVar17 = (*pcVar10)(uVar20,local_470);
                if (cVar17 != '\0') goto LAB_14c8554cb;
              }
              uVar25 = uVar25 - 1;
              param_2 = local_430;
            } while (uVar25 != 0);
          }
        }
        else {
          local_480[0] = uVar21;
          Core::Private::Function::CheckCallable(*(void **)&local_468->TriangleFilterF);
          plVar22 = *(longlong **)&(pFVar16->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&pFVar16->TriangleFilterF;
          plVar23 = (longlong *)&(pFVar16->TriangleFilterF).field_0x10;
          if (plVar22 != (longlong *)0x0) {
            plVar23 = plVar22;
          }
          uVar20 = (**(code **)(*plVar23 + 8))();
          cVar17 = (*pcVar10)(uVar20,local_480);
          if (cVar17 != '\0') goto LAB_14c855279;
        }
        uVar21 = (uint)local_458;
        local_450 = local_450 - 1;
        if (local_450 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar21 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar21 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_478 >> 9) * 8) + (ulonglong)(local_478 & 0x1ff) * 4);
    if ((int)uVar21 < 0) {
      bVar18 = box_box_intersect(this,~uVar21,&local_298);
      if (!bVar18) {
        return;
      }
      local_3f8._0_8_ = *(undefined8 *)param_7;
      local_3f8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar21,param_2,local_460,local_480[0],param_5 + 1,param_6,&local_3f8,
                         param_8,local_468);
      return;
    }
    bVar18 = box_box_intersect(this,uVar21 - 1,&local_298);
    pFVar16 = local_468;
    if (bVar18) {
      local_3e8._0_8_ = *(undefined8 *)param_7;
      local_3e8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar21 - 1,param_2,local_460,local_480[0],param_5 + 1,param_6,
                         &local_3e8,param_8,local_468);
    }
    iVar9 = *(int *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_478 + 1 >> 9) * 8) + (ulonglong)(local_478 + 1 & 0x1ff) * 4)
    ;
    bVar18 = box_box_intersect(this,iVar9 + -1,&local_298);
    if (!bVar18) {
      return;
    }
    local_3d8._0_8_ = *(undefined8 *)param_7;
    local_3d8._8_8_ = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar9 + -1,param_2,local_460,local_480[0],param_5 + 1,param_6,&local_3d8
                       ,param_8,pFVar16);
    return;
  }
  dVar3 = this->BoxEps;
  lVar12 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar25 * 8);
  dVar4 = *(double *)(lVar12 + uVar27 * 0x18);
  lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar25 * 8);
  dVar5 = *(double *)(lVar12 + 8 + uVar27 * 0x18);
  dVar6 = *(double *)(lVar12 + 0x10 + uVar27 * 0x18);
  pdVar1 = (double *)(lVar13 + uVar27 * 0x18);
  dVar29 = dVar3 + *(double *)(lVar13 + 0x10 + uVar27 * 0x18);
  dVar28 = dVar3 + *pdVar1;
  dVar3 = dVar3 + pdVar1[1];
  dVar15 = dVar6 - dVar29;
  dVar14 = dVar4 - dVar28;
  dVar4 = dVar4 + dVar28;
  uVar7 = *(uint *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
  dVar28 = dVar5 - dVar3;
  dVar5 = dVar5 + dVar3;
  dVar6 = dVar6 + dVar29;
  if ((int)uVar7 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3c8._s_0,~uVar7,param_3);
    if (dVar4 <= local_3c8._s_0.X) {
      return;
    }
    if (local_3b0 <= dVar14) {
      return;
    }
    if (dVar5 <= local_3c8._s_0.Y) {
      return;
    }
    if (local_3a8 <= dVar28) {
      return;
    }
    if (dVar6 <= local_3c8._s_0.Z) {
      return;
    }
    if (local_3a0 <= dVar15) {
      return;
    }
    local_428._0_8_ = *(undefined8 *)param_7;
    pTVar30 = &local_428;
    local_428._8_8_ = *(undefined8 *)&param_7->field_0x8;
    pTVar26 = local_460;
    uVar21 = ~uVar7;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_398._s_0,uVar7 - 1,param_3);
    if ((((local_398._s_0.X < dVar4) && (dVar14 < local_380)) && (local_398._s_0.Y < dVar5)) &&
       (((dVar28 < local_378 && (local_398._s_0.Z < dVar6)) && (dVar15 < local_370)))) {
      local_418._0_8_ = *(undefined8 *)param_7;
      local_418._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,param_1,param_2,local_460,uVar7 - 1,param_5 + 1,param_6,&local_418,
                         param_8,local_468);
    }
    pTVar26 = local_460;
    local_470[0] = *(int *)(*(longlong *)
                             ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar21 + 1 >> 9) * 8) + (ulonglong)(uVar21 + 1 & 0x1ff) * 4
                           ) - 1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_368._s_0,local_470[0],local_460);
    if (dVar4 <= local_368._s_0.X) {
      return;
    }
    if (local_350 <= dVar14) {
      return;
    }
    if (dVar5 <= local_368._s_0.Y) {
      return;
    }
    if (local_348 <= dVar28) {
      return;
    }
    if (dVar6 <= local_368._s_0.Z) {
      return;
    }
    if (local_340 <= dVar15) {
      return;
    }
    local_408._0_8_ = *(undefined8 *)param_7;
    pTVar30 = &local_408;
    local_408._8_8_ = *(undefined8 *)&param_7->field_0x8;
    uVar21 = local_470[0];
  }
  find_intersections(this,param_1,param_2,pTVar26,uVar21,param_5 + 1,param_6,pTVar30,param_8,
                     local_468);
  return;
}

// find_nearest_triangles @ 14c855ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_nearest_triangles
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  double *pdVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  FComponent *pFVar6;
  FDynamicMesh3 *this_00;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  FIndex2i_u_0 FVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStackY_478 [32];
  ulonglong local_400;
  uint local_3f8 [2];
  uint local_3f0;
  uint local_3e8 [2];
  uint local_3e0;
  uint uStack_3dc;
  ulonglong local_3d8;
  ulonglong local_3d0;
  FDynamicMesh3 *local_3c8;
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
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 TStack_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar10 = __real_3fd0000000000000;
  uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  iVar21 = param_5 + 1;
LAB_14c855bc0:
  do {
    while( true ) {
      dVar31 = __real_bff0000000000000;
      uVar22 = (ulonglong)(param_1 & 0x1ff);
      uVar18 = (ulonglong)((uint)param_1 >> 9);
      uVar3 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar18 * 8)
                       + uVar22 * 4);
      uVar17 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar3 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar17)) goto LAB_14c855e7a;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3a8._s_0,param_4,param_3);
      pFVar9 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar17 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar3 >> 9) * 8) +
                        (ulonglong)(uVar3 & 0x1ff) * 4);
      if ((int)uVar17 < 0) {
        dStack_3b8 = this->BoxEps;
        param_1 = ~uVar17;
        uVar18 = (ulonglong)(param_1 & 0x1ff);
        lVar7 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        dVar31 = *(double *)(lVar7 + uVar18 * 0x18);
        dVar29 = *(double *)(lVar7 + 8 + uVar18 * 0x18);
        lVar8 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        dVar26 = *(double *)(lVar7 + 0x10 + uVar18 * 0x18);
        pdVar1 = (double *)(lVar8 + uVar18 * 0x18);
        local_3b0 = *(double *)(lVar8 + 0x10 + uVar18 * 0x18) + dStack_3b8;
        local_3c0 = *pdVar1 + dStack_3b8;
        dStack_3b8 = pdVar1[1] + dStack_3b8;
        dVar27 = dVar26 - local_3b0;
        dVar26 = dVar26 + local_3b0;
        dVar30 = dVar31 - local_3c0;
        dVar24 = dVar29 - dStack_3b8;
        dVar29 = dVar29 + dStack_3b8;
        dVar31 = dVar31 + local_3c0;
        dVar28 = (local_3a8._s_0.X + local_390) - (dVar31 + dVar30);
        dVar31 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar23,SUB84(dVar28,0) & uVar4
                                 ) - ((local_390 - local_3a8._s_0.X) + (dVar31 - dVar30));
        if (dVar31 <= 0.0) {
          dVar31 = 0.0;
        }
        dVar28 = (local_3a8._s_0.Y + local_388) - (dVar29 + dVar24);
        dVar29 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar23,SUB84(dVar28,0) & uVar4
                                 ) - ((local_388 - local_3a8._s_0.Y) + (dVar29 - dVar24));
        if (dVar29 <= 0.0) {
          dVar29 = 0.0;
        }
        dVar24 = (local_3a8._s_0.Z + local_380) - (dVar26 + dVar27);
        dVar26 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar23,SUB84(dVar24,0) & uVar4
                                 ) - ((local_380 - local_3a8._s_0.Z) + (dVar26 - dVar27));
        if (dVar26 <= 0.0) {
          dVar26 = 0.0;
        }
        bVar14 = (dVar29 * dVar29 + dVar31 * dVar31 + dVar26 * dVar26) * dVar10 < *param_6;
        goto LAB_14c856454;
      }
      uVar17 = uVar17 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                        (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
      dVar31 = box_box_distsqr(this,uVar17,(TAxisAlignedBox3<double> *)&local_3a8._s_0);
      dVar29 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_3a8._s_0);
      if (dVar29 < dVar31) {
        if (dVar29 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar21,param_6,param_7,param_8,param_9);
        }
        bVar14 = dVar31 < *param_6;
        param_1 = uVar17;
        goto LAB_14c856454;
      }
      if (dVar31 < *param_6) {
        find_nearest_triangles
                  (this,uVar17,param_2,param_3,param_4,iVar21,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar29) {
        return;
      }
      param_5 = param_5 + 1;
      iVar21 = iVar21 + 1;
    }
    if ((int)uVar17 < param_2->TrianglesEnd) {
      local_3f0 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
      uVar4 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
      local_400 = (ulonglong)uVar4;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar4 < 1) {
        return;
      }
      break;
    }
LAB_14c855e7a:
    lVar7 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar18 * 8);
    dVar31 = *(double *)(lVar7 + uVar22 * 0x18);
    lVar8 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar18 * 8);
    dVar29 = *(double *)(lVar7 + 8 + uVar22 * 0x18);
    dVar26 = *(double *)(lVar7 + 0x10 + uVar22 * 0x18);
    pFVar9 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar24 = dVar31 - *(double *)(lVar8 + uVar22 * 0x18);
    dVar27 = dVar29 - *(double *)(lVar8 + 8 + uVar22 * 0x18);
    dVar30 = dVar26 - *(double *)(lVar8 + 0x10 + uVar22 * 0x18);
    dVar31 = dVar31 + *(double *)(lVar8 + uVar22 * 0x18);
    dVar29 = dVar29 + *(double *)(lVar8 + 8 + uVar22 * 0x18);
    dVar26 = dVar26 + *(double *)(lVar8 + 0x10 + uVar22 * 0x18);
    dVar28 = dVar31 - dVar24;
    dVar31 = dVar31 + dVar24;
    dVar24 = dVar29 + dVar27;
    dVar29 = dVar29 - dVar27;
    dVar27 = dVar26 + dVar30;
    dVar26 = dVar26 - dVar30;
    uVar3 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar17 >> 9) * 8) +
                     (ulonglong)(uVar17 & 0x1ff) * 4);
    if ((int)uVar3 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_378._s_0,~uVar3,param_3);
      dVar31 = dVar31 - (local_378._s_0.X + local_360);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar23,SUB84(dVar31,0) & uVar4)
               - ((local_360 - local_378._s_0.X) + dVar28);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      dVar24 = dVar24 - (local_378._s_0.Y + local_358);
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar23,SUB84(dVar24,0) & uVar4)
               - ((local_358 - local_378._s_0.Y) + dVar29);
      if (dVar29 <= 0.0) {
        dVar29 = 0.0;
      }
      dVar27 = dVar27 - (local_378._s_0.Z + local_350);
      dVar26 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar23,SUB84(dVar27,0) & uVar4)
               - ((local_350 - local_378._s_0.Z) + dVar26);
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      bVar14 = (dVar29 * dVar29 + dVar31 * dVar31 + dVar26 * dVar26) * dVar10 < *param_6;
      param_4 = ~uVar3;
    }
    else {
      uVar3 = uVar3 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                        (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_348._s_0,uVar3,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_318._s_0,param_4,param_3);
      dVar30 = dVar31 - (local_348._s_0.X + local_330);
      dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar23,SUB84(dVar30,0) & uVar4)
               - ((local_330 - local_348._s_0.X) + dVar28);
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      dVar11 = dVar24 - (local_348._s_0.Y + local_328);
      dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar23,SUB84(dVar11,0) & uVar4)
               - ((local_328 - local_348._s_0.Y) + dVar29);
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      dVar25 = dVar27 - (local_348._s_0.Z + local_320);
      dVar25 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar23,SUB84(dVar25,0) & uVar4)
               - ((local_320 - local_348._s_0.Z) + dVar26);
      if (dVar25 <= 0.0) {
        dVar25 = 0.0;
      }
      dVar31 = dVar31 - (local_318._s_0.X + local_300);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar23,SUB84(dVar31,0) & uVar4)
               - ((local_300 - local_318._s_0.X) + dVar28);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      dVar24 = dVar24 - (local_318._s_0.Y + local_2f8);
      dVar28 = (dVar11 * dVar11 + dVar30 * dVar30 + dVar25 * dVar25) * dVar10;
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar23,SUB84(dVar24,0) & uVar4)
               - ((local_2f8 - local_318._s_0.Y) + dVar29);
      if (dVar29 <= 0.0) {
        dVar29 = 0.0;
      }
      dVar27 = dVar27 - (local_318._s_0.Z + local_2f0);
      dVar26 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar23,SUB84(dVar27,0) & uVar4)
               - ((local_2f0 - local_318._s_0.Z) + dVar26);
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      dVar31 = (dVar29 * dVar29 + dVar31 * dVar31 + dVar26 * dVar26) * dVar10;
      if (dVar28 <= dVar31) {
        if (dVar28 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar3,iVar21,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar31) {
          return;
        }
        param_5 = param_5 + 1;
        iVar21 = iVar21 + 1;
        goto LAB_14c855bc0;
      }
      if (dVar31 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar21,param_6,param_7,param_8,param_9);
      }
      bVar14 = dVar28 < *param_6;
      param_4 = uVar3;
    }
LAB_14c856454:
    if (!bVar14) {
      return;
    }
    param_5 = param_5 + 1;
    iVar21 = iVar21 + 1;
  } while( true );
LAB_14c855c80:
  uVar17 = uVar17 + 1;
  local_3d0 = (ulonglong)uVar17;
  uVar4 = *(uint *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c855ce1:
    pFVar6 = param_2->Mesh->Component;
    this_00 = param_2->Mesh->Mesh;
    uVar23 = 0;
    if ((int)uVar4 < (pFVar6->Indices).ArrayNum) {
      uVar23 = ~uVar4 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_00,*(int *)((pFVar6->Indices).AllocatorInstance.Data + (longlong)(int)uVar4 * 4)
               ,(TVector<double> *)&local_248._s_0,(TVector<double> *)&TStack_230._s_0,
               (TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar2 = &param_3->field_0x10;
      pcVar5 = *(code **)param_3;
      plVar19 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)puVar2;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar5)(&local_2e8,uVar16,&local_248);
      local_248._s_0.X = local_2e8;
      local_248._s_0.Y = dStack_2e0;
      local_248._s_0.Z = local_2d8;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar5 = *(code **)param_3;
      plVar19 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)puVar2;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar5)(&local_2d0,uVar16,&TStack_230);
      TStack_230._s_0.X = local_2d0;
      TStack_230._s_0.Y = dStack_2c8;
      TStack_230._s_0.Z = local_2c0;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar5 = *(code **)param_3;
      plVar19 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)puVar2;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar5)(&local_2b8,uVar16,&local_218);
      local_218._0_4_ = local_2b8;
      local_218._4_4_ = uStack_2b4;
      local_218._8_4_ = uStack_2b0;
      local_218._12_4_ = uStack_2ac;
      local_218._s_0.Z = local_2a8;
    }
    local_1f8.DistanceSquared = dVar31;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    uVar23 = uVar3;
    uVar18 = (ulonglong)local_3f0;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = local_218._s_0.Z;
    if (0 < (int)local_3f0) {
      do {
        local_3d8 = uVar18;
        uVar23 = uVar23 + 1;
        uVar17 = *(uint *)(*(longlong *)
                            ((this->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c85659a:
          local_3c8 = this->Mesh->Mesh;
          pFVar6 = this->Mesh->Component;
          uVar15 = 0;
          if ((int)uVar17 < (pFVar6->Indices).ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (local_3c8,
                     *(int *)((pFVar6->Indices).AllocatorInstance.Data + (longlong)(int)uVar17 * 4),
                     (TVector<double> *)&local_298._s_0,(TVector<double> *)&TStack_280._s_0,
                     (TVector<double> *)&local_268._s_0);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298._s_0.X;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = local_298._s_0.Y;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = TStack_280._s_0.Y;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = TStack_280._s_0.Z;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = local_298._s_0.Z;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = TStack_280._s_0.X;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_268._s_0.Z;
          local_1f8.DistanceSquared = dVar31;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268._s_0.X;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = local_268._s_0.Y;
          dVar10 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar10 < *param_6) {
            FVar12._s_0.B = uVar4;
            FVar12._s_0.A = uVar17;
            *param_6 = dVar10;
            param_7->field0_0x0 = FVar12;
            local_3e0 = uVar17;
            uStack_3dc = uVar4;
          }
        }
        else {
          local_3e8[0] = uVar17;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar19 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar5 = *(code **)&param_8->TriangleFilterF;
          plVar20 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar19 != (longlong *)0x0) {
            plVar20 = plVar19;
          }
          uVar16 = (**(code **)(*plVar20 + 8))();
          cVar13 = (*pcVar5)(uVar16,local_3e8);
          if (cVar13 != '\0') goto LAB_14c85659a;
        }
        local_3d8 = local_3d8 - 1;
        uVar18 = local_3d8;
      } while (local_3d8 != 0);
    }
  }
  else {
    local_3f8[0] = uVar4;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar19 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar5 = *(code **)&param_9->TriangleFilterF;
    plVar20 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar19 != (longlong *)0x0) {
      plVar20 = plVar19;
    }
    uVar16 = (**(code **)(*plVar20 + 8))();
    cVar13 = (*pcVar5)(uVar16,local_3f8);
    if (cVar13 != '\0') goto LAB_14c855ce1;
  }
  uVar17 = (uint)local_3d0;
  local_400 = local_400 - 1;
  if (local_400 == 0) {
    return;
  }
  goto LAB_14c855c80;
}

// find_nearest_vertex @ 14c856740

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_nearest_vertex
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  FComponentMesh **ppFVar1;
  double *pdVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FDynamicMesh3 *pFVar7;
  FComponent *pFVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong local_res8;
  uint local_res10 [2];
  uint local_80;
  ulonglong uVar14;
  
  uVar17 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar17) {
    do {
      pFVar4 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar16 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)uVar16 < 0) {
        uVar16 = ~uVar16;
        dVar18 = BoxDistanceSqr(this,uVar16,param_2);
        if (*param_3 <= dVar18 && dVar18 != *param_3) {
          return;
        }
      }
      else {
        uVar12 = uVar16 - 1;
        uVar16 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
        dVar18 = BoxDistanceSqr(this,uVar12,param_2);
        dVar19 = BoxDistanceSqr(this,uVar16,param_2);
        if (dVar19 <= dVar18) {
          if (*param_3 <= dVar19) {
            return;
          }
          find_nearest_vertex(this,uVar16,param_2,param_3,param_4,param_5);
          uVar16 = uVar12;
          if (*param_3 <= dVar18) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar18) {
            return;
          }
          find_nearest_vertex(this,uVar12,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar19) {
            return;
          }
        }
      }
      uVar17 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar17);
  }
  uVar16 = *(uint *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
  local_res8 = (ulonglong)uVar16;
  if (0 < (int)uVar16) {
    do {
      uVar17 = uVar17 + 1;
      uVar16 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c85696f:
        ppFVar1 = &this->Mesh;
        pFVar7 = this->Mesh->Mesh;
        pFVar8 = this->Mesh->Component;
        uVar12 = 0;
        if ((int)uVar16 < (pFVar8->Indices).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = *(uint *)((pFVar8->Indices).AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
        uVar14 = (ulonglong)(uVar16 & 0x1ff);
        lVar9 = *(longlong *)
                 ((pFVar7->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
        uVar3 = *(ulonglong *)(lVar9 + uVar14 * 0xc);
        uVar16 = *(uint *)(lVar9 + 8 + uVar14 * 0xc);
        local_80 = (uint)uVar3;
        lVar9 = *(longlong *)
                 (((*ppFVar1)->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_80 >> 9) * 8);
        pdVar2 = (double *)(lVar9 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar20 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar19 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar18 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar9 + 0x10 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = local_80;
        }
        uVar12 = (uint)(uVar3 >> 0x20);
        uVar14 = (ulonglong)(uVar12 & 0x1ff);
        lVar9 = *(longlong *)
                 (((*ppFVar1)->Mesh->Vertices).Blocks.AllocatorInstance.Data + (uVar3 >> 0x29) * 8);
        pdVar2 = (double *)(lVar9 + uVar14 * 0x18);
        dVar20 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar18 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar9 + 0x10 + uVar14 * 0x18);
        dVar19 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar12;
        }
        lVar9 = *(longlong *)
                 (((*ppFVar1)->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar16 >> 9) * 8);
        pdVar2 = (double *)(lVar9 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
        dVar20 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar18 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar9 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
        dVar19 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar16;
        }
      }
      else {
        local_res10[0] = uVar16;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_5->TriangleFilterF;
        plVar15 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar15 = plVar5;
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        cVar10 = (*pcVar6)(uVar13,local_res10);
        if (cVar10 != '\0') goto LAB_14c85696f;
      }
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return;
}

// find_self_intersections @ 14c856be0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_self_intersections
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,
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

// find_self_intersections_acrossboxes @ 14c856d70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::
find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,int param_2,
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
LAB_14c856f25:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14c856f25;
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
      goto joined_r0x00014c857121;
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
joined_r0x00014c857121:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14c8573b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::find_tri_tri_intersections
          (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,int param_2,
          int param_3,FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  FComponent *pFVar3;
  FDynamicMesh3 *pFVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStackY_2a8 [32];
  char local_278;
  int local_270 [2];
  int local_268;
  uint local_260 [2];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_258;
  FIntersectionsQueryResult *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_258 = param_6;
  local_250 = param_4;
  local_268 = param_3;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_270[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar1 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar2 = *(code **)&param_7->TriangleFilterF;
    plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    cVar6 = (*pcVar2)(uVar11,local_270);
    if (cVar6 == '\0') {
      return false;
    }
  }
  pFVar3 = this->Mesh->Component;
  pFVar4 = this->Mesh->Mesh;
  local_278 = '\0';
  uVar9 = 0;
  if (param_1 < (pFVar3->Indices).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (pFVar4,*(int *)((pFVar3->Indices).AllocatorInstance.Data + (longlong)param_1 * 4),
             (TVector<double> *)&local_228._s_0,(TVector<double> *)&TStack_210._s_0,
             (TVector<double> *)&local_1f8._s_0);
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
  pFVar3 = this->Mesh->Component;
  pFVar4 = this->Mesh->Mesh;
  uVar9 = 0;
  if (param_1 < (pFVar3->Indices).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  iVar5 = local_268;
  uVar9 = *(uint *)((pFVar3->Indices).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar13 = (ulonglong)(uVar9 & 0x1ff);
  lVar15 = *(longlong *)
            ((pFVar4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
  local_248 = *(undefined8 *)(lVar15 + uVar13 * 0xc);
  local_240 = *(undefined4 *)(lVar15 + 8 + uVar13 * 0xc);
  do {
    if (iVar5 <= param_2) {
      return (bool)local_278;
    }
    uVar9 = *(uint *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
    if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c857620:
      pFVar3 = this->Mesh->Component;
      pFVar4 = this->Mesh->Mesh;
      uVar10 = 0;
      if ((int)uVar9 < (pFVar3->Indices).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      uVar10 = *(uint *)((pFVar3->Indices).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      uVar13 = (ulonglong)(uVar10 & 0x1ff);
      lVar15 = *(longlong *)
                ((pFVar4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      local_238 = *(undefined8 *)(lVar15 + uVar13 * 0xc);
      local_230 = *(undefined4 *)(lVar15 + 8 + uVar13 * 0xc);
      if (param_5) {
        bVar7 = false;
        lVar15 = 0;
        do {
          if (bVar7) goto LAB_14c8577cf;
          lVar12 = 0;
          do {
            if (*(int *)((longlong)&local_248 + lVar15 * 4) ==
                *(int *)((longlong)&local_238 + lVar12 * 4)) {
              bVar7 = true;
              break;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < 3);
          lVar15 = lVar15 + 1;
        } while (lVar15 < 3);
        if (bVar7) goto LAB_14c8577cf;
      }
      pFVar3 = this->Mesh->Component;
      pFVar4 = this->Mesh->Mesh;
      uVar10 = 0;
      if ((int)uVar9 < (pFVar3->Indices).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (pFVar4,*(int *)((pFVar3->Indices).AllocatorInstance.Data + (longlong)(int)uVar9 * 4
                                ),(TVector<double> *)&local_1d8._s_0,
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
      local_278 = (**(code **)local_258)(*(undefined8 *)&local_258->field_0x8,&local_188);
      if (local_278 != '\0') {
        if (local_250 == (FIntersectionsQueryResult *)0x0) {
          return true;
        }
        AddTriTriIntersectionResult
                  ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,param_1,uVar9,local_250);
      }
    }
    else {
      local_260[0] = uVar9;
      Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
      plVar1 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
      pcVar2 = *(code **)&param_7->TriangleFilterF;
      plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar14 = plVar1;
      }
      uVar11 = (**(code **)(*plVar14 + 8))();
      cVar6 = (*pcVar2)(uVar11,local_260);
      if (cVar6 != '\0') goto LAB_14c857620;
    }
LAB_14c8577cf:
    param_2 = param_2 + 1;
  } while( true );
}

// <lambda_invoker_cdecl> @ 14c85c770

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::MakeDefaultSplitAxisFunc'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14c85c790

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindAllIntersections'::__l5::
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

// <lambda_invoker_cdecl> @ 14c85c7d0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindAllSelfIntersections'::__l5::
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

// FindHitTriangle<UE::Math::TRay<double>_> @ 14c86d080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,TRay<double> *param_2,
          double *param_3,int *param_4,TVector<double> *param_5,FQueryOptions *param_6)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar18;
  double dVar19;
  undefined1 auStackY_1d8 [32];
  int local_198 [2];
  ulonglong local_190;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_188;
  int *local_180;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar19 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_188 = &(this->IndexList).Blocks;
  local_180 = param_4;
  uVar17 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar17) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar16 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)uVar16 < 0) {
        uVar16 = ~uVar16;
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar16,param_2);
        if (*param_3 + dVar19 < dVar9) {
          return;
        }
      }
      else {
        uVar2 = uVar16 - 1;
        uVar16 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar2,param_2);
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar16,param_2);
        if (dVar10 <= dVar9) {
          if (*param_3 + dVar19 < dVar10) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar16,param_2,param_3,param_4,param_5,param_6);
          uVar16 = uVar2;
          if (*param_3 + dVar19 < dVar9) {
            return;
          }
        }
        else {
          if (*param_3 + dVar19 < dVar9) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar2,param_2,param_3,param_4,param_5,param_6);
          if (*param_3 + dVar19 < dVar10) {
            return;
          }
        }
      }
      uVar17 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar17);
  }
  pTVar18 = &(this->IndexList).Blocks;
  uVar16 = *(uint *)(*(longlong *)((pTVar18->AllocatorInstance).Data + (ulonglong)(uVar17 >> 9) * 8)
                    + (ulonglong)(uVar17 & 0x1ff) * 4);
  local_190 = (ulonglong)uVar16;
  if (0 < (int)uVar16) {
    do {
      uVar17 = uVar17 + 1;
      iVar1 = *(int *)(*(longlong *)
                        ((pTVar18->AllocatorInstance).Data + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14c86d2f9:
        local_128._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uVar11 = iVar1 * 3;
        local_128._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.X;
        pTVar6 = this->Mesh->UV;
        lVar7 = *(longlong *)&pTVar6->field_0x48;
        lVar8 = *(longlong *)&pTVar6->field_0x78;
        local_108 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_100 = (param_2->Direction).field0_0x0._s_0.Z;
        uVar16 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 4);
        dVar19 = (double)*(float *)(*(longlong *)
                                     (lVar7 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4);
        uVar2 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                         (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
        local_f8._8_4_ = SUB84(dVar19,0);
        local_f8._0_8_ =
             (double)*(float *)(*(longlong *)(lVar7 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar16 * 2 & 0x1ff) * 4);
        local_f8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        dStack_e0 = (double)*(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
        local_d8 = (double)*(float *)(*(longlong *)
                                       (lVar7 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
        uVar16 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                          (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
        dVar19 = (double)*(float *)(*(longlong *)
                                     (lVar7 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4);
        uStack_d0 = 0;
        local_c8._8_4_ = SUB84(dVar19,0);
        local_c8._0_8_ =
             (double)*(float *)(*(longlong *)(lVar7 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar16 * 2 & 0x1ff) * 4);
        local_c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        local_f8._s_0.Z = 0.0;
        local_b8 = 0;
        bVar13 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar13) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_180 = iVar1;
          (param_5->field0_0x0)._s_0.X = local_a8._s_0.X;
          (param_5->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (param_5->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_198[0] = iVar1;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar4 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_6->TriangleFilterF;
        plVar15 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar15 = plVar4;
        }
        uVar14 = (**(code **)(*plVar15 + 8))();
        cVar12 = (*pcVar5)(uVar14,local_198);
        if (cVar12 != '\0') goto LAB_14c86d2f9;
      }
      local_190 = local_190 - 1;
      pTVar18 = local_188;
    } while (local_190 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14c86d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_1d8 [32];
  int local_1a8 [2];
  ulonglong local_1a0;
  int local_198;
  undefined4 uStack_194;
  double dStack_190;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar13 = __real_47efffffe0000000;
  dVar12 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar25 = SUB84(__real_47efffffe0000000,0);
  uVar26 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar22 = param_4->MaxDistance;
  uVar23 = SUB84(dVar22,0);
  uVar24 = (int)((ulonglong)dVar22 >> 0x20);
  if (__real_47efffffe0000000 <= dVar22) {
    uVar23 = uVar25;
    uVar24 = uVar26;
  }
  uVar21 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar21) {
    do {
      pFVar4 = (this->IndexList).Blocks.AllocatorInstance.Data;
      dVar22 = (double)CONCAT44(uVar24,uVar23) + dVar12;
      uVar1 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar21 >> 9) * 8) +
                       (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar1 < 0) {
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar1,param_2);
        uVar21 = ~uVar1;
      }
      else {
        uVar1 = uVar1 - 1;
        uVar21 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4) - 1;
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar1,param_2);
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar21,param_2);
        if (dVar9 <= dVar10) {
          if (dVar22 < dVar9) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar21,param_2,param_3,param_4);
          uVar21 = uVar1;
          dVar9 = dVar10;
        }
        else {
          if (dVar22 < dVar10) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar1,param_2,param_3,param_4);
        }
      }
      if (dVar22 < dVar9) {
        return;
      }
      dVar22 = param_4->MaxDistance;
      uVar23 = SUB84(dVar22,0);
      uVar24 = (int)((ulonglong)dVar22 >> 0x20);
      if (dVar13 <= dVar22) {
        uVar23 = uVar25;
        uVar24 = uVar26;
      }
      uVar21 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar21);
  }
  uVar1 = *(uint *)(*(longlong *)
                     ((this->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8
                     ) + (ulonglong)(uVar21 & 0x1ff) * 4);
  local_1a0 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar21 = uVar21 + 1;
      iVar2 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c86d79d:
        uVar11 = iVar2 * 3;
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        pTVar7 = this->Mesh->UV;
        lVar19 = *(longlong *)&pTVar7->field_0x48;
        lVar8 = *(longlong *)&pTVar7->field_0x78;
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        uVar1 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar11 >> 9) * 8) +
                         (ulonglong)(uVar11 & 0x1ff) * 4);
        dVar22 = (double)*(float *)(*(longlong *)
                                     (lVar19 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
        uVar3 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                         (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
        local_118._8_4_ = SUB84(dVar22,0);
        local_118._0_8_ =
             (double)*(float *)(*(longlong *)(lVar19 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
        local_118._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        dStack_100 = (double)*(float *)(*(longlong *)
                                         (lVar19 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
        local_f8 = (double)*(float *)(*(longlong *)
                                       (lVar19 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
        uVar1 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                         (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
        local_118._s_0.Z = 0.0;
        dVar22 = (double)*(float *)(*(longlong *)
                                     (lVar19 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
        uStack_f0 = 0;
        local_e8._8_4_ = SUB84(dVar22,0);
        local_e8._0_8_ =
             (double)*(float *)(*(longlong *)(lVar19 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
        local_e8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        local_d8 = 0;
        bVar16 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar14 = local_c8._s_0.Y;
        uVar18 = local_c8._s_0.X;
        if ((bVar16) && (local_d0 <= (double)CONCAT44(uVar24,uVar23) + dVar12)) {
          iVar17 = param_3->ArrayNum;
          dStack_190 = local_d0;
          local_198 = iVar2;
          if (iVar17 == param_3->ArrayMax) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar19 = (longlong)iVar17;
          param_3->ArrayNum = iVar17 + 1;
          pFVar4 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar4 + lVar19 * 0x28) = CONCAT44(uStack_194,local_198);
          *(double *)(pFVar4 + lVar19 * 0x28 + 8) = dStack_190;
          *(undefined8 *)(pFVar4 + lVar19 * 0x28 + 0x10) = uVar18;
          *(undefined8 *)(pFVar4 + lVar19 * 0x28 + 0x10 + 8) = uVar14;
          *(double *)(pFVar4 + lVar19 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1a8[0] = iVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_4->TriangleFilterF;
        plVar20 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar20 = plVar5;
        }
        uVar18 = (**(code **)(*plVar20 + 8))();
        cVar15 = (*pcVar6)(uVar18,local_1a8);
        if (cVar15 != '\0') goto LAB_14c86d79d;
      }
      local_1a0 = local_1a0 - 1;
    } while (local_1a0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14c882630

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,TRay<double> *param_2)

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

// find_nearest_tri<1> @ 14c88afb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

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
LAB_14c88b0bc:
      FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
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
      if (cVar8 != '\0') goto LAB_14c88b0bc;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14c88b2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

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
LAB_14c88b3dc:
          FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
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
          if (cVar9 != '\0') goto LAB_14c88b3dc;
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

// ~TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> @ 14c8998a0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
~TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this)

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

// operator() @ 14c8a5e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestSelfIntersection'::__l2::
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

// AddTriTriIntersectionResult @ 14c8b7880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::AddTriTriIntersectionResult
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

// BoxDistanceSqr @ 14c8c1870

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BoxDistanceSqr
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TVector<double> *param_2)

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

// BuildTopDown @ 14c8c2740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
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

// BuildTopDown @ 14c8c2e80

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  FDynamicMeshUVMesh *this_00;
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
  uVar1 = (this->Mesh->Mesh->TriangleRefCounts).UsedCount;
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
  uVar1 = (this->Mesh->Mesh->TriangleRefCounts).UsedCount;
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
  if (0 < (int)((this_00->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this_00->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      if (-1 < *(int *)(*(longlong *)
                         (*(longlong *)&this_00->UV->field_0x78 +
                         (ulonglong)((uint)(local_f8[0] * 3) >> 9) * 8) +
                       (ulonglong)(local_f8[0] * 3 & 0x1ff) * 4)) {
        FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
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
          FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
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
    } while (local_f8[0] <
             (int)((this_00->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed));
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

// DoTraversal @ 14c8d8440

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::DoTraversal
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,FTreeTraversal *param_1,
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

// FindAllHitTriangles @ 14c8e5fb0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindAllHitTriangles
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14c8e6000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindAllIntersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4c85c790;
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
LAB_14c8e616c:
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
      uVar5 = FDynamicMesh3::GetChangeStamp(this->Mesh->Mesh);
      if (this->MeshChangeStamp != uVar5) goto LAB_14c8e616c;
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

// FindAllSelfIntersections @ 14c8e61e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindAllSelfIntersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4c85c7d0;
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

// FindNearestHitTriangle @ 14c8e6b10

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c8e6b90

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c8e6c10

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TRay<double> *param_1,
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

// FindNearestPoint @ 14c8e6c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestPoint
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FDynamicMeshUVMesh *this_00;
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
    if (*(int *)(*(longlong *)
                  (*(longlong *)&this_00->UV->field_0x78 + (ulonglong)((uint)(iVar5 * 3) >> 9) * 8)
                + (ulonglong)(iVar5 * 3 & 0x1ff) * 4) < 0) {
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
    FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
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

// FindNearestTriangle @ 14c8e6e20

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TVector<double> *param_1,
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

// FindNearestTriangles @ 14c8e6e80

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestTriangles
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
          TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *param_1,
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
            (this,this->RootIndex,(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *)param_2,
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

// FindNearestVertex @ 14c8e6f40

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::FindNearestVertex
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TVector<double> *param_1,
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

// GetBox @ 14c8f24e0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::GetBox
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
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

// GetBox @ 14c8f25a0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::GetBox
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFDynamicMeshUVMesh_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 14c901fe0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::IsInside
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 14c902df0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TVector<double> *param_1,
          double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 14c91bb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5,int param_6,FBoxesSet *param_7,FBoxesSet *param_8,
          TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FBoxesSet *pFVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  double *pdVar19;
  longlong lVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  uint uVar25;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  TAxisAlignedBox3<double> *pTVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  longlong local_180;
  int local_178;
  longlong local_168;
  longlong local_150;
  int local_148 [2];
  int local_140;
  int local_13c;
  uint local_138 [4];
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
  
  pTVar33 = param_9;
  pFVar14 = param_7;
  iVar16 = param_4;
  uVar29 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar19 = &local_128;
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar19 = &local_c8;
    local_c8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_c0 = _UNK_150a9e648;
    local_a8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a0 = _UNK_1508ffb58;
    local_b8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b0 = _UNK_150a9e6d8;
  }
  dVar39 = pdVar19[1];
  dVar40 = pdVar19[2];
  dVar41 = pdVar19[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar19;
  (param_9->Min).field0_0x0._s_0.Y = dVar39;
  dVar39 = pdVar19[4];
  dVar42 = pdVar19[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar40;
  (param_9->Max).field0_0x0._s_0.X = dVar41;
  (param_9->Max).field0_0x0._s_0.Y = dVar39;
  (param_9->Max).field0_0x0._s_0.Z = dVar42;
  if (param_6 < param_4) {
    local_148[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar7 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar9 = *(code **)&this->GetSplitAxis;
    plVar24 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar24 = plVar7;
    }
    uVar21 = (**(code **)(*plVar24 + 8))();
    uVar46 = (undefined4)__real_7fefffffffffffff;
    uVar47 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar44 = (undefined4)__real_ffefffffffffffff;
    uVar45 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar17 = (*pcVar9)(uVar21,local_148,pTVar33);
    iVar35 = 0;
    uVar27 = 0;
    uVar22 = (ulonglong)(int)uVar17;
    uVar34 = 0;
    if (0 < iVar16) {
      lVar36 = (uVar22 + uVar29 * 3) * 8;
      uVar25 = param_3;
      pTVar33 = param_9;
      do {
        uVar31 = uVar34;
        if ((int)uVar25 < param_2->ArrayNum) {
          uVar31 = ~uVar25 >> 0x1f;
        }
        param_9 = pTVar33;
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
        pFVar5 = (param_2->AllocatorInstance).Data;
        pTVar33 = param_9;
        if (2 < uVar22) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          pTVar33 = param_9;
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
        }
        dVar39 = *(double *)(pFVar5 + lVar36);
        if (dVar39 <= (double)CONCAT44(uVar47,uVar46)) {
          uVar46 = SUB84(dVar39,0);
          uVar47 = (undefined4)((ulonglong)dVar39 >> 0x20);
        }
        dVar39 = *(double *)(pFVar5 + lVar36);
        if ((double)CONCAT44(uVar45,uVar44) <= dVar39) {
          uVar44 = SUB84(dVar39,0);
          uVar45 = (undefined4)((ulonglong)dVar39 >> 0x20);
        }
        uVar25 = uVar25 + 1;
        lVar36 = lVar36 + 0x18;
        param_9 = pTVar33;
      } while ((int)(uVar25 - param_3) < iVar16);
    }
    dVar40 = __real_3fe0000000000000;
    dVar39 = ((double)CONCAT44(uVar45,uVar44) + (double)CONCAT44(uVar47,uVar46)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar45,uVar44) - (double)CONCAT44(uVar47,uVar46) <= __real_3e45798ee2308c3a
       ) {
      iVar35 = iVar16 / 2;
      iVar16 = iVar16 - iVar35;
    }
    else {
      local_178 = iVar16 + -1;
      local_150 = (longlong)local_178;
      pTVar33 = param_9;
      if (0 < local_178) {
        local_168 = 0;
        uVar30 = uVar29;
        iVar35 = 0;
        while( true ) {
          uVar25 = iVar35 + (int)uVar30;
          lVar36 = (uVar22 + ((int)uVar30 + local_168) * 3) * 8;
          while( true ) {
            uVar31 = uVar34;
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
            pFVar5 = (param_2->AllocatorInstance).Data;
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
            if (dVar39 < *(double *)(pFVar5 + lVar36)) break;
            local_168 = local_168 + 1;
            iVar35 = iVar35 + 1;
            uVar25 = uVar25 + 1;
            lVar36 = lVar36 + 0x18;
          }
          uVar25 = param_3 + local_178;
          lVar36 = (uVar29 + local_150) * 0x18;
          pTVar33 = param_9;
          while( true ) {
            uVar18 = 0;
            uVar31 = uVar18;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar31 = ~uVar25 >> 0x1f;
            }
            param_9 = pTVar33;
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
            pFVar5 = (param_2->AllocatorInstance).Data;
            pTVar33 = param_9;
            if (2 < uVar17) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              pTVar33 = param_9;
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
            }
            if (*(double *)(pFVar5 + uVar22 * 8 + lVar36) <= dVar39) break;
            local_178 = local_178 + -1;
            uVar25 = uVar25 - 1;
            local_150 = local_150 + -1;
            lVar36 = lVar36 + -0x18;
          }
          iVar16 = param_4;
          if (local_150 <= local_168) break;
          uVar31 = (uint)~(param_3 + iVar35) >> 0x1f;
          uVar25 = uVar18;
          if (param_3 + iVar35 < param_2->ArrayNum) {
            uVar25 = uVar31;
          }
          param_9 = pTVar33;
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
          pFVar5 = pFVar8 + (uVar29 + local_168) * 0x18;
          uVar10 = *(undefined8 *)pFVar5;
          uVar11 = *(undefined8 *)(pFVar5 + 8);
          lVar36 = uVar29 + local_150;
          uVar21 = *(undefined8 *)(pFVar8 + (uVar29 + local_168) * 0x18 + 0x10);
          uVar23 = (uint)~(param_3 + local_178) >> 0x1f;
          uVar25 = uVar18;
          if (param_3 + local_178 < param_2->ArrayNum) {
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
          pFVar5 = pFVar8 + lVar36 * 0x18;
          uVar12 = *(undefined8 *)pFVar5;
          uVar13 = *(undefined8 *)(pFVar5 + 8);
          uVar4 = *(undefined8 *)(pFVar8 + lVar36 * 0x18 + 0x10);
          uVar25 = uVar18;
          if (param_3 + iVar35 < param_2->ArrayNum) {
            uVar25 = uVar31;
          }
          uVar30 = (ulonglong)(uint)param_3;
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
          pFVar5 = pFVar8 + (param_3 + local_168) * 0x18;
          *(undefined8 *)pFVar5 = uVar12;
          *(undefined8 *)(pFVar5 + 8) = uVar13;
          *(undefined8 *)(pFVar8 + (param_3 + local_168) * 0x18 + 0x10) = uVar4;
          uVar25 = uVar18;
          if (local_178 + param_3 < param_2->ArrayNum) {
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
          pFVar5 = pFVar8 + lVar36 * 0x18;
          *(undefined8 *)pFVar5 = uVar10;
          *(undefined8 *)(pFVar5 + 8) = uVar11;
          *(undefined8 *)(pFVar8 + lVar36 * 0x18 + 0x10) = uVar21;
          uVar25 = uVar18;
          if (iVar35 + param_3 < param_1->ArrayNum) {
            uVar25 = (uint)~(iVar35 + param_3) >> 0x1f;
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
          uVar44 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_168) * 4);
          uVar25 = uVar18;
          if (local_178 + param_3 < param_1->ArrayNum) {
            uVar25 = (uint)~(local_178 + param_3) >> 0x1f;
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
          uVar45 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_150) * 4);
          if (iVar35 + param_3 < param_1->ArrayNum) {
            uVar18 = (uint)~(iVar35 + param_3) >> 0x1f;
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
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_168) * 4) = uVar45;
          uVar25 = uVar34;
          if (local_178 + param_3 < param_1->ArrayNum) {
            uVar25 = (uint)~(local_178 + param_3) >> 0x1f;
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
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_150) * 4) = uVar44;
        }
      }
      iVar16 = iVar16 - iVar35;
      param_9 = pTVar33;
    }
    pFVar14 = param_7;
    iVar28 = param_5 + 1;
    local_f8._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_f8._s_0.Y = _UNK_150a9e648;
    local_f8._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e0 = _UNK_150a9e6d8;
    local_d8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d0 = _UNK_1508ffb58;
    local_140 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar35,iVar28,param_6,param_7,
                                    param_8,pTVar33);
    local_13c = SplitTriSetMidpoint(this,param_1,param_2,iVar35 + param_3,iVar16,iVar28,param_6,
                                    pFVar14,param_8,(TAxisAlignedBox3<double> *)&local_f8._s_0);
    pTVar33 = param_9;
    pFVar14 = param_8;
    pTVar3 = &param_9->Max;
    uVar21 = (param_9->Min).field0_0x0._s_0.X;
    if (local_f8._s_0.X <= (double)uVar21) {
      uVar21 = local_f8._s_0.X;
    }
    (param_9->Min).field0_0x0._s_0.X = (double)uVar21;
    uVar21 = (param_9->Min).field0_0x0._s_0.Y;
    if (local_f8._s_0.Y <= (double)uVar21) {
      uVar21 = local_f8._s_0.Y;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar21;
    dVar39 = (param_9->Min).field0_0x0._s_0.Z;
    uVar21 = local_f8._s_0.Z;
    if (dVar39 <= local_f8._s_0.Z) {
      uVar21 = dVar39;
    }
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar21;
    dVar39 = (pTVar3->field0_0x0)._s_0.X;
    if (dVar39 <= dStack_e0) {
      dVar39 = dStack_e0;
    }
    dVar41 = (param_9->Max).field0_0x0._s_0.Z;
    (pTVar3->field0_0x0)._s_0.X = dVar39;
    dVar39 = (param_9->Max).field0_0x0._s_0.Y;
    if (dVar39 <= local_d8) {
      dVar39 = local_d8;
    }
    if (dVar41 <= dStack_d0) {
      dVar41 = dStack_d0;
    }
    (param_9->Max).field0_0x0._s_0.Y = dVar39;
    (param_9->Max).field0_0x0._s_0.Z = dVar41;
    uVar17 = param_8->IBoxCur;
    param_8->IBoxCur = uVar17 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar17);
    uVar34 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar34 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_140,uVar34);
    uVar34 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar34 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_13c,uVar34);
    uVar25 = (pFVar14->BoxCenters).CurBlock;
    pTVar26 = &pFVar14->BoxCenters;
    uVar34 = (pFVar14->BoxCenters).CurBlockUsed;
    uVar31 = uVar25 * 0x200 + uVar34;
    dVar39 = ((pTVar3->field0_0x0)._s_0.X + (pTVar33->Min).field0_0x0._s_0.X) * dVar40;
    dVar41 = ((pTVar33->Max).field0_0x0._s_0.Y + (pTVar33->Min).field0_0x0._s_0.Y) * dVar40;
    dVar42 = ((pTVar33->Max).field0_0x0._s_0.Z + (pTVar33->Min).field0_0x0._s_0.Z) * dVar40;
    if (uVar17 == uVar31) {
      if (uVar34 == 0x200) {
        if (uVar25 == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar26);
        }
        pTVar26->CurBlock = pTVar26->CurBlock + 1;
        uVar25 = pTVar26->CurBlock;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar34 = uVar27;
      }
    }
    else {
      if (uVar17 <= uVar31) {
        uVar29 = (ulonglong)(uVar17 & 0x1ff);
        lVar36 = *(longlong *)
                  ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar17 >> 9) * 8);
        *(double *)(lVar36 + uVar29 * 0x18) = dVar39;
        *(double *)(lVar36 + 8 + uVar29 * 0x18) = dVar41;
        *(double *)(lVar36 + 0x10 + uVar29 * 0x18) = dVar42;
        goto LAB_14c91cc24;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar26,uVar17);
      uVar34 = (pFVar14->BoxCenters).CurBlockUsed;
      if (uVar34 == 0x200) {
        if (pTVar26->CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar26);
        }
        pTVar26->CurBlock = pTVar26->CurBlock + 1;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar34 = uVar27;
      }
      uVar25 = pTVar26->CurBlock;
    }
    lVar20 = (longlong)(int)uVar34;
    lVar36 = *(longlong *)
              ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
    *(double *)(lVar36 + lVar20 * 0x18) = dVar39;
    *(double *)(lVar36 + 8 + lVar20 * 0x18) = dVar41;
    *(double *)(lVar36 + 0x10 + lVar20 * 0x18) = dVar42;
    puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_14c91cc24:
    pFVar14 = param_8;
    pTVar26 = &param_8->BoxExtents;
    uVar25 = pTVar26->CurBlock;
    uVar34 = (param_8->BoxExtents).CurBlockUsed;
    uVar31 = uVar25 * 0x200 + uVar34;
    dVar39 = ((pTVar33->Max).field0_0x0._s_0.X - (pTVar33->Min).field0_0x0._s_0.X) * dVar40;
    dVar41 = ((pTVar33->Max).field0_0x0._s_0.Y - (pTVar33->Min).field0_0x0._s_0.Y) * dVar40;
    dVar40 = ((pTVar33->Max).field0_0x0._s_0.Z - (pTVar33->Min).field0_0x0._s_0.Z) * dVar40;
    if (uVar17 == uVar31) {
      if (uVar34 == 0x200) {
        if (uVar25 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar26);
        }
        pTVar26->CurBlock = pTVar26->CurBlock + 1;
        uVar25 = pTVar26->CurBlock;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar34 = uVar27;
      }
    }
    else {
      if (uVar17 <= uVar31) {
        uVar29 = (ulonglong)(uVar17 & 0x1ff);
        lVar36 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar17 >> 9) * 8);
        *(double *)(lVar36 + uVar29 * 0x18) = dVar39;
        *(double *)(lVar36 + 8 + uVar29 * 0x18) = dVar41;
        *(double *)(lVar36 + 0x10 + uVar29 * 0x18) = dVar40;
        return uVar17;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar26,uVar17);
      uVar34 = (pFVar14->BoxExtents).CurBlockUsed;
      if (uVar34 == 0x200) {
        if (pTVar26->CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar26);
        }
        pTVar26->CurBlock = pTVar26->CurBlock + 1;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar34 = uVar27;
      }
      uVar25 = pTVar26->CurBlock;
    }
    lVar20 = (longlong)(int)uVar34;
    lVar36 = *(longlong *)
              ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
    *(double *)(lVar36 + lVar20 * 0x18) = dVar39;
    *(double *)(lVar36 + 8 + lVar20 * 0x18) = dVar41;
    *(double *)(lVar36 + 0x10 + lVar20 * 0x18) = dVar40;
    puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar17;
  }
  uVar17 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar17 + 1;
  param_9._0_4_ = uVar17;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar17);
  uVar34 = *piVar1;
  this_00 = &pFVar14->IndexList;
  *piVar1 = uVar34 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar34);
  if (0 < iVar16) {
    local_180 = uVar29 * 4;
    param_6 = param_3;
    do {
      uVar17 = *piVar1;
      *piVar1 = uVar17 + 1;
      uVar27 = ~param_6;
      uVar34 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar34 = uVar27 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      uVar25 = this_00->CurBlock;
      uVar34 = (pFVar14->IndexList).CurBlockUsed;
      uVar31 = uVar25 * 0x200 + uVar34;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (uVar17 == uVar31) {
        if (uVar34 == 0x200) {
          if (uVar25 == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar34 = 0;
          uVar25 = this_00->CurBlock;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
LAB_14c91bde0:
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar25 * 8) +
         (longlong)(int)uVar34 * 4) = *(undefined4 *)(pFVar5 + local_180);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        if (uVar31 < uVar17) {
          TDynamicVector<int,512>::Resize(this_00,uVar17);
          uVar34 = (pFVar14->IndexList).CurBlockUsed;
          if (uVar34 == 0x200) {
            if (this_00->CurBlock == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
              TDynamicVector<int,512>::AddAllocatedBlock(this_00);
            }
            this_00->CurBlock = this_00->CurBlock + 1;
            uVar34 = 0;
            (pFVar14->IndexList).CurBlockUsed = 0;
          }
          uVar25 = this_00->CurBlock;
          goto LAB_14c91bde0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) +
         (ulonglong)(uVar17 & 0x1ff) * 4) = *(undefined4 *)(pFVar5 + local_180);
      }
      iVar35 = param_6;
      uVar17 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar17 = uVar27 >> 0x1f;
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
      pTVar6 = this->Mesh->UV;
      lVar36 = *(longlong *)&pTVar6->field_0x78;
      uVar17 = *(int *)((param_1->AllocatorInstance).Data + local_180) * 3;
      local_138[0] = *(uint *)(*(longlong *)(lVar36 + (ulonglong)(uVar17 >> 9) * 8) +
                              (ulonglong)(uVar17 & 0x1ff) * 4);
      local_138[1] = *(undefined4 *)
                      (*(longlong *)(lVar36 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                      (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
      lVar32 = 1;
      lVar20 = *(longlong *)&pTVar6->field_0x48;
      local_138[2] = *(undefined4 *)
                      (*(longlong *)(lVar36 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                      (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
      dVar40 = (double)*(float *)(*(longlong *)
                                   (lVar20 + (ulonglong)((local_138[0] & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(local_138[0] * 2 & 0x1ff) * 4);
      dVar39 = (double)*(float *)(*(longlong *)
                                   (lVar20 + (ulonglong)((local_138[0] & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(local_138[0] * 2 + 1 & 0x1ff) * 4);
      dVar41 = dVar39;
      dVar42 = dVar40;
      do {
        uVar17 = local_138[lVar32];
        dVar38 = (double)*(float *)(*(longlong *)
                                     (lVar20 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar17 * 2 & 0x1ff) * 4);
        dVar37 = (double)*(float *)(*(longlong *)
                                     (lVar20 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar17 * 2 + 1 & 0x1ff) * 4);
        dVar43 = dVar38;
        if ((dVar42 <= dVar38) && (dVar43 = dVar42, dVar40 < dVar38)) {
          dVar40 = dVar38;
        }
        dVar38 = dVar37;
        if ((dVar41 <= dVar37) && (dVar38 = dVar41, dVar39 < dVar37)) {
          dVar39 = dVar37;
        }
        lVar32 = lVar32 + 1;
        dVar41 = dVar38;
        dVar42 = dVar43;
      } while (lVar32 < 3);
      dVar41 = (pTVar33->Min).field0_0x0._s_0.Z;
      dVar42 = (pTVar33->Min).field0_0x0._s_0.X;
      if (dVar42 <= dVar43) {
        dVar43 = dVar42;
      }
      dVar42 = (pTVar33->Min).field0_0x0._s_0.Y;
      if (dVar42 <= dVar38) {
        dVar38 = dVar42;
      }
      dVar42 = (pTVar33->Max).field0_0x0._s_0.X;
      if (dVar40 <= dVar42) {
        dVar40 = dVar42;
      }
      dVar42 = (pTVar33->Max).field0_0x0._s_0.Y;
      if (dVar39 <= dVar42) {
        dVar39 = dVar42;
      }
      if (0.0 <= dVar41) {
        dVar41 = 0.0;
      }
      param_6 = iVar35 + 1;
      (pTVar33->Min).field0_0x0._s_0.X = dVar43;
      local_180 = local_180 + 4;
      (pTVar33->Min).field0_0x0._s_0.Z = dVar41;
      dVar41 = (pTVar33->Max).field0_0x0._s_0.Z;
      (pTVar33->Min).field0_0x0._s_0.Y = dVar38;
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
      (pTVar33->Max).field0_0x0._s_0.X = dVar40;
      (pTVar33->Max).field0_0x0._s_0.Y = dVar39;
      (pTVar33->Max).field0_0x0._s_0.Z = dVar41;
      uVar17 = (uint)param_9;
    } while (param_6 - param_3 < iVar16);
  }
  pFVar14 = param_7;
  dVar42 = __real_3fe0000000000000;
  uVar27 = (param_7->BoxCenters).CurBlock;
  uVar34 = (param_7->BoxCenters).CurBlockUsed;
  uVar25 = uVar27 * 0x200 + uVar34;
  dVar39 = ((pTVar33->Min).field0_0x0._s_0.X + (pTVar33->Max).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar40 = ((pTVar33->Max).field0_0x0._s_0.Y + (pTVar33->Min).field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar41 = ((pTVar33->Max).field0_0x0._s_0.Z + (pTVar33->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar17 == uVar25) {
    if (uVar34 == 0x200) {
      if (uVar27 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&param_7->BoxCenters);
      }
      (pFVar14->BoxCenters).CurBlock = (pFVar14->BoxCenters).CurBlock + 1;
      uVar34 = 0;
      uVar27 = (pFVar14->BoxCenters).CurBlock;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar17 <= uVar25) {
      uVar29 = (ulonglong)(uVar17 & 0x1ff);
      lVar36 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
      ;
      *(double *)(lVar36 + uVar29 * 0x18) = dVar39;
      *(double *)(lVar36 + 8 + uVar29 * 0x18) = dVar40;
      *(double *)(lVar36 + 0x10 + uVar29 * 0x18) = dVar41;
      goto LAB_14c91c188;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&param_7->BoxCenters,uVar17);
    uVar34 = (pFVar14->BoxCenters).CurBlockUsed;
    if (uVar34 == 0x200) {
      if ((pFVar14->BoxCenters).CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar14->BoxCenters);
      }
      (pFVar14->BoxCenters).CurBlock = (pFVar14->BoxCenters).CurBlock + 1;
      uVar34 = 0;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
    uVar27 = (pFVar14->BoxCenters).CurBlock;
  }
  lVar20 = (longlong)(int)uVar34;
  lVar36 = *(longlong *)
            ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
  *(double *)(lVar36 + lVar20 * 0x18) = dVar39;
  *(double *)(lVar36 + 8 + lVar20 * 0x18) = dVar40;
  *(double *)(lVar36 + 0x10 + lVar20 * 0x18) = dVar41;
  puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_14c91c188:
  uVar27 = (pFVar14->BoxExtents).CurBlock;
  uVar34 = (pFVar14->BoxExtents).CurBlockUsed;
  uVar25 = uVar27 * 0x200 + uVar34;
  dVar39 = ((pTVar33->Max).field0_0x0._s_0.X - (pTVar33->Min).field0_0x0._s_0.X) * dVar42;
  dVar40 = ((pTVar33->Max).field0_0x0._s_0.Y - (pTVar33->Min).field0_0x0._s_0.Y) * dVar42;
  dVar42 = ((pTVar33->Max).field0_0x0._s_0.Z - (pTVar33->Min).field0_0x0._s_0.Z) * dVar42;
  if (uVar17 == uVar25) {
    if (uVar34 == 0x200) {
      if (uVar27 == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar14->BoxExtents);
      }
      (pFVar14->BoxExtents).CurBlock = (pFVar14->BoxExtents).CurBlock + 1;
      uVar34 = 0;
      uVar27 = (pFVar14->BoxExtents).CurBlock;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar17 <= uVar25) {
      uVar29 = (ulonglong)(uVar17 & 0x1ff);
      lVar36 = *(longlong *)
                ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
      ;
      *(double *)(lVar36 + uVar29 * 0x18) = dVar39;
      *(double *)(lVar36 + 8 + uVar29 * 0x18) = dVar40;
      *(double *)(lVar36 + 0x10 + uVar29 * 0x18) = dVar42;
      return ~uVar17;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&pFVar14->BoxExtents,uVar17);
    uVar34 = (pFVar14->BoxExtents).CurBlockUsed;
    if (uVar34 == 0x200) {
      if ((pFVar14->BoxExtents).CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar14->BoxExtents);
      }
      (pFVar14->BoxExtents).CurBlock = (pFVar14->BoxExtents).CurBlock + 1;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
      uVar34 = 0;
    }
    uVar27 = (pFVar14->BoxExtents).CurBlock;
  }
  lVar20 = (longlong)(int)uVar34;
  lVar36 = *(longlong *)
            ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
  *(double *)(lVar36 + lVar20 * 0x18) = dVar39;
  *(double *)(lVar36 + 8 + lVar20 * 0x18) = dVar40;
  *(double *)(lVar36 + 0x10 + lVar20 * 0x18) = dVar42;
  puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar17;
}

// SupportsNearestTriangle @ 14c91d1a0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::SupportsNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this)

{
  return true;
}

// SupportsPointContainment @ 14c91d1b0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::SupportsPointContainment
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 14c91d1c0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this)

{
  return true;
}

// TestAnyHitTriangle @ 14c91dc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,TRay<double> *param_2,
          int *param_3,double param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  bool bVar17;
  undefined8 uVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_248 [32];
  int local_218 [2];
  int local_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  TVector<double>_u_0 local_1d8 [2];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  double local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TVector<double>_u_0 local_168;
  double dStack_150;
  double local_148;
  double dStack_140;
  TVector<double>_u_0 local_138;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  double local_f0;
  TVector<double> local_e8;
  EIntersectionType local_d0 [2];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar1) {
    uVar21 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    dVar9 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar21 < 0) {
      uVar21 = ~uVar21;
      dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar21,param_2);
    }
    else {
      iVar20 = uVar21 - 1;
      uVar21 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) - 1;
      dVar11 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar20,param_2);
      dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar21,param_2);
      if (dVar10 <= dVar11) {
        if (dVar9 < dVar10) {
          return false;
        }
        bVar17 = TestAnyHitTriangle(this,uVar21,param_2,param_3,param_4,param_5);
        if (!bVar17) {
          if (dVar9 < dVar11) {
            return false;
          }
          bVar17 = TestAnyHitTriangle(this,iVar20,param_2,param_3,param_4,param_5);
          return bVar17;
        }
        return true;
      }
      if (dVar9 < dVar11) {
        return false;
      }
      bVar17 = TestAnyHitTriangle(this,iVar20,param_2,param_3,param_4,param_5);
      if (bVar17) {
        return true;
      }
    }
    if ((dVar10 <= dVar9) &&
       (bVar17 = TestAnyHitTriangle(this,uVar21,param_2,param_3,param_4,param_5), bVar17)) {
      return true;
    }
    return false;
  }
  local_210 = *(int *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
  if (local_210 < 1) {
    return false;
  }
  uVar21 = uVar1 + 1;
  do {
    iVar20 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c91dd6c:
      uVar14 = iVar20 * 3;
      _local_1f8 = 0.0;
      local_1e0 = 0.0;
      local_1d8[0]._s_0.Z = 0.0;
      pTVar7 = this->Mesh->UV;
      lVar4 = *(longlong *)&pTVar7->field_0x48;
      lVar8 = *(longlong *)&pTVar7->field_0x78;
      uVar2 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar14 >> 9) * 8) +
                       (ulonglong)(uVar14 & 0x1ff) * 4);
      dVar9 = (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
      dVar10 = (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
      uVar22 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar2 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      dStack_200 = dVar10;
      local_208 = dVar9;
      dVar11 = (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
      dVar12 = (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
      uVar23 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar2 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                       (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
      dStack_1e8 = dVar12;
      local_1f0 = dVar11;
      dVar13 = (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
      local_1d8[0]._8_8_ =
           (undefined8)
           *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                     (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
      uVar24 = (undefined4)local_1d8[0]._8_8_;
      uVar15 = (ulonglong)local_1d8[0]._8_8_ >> 0x20;
      local_1d8[0]._0_8_ = dVar13;
      bVar17 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_208,
                          (TVector<double> *)&local_1f0,(TVector<double> *)&local_1d8[0]._s_0);
      if (bVar17) {
        local_168._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_150 = (param_2->Direction).field0_0x0._s_0.X;
        local_f8 = 0;
        unique0x1000014a = SUB84(dVar12,0);
        unique0x1000014e = uVar23;
        local_168._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_168._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_148 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_140 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_190 = (undefined4)local_1e0;
        uStack_18c = (undefined4)((ulonglong)local_1e0 >> 0x20);
        local_138._8_4_ = SUB84(dVar10,0);
        local_138._0_8_ = dVar9;
        local_138._12_4_ = uVar22;
        uStack_1a8 = local_1f8;
        uStack_1a4 = uStack_1f4;
        local_138._16_4_ = local_1f8;
        local_138._20_4_ = uStack_1f4;
        local_108._8_4_ = uVar24;
        local_108._0_8_ = dVar13;
        local_108._12_4_ = (int)uVar15;
        unique0x100002fa = SUB84(dVar10,0);
        unique0x100002fe = uVar22;
        uStack_198 = SUB84(dVar12,0);
        local_1a0 = dVar11;
        uStack_194 = uVar23;
        uStack_110 = uStack_190;
        uStack_10c = uStack_18c;
        local_118 = dVar12;
        uStack_120 = dVar11;
        bVar17 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_168._s_0,(TTriangle3<double> *)&local_138._s_0,
                            &local_f0,&local_e8,local_d0);
        if ((bVar17) && (local_f0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_218[0] = iVar20;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar6 = *(code **)&param_5->TriangleFilterF;
      plVar19 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar19 = plVar5;
      }
      uVar18 = (**(code **)(*plVar19 + 8))();
      cVar16 = (*pcVar6)(uVar18,local_218);
      if (cVar16 != '\0') goto LAB_14c91dd6c;
    }
    uVar21 = uVar21 + 1;
    if (local_210 < (int)(uVar21 - uVar1)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14c91e130

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TRay<double> *param_1,
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

// TestIntersection @ 14c91e180

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,TTriangle3<double> *param_1,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14c91e260

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,
          TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14c91e2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,FDynamicMeshUVMesh *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar13;
  bool bVar14;
  char cVar15;
  TAxisAlignedBox3<double> *pTVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  undefined1 auStack_148 [32];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_128;
  FDynamicMeshUVMesh *local_120;
  undefined1 local_118 [24];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_100;
  undefined8 local_f0;
  TVector<double>_u_0 local_e8 [2];
  FQueryOptions *local_b8;
  code *local_a8;
  double dStack_a0;
  undefined **local_98;
  code *local_90;
  double dStack_88;
  undefined **local_80;
  code *local_78;
  double dStack_70;
  undefined **local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  dVar2 = (param_2->Min).field0_0x0._s_0.X;
  iVar24 = 0;
  local_b8 = param_4;
  local_128 = param_3;
  local_120 = param_1;
  if (((dVar2 < (param_2->Max).field0_0x0._s_0.X || dVar2 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar2 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (dVar2 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_f0 = 0;
      local_118._16_8_ =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFDynamicMeshUVMesh_Geometry_UE___Geometry_UE__UEBA_NPEBUFDynamicMeshUVMesh_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
           ::Call;
      local_100 = param_3;
      pTVar16 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          ((TAxisAlignedBox3<double> *)&local_e8[0]._s_0,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_118);
      dVar2 = (pTVar16->Min).field0_0x0._s_0.Y;
      dVar10 = (pTVar16->Min).field0_0x0._s_0.Z;
      dVar11 = (pTVar16->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar16->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar16->Max).field0_0x0._s_0.Y;
      dVar12 = (pTVar16->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar10;
      (param_2->Max).field0_0x0._s_0.X = dVar11;
      (param_2->Max).field0_0x0._s_0.Y = dVar2;
      (param_2->Max).field0_0x0._s_0.Z = dVar12;
    }
    bVar14 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar14) {
      return false;
    }
  }
  iVar22 = (param_1->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar22) {
    do {
      pTVar6 = param_1->UV;
      uVar5 = iVar24 * 3;
      uVar20 = (ulonglong)(uVar5 + 1 & 0x1ff);
      lVar7 = *(longlong *)&pTVar6->field_0x78;
      uVar21 = (ulonglong)(uVar5 + 2 & 0x1ff);
      lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar5 + 1 >> 9) * 8);
      uVar19 = (ulonglong)(uVar5 + 2 >> 9);
      if (*(void **)param_3 == (void *)0x0) {
        uVar3 = *(uint *)(lVar8 + uVar20 * 4);
        uVar4 = *(uint *)(*(longlong *)(lVar7 + uVar19 * 8) + uVar21 * 4);
        uVar5 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        dStack_a0 = (double)*(float *)(*(longlong *)
                                        (*(longlong *)&pTVar6->field_0x48 +
                                        (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
        local_98 = (undefined **)0x0;
        local_a8 = (code *)(double)*(float *)(*(longlong *)
                                               (*(longlong *)&pTVar6->field_0x48 +
                                               (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                                             (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
        dStack_88 = (double)*(float *)(*(longlong *)
                                        (*(longlong *)&pTVar6->field_0x48 +
                                        (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
        local_80 = (undefined **)0x0;
        local_90 = (code *)(double)*(float *)(*(longlong *)
                                               (*(longlong *)&pTVar6->field_0x48 +
                                               (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                             (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
        dStack_70 = (double)*(float *)(*(longlong *)
                                        (*(longlong *)&pTVar6->field_0x48 +
                                        (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4);
        local_78 = (code *)(double)*(float *)(*(longlong *)
                                               (*(longlong *)&pTVar6->field_0x48 +
                                               (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                                             (ulonglong)(uVar4 * 2 & 0x1ff) * 4);
        local_68 = (undefined **)0x0;
      }
      else {
        uVar3 = *(uint *)(lVar8 + uVar20 * 4);
        uVar4 = *(uint *)(*(longlong *)(lVar7 + uVar19 * 8) + uVar21 * 4);
        uVar5 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        local_e8[0]._8_8_ =
             (undefined8)
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar6->field_0x48 +
                         (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
        local_e8[0]._0_8_ =
             (undefined8)
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar6->field_0x48 +
                         (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
        local_e8[0]._s_0.Z = 0.0;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pTVar13 = local_128;
        pcVar9 = *(code **)local_128;
        puVar23 = &local_128->field_0x10;
        plVar18 = *(longlong **)&local_128->field_0x28;
        if (*(longlong **)&local_128->field_0x28 == (longlong *)0x0) {
          plVar18 = (longlong *)puVar23;
        }
        uVar17 = (**(code **)(*plVar18 + 8))();
        (*pcVar9)(local_118,uVar17,local_e8);
        param_3 = local_128;
        dStack_a0 = (double)CONCAT44(local_118._12_4_,local_118._8_4_);
        local_a8 = (code *)local_118._0_8_;
        local_98 = (undefined **)local_118._16_8_;
        lVar7 = *(longlong *)&local_120->UV->field_0x48;
        local_e8[0]._8_8_ =
             (undefined8)
             *(float *)(*(longlong *)(lVar7 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
        local_e8[0]._0_8_ =
             (undefined8)
             *(float *)(*(longlong *)(lVar7 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
        local_e8[0]._s_0.Z = 0.0;
        Core::Private::Function::CheckCallable(*(void **)local_128);
        plVar18 = *(longlong **)&pTVar13->field_0x28;
        pcVar9 = *(code **)param_3;
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)puVar23;
        }
        uVar17 = (**(code **)(*plVar18 + 8))();
        (*pcVar9)(local_118,uVar17,local_e8);
        param_1 = local_120;
        dStack_88 = (double)CONCAT44(local_118._12_4_,local_118._8_4_);
        local_90 = (code *)local_118._0_8_;
        local_80 = (undefined **)local_118._16_8_;
        lVar7 = *(longlong *)&local_120->UV->field_0x48;
        local_e8[0]._8_8_ =
             (undefined8)
             *(float *)(*(longlong *)(lVar7 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4);
        local_e8[0]._0_8_ =
             (undefined8)
             *(float *)(*(longlong *)(lVar7 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar4 * 2 & 0x1ff) * 4);
        local_e8[0]._s_0.Z = 0.0;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        plVar18 = *(longlong **)&pTVar13->field_0x28;
        pcVar9 = *(code **)param_3;
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)puVar23;
        }
        uVar17 = (**(code **)(*plVar18 + 8))();
        (*pcVar9)(local_118,uVar17,local_e8);
        local_78 = (code *)local_118._0_8_;
        dStack_70 = (double)CONCAT44(local_118._12_4_,local_118._8_4_);
        local_68 = (undefined **)local_118._16_8_;
      }
      cVar15 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,local_b8);
      if (cVar15 != '\0') {
        return true;
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < iVar22);
  }
  return false;
}

// TestSelfIntersection @ 14c91e780

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestSelfIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,bool param_1,
          FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 14c91f700

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::TreeTraversalImpl
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,int param_2,
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
LAB_14c91f816:
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
          if (cVar10 != '\0') goto LAB_14c91f816;
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

// box_box_distsqr @ 14c926e90

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::box_box_distsqr
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
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

// box_box_intersect @ 14c926f70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::box_box_intersect
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
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

// find_any_intersection @ 14c92a5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  FDynamicMeshUVMesh *pFVar9;
  longlong lVar10;
  TTriangle3<double> *pTVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStackY_118 [32];
  int local_e8 [2];
  int local_e0;
  TTriangle3<double> *local_d8 [2];
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_c8;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar5 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar1 >> 9) * 8);
  local_d8[0] = param_2;
  if ((int)uVar1 < this->TrianglesEnd) {
    local_e0 = *(int *)(lVar6 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < local_e0) {
      uVar18 = uVar1 + 1;
      do {
        iVar14 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c92a6ec:
          pFVar9 = this->Mesh;
          uVar4 = iVar14 * 3;
          lVar6 = *(longlong *)&pFVar9->UV->field_0x78;
          uVar2 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                           (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
          uVar3 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                           (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
          lVar10 = *(longlong *)&pFVar9->UV->field_0x48;
          uVar4 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8) +
                           (ulonglong)(uVar4 & 0x1ff) * 4);
          local_b0 = (double)*(float *)(*(longlong *)
                                         (lVar10 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4);
          local_a8 = 0;
          local_b8 = (double)*(float *)(*(longlong *)
                                         (lVar10 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar4 * 2 & 0x1ff) * 4);
          lVar6 = *(longlong *)&pFVar9->UV->field_0x48;
          local_98 = (double)*(float *)(*(longlong *)
                                         (lVar6 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
          local_90 = 0;
          local_a0 = (double)*(float *)(*(longlong *)
                                         (lVar6 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
          lVar6 = *(longlong *)&pFVar9->UV->field_0x48;
          local_80 = (double)*(float *)(*(longlong *)
                                         (lVar6 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
          local_88 = (double)*(float *)(*(longlong *)
                                         (lVar6 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
          local_78 = 0;
          cVar12 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_d8[0],&local_b8);
          if (cVar12 != '\0') {
            return iVar14;
          }
        }
        else {
          local_e8[0] = iVar14;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar7 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_5->TriangleFilterF;
          plVar17 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar7 != (longlong *)0x0) {
            plVar17 = plVar7;
          }
          uVar16 = (**(code **)(*plVar17 + 8))();
          cVar12 = (*pcVar8)(uVar16,local_e8);
          if (cVar12 != '\0') goto LAB_14c92a6ec;
        }
        uVar18 = uVar18 + 1;
      } while ((int)(uVar18 - uVar1) <= local_e0);
    }
  }
  else {
    uVar18 = *(uint *)(lVar6 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (-1 < (int)uVar18) {
      iVar15 = -1;
      iVar14 = *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      bVar13 = box_box_intersect(this,uVar18 - 1,param_3);
      pTVar11 = local_d8[0];
      if (bVar13) {
        local_c8._0_8_ = *(undefined8 *)param_4;
        local_c8._8_8_ = *(undefined8 *)&param_4->field_0x8;
        iVar15 = find_any_intersection(this,uVar18 - 1,local_d8[0],param_3,&local_c8,param_5);
        if (iVar15 != -1) {
          return iVar15;
        }
      }
      bVar13 = box_box_intersect(this,iVar14 + -1,param_3);
      if (!bVar13) {
        return iVar15;
      }
      local_c8._0_8_ = *(undefined8 *)param_4;
      local_c8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar14 = find_any_intersection(this,iVar14 + -1,pTVar11,param_3,&local_c8,param_5);
      return iVar14;
    }
    bVar13 = box_box_intersect(this,~uVar18,param_3);
    if (bVar13) {
      local_d8[0] = *(TTriangle3<double> **)param_4;
      local_d8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar14 = find_any_intersection
                         (this,~uVar18,param_2,param_3,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_d8,param_5);
      return iVar14;
    }
  }
  return -1;
}

// find_any_intersection @ 14c92a9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *param_2,
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
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  void *pvVar11;
  FDynamicMeshUVMesh *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *pTVar19;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar20;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar21;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *pTVar22;
  char cVar23;
  bool bVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auStackY_238 [32];
  bool local_1e8;
  int local_1e4;
  int local_1d8 [2];
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *local_1d0 [2];
  int local_1c0 [2];
  int local_1b8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1b0;
  TVector<double>_u_0 local_1a8;
  double local_190;
  double local_188;
  double local_180;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_178;
  ulonglong local_170;
  FQueryOptions *local_168;
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
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar31 = (ulonglong)(param_1 & 0x1ff);
  uVar30 = (ulonglong)((uint)param_1 >> 9);
  uVar4 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar30 * 8) +
                   uVar31 * 4);
  local_178 = param_6;
  local_1e4 = param_4;
  local_168 = param_8;
  uVar26 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_1d0[0] = param_2;
  local_1b0 = param_3;
  if ((int)uVar4 < this->TrianglesEnd) {
    if ((int)uVar26 < param_2->TrianglesEnd) {
      local_1e4 = 1;
      iVar5 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      local_1b8 = *(int *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
      if (local_1b8 < 1) {
        return false;
      }
      do {
        pTVar19 = local_1d0[0];
        uVar26 = uVar26 + 1;
        local_170 = (ulonglong)uVar26;
        local_1c0[0] = *(int *)(*(longlong *)
                                 ((local_1d0[0]->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c92ab83:
          pTVar20 = local_1b0;
          FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
                    (pTVar19->Mesh,local_1c0[0],(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          pvVar11 = *(void **)pTVar20;
          if (pvVar11 != (void *)0x0) {
            Core::Private::Function::CheckCallable(pvVar11);
            pTVar21 = local_1b0;
            pcVar10 = *(code **)pTVar20;
            puVar29 = &local_1b0->field_0x10;
            plVar27 = *(longlong **)&local_1b0->field_0x28;
            if (*(longlong **)&local_1b0->field_0x28 == (longlong *)0x0) {
              plVar27 = (longlong *)puVar29;
            }
            uVar25 = (**(code **)(*plVar27 + 8))();
            (*pcVar10)(&local_1a8,uVar25,&local_158);
            pTVar20 = local_1b0;
            local_158._s_0.X = local_1a8._s_0.X;
            local_158._s_0.Y = local_1a8._s_0.Y;
            local_158._s_0.Z = local_1a8._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1b0);
            plVar27 = *(longlong **)&pTVar21->field_0x28;
            pcVar10 = *(code **)pTVar20;
            if (plVar27 == (longlong *)0x0) {
              plVar27 = (longlong *)puVar29;
            }
            uVar25 = (**(code **)(*plVar27 + 8))();
            (*pcVar10)(&local_1a8,uVar25,&local_140);
            pTVar20 = local_1b0;
            local_140._s_0.X = local_1a8._s_0.X;
            local_140._s_0.Y = local_1a8._s_0.Y;
            local_140._s_0.Z = local_1a8._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1b0);
            plVar27 = *(longlong **)&pTVar21->field_0x28;
            pcVar10 = *(code **)pTVar20;
            if (plVar27 == (longlong *)0x0) {
              plVar27 = (longlong *)puVar29;
            }
            uVar25 = (**(code **)(*plVar27 + 8))();
            (*pcVar10)(&local_1a8,uVar25,&local_128);
            local_128._s_0.X = local_1a8._s_0.X;
            local_128._s_0.Y = local_1a8._s_0.Y;
            local_128._s_0.Z = local_1a8._s_0.Z;
          }
          if (0 < iVar5) {
            uVar26 = uVar4 + 1;
            do {
              iVar6 = *(int *)(*(longlong *)
                                ((this->IndexList).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c92acdc:
                pFVar12 = this->Mesh;
                uVar9 = iVar6 * 3;
                lVar13 = *(longlong *)&pFVar12->UV->field_0x78;
                uVar7 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
                uVar8 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
                lVar14 = *(longlong *)&pFVar12->UV->field_0x48;
                uVar9 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8) +
                                 (ulonglong)(uVar9 & 0x1ff) * 4);
                local_100 = (double)*(float *)(*(longlong *)
                                                (lVar14 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8
                                                ) + (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
                local_f8 = 0;
                local_108 = (double)*(float *)(*(longlong *)
                                                (lVar14 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8
                                                ) + (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
                lVar13 = *(longlong *)&pFVar12->UV->field_0x48;
                local_e8 = (double)*(float *)(*(longlong *)
                                               (lVar13 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8)
                                             + (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
                local_e0 = 0;
                local_f0 = (double)*(float *)(*(longlong *)
                                               (lVar13 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8)
                                             + (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
                lVar13 = *(longlong *)&pFVar12->UV->field_0x48;
                local_d0 = (double)*(float *)(*(longlong *)
                                               (lVar13 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8)
                                             + (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4);
                local_d8 = (double)*(float *)(*(longlong *)
                                               (lVar13 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8)
                                             + (ulonglong)(uVar8 * 2 & 0x1ff) * 4);
                local_c8 = 0;
                cVar23 = (**(code **)local_178)
                                   (*(undefined8 *)&local_178->field_0x8,&local_158,&local_108);
                if (cVar23 != '\0') {
                  return true;
                }
              }
              else {
                local_1c0[0] = iVar6;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar27 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar10 = *(code **)&param_7->TriangleFilterF;
                plVar28 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar27 != (longlong *)0x0) {
                  plVar28 = plVar27;
                }
                uVar25 = (**(code **)(*plVar28 + 8))();
                cVar23 = (*pcVar10)(uVar25,local_1c0);
                if (cVar23 != '\0') goto LAB_14c92acdc;
              }
              uVar26 = uVar26 + 1;
              param_8 = local_168;
            } while ((int)(uVar26 - uVar4) <= iVar5);
          }
        }
        else {
          local_1d8[0] = local_1c0[0];
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar27 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&param_8->TriangleFilterF;
          plVar28 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar27 != (longlong *)0x0) {
            plVar28 = plVar27;
          }
          uVar25 = (**(code **)(*plVar28 + 8))();
          cVar23 = (*pcVar10)(uVar25,local_1d8);
          if (cVar23 != '\0') goto LAB_14c92ab83;
        }
        local_1e4 = local_1e4 + 1;
        uVar26 = (uint)local_170;
        if (local_1b8 < local_1e4) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar26 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a8._s_0,param_4,param_3);
    pFVar15 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar26 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)uVar26 < 0) {
      bVar24 = box_box_intersect(this,~uVar26,(TAxisAlignedBox3<double> *)&local_1a8._s_0);
      if (!bVar24) {
        return false;
      }
      local_1d0[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_178;
      local_1d0[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_178->field_0x8;
      bVar24 = find_any_intersection
                         (this,~uVar26,param_2,param_3,param_4,param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_1d0,param_7,param_8);
      return bVar24;
    }
    local_1d8[0] = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                           (ulonglong)(uVar4 + 1 & 0x1ff) * 4) + -1;
    bVar24 = box_box_intersect(this,uVar26 - 1,(TAxisAlignedBox3<double> *)&local_1a8._s_0);
    pTVar22 = local_178;
    if (bVar24) {
      local_1d0[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_178;
      local_1d0[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_178->field_0x8;
      bVar24 = find_any_intersection
                         (this,uVar26 - 1,param_2,param_3,param_4,param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_1d0,param_7,param_8);
      if (bVar24) {
        return true;
      }
    }
    bVar24 = box_box_intersect(this,local_1d8[0],(TAxisAlignedBox3<double> *)&local_1a8._s_0);
    if (!bVar24) {
      return false;
    }
    local_1d0[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)pTVar22;
    local_1d0[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&pTVar22->field_0x8;
    bVar24 = find_any_intersection
                       (this,local_1d8[0],param_2,param_3,param_4,param_5 + 1,
                        (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                         *)local_1d0,param_7,param_8);
    return bVar24;
  }
  lVar13 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar30 * 8);
  dVar1 = *(double *)(lVar13 + uVar31 * 0x18);
  lVar14 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar30 * 8);
  dVar2 = *(double *)(lVar13 + 8 + uVar31 * 0x18);
  dVar3 = *(double *)(lVar13 + 0x10 + uVar31 * 0x18);
  dVar16 = dVar1 - *(double *)(lVar14 + uVar31 * 0x18);
  dVar17 = dVar2 - *(double *)(lVar14 + 8 + uVar31 * 0x18);
  dVar18 = dVar3 - *(double *)(lVar14 + 0x10 + uVar31 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar14 + uVar31 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar14 + 8 + uVar31 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar14 + 0x10 + uVar31 * 0x18);
  pFVar15 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar26 >> 9) * 8) +
                   (ulonglong)(uVar26 & 0x1ff) * 4);
  if ((int)uVar4 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a8._s_0,~uVar4,param_3);
    if (((dVar1 <= local_1a8._s_0.X) || (local_190 <= dVar16)) ||
       ((dVar2 <= local_1a8._s_0.Y ||
        (((local_188 <= dVar17 || (dVar3 <= local_1a8._s_0.Z)) || (local_180 <= dVar18)))))) {
      return false;
    }
    local_1d0[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)param_6;
    local_1d0[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&param_6->field_0x8;
  }
  else {
    local_1e8 = false;
    local_1b8 = uVar4 - 1;
    local_1e4 = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar26 + 1 >> 9) * 8) +
                        (ulonglong)(uVar26 + 1 & 0x1ff) * 4) + -1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a8._s_0,local_1b8,param_3);
    if ((((local_1a8._s_0.X < dVar1) && (dVar16 < local_190)) && (local_1a8._s_0.Y < dVar2)) &&
       (((dVar17 < local_188 && (local_1a8._s_0.Z < dVar3)) && (dVar18 < local_180)))) {
      local_1d0[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)param_6;
      local_1d0[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&param_6->field_0x8;
      local_1e8 = find_any_intersection
                            (this,param_1,param_2,param_3,local_1b8,param_5 + 1,
                             (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                              *)local_1d0,param_7,param_8);
      if (local_1e8) {
        return true;
      }
    }
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a8._s_0,local_1e4,param_3);
    if (dVar1 <= local_1a8._s_0.X) {
      return local_1e8;
    }
    if (local_190 <= dVar16) {
      return local_1e8;
    }
    if (dVar2 <= local_1a8._s_0.Y) {
      return local_1e8;
    }
    if (local_188 <= dVar17) {
      return local_1e8;
    }
    if (dVar3 <= local_1a8._s_0.Z) {
      return local_1e8;
    }
    if (local_180 <= dVar18) {
      return local_1e8;
    }
    local_1d0[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)param_6;
    local_1d0[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&param_6->field_0x8;
  }
  bVar24 = find_any_intersection
                     (this,param_1,param_2,param_3,local_1e4,param_5 + 1,
                      (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                       *)local_1d0,param_7,param_8);
  return bVar24;
}

// find_intersections @ 14c92b2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_intersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *pTVar19;
  char cVar20;
  bool bVar21;
  int iVar22;
  undefined8 uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_348 [32];
  uint uVar31;
  int local_2f0 [2];
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *local_2e8 [2];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_2d8;
  ulonglong local_2d0;
  uint local_2c8;
  TVector<double>_u_0 local_2b8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined8 local_278;
  ulonglong local_268;
  FIntersectionsQueryResult *local_260;
  FQueryOptions *local_258;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_250;
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
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  double dStack_198;
  double local_190;
  undefined8 uStack_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar28 = (ulonglong)(param_1 & 0x1ff);
  local_2d8 = param_7;
  uVar27 = (ulonglong)((uint)param_1 >> 9);
  uVar31 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar27 * 8) +
                    uVar28 * 4);
  local_2f0[0] = param_4;
  local_260 = param_6;
  local_258 = param_9;
  uVar24 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_2d0 = CONCAT44(local_2d0._4_4_,uVar24);
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_2e8[0] = param_2;
  local_2c8 = uVar31;
  local_250 = param_3;
  if ((int)uVar31 < this->TrianglesEnd) {
    if ((int)uVar24 < param_2->TrianglesEnd) {
      uVar31 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar31 >> 9) * 8) + (ulonglong)(uVar31 & 0x1ff) * 4);
      uVar5 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      local_268 = (ulonglong)uVar5;
      if ((int)uVar5 < 1) {
        return;
      }
      do {
        pTVar19 = local_2e8[0];
        uVar24 = uVar24 + 1;
        local_2d0 = (ulonglong)uVar24;
        iVar22 = *(int *)(*(longlong *)
                           ((local_2e8[0]->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c92b4a9:
          FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
                    (pTVar19->Mesh,iVar22,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          if (*(void **)param_3 == (void *)0x0) {
            uVar29 = SUB84(local_218._s_0.Z,0);
            uVar30 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
          }
          else {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            puVar1 = &param_3->field_0x10;
            pcVar8 = *(code **)param_3;
            plVar25 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar25 = (longlong *)puVar1;
            }
            uVar23 = (**(code **)(*plVar25 + 8))();
            (*pcVar8)(&local_2b8,uVar23,&local_248);
            local_248._s_0.X = (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_);
            local_248._s_0.Y = (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_);
            local_248._s_0.Z = local_2b8._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar25 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar25 = (longlong *)puVar1;
            }
            uVar23 = (**(code **)(*plVar25 + 8))();
            (*pcVar8)(&local_2b8,uVar23,&TStack_230);
            TStack_230._s_0.X = (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_);
            TStack_230._s_0.Y = (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_);
            TStack_230._16_8_ = local_2b8._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar25 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar25 = (longlong *)puVar1;
            }
            uVar23 = (**(code **)(*plVar25 + 8))();
            (*pcVar8)(&local_2b8,uVar23,&local_218);
            uVar29 = SUB84(local_2b8._s_0.Z,0);
            uVar30 = (undefined4)((ulonglong)local_2b8._16_8_ >> 0x20);
            local_218._0_4_ = local_2b8._0_4_;
            local_218._4_4_ = local_2b8._4_4_;
            local_218._8_4_ = local_2b8._8_4_;
            local_218._12_4_ = local_2b8._12_4_;
            local_218._16_8_ = local_2b8._s_0.Z;
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
          if (0 < (int)uVar31) {
            uVar27 = (ulonglong)uVar31;
            uVar24 = local_2c8;
            do {
              uVar24 = uVar24 + 1;
              iVar6 = *(int *)(*(longlong *)
                                ((this->IndexList).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c92b63c:
                uVar18 = iVar6 * 3;
                local_278 = 0;
                pTVar9 = this->Mesh->UV;
                lVar10 = *(longlong *)&pTVar9->field_0x48;
                lVar11 = *(longlong *)&pTVar9->field_0x78;
                uVar5 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar18 >> 9) * 8) +
                                 (ulonglong)(uVar18 & 0x1ff) * 4);
                dVar12 = (double)*(float *)(*(longlong *)
                                             (lVar10 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                                           (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
                uVar7 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
                dStack_198 = (double)*(float *)(*(longlong *)
                                                 (lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) *
                                                           8) + (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
                local_190 = (double)*(float *)(*(longlong *)
                                                (lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8
                                                ) + (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
                uVar7 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
                dVar14 = (double)*(float *)(*(longlong *)
                                             (lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                                           (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
                local_15c = local_15c & 0xffffffff00000000;
                local_1b0._8_4_ = SUB84(dVar12,0);
                local_1b0._0_8_ =
                     (double)*(float *)(*(longlong *)
                                         (lVar10 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
                local_1b0._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                local_180._8_4_ = SUB84(dVar14,0);
                local_180._0_8_ =
                     (double)*(float *)(*(longlong *)
                                         (lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
                local_180._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                local_1a0 = 0;
                uStack_188 = 0;
                local_170 = 0;
                cVar20 = (**(code **)local_2d8)(*(undefined8 *)&local_2d8->field_0x8,&local_1f8);
                if (cVar20 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,iVar6,iVar22,
                             local_260);
                }
              }
              else {
                local_2f0[0] = iVar6;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar25 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_8->TriangleFilterF;
                plVar26 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar25 != (longlong *)0x0) {
                  plVar26 = plVar25;
                }
                uVar23 = (**(code **)(*plVar26 + 8))();
                cVar20 = (*pcVar8)(uVar23,local_2f0);
                if (cVar20 != '\0') goto LAB_14c92b63c;
              }
              uVar27 = uVar27 - 1;
              param_9 = local_258;
              param_3 = local_250;
            } while (uVar27 != 0);
          }
        }
        else {
          local_2f0[0] = iVar22;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar25 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_9->TriangleFilterF;
          plVar26 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar25 != (longlong *)0x0) {
            plVar26 = plVar25;
          }
          uVar23 = (**(code **)(*plVar26 + 8))();
          cVar20 = (*pcVar8)(uVar23,local_2f0);
          if (cVar20 != '\0') goto LAB_14c92b4a9;
        }
        uVar24 = (uint)local_2d0;
        local_268 = local_268 - 1;
        if (local_268 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar24 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2b8._s_0,param_4,param_3);
    uVar31 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar31 >> 9) * 8) + (ulonglong)(uVar31 & 0x1ff) * 4);
    if ((int)uVar31 < 0) {
      bVar21 = box_box_intersect(this,~uVar31,(TAxisAlignedBox3<double> *)&local_2b8._s_0);
      if (!bVar21) {
        return;
      }
      local_2e8[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_2d8;
      local_2e8[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_2d8->field_0x8;
      find_intersections(this,~uVar31,param_2,param_3,local_2f0[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_2e8,param_8,param_9);
      return;
    }
    bVar21 = box_box_intersect(this,uVar31 - 1,(TAxisAlignedBox3<double> *)&local_2b8._s_0);
    if (bVar21) {
      local_2e8[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_2d8;
      local_2e8[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_2d8->field_0x8;
      find_intersections(this,uVar31 - 1,param_2,param_3,local_2f0[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_2e8,param_8,param_9);
    }
    iVar22 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_2c8 + 1 >> 9) * 8) + (ulonglong)(local_2c8 + 1 & 0x1ff) * 4
                     );
    bVar21 = box_box_intersect(this,iVar22 + -1,(TAxisAlignedBox3<double> *)&local_2b8._s_0);
    if (!bVar21) {
      return;
    }
    local_2e8[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_2d8;
    local_2e8[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_2d8->field_0x8;
    find_intersections(this,iVar22 + -1,param_2,param_3,local_2f0[0],param_5 + 1,param_6,
                       (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                        *)local_2e8,param_8,param_9);
    return;
  }
  dVar12 = this->BoxEps;
  lVar10 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar27 * 8);
  dVar14 = *(double *)(lVar10 + uVar28 * 0x18);
  lVar11 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar27 * 8);
  dVar3 = *(double *)(lVar10 + 8 + uVar28 * 0x18);
  dVar4 = *(double *)(lVar10 + 0x10 + uVar28 * 0x18);
  pdVar2 = (double *)(lVar11 + uVar28 * 0x18);
  local_2b8._s_0.Z = *(double *)(lVar11 + 0x10 + uVar28 * 0x18);
  dVar13 = *pdVar2 + dVar12;
  dVar15 = pdVar2[1] + dVar12;
  dVar17 = dVar4 - (local_2b8._s_0.Z + dVar12);
  uVar31 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
  dVar16 = dVar14 - dVar13;
  dVar14 = dVar14 + dVar13;
  dVar13 = dVar3 - dVar15;
  dVar3 = dVar3 + dVar15;
  dVar4 = dVar4 + local_2b8._s_0.Z + dVar12;
  if ((int)uVar31 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2b8._s_0,~uVar31,param_3);
    if (dVar14 < (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_) ||
        dVar14 == (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_)) {
      return;
    }
    if (local_2a0 <= dVar16) {
      return;
    }
    if (dVar3 < (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_) ||
        dVar3 == (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_)) {
      return;
    }
    if (local_298 <= dVar13) {
      return;
    }
    if (dVar4 <= local_2b8._s_0.Z) {
      return;
    }
    if (local_290 <= dVar17) {
      return;
    }
    local_2e8[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_2d8;
    local_2e8[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_2d8->field_0x8;
    uVar31 = ~uVar31;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2b8._s_0,uVar31 - 1,param_3);
    if (((((double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_) <= dVar14 &&
           dVar14 != (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_)) && (dVar16 < local_2a0)) &&
        ((double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_) <= dVar3 &&
         dVar3 != (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_))) &&
       (((dVar13 < local_298 && (local_2b8._s_0.Z < dVar4)) && (dVar17 < local_290)))) {
      local_2e8[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_2d8;
      local_2e8[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_2d8->field_0x8;
      find_intersections(this,param_1,param_2,param_3,uVar31 - 1,param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_2e8,param_8,param_9);
    }
    iVar22 = *(int *)(*(longlong *)
                       ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)local_2d0 + 1 >> 9) * 8) +
                     (ulonglong)((uint)local_2d0 + 1 & 0x1ff) * 4) + -1;
    local_2d0 = CONCAT44(local_2d0._4_4_,iVar22);
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2b8._s_0,iVar22,param_3);
    if (dVar14 < (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_) ||
        dVar14 == (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_)) {
      return;
    }
    if (local_2a0 <= dVar16) {
      return;
    }
    if (dVar3 < (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_) ||
        dVar3 == (double)CONCAT44(local_2b8._12_4_,local_2b8._8_4_)) {
      return;
    }
    if (local_298 <= dVar13) {
      return;
    }
    if (dVar4 <= local_2b8._s_0.Z) {
      return;
    }
    if (local_290 <= dVar17) {
      return;
    }
    local_2e8[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)local_2d8;
    local_2e8[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> **)&local_2d8->field_0x8;
    uVar31 = (uint)local_2d0;
  }
  find_intersections(this,param_1,param_2,param_3,uVar31,param_5 + 1,param_6,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     local_2e8,param_8,param_9);
  return;
}

// find_nearest_triangles @ 14c92bce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_nearest_triangles
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  FIndex2i_u_0 FVar19;
  char cVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  FQueryOptions *pFVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  undefined1 auStackY_338 [32];
  int local_2d0 [2];
  FQueryOptions *local_2c8;
  FIndex2i_u_0 *local_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  int local_2a8;
  uint local_2a4;
  int local_2a0;
  int iStack_29c;
  TVector<double>_u_0 local_298;
  double local_280;
  double local_278;
  double local_270;
  undefined8 local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar12 = __real_3fd0000000000000;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  iVar25 = param_5 + 1;
  local_2c0 = &param_7->field0_0x0;
  local_2c8 = param_9;
LAB_14c92bdc0:
  do {
    while( true ) {
      dVar3 = __real_bff0000000000000;
      local_2b0 = (ulonglong)(param_1 & 0x1ff);
      local_2b8 = (ulonglong)((uint)param_1 >> 9);
      uVar5 = *(uint *)(*(longlong *)
                         ((this->BoxToIndex).Blocks.AllocatorInstance.Data + local_2b8 * 8) +
                       local_2b0 * 4);
      uVar22 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar5 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar22)) goto LAB_14c92bfea;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,param_4,param_3);
      pFVar8 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar22 = *(uint *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) +
                        (ulonglong)(uVar5 & 0x1ff) * 4);
      if ((int)uVar22 < 0) {
        dVar3 = this->BoxEps;
        param_1 = ~uVar22;
        uVar27 = (ulonglong)(param_1 & 0x1ff);
        lVar10 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar33 = *(double *)(lVar10 + uVar27 * 0x18);
        dVar4 = *(double *)(lVar10 + 8 + uVar27 * 0x18);
        dVar13 = *(double *)(lVar10 + 0x10 + uVar27 * 0x18);
        lVar10 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        local_298._s_0.Z = *(double *)(lVar10 + 0x10 + uVar27 * 0x18);
        pdVar2 = (double *)(lVar10 + uVar27 * 0x18);
        dVar15 = *pdVar2 + dVar3;
        dVar16 = pdVar2[1] + dVar3;
        dVar32 = dVar33 - dVar15;
        dVar17 = dVar13 + local_298._s_0.Z + dVar3;
        dVar13 = dVar13 - (local_298._s_0.Z + dVar3);
        dVar33 = dVar33 + dVar15;
        dVar15 = dVar4 + dVar16;
        dVar4 = dVar4 - dVar16;
        dVar3 = (TStack_230._s_0.X + local_248._s_0.X) - (dVar33 + dVar32);
        dVar33 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,SUB84(dVar3,0) & uVar26)
                 - ((dVar33 - dVar32) + (TStack_230._s_0.X - local_248._s_0.X));
        dVar3 = (TStack_230._s_0.Y + local_248._s_0.Y) - (dVar15 + dVar4);
        if (dVar33 <= 0.0) {
          dVar33 = 0.0;
        }
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,SUB84(dVar3,0) & uVar26) -
                ((dVar15 - dVar4) + (TStack_230._s_0.Y - local_248._s_0.Y));
        dVar3 = (local_248._s_0.Z + TStack_230._s_0.Z) - (dVar17 + dVar13);
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,SUB84(dVar3,0) & uVar26) -
                ((dVar17 - dVar13) + (TStack_230._s_0.Z - local_248._s_0.Z));
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        bVar29 = (dVar4 * dVar4 + dVar33 * dVar33 + dVar3 * dVar3) * dVar12 < *param_6;
        goto LAB_14c92c5b3;
      }
      uVar22 = uVar22 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4) - 1;
      dVar3 = box_box_distsqr(this,uVar22,(TAxisAlignedBox3<double> *)&local_248._s_0);
      dVar33 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_248._s_0);
      if (dVar33 < dVar3) {
        if (dVar33 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar25,param_6,
                     (FIndex2i *)&local_2c0->_s_0,param_8,local_2c8);
        }
        bVar29 = dVar3 < *param_6;
        param_1 = uVar22;
        goto LAB_14c92c5b3;
      }
      if (dVar3 < *param_6) {
        find_nearest_triangles
                  (this,uVar22,param_2,param_3,param_4,iVar25,param_6,(FIndex2i *)&local_2c0->_s_0,
                   param_8,local_2c8);
      }
      if (*param_6 <= dVar33) {
        return;
      }
      param_5 = param_5 + 1;
      iVar25 = iVar25 + 1;
    }
    if ((int)uVar22 < param_2->TrianglesEnd) {
      local_2a4 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
      uVar27 = (ulonglong)local_2a4;
      uVar26 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
      local_2b0 = (ulonglong)uVar26;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      pFVar28 = local_2c8;
      if ((int)uVar26 < 1) {
        return;
      }
      break;
    }
LAB_14c92bfea:
    lVar10 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + local_2b8 * 8);
    dVar3 = *(double *)(lVar10 + local_2b0 * 0x18);
    lVar11 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + local_2b8 * 8);
    dVar33 = *(double *)(lVar10 + 8 + local_2b0 * 0x18);
    dVar4 = *(double *)(lVar10 + 0x10 + local_2b0 * 0x18);
    pFVar8 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar13 = dVar3 - *(double *)(lVar11 + local_2b0 * 0x18);
    dVar15 = dVar33 - *(double *)(lVar11 + 8 + local_2b0 * 0x18);
    dVar32 = dVar4 - *(double *)(lVar11 + 0x10 + local_2b0 * 0x18);
    dVar3 = dVar3 + *(double *)(lVar11 + local_2b0 * 0x18);
    dVar33 = dVar33 + *(double *)(lVar11 + 8 + local_2b0 * 0x18);
    dVar4 = dVar4 + *(double *)(lVar11 + 0x10 + local_2b0 * 0x18);
    dVar16 = dVar3 - dVar13;
    dVar3 = dVar3 + dVar13;
    dVar13 = dVar33 + dVar15;
    dVar33 = dVar33 - dVar15;
    dVar15 = dVar4 + dVar32;
    dVar4 = dVar4 - dVar32;
    uVar5 = *(uint *)(*(longlong *)(pFVar8 + (ulonglong)(uVar22 >> 9) * 8) +
                     (ulonglong)(uVar22 & 0x1ff) * 4);
    if ((int)uVar5 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,~uVar5,param_3);
      dVar3 = dVar3 - (TStack_230._s_0.X + local_248._s_0.X);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,SUB84(dVar3,0) & uVar26) -
              ((TStack_230._s_0.X - local_248._s_0.X) + dVar16);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar13 = dVar13 - (TStack_230._s_0.Y + local_248._s_0.Y);
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar6,SUB84(dVar13,0) & uVar26)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar33);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      dVar15 = dVar15 - (TStack_230._s_0.Z + local_248._s_0.Z);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar6,SUB84(dVar15,0) & uVar26) -
              ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar4);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      bVar29 = (dVar33 * dVar33 + dVar3 * dVar3 + dVar4 * dVar4) * dVar12 < *param_6;
      param_4 = ~uVar5;
    }
    else {
      uVar5 = uVar5 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                        (ulonglong)(uVar22 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,uVar5,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_298._s_0,param_4,param_3);
      dVar32 = dVar3 - (TStack_230._s_0.X + local_248._s_0.X);
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar6,SUB84(dVar32,0) & uVar26)
               - ((TStack_230._s_0.X - local_248._s_0.X) + dVar16);
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      dVar17 = dVar13 - (TStack_230._s_0.Y + local_248._s_0.Y);
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar6,SUB84(dVar17,0) & uVar26)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar33);
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      dVar14 = dVar15 - (TStack_230._s_0.Z + local_248._s_0.Z);
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar6,SUB84(dVar14,0) & uVar26)
               - ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar4);
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      dVar3 = dVar3 - (local_280 + (double)CONCAT44(local_298._4_4_,local_298._0_4_));
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,SUB84(dVar3,0) & uVar26) -
              ((local_280 - (double)CONCAT44(local_298._4_4_,local_298._0_4_)) + dVar16);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar16 = (dVar17 * dVar17 + dVar32 * dVar32 + dVar14 * dVar14) * dVar12;
      dVar13 = dVar13 - (local_278 + (double)CONCAT44(local_298._12_4_,local_298._8_4_));
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar6,SUB84(dVar13,0) & uVar26)
               - ((local_278 - (double)CONCAT44(local_298._12_4_,local_298._8_4_)) + dVar33);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      dVar15 = dVar15 - (local_270 + local_298._s_0.Z);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar6,SUB84(dVar15,0) & uVar26) -
              ((local_270 - local_298._s_0.Z) + dVar4);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar3 = (dVar33 * dVar33 + dVar3 * dVar3 + dVar4 * dVar4) * dVar12;
      if (dVar16 <= dVar3) {
        if (dVar16 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar5,iVar25,param_6,(FIndex2i *)&local_2c0->_s_0,
                     param_8,local_2c8);
        }
        if (*param_6 <= dVar3) {
          return;
        }
        param_5 = param_5 + 1;
        iVar25 = iVar25 + 1;
        goto LAB_14c92bdc0;
      }
      if (dVar3 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar25,param_6,(FIndex2i *)&local_2c0->_s_0,
                   param_8,local_2c8);
      }
      bVar29 = dVar16 < *param_6;
      param_4 = uVar5;
    }
LAB_14c92c5b3:
    if (!bVar29) {
      return;
    }
    param_5 = param_5 + 1;
    iVar25 = iVar25 + 1;
  } while( true );
LAB_14c92be90:
  uVar22 = uVar22 + 1;
  local_2b8 = (ulonglong)uVar22;
  iVar25 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
  local_2a8 = iVar25;
  if (*(void **)&pFVar28->TriangleFilterF == (void *)0x0) {
LAB_14c92beef:
    FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
              (param_2->Mesh,iVar25,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 == (void *)0x0) {
      uVar30 = SUB84(local_218._s_0.Z,0);
      uVar31 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
    }
    else {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar7 = *(code **)param_3;
      plVar23 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar23 = (longlong *)puVar1;
      }
      uVar21 = (**(code **)(*plVar23 + 8))();
      (*pcVar7)(&local_298,uVar21,&local_248);
      local_248._s_0.X = (double)CONCAT44(local_298._4_4_,local_298._0_4_);
      local_248._s_0.Y = (double)CONCAT44(local_298._12_4_,local_298._8_4_);
      local_248._s_0.Z = local_298._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar23 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar23 = (longlong *)puVar1;
      }
      uVar21 = (**(code **)(*plVar23 + 8))();
      (*pcVar7)(&local_298,uVar21,&TStack_230);
      TStack_230._s_0.X = (double)CONCAT44(local_298._4_4_,local_298._0_4_);
      TStack_230._s_0.Y = (double)CONCAT44(local_298._12_4_,local_298._8_4_);
      TStack_230._16_8_ = local_298._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar23 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar23 = (longlong *)puVar1;
      }
      uVar21 = (**(code **)(*plVar23 + 8))();
      (*pcVar7)(&local_298,uVar21,&local_218);
      uVar30 = SUB84(local_298._s_0.Z,0);
      uVar31 = (undefined4)((ulonglong)local_298._16_8_ >> 0x20);
      local_218._0_4_ = local_298._0_4_;
      local_218._4_4_ = local_298._4_4_;
      local_218._8_4_ = local_298._8_4_;
      local_218._12_4_ = local_298._12_4_;
      local_218._16_8_ = local_298._s_0.Z;
    }
    local_1f8.DistanceSquared = dVar3;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar31,uVar30);
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    pFVar28 = local_2c8;
    uVar26 = uVar5;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    if (0 < (int)uVar27) {
      do {
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c92c6ec:
          uVar18 = iVar25 * 3;
          local_258 = 0;
          pTVar9 = this->Mesh->UV;
          lVar10 = *(longlong *)&pTVar9->field_0x48;
          lVar11 = *(longlong *)&pTVar9->field_0x78;
          uVar6 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar18 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 4);
          dVar12 = (double)*(float *)(*(longlong *)
                                       (lVar10 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4);
          uVar22 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                            (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X =
               (double)*(float *)(*(longlong *)
                                   (lVar10 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar22 * 2 & 0x1ff) * 4);
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y =
               (double)*(float *)(*(longlong *)
                                   (lVar10 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar22 * 2 + 1 & 0x1ff) * 4);
          uVar22 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                            (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
          dVar33 = (double)*(float *)(*(longlong *)
                                       (lVar10 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar22 * 2 + 1 & 0x1ff) * 4);
          local_1f8.Triangle[1].V[0].field0_0x0._8_4_ = SUB84(dVar12,0);
          local_1f8.Triangle[1].V[0].field0_0x0._0_8_ =
               (double)*(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar6 * 2 & 0x1ff) * 4);
          local_1f8.Triangle[1].V[0].field0_0x0._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_1f8.Triangle[1].V[2].field0_0x0._8_4_ = SUB84(dVar33,0);
          local_1f8.Triangle[1].V[2].field0_0x0._0_8_ =
               (double)*(float *)(*(longlong *)
                                   (lVar10 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar22 * 2 & 0x1ff) * 4);
          local_1f8.Triangle[1].V[2].field0_0x0._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = 0.0;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = 0.0;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = 0.0;
          local_1f8.DistanceSquared = dVar3;
          dVar12 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar12 < *param_6) {
            iStack_29c = local_2a8;
            FVar19._s_0.B = local_2a8;
            FVar19._s_0.A = iVar25;
            *param_6 = dVar12;
            *local_2c0 = FVar19;
            local_2a0 = iVar25;
          }
        }
        else {
          local_2d0[0] = iVar25;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar23 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar24 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar23 != (longlong *)0x0) {
            plVar24 = plVar23;
          }
          uVar21 = (**(code **)(*plVar24 + 8))();
          cVar20 = (*pcVar7)(uVar21,local_2d0);
          if (cVar20 != '\0') goto LAB_14c92c6ec;
        }
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
      uVar27 = (ulonglong)local_2a4;
      pFVar28 = local_2c8;
    }
  }
  else {
    local_2d0[0] = iVar25;
    Core::Private::Function::CheckCallable(*(void **)&pFVar28->TriangleFilterF);
    plVar23 = *(longlong **)&(pFVar28->TriangleFilterF).field_0x28;
    pcVar7 = *(code **)&pFVar28->TriangleFilterF;
    plVar24 = (longlong *)&(pFVar28->TriangleFilterF).field_0x10;
    if (plVar23 != (longlong *)0x0) {
      plVar24 = plVar23;
    }
    uVar21 = (**(code **)(*plVar24 + 8))();
    cVar20 = (*pcVar7)(uVar21,local_2d0);
    if (cVar20 != '\0') goto LAB_14c92beef;
  }
  uVar22 = (uint)local_2b8;
  local_2b0 = local_2b0 - 1;
  if (local_2b0 == 0) {
    return;
  }
  goto LAB_14c92be90;
}

// find_nearest_vertex @ 14c92c920

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_nearest_vertex
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FDynamicMeshUVMesh *pFVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong local_res8;
  int local_res10 [2];
  uint local_70 [14];
  
  pTVar2 = &(this->IndexList).Blocks;
  uVar12 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar12) {
    do {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      uVar11 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar11 < 0) {
        uVar11 = ~uVar11;
        dVar15 = BoxDistanceSqr(this,uVar11,param_2);
        if (*param_3 <= dVar15 && dVar15 != *param_3) {
          return;
        }
      }
      else {
        uVar1 = uVar11 - 1;
        uVar11 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4) - 1;
        dVar15 = BoxDistanceSqr(this,uVar1,param_2);
        dVar16 = BoxDistanceSqr(this,uVar11,param_2);
        if (dVar16 <= dVar15) {
          if (*param_3 <= dVar16) {
            return;
          }
          find_nearest_vertex(this,uVar11,param_2,param_3,param_4,param_5);
          uVar11 = uVar1;
          if (*param_3 <= dVar15) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar15) {
            return;
          }
          find_nearest_vertex(this,uVar1,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar16) {
            return;
          }
        }
      }
      uVar12 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar12);
  }
  uVar11 = *(uint *)(*(longlong *)((pTVar2->AllocatorInstance).Data + (ulonglong)(uVar12 >> 9) * 8)
                    + (ulonglong)(uVar12 & 0x1ff) * 4);
  local_res8 = (ulonglong)uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar12 = uVar12 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar2->AllocatorInstance).Data + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c92cb40:
        pFVar14 = this->Mesh;
        uVar11 = iVar3 * 3;
        lVar7 = *(longlong *)&pFVar14->UV->field_0x78;
        local_70[0] = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar11 >> 9) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 4);
        local_70[1] = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                       (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
        lVar13 = 0;
        local_70[2] = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                       (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
        do {
          uVar11 = local_70[lVar13];
          lVar7 = *(longlong *)&pFVar14->UV->field_0x48;
          dVar15 = (param_2->field0_0x0)._s_0.Z;
          dVar16 = (param_2->field0_0x0)._s_0.X -
                   (double)*(float *)(*(longlong *)
                                       (lVar7 + (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar11 * 2 & 0x1ff) * 4);
          dVar17 = (param_2->field0_0x0)._s_0.Y -
                   (double)*(float *)(*(longlong *)
                                       (lVar7 + (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar11 * 2 + 1 & 0x1ff) * 4);
          dVar15 = dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
          if (dVar15 < *param_3) {
            *param_3 = dVar15;
            *param_4 = uVar11;
            pFVar14 = this->Mesh;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < 3);
      }
      else {
        local_res10[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_5->TriangleFilterF;
        plVar10 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar10 = plVar5;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        cVar8 = (*pcVar6)(uVar9,local_res10);
        if (cVar8 != '\0') goto LAB_14c92cb40;
      }
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return;
}

// find_self_intersections @ 14c92cc80

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_self_intersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,FIntersectionsQueryResult *param_1
          ,bool param_2,
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

// find_self_intersections_acrossboxes @ 14c92ce10

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,int param_2,
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
LAB_14c92cfc5:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14c92cfc5;
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
      goto joined_r0x00014c92d1c1;
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
joined_r0x00014c92d1c1:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14c92d450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::find_tri_tri_intersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *this,int param_1,int param_2,
          int param_3,FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  double dVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auStackY_258 [32];
  char local_228;
  int local_220 [2];
  int local_218;
  int local_210 [4];
  int local_200 [4];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_1f0;
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
  undefined1 local_150 [16];
  undefined8 local_140;
  double dStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1f0 = param_6;
  local_218 = param_3;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_220[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar4 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar5 = *(code **)&param_7->TriangleFilterF;
    plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar14 = plVar4;
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    cVar10 = (*pcVar5)(uVar12,local_220);
    if (cVar10 == '\0') {
      return false;
    }
  }
  cVar10 = '\0';
  local_228 = '\0';
  FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
            (this->Mesh,param_1,(TVector<double> *)&local_1e8._s_0,
             (TVector<double> *)&TStack_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
  uVar2 = param_1 * 3;
  local_108 = __real_3e45798ee2308c3a;
  local_198._s_0.X = local_1e8._s_0.X;
  local_198._s_0.Y = local_1e8._s_0.Y;
  local_178 = TStack_1d0._s_0.Y;
  dStack_170 = TStack_1d0._s_0.Z;
  local_198._s_0.Z = local_1e8._s_0.Z;
  dStack_180 = TStack_1d0._s_0.X;
  local_158 = local_1b8._s_0.Z;
  local_100 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_168 = local_1b8._s_0.X;
  dStack_160 = local_1b8._s_0.Y;
  lVar15 = *(longlong *)&this->Mesh->UV->field_0x78;
  local_210[0] = *(int *)(*(longlong *)(lVar15 + (ulonglong)(uVar2 >> 9) * 8) +
                         (ulonglong)(uVar2 & 0x1ff) * 4);
  local_210[1] = *(undefined4 *)
                  (*(longlong *)(lVar15 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                  (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
  local_210[2] = *(undefined4 *)
                  (*(longlong *)(lVar15 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                  (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
  if (param_2 < param_3) {
    do {
      iVar1 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c92d63e:
        uVar2 = iVar1 * 3;
        lVar15 = *(longlong *)&this->Mesh->UV->field_0x78;
        local_200[0] = *(int *)(*(longlong *)(lVar15 + (ulonglong)(uVar2 >> 9) * 8) +
                               (ulonglong)(uVar2 & 0x1ff) * 4);
        local_200[1] = *(undefined4 *)
                        (*(longlong *)(lVar15 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                        (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
        local_200[2] = *(undefined4 *)
                        (*(longlong *)(lVar15 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                        (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
        if (param_5) {
          bVar9 = false;
          lVar15 = 0;
          do {
            if (bVar9) goto LAB_14c92d85a;
            lVar13 = 0;
            do {
              if (local_210[lVar15] == local_200[lVar13]) {
                bVar9 = true;
                break;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 3);
            lVar15 = lVar15 + 1;
          } while (lVar15 < 3);
          if (bVar9) goto LAB_14c92d85a;
        }
        uVar8 = iVar1 * 3;
        pTVar6 = this->Mesh->UV;
        lVar15 = *(longlong *)&pTVar6->field_0x48;
        lVar13 = *(longlong *)&pTVar6->field_0x78;
        uVar2 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        dVar7 = (double)*(float *)(*(longlong *)
                                    (lVar15 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                  (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
        uVar3 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                         (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        dStack_138 = (double)*(float *)(*(longlong *)
                                         (lVar15 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
        local_130 = (double)*(float *)(*(longlong *)
                                        (lVar15 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
        uVar3 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                         (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
        dVar16 = (double)*(float *)(*(longlong *)
                                     (lVar15 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
        local_fc = 0;
        local_150._8_4_ = SUB84(dVar7,0);
        local_150._0_8_ =
             (double)*(float *)(*(longlong *)(lVar15 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
        local_150._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_120._8_4_ = SUB84(dVar16,0);
        local_120._0_8_ =
             (double)*(float *)(*(longlong *)(lVar15 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
        local_120._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        local_140 = 0;
        uStack_128 = 0;
        local_110 = 0;
        cVar10 = (**(code **)local_1f0)(*(undefined8 *)&local_1f0->field_0x8,&local_198);
        local_228 = cVar10;
        if (cVar10 != '\0') {
          if (param_4 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_198._s_0,param_1,iVar1,param_4);
        }
      }
      else {
        local_220[0] = iVar1;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar4 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_7->TriangleFilterF;
        plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar14 = plVar4;
        }
        uVar12 = (**(code **)(*plVar14 + 8))();
        cVar11 = (*pcVar5)(uVar12,local_220);
        cVar10 = local_228;
        if (cVar11 != '\0') goto LAB_14c92d63e;
      }
LAB_14c92d85a:
      param_2 = param_2 + 1;
    } while (param_2 < local_218);
  }
  return (bool)cVar10;
}

