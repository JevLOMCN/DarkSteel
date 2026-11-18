// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 50

// <lambda_invoker_cdecl> @ 14438bc10

int __cdecl
`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::MakeDefaultSplitAxisFunc'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14438bc30

bool __cdecl
`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllIntersections'::__l5::
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

// <lambda_invoker_cdecl> @ 14438bc70

bool __cdecl
`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllSelfIntersections'::__l5
::<lambda_1>::<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 14438d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TRay<double> *param_2,double *param_3,int *param_4,TVector<double> *param_5,
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
LAB_14438d728:
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
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
        if (cVar7 != '\0') goto LAB_14438d728;
      }
      local_198 = local_198 - 1;
      pTVar13 = local_190;
    } while (local_198 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14438d830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TRay<double> *param_2,
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
LAB_14438da89:
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
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
        if (cVar12 != '\0') goto LAB_14438da89;
      }
      local_1e0 = local_1e0 - 1;
      pTVar19 = local_1d8;
    } while (local_1e0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 144392350

double __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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

// find_nearest_tri<1> @ 1443924d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_nearest_tri<1>
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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
LAB_1443925dc:
      FMeshDescriptionTriangleMeshAdapter::GetTriVertices
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
      if (cVar8 != '\0') goto LAB_1443925dc;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 144392800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_nearest_tri<0>
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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
LAB_1443928fc:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
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
          if (cVar9 != '\0') goto LAB_1443928fc;
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

// ~TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> @ 144393950

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
~TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this)

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

// operator() @ 144396410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestSelfIntersection'::__l2::
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

// AddTriTriIntersectionResult @ 14439be00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::AddTriTriIntersectionResult
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

// BoxDistanceSqr @ 14439e830

double __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::BoxDistanceSqr
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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

// BuildTopDown @ 14439e8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::BuildTopDown
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
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

// BuildTopDown @ 14439f010

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::BuildTopDown
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,bool param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  FMeshElementContainer *pFVar7;
  uint uVar8;
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
  pFVar7 = FMeshElementChannels::Get(this->Mesh->Mesh->TriangleElements,0);
  uVar8 = (pFVar7->BitArray).NumBits - pFVar7->NumHoles;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (local_f0.ArrayMax < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_f0.AllocatorInstance,local_f0.ArrayNum,&local_f0.ArrayMax);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  pFVar7 = FMeshElementChannels::Get(this->Mesh->Mesh->TriangleElements,0);
  uVar8 = (pFVar7->BitArray).NumBits - pFVar7->NumHoles;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (local_e0.ArrayMax < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar8,&local_e0.AllocatorInstance,local_e0.ArrayNum,&local_e0.ArrayMax);
  }
  local_f8[0] = 0;
  pFVar7 = FMeshElementChannels::Get(this->Mesh->Mesh->TriangleElements,0);
  dVar3 = __real_3fd5555555555555;
  if (local_f8[0] < (pFVar7->BitArray).NumBits - pFVar7->NumHoles) {
    do {
      iVar6 = local_f8[0];
      if ((-1 < local_f8[0]) &&
         (pFVar7 = FMeshElementChannels::Get(this->Mesh->Mesh->TriangleElements,0),
         iVar6 < (pFVar7->BitArray).NumBits - pFVar7->NumHoles)) {
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  (this->Mesh,local_f8[0],(TVector<double> *)&local_b8._s_0,
                   (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
        dVar10 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar3;
        dVar2 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar3;
        dVar9 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar3;
        sVar5 = _dclass(SUB84(dVar2 * dVar2 + dVar10 * dVar10 + dVar9 * dVar9,0));
        if ((sVar5 != 2) && (sVar5 < 1)) {
          if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 <
               local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4)) &&
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
          iVar6 = local_f0.ArrayNum;
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
          local_f0.ArrayNum = iVar6 + 1;
          *(int *)(local_f0.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_f8[0];
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
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
        }
      }
      local_f8[0] = local_f8[0] + 1;
      pFVar7 = FMeshElementChannels::Get(this->Mesh->Mesh->TriangleElements,0);
    } while (local_f8[0] < (pFVar7->BitArray).NumBits - pFVar7->NumHoles);
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

// DoTraversal @ 1443a0800

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::DoTraversal
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,FTreeTraversal *param_1,
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

// FindAllHitTriangles @ 1443a0b40

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTriangles
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 1443a0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllIntersections
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4438bc30;
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

// FindAllSelfIntersections @ 1443a0d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllSelfIntersections
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4438bc70;
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

// FindNearestHitTriangle @ 1443a14b0

int __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestHitTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 1443a1530

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestHitTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 1443a15b0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestHitTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TRay<double> *param_1,
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

// FindNearestPoint @ 1443a1630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestPoint
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,FQueryOptions *param_2)

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
    TMeshQueries<FMeshDescriptionTriangleMeshAdapter>::TriangleDistance
              (&local_b8,this->Mesh,iVar1,(TVector<double> *)&local_d8._s_0);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8.ClosestTrianglePoint.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Y;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 1443a16e0

int __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TVector<double> *param_1,
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

// FindNearestTriangles @ 1443a1740

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestTriangles
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
          TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *param_1,
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
            (this,this->RootIndex,(TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *)param_2,
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

// FindNearestVertex @ 1443a1800

int __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindNearestVertex
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TVector<double> *param_1,
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

// GetBox @ 1443a3fe0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
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

// GetBox @ 1443a40a0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 1443aa1f0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::IsInside
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 1443aa570

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::IsWithinDistanceSquared
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TVector<double> *param_1,
          double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 1443ad580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::SplitTriSetMidpoint
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
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
  FMeshDescriptionTriangleMeshAdapter *this_00;
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
        goto LAB_1443ae65d;
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
LAB_1443ae65d:
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
                (this_00,(FIndex3i *)&local_140._s_0,
                 *(int *)((param_1->AllocatorInstance).Data + lVar37));
      pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (this_00->VertexPositions).ArrayPtr,0);
      pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar23,local_140._s_0.A);
      dVar11 = (double)(pTVar24->field0_0x0)._s_0.X * (this_00->BuildScale).field0_0x0._s_0.X;
      dVar10 = (double)(pTVar24->field0_0x0)._s_0.Y * (this_00->BuildScale).field0_0x0._s_0.Y;
      dVar9 = (double)(pTVar24->field0_0x0)._s_0.Z * (this_00->BuildScale).field0_0x0._s_0.Z;
      pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (this_00->VertexPositions).ArrayPtr,0);
      pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar23,local_140._s_0.B);
      dVar45 = (double)(pTVar24->field0_0x0)._s_0.X * (this_00->BuildScale).field0_0x0._s_0.X;
      dVar41 = (double)(pTVar24->field0_0x0)._s_0.Y * (this_00->BuildScale).field0_0x0._s_0.Y;
      dVar43 = (double)(pTVar24->field0_0x0)._s_0.Z * (this_00->BuildScale).field0_0x0._s_0.Z;
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
                           (this_00->VertexPositions).ArrayPtr,0);
      pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar23,local_140._s_0.C);
      dVar44 = (double)(pTVar24->field0_0x0)._s_0.X * (this_00->BuildScale).field0_0x0._s_0.X;
      dVar42 = (double)(pTVar24->field0_0x0)._s_0.Y * (this_00->BuildScale).field0_0x0._s_0.Y;
      dVar46 = (double)(pTVar24->field0_0x0)._s_0.Z * (this_00->BuildScale).field0_0x0._s_0.Z;
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
  dVar9 = ((pTVar38->Min).field0_0x0._s_0.X + (pTVar38->Max).field0_0x0._s_0.X) *
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
      goto LAB_1443adbe2;
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
LAB_1443adbe2:
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

// SupportsNearestTriangle @ 1443ae7d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::SupportsNearestTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this)

{
  return true;
}

// SupportsPointContainment @ 1443ae7e0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::SupportsPointContainment
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 1443ae7f0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this)

{
  return true;
}

// TestAnyHitTriangle @ 1443ae800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestAnyHitTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TRay<double> *param_2,int *param_3,double param_4,FQueryOptions *param_5)

{
  FVertexID FVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FMeshDescriptionTriangleMeshAdapter *pFVar6;
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
LAB_1443ae90b:
      pFVar6 = this->Mesh;
      pTVar15 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar6->Mesh->TriangleVertices,&local_148,iVar20);
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
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (pFVar6->VertexPositions).ArrayPtr,0);
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar16,(int)FVar1);
      local_1e8._s_0.X =
           (double)(pTVar17->field0_0x0)._s_0.X * (pFVar6->BuildScale).field0_0x0._s_0.X;
      local_1e8._s_0.Y =
           (double)(pTVar17->field0_0x0)._s_0.Y * (pFVar6->BuildScale).field0_0x0._s_0.Y;
      local_1e8._s_0.Z =
           (double)(pTVar17->field0_0x0)._s_0.Z * (pFVar6->BuildScale).field0_0x0._s_0.Z;
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
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (pFVar6->VertexPositions).ArrayPtr,0);
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar16,(int)FVar1);
      local_1d0._s_0.X =
           (double)(pTVar17->field0_0x0)._s_0.X * (pFVar6->BuildScale).field0_0x0._s_0.X;
      local_1d0._s_0.Y =
           (double)(pTVar17->field0_0x0)._s_0.Y * (pFVar6->BuildScale).field0_0x0._s_0.Y;
      local_1d0._s_0.Z =
           (double)(pTVar17->field0_0x0)._s_0.Z * (pFVar6->BuildScale).field0_0x0._s_0.Z;
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
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (pFVar6->VertexPositions).ArrayPtr,0);
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar16,(int)FVar1);
      dVar10 = (double)(pTVar17->field0_0x0)._s_0.X * (pFVar6->BuildScale).field0_0x0._s_0.X;
      local_1b8._s_0.Y =
           (double)(pTVar17->field0_0x0)._s_0.Y * (pFVar6->BuildScale).field0_0x0._s_0.Y;
      uVar22 = SUB84(local_1b8._s_0.Y,0);
      uVar23 = (undefined4)((ulonglong)local_1b8._s_0.Y >> 0x20);
      dVar9 = (double)(pTVar17->field0_0x0)._s_0.Z * (pFVar6->BuildScale).field0_0x0._s_0.Z;
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
      if (cVar11 != '\0') goto LAB_1443ae90b;
    }
    uVar21 = uVar21 + 1;
    if (local_200 < (int)(uVar21 - (int)local_1f0)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 1443aed40

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestAnyHitTriangle
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TRay<double> *param_1,
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

// TestIntersection @ 1443aed90

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,TTriangle3<double> *param_1,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 1443aee70

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
          TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 1443aeee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
          FMeshDescriptionTriangleMeshAdapter *param_1,TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

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
                  ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__UEBA_NPEBUFMeshDescriptionTriangleMeshAdapter__U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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
  pFVar17 = FMeshElementChannels::Get(param_1->Mesh->TriangleElements,0);
  iVar24 = (pFVar17->BitArray).NumBits - pFVar17->NumHoles;
  if (0 < iVar24) {
    do {
      if (*(longlong *)param_3 == 0) {
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  (param_1,iVar23,(TVector<double> *)&local_a8._s_0,
                   (TVector<double> *)&local_90._s_0,(TVector<double> *)&local_78._s_0);
      }
      else {
        pTVar18 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&param_1->Mesh->TriangleVertices,&local_e8,iVar23);
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
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (param_1->VertexPositions).ArrayPtr,0);
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar19,(int)FVar7);
        local_198 = (double)(pTVar20->field0_0x0)._s_0.Z * (param_1->BuildScale).field0_0x0._s_0.Z;
        local_1a0 = (double)(pTVar20->field0_0x0)._s_0.Y * (param_1->BuildScale).field0_0x0._s_0.Y;
        local_1a8 = (double)(pTVar20->field0_0x0)._s_0.X * (param_1->BuildScale).field0_0x0._s_0.X;
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
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (param_1->VertexPositions).ArrayPtr,0);
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar19,(int)FVar6);
        local_180 = (double)(pTVar20->field0_0x0)._s_0.Z * (param_1->BuildScale).field0_0x0._s_0.Z;
        local_188 = (double)(pTVar20->field0_0x0)._s_0.Y * (param_1->BuildScale).field0_0x0._s_0.Y;
        local_190 = (double)(pTVar20->field0_0x0)._s_0.X * (param_1->BuildScale).field0_0x0._s_0.X;
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
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (param_1->VertexPositions).ArrayPtr,0);
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar19,(int)FVar5);
        local_168 = (double)(pTVar20->field0_0x0)._s_0.Z * (param_1->BuildScale).field0_0x0._s_0.Z;
        local_170 = (double)(pTVar20->field0_0x0)._s_0.Y * (param_1->BuildScale).field0_0x0._s_0.Y;
        local_178 = (double)(pTVar20->field0_0x0)._s_0.X * (param_1->BuildScale).field0_0x0._s_0.X;
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

// TestSelfIntersection @ 1443af2f0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestSelfIntersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,bool param_1,
          FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 1443af330

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TreeTraversalImpl
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,int param_2,
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
LAB_1443af446:
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
          if (cVar10 != '\0') goto LAB_1443af446;
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

// box_box_distsqr @ 1443b18f0

double __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::box_box_distsqr
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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

// box_box_intersect @ 1443b19d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::box_box_intersect
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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

// find_any_intersection @ 1443b1af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_any_intersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
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
LAB_1443b1bf8:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
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
          if (cVar7 != '\0') goto LAB_1443b1bf8;
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

// find_any_intersection @ 1443b1d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_any_intersection
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *param_2,
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
  FMeshDescriptionTriangleMeshAdapter *pFVar9;
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
LAB_1443b1f30:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    (param_2->Mesh,iVar6,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
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
LAB_1443b20c9:
                pFVar9 = this->Mesh;
                pTVar21 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                                    (&pFVar9->Mesh->TriangleVertices,&local_170,iVar30);
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
                                     (pFVar9->VertexPositions).ArrayPtr,0);
                pTVar23 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar22,(int)FVar7);
                local_100 = (double)(pTVar23->field0_0x0)._s_0.Y *
                            (pFVar9->BuildScale).field0_0x0._s_0.Y;
                local_f8 = (double)(pTVar23->field0_0x0)._s_0.Z *
                           (pFVar9->BuildScale).field0_0x0._s_0.Z;
                local_108 = (double)(pTVar23->field0_0x0)._s_0.X *
                            (pFVar9->BuildScale).field0_0x0._s_0.X;
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
                                     (pFVar9->VertexPositions).ArrayPtr,0);
                pTVar23 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar22,(int)FVar7);
                local_e8 = (double)(pTVar23->field0_0x0)._s_0.Y *
                           (pFVar9->BuildScale).field0_0x0._s_0.Y;
                local_e0 = (double)(pTVar23->field0_0x0)._s_0.Z *
                           (pFVar9->BuildScale).field0_0x0._s_0.Z;
                local_f0 = (double)(pTVar23->field0_0x0)._s_0.X *
                           (pFVar9->BuildScale).field0_0x0._s_0.X;
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
                                     (pFVar9->VertexPositions).ArrayPtr,0);
                pTVar23 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar22,(int)FVar7);
                local_d0 = (double)(pTVar23->field0_0x0)._s_0.Y *
                           (pFVar9->BuildScale).field0_0x0._s_0.Y;
                local_c8 = (double)(pTVar23->field0_0x0)._s_0.Z *
                           (pFVar9->BuildScale).field0_0x0._s_0.Z;
                local_d8 = (double)(pTVar23->field0_0x0)._s_0.X *
                           (pFVar9->BuildScale).field0_0x0._s_0.X;
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
                if (cVar17 != '\0') goto LAB_1443b20c9;
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
          if (cVar17 != '\0') goto LAB_1443b1f30;
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

// find_intersections @ 1443b2790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_intersections
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *param_2,
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
  FMeshDescriptionTriangleMeshAdapter *pFVar19;
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
  TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *pTVar36;
  ulonglong uVar37;
  uint uVar38;
  double dVar39;
  undefined1 auStackY_498 [32];
  FIntersectionsQueryResult *pFVar40;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar41;
  uint local_448 [2];
  FIntersectionsQueryResult *local_440;
  TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *local_438;
  FQueryOptions *local_430;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_428;
  uint local_420;
  int local_418 [2];
  uint local_410;
  uint local_40c;
  TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *local_408;
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
LAB_1443b296f:
          FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                    (local_438->Mesh,uVar32,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
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
LAB_1443b2b5b:
                pFVar19 = this->Mesh;
                pTVar29 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                                    (&pFVar19->Mesh->TriangleVertices,local_278,iVar15);
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
                                     (pFVar19->VertexPositions).ArrayPtr,0);
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar30,(int)FVar17);
                fVar3 = (pTVar31->field0_0x0)._s_0.X;
                fVar4 = (pTVar31->field0_0x0)._s_0.Y;
                fVar5 = (pTVar31->field0_0x0)._s_0.Z;
                dVar39 = (pFVar19->BuildScale).field0_0x0._s_0.X;
                dVar9 = (pFVar19->BuildScale).field0_0x0._s_0.Y;
                dVar10 = (pFVar19->BuildScale).field0_0x0._s_0.Z;
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
                                     (pFVar19->VertexPositions).ArrayPtr,0);
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar30,(int)FVar17);
                fVar6 = (pTVar31->field0_0x0)._s_0.X;
                fVar7 = (pTVar31->field0_0x0)._s_0.Y;
                fVar8 = (pTVar31->field0_0x0)._s_0.Z;
                dVar11 = (pFVar19->BuildScale).field0_0x0._s_0.X;
                dVar12 = (pFVar19->BuildScale).field0_0x0._s_0.Y;
                dVar13 = (pFVar19->BuildScale).field0_0x0._s_0.Z;
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
                                     (pFVar19->VertexPositions).ArrayPtr,0);
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar30,(int)FVar17);
                local_180 = (double)(pTVar31->field0_0x0)._s_0.X *
                            (pFVar19->BuildScale).field0_0x0._s_0.X;
                local_178 = (double)(pTVar31->field0_0x0)._s_0.Y *
                            (pFVar19->BuildScale).field0_0x0._s_0.Y;
                local_170 = (double)(pTVar31->field0_0x0)._s_0.Z *
                            (pFVar19->BuildScale).field0_0x0._s_0.Z;
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
                if (cVar26 != '\0') goto LAB_1443b2b5b;
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
          if (cVar26 != '\0') goto LAB_1443b296f;
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
    goto LAB_1443b31f6;
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
LAB_1443b31f6:
  find_intersections(this,uVar38,pTVar36,local_428,param_4,param_5 + 1,pFVar40,pTVar41,param_8,
                     local_430);
  return;
}

// find_nearest_triangles @ 1443b3250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_nearest_triangles
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *param_2,
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
  uint uVar10;
  FVertexID FVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FMeshDescriptionTriangleMeshAdapter *pFVar16;
  FVertexID *pFVar17;
  double dVar18;
  FIndex2i_u_0 FVar19;
  uint uVar20;
  char cVar21;
  bool bVar22;
  undefined8 uVar23;
  TArrayView<FVertexID,int> *pTVar24;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar25;
  TVector<float> *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong *plVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  double dVar34;
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
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar33 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  iVar31 = param_5 + 1;
LAB_1443b3330:
  do {
    while( true ) {
      dVar36 = __real_bff0000000000000;
      uVar32 = (ulonglong)(param_1 & 0x1ff);
      uVar28 = (ulonglong)((uint)param_1 >> 9);
      uVar10 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar28 * 8) +
                        uVar32 * 4);
      uVar27 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar10 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar27)) goto LAB_1443b3597;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_360._s_0,param_4,param_3);
      pFVar15 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar27 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 4);
      if ((int)uVar27 < 0) {
        dStack_370 = this->BoxEps;
        param_1 = ~uVar27;
        uVar28 = (ulonglong)(param_1 & 0x1ff);
        lVar13 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar36 = *(double *)(lVar13 + 0x10 + uVar28 * 0x18);
        lVar14 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar41 = *(double *)(lVar13 + uVar28 * 0x18);
        dVar39 = *(double *)(lVar13 + 8 + uVar28 * 0x18);
        pdVar2 = (double *)(lVar14 + uVar28 * 0x18);
        local_368 = *(double *)(lVar14 + 0x10 + uVar28 * 0x18) + dStack_370;
        local_378 = *pdVar2 + dStack_370;
        dStack_370 = pdVar2[1] + dStack_370;
        dVar37 = dVar36 - local_368;
        dVar36 = dVar36 + local_368;
        dVar40 = dVar41 - local_378;
        dVar34 = dVar39 - dStack_370;
        dVar39 = dVar39 + dStack_370;
        dVar41 = dVar41 + local_378;
        dVar38 = (local_348 + local_360._s_0.X) - (dVar40 + dVar41);
        dVar41 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar20,
                                  SUB84(dVar38,0) & uVar33) -
                 ((local_348 - local_360._s_0.X) + (dVar41 - dVar40));
        if (dVar41 <= 0.0) {
          dVar41 = 0.0;
        }
        dVar38 = (local_340 + local_360._s_0.Y) - (dVar34 + dVar39);
        dVar39 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar20,
                                  SUB84(dVar38,0) & uVar33) -
                 ((local_340 - local_360._s_0.Y) + (dVar39 - dVar34));
        if (dVar39 <= 0.0) {
          dVar39 = 0.0;
        }
        dVar34 = (local_338 + local_360._s_0.Z) - (dVar36 + dVar37);
        dVar36 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar20,
                                  SUB84(dVar34,0) & uVar33) -
                 ((local_338 - local_360._s_0.Z) + (dVar36 - dVar37));
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
        bVar22 = (dVar39 * dVar39 + dVar41 * dVar41 + dVar36 * dVar36) * dVar9 < *param_6;
        goto LAB_1443b3b71;
      }
      uVar27 = uVar27 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                        (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar36 = box_box_distsqr(this,uVar27,(TAxisAlignedBox3<double> *)&local_360._s_0);
      dVar41 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_360._s_0);
      if (dVar41 < dVar36) {
        if (dVar41 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar31,param_6,param_7,param_8,param_9);
        }
        bVar22 = dVar36 < *param_6;
        param_1 = uVar27;
        goto LAB_1443b3b71;
      }
      if (dVar36 < *param_6) {
        find_nearest_triangles
                  (this,uVar27,param_2,param_3,param_4,iVar31,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar41) {
        return;
      }
      param_5 = param_5 + 1;
      iVar31 = iVar31 + 1;
    }
    if ((int)uVar27 < param_2->TrianglesEnd) {
      local_3b0 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
      uVar33 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
      local_3c0 = (ulonglong)uVar33;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar33 < 1) {
        return;
      }
      break;
    }
LAB_1443b3597:
    lVar13 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar28 * 8);
    dVar36 = *(double *)(lVar13 + uVar32 * 0x18);
    lVar14 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar28 * 8);
    dVar41 = *(double *)(lVar13 + 8 + uVar32 * 0x18);
    dVar39 = *(double *)(lVar13 + 0x10 + uVar32 * 0x18);
    pFVar15 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar34 = dVar36 - *(double *)(lVar14 + uVar32 * 0x18);
    dVar37 = dVar41 - *(double *)(lVar14 + 8 + uVar32 * 0x18);
    dVar40 = dVar39 - *(double *)(lVar14 + 0x10 + uVar32 * 0x18);
    dVar36 = dVar36 + *(double *)(lVar14 + uVar32 * 0x18);
    dVar41 = dVar41 + *(double *)(lVar14 + 8 + uVar32 * 0x18);
    dVar39 = dVar39 + *(double *)(lVar14 + 0x10 + uVar32 * 0x18);
    dVar38 = dVar36 - dVar34;
    dVar36 = dVar36 + dVar34;
    dVar34 = dVar41 + dVar37;
    dVar41 = dVar41 - dVar37;
    dVar37 = dVar39 + dVar40;
    dVar39 = dVar39 - dVar40;
    uVar10 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar27 >> 9) * 8) +
                      (ulonglong)(uVar27 & 0x1ff) * 4);
    if ((int)uVar10 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_330._s_0,~uVar10,param_3);
      dVar36 = dVar36 - (local_330._s_0.X + local_318);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar20,SUB84(dVar36,0) & uVar33)
               - ((local_318 - local_330._s_0.X) + dVar38);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar34 = dVar34 - (local_330._s_0.Y + local_310);
      dVar41 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar20,SUB84(dVar34,0) & uVar33)
               - ((local_310 - local_330._s_0.Y) + dVar41);
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
      dVar37 = dVar37 - (local_308 + local_330._s_0.Z);
      dVar39 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar20,SUB84(dVar37,0) & uVar33)
               - ((local_308 - local_330._s_0.Z) + dVar39);
      if (dVar39 <= 0.0) {
        dVar39 = 0.0;
      }
      bVar22 = (dVar41 * dVar41 + dVar36 * dVar36 + dVar39 * dVar39) * dVar9 < *param_6;
      param_4 = ~uVar10;
    }
    else {
      uVar10 = uVar10 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar27 + 1 >> 9) * 8) +
                        (ulonglong)(uVar27 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_300._s_0,uVar10,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2d0._s_0,param_4,param_3);
      dVar40 = dVar36 - (local_2e8 + local_300._s_0.X);
      dVar40 = (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar20,SUB84(dVar40,0) & uVar33)
               - ((local_2e8 - local_300._s_0.X) + dVar38);
      if (dVar40 <= 0.0) {
        dVar40 = 0.0;
      }
      dVar18 = dVar34 - (local_2e0 + local_300._s_0.Y);
      dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar20,SUB84(dVar18,0) & uVar33)
               - ((local_2e0 - local_300._s_0.Y) + dVar41);
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      dVar35 = dVar37 - (local_2d8 + local_300._s_0.Z);
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar20,SUB84(dVar35,0) & uVar33)
               - ((local_2d8 - local_300._s_0.Z) + dVar39);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar36 = dVar36 - (local_2b8 + local_2d0._s_0.X);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar20,SUB84(dVar36,0) & uVar33)
               - ((local_2b8 - local_2d0._s_0.X) + dVar38);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar38 = (dVar18 * dVar18 + dVar40 * dVar40 + dVar35 * dVar35) * dVar9;
      dVar34 = dVar34 - (local_2b0 + local_2d0._s_0.Y);
      dVar41 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar20,SUB84(dVar34,0) & uVar33)
               - ((local_2b0 - local_2d0._s_0.Y) + dVar41);
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
      dVar37 = dVar37 - (local_2a8 + local_2d0._s_0.Z);
      dVar39 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar20,SUB84(dVar37,0) & uVar33)
               - ((local_2a8 - local_2d0._s_0.Z) + dVar39);
      if (dVar39 <= 0.0) {
        dVar39 = 0.0;
      }
      dVar36 = (dVar36 * dVar36 + dVar41 * dVar41 + dVar39 * dVar39) * dVar9;
      if (dVar38 <= dVar36) {
        if (dVar38 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar10,iVar31,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar36) {
          return;
        }
        param_5 = param_5 + 1;
        iVar31 = iVar31 + 1;
        goto LAB_1443b3330;
      }
      if (dVar36 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar31,param_6,param_7,param_8,param_9);
      }
      bVar22 = dVar38 < *param_6;
      param_4 = uVar10;
    }
LAB_1443b3b71:
    if (!bVar22) {
      return;
    }
    param_5 = param_5 + 1;
    iVar31 = iVar31 + 1;
  } while( true );
LAB_1443b3400:
  uVar27 = uVar27 + 1;
  local_380 = (ulonglong)uVar27;
  iVar31 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
  local_39c = iVar31;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_1443b345d:
    FMeshDescriptionTriangleMeshAdapter::GetTriVertices
              (param_2->Mesh,iVar31,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar12 = *(code **)param_3;
      plVar29 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar29 = (longlong *)puVar1;
      }
      uVar23 = (**(code **)(*plVar29 + 8))();
      (*pcVar12)(&local_2a0,uVar23,&local_248);
      local_248._s_0.X = local_2a0;
      local_248._s_0.Y = dStack_298;
      local_248._s_0.Z = local_290;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar12 = *(code **)param_3;
      plVar29 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar29 = (longlong *)puVar1;
      }
      uVar23 = (**(code **)(*plVar29 + 8))();
      (*pcVar12)(&local_288,uVar23,&TStack_230);
      TStack_230._s_0.X = local_288;
      TStack_230._s_0.Y = dStack_280;
      TStack_230._s_0.Z = local_278;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar12 = *(code **)param_3;
      plVar29 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar29 = (longlong *)puVar1;
      }
      uVar23 = (**(code **)(*plVar29 + 8))();
      (*pcVar12)(&local_270,uVar23,&local_218);
      local_218._0_4_ = local_270;
      local_218._4_4_ = uStack_26c;
      local_218._8_4_ = uStack_268;
      local_218._12_4_ = uStack_264;
      local_218._s_0.Z = local_260;
    }
    local_1f8.DistanceSquared = dVar36;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    uVar33 = uVar10;
    uVar28 = (ulonglong)local_3b0;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = local_218._s_0.Z;
    if (0 < (int)local_3b0) {
      do {
        local_388 = uVar28;
        uVar33 = uVar33 + 1;
        iVar31 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar33 >> 9) * 8) + (ulonglong)(uVar33 & 0x1ff) * 4);
        local_3a0 = iVar31;
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1443b3cbc:
          pFVar16 = this->Mesh;
          pTVar24 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              (&pFVar16->Mesh->TriangleVertices,&local_258,iVar31);
          iVar31 = pTVar24->ArrayNum;
          pFVar17 = pTVar24->DataPtr;
          local_398 = pFVar17;
          if ((iVar31 < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar11 = *pFVar17;
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               (pFVar16->VertexPositions).ArrayPtr,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,(int)FVar11);
          fVar3 = (pTVar26->field0_0x0)._s_0.X;
          fVar4 = (pTVar26->field0_0x0)._s_0.Y;
          fVar5 = (pTVar26->field0_0x0)._s_0.Z;
          dVar9 = (pFVar16->BuildScale).field0_0x0._s_0.X;
          dVar41 = (pFVar16->BuildScale).field0_0x0._s_0.Y;
          dVar39 = (pFVar16->BuildScale).field0_0x0._s_0.Z;
          if ((iVar31 < 2) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar11 = local_398[1];
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               (pFVar16->VertexPositions).ArrayPtr,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,(int)FVar11);
          fVar6 = (pTVar26->field0_0x0)._s_0.X;
          fVar7 = (pTVar26->field0_0x0)._s_0.Y;
          fVar8 = (pTVar26->field0_0x0)._s_0.Z;
          dVar34 = (pFVar16->BuildScale).field0_0x0._s_0.X;
          dVar37 = (pFVar16->BuildScale).field0_0x0._s_0.Y;
          dVar38 = (pFVar16->BuildScale).field0_0x0._s_0.Z;
          if ((iVar31 < 3) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar11 = local_398[2];
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               (pFVar16->VertexPositions).ArrayPtr,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,(int)FVar11);
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X =
               (double)(pTVar26->field0_0x0)._s_0.X * (pFVar16->BuildScale).field0_0x0._s_0.X;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y =
               (double)(pTVar26->field0_0x0)._s_0.Y * (pFVar16->BuildScale).field0_0x0._s_0.Y;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z =
               (double)(pTVar26->field0_0x0)._s_0.Z * (pFVar16->BuildScale).field0_0x0._s_0.Z;
          local_1f8.DistanceSquared = dVar36;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = (double)fVar3 * dVar9;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = (double)fVar4 * dVar41;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = (double)fVar5 * dVar39;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = (double)fVar6 * dVar34;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = (double)fVar7 * dVar37;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = (double)fVar8 * dVar38;
          dVar9 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar9 < *param_6) {
            local_390 = local_3a0;
            iStack_38c = local_39c;
            FVar19._s_0.B = local_39c;
            FVar19._s_0.A = local_3a0;
            *param_6 = dVar9;
            param_7->field0_0x0 = FVar19;
          }
        }
        else {
          local_3a8[0] = iVar31;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar29 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar12 = *(code **)&param_8->TriangleFilterF;
          plVar30 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar30 = plVar29;
          }
          uVar23 = (**(code **)(*plVar30 + 8))();
          cVar21 = (*pcVar12)(uVar23,local_3a8);
          if (cVar21 != '\0') goto LAB_1443b3cbc;
        }
        uVar28 = local_388 - 1;
      } while (local_388 - 1 != 0);
      local_388 = 0;
    }
  }
  else {
    local_3b8[0] = iVar31;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar29 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar12 = *(code **)&param_9->TriangleFilterF;
    plVar30 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar29 != (longlong *)0x0) {
      plVar30 = plVar29;
    }
    uVar23 = (**(code **)(*plVar30 + 8))();
    cVar21 = (*pcVar12)(uVar23,local_3b8);
    if (cVar21 != '\0') goto LAB_1443b345d;
  }
  uVar27 = (uint)local_380;
  local_3c0 = local_3c0 - 1;
  if (local_3c0 == 0) {
    return;
  }
  goto LAB_1443b3400;
}

// find_nearest_vertex @ 1443b3fa0

void __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_nearest_vertex
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  FMeshDescriptionTriangleMeshAdapter **ppFVar2;
  int iVar3;
  FVertexID FVar4;
  FVertexID FVar5;
  FVertexID FVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  FVertexID *pFVar10;
  FMeshDescriptionTriangleMeshAdapter *pFVar11;
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
LAB_1443b41bc:
        ppFVar2 = &this->Mesh;
        pTVar15 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&this->Mesh->Mesh->TriangleVertices,local_70,iVar3);
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
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (pFVar11->VertexPositions).ArrayPtr,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar16,(int)FVar6);
        dVar23 = (param_2->field0_0x0)._s_0.X -
                 (double)(pTVar17->field0_0x0)._s_0.X * (pFVar11->BuildScale).field0_0x0._s_0.X;
        dVar22 = (param_2->field0_0x0)._s_0.Y -
                 (double)(pTVar17->field0_0x0)._s_0.Y * (pFVar11->BuildScale).field0_0x0._s_0.Y;
        dVar21 = (param_2->field0_0x0)._s_0.Z -
                 (double)(pTVar17->field0_0x0)._s_0.Z * (pFVar11->BuildScale).field0_0x0._s_0.Z;
        dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar21 * dVar21;
        if (dVar21 < *param_3) {
          *param_3 = dVar21;
          *param_4 = (int)FVar6;
        }
        pFVar11 = *ppFVar2;
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (pFVar11->VertexPositions).ArrayPtr,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar16,(int)FVar5);
        dVar23 = (param_2->field0_0x0)._s_0.X -
                 (double)(pTVar17->field0_0x0)._s_0.X * (pFVar11->BuildScale).field0_0x0._s_0.X;
        dVar22 = (param_2->field0_0x0)._s_0.Y -
                 (double)(pTVar17->field0_0x0)._s_0.Y * (pFVar11->BuildScale).field0_0x0._s_0.Y;
        dVar21 = (param_2->field0_0x0)._s_0.Z -
                 (double)(pTVar17->field0_0x0)._s_0.Z * (pFVar11->BuildScale).field0_0x0._s_0.Z;
        dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar21 * dVar21;
        if (dVar21 < *param_3) {
          *param_3 = dVar21;
          *param_4 = (int)FVar5;
        }
        pFVar11 = *ppFVar2;
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (pFVar11->VertexPositions).ArrayPtr,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar16,(int)FVar4);
        dVar23 = (param_2->field0_0x0)._s_0.X -
                 (double)(pTVar17->field0_0x0)._s_0.X * (pFVar11->BuildScale).field0_0x0._s_0.X;
        dVar22 = (param_2->field0_0x0)._s_0.Y -
                 (double)(pTVar17->field0_0x0)._s_0.Y * (pFVar11->BuildScale).field0_0x0._s_0.Y;
        dVar21 = (param_2->field0_0x0)._s_0.Z -
                 (double)(pTVar17->field0_0x0)._s_0.Z * (pFVar11->BuildScale).field0_0x0._s_0.Z;
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
        if (cVar12 != '\0') goto LAB_1443b41bc;
      }
      local_80 = local_80 - 1;
    } while (local_80 != 0);
  }
  return;
}

// find_self_intersections @ 1443b44a0

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_self_intersections
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,
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

// find_self_intersections_acrossboxes @ 1443b4630

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
find_self_intersections_acrossboxes
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,int param_2,
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
LAB_1443b47e5:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_1443b47e5;
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
      goto joined_r0x0001443b49e1;
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
joined_r0x0001443b49e1:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 1443b4c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::find_tri_tri_intersections
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,int param_1,int param_2,
          int param_3,FIntersectionsQueryResult *param_4,bool param_5,
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
            (this->Mesh,param_1,(TVector<double> *)&local_238._s_0,
             (TVector<double> *)&TStack_220._s_0,(TVector<double> *)&local_208._s_0);
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
  FMeshDescriptionTriangleMeshAdapter::GetTriangle(this->Mesh,local_250,param_1);
  cVar8 = '\0';
  if (param_2 < param_3) {
    do {
      iVar1 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1443b4e0d:
        pTVar12 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&this->Mesh->Mesh->TriangleVertices,&local_198,iVar1);
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
            if (bVar9) goto LAB_1443b4fda;
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
          if (bVar9) goto LAB_1443b4fda;
        }
        FMeshDescriptionTriangleMeshAdapter::GetTriVertices
                  (this->Mesh,iVar1,(TVector<double> *)&local_1e8._s_0,
                   (TVector<double> *)&TStack_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
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
        if (cVar8 != '\0') goto LAB_1443b4e0d;
      }
LAB_1443b4fda:
      param_2 = param_2 + 1;
      cVar8 = local_298;
    } while (param_2 < local_274);
  }
  return (bool)cVar8;
}

