// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 50

// <lambda_invoker_cdecl> @ 14a94e360

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14a94e380

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindAllIntersections'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14a94e3c0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
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

// FindHitTriangle<UE::Math::TRay<double>_> @ 14a952590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TRay<double> *param_2,double *param_3,int *param_4,TVector<double> *param_5,
          FQueryOptions *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FShapeMeshAdapter *pFVar5;
  FScriptContainerElement *pFVar6;
  FShapeMeshDescriptor<double,float> *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  undefined8 uVar13;
  FIndex3i *pFVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar19;
  undefined1 auStackY_1f8 [32];
  int local_1b8 [2];
  int *local_1b0;
  FQueryOptions *local_1a8;
  FShapeMeshDescriptor<double,float> *local_1a0;
  ulonglong local_198;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_190;
  TRay<double> *local_188;
  TVector<double> *local_180;
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
  
  dVar10 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_190 = &(this->IndexList).Blocks;
  local_1b0 = param_4;
  local_1a8 = param_6;
  local_180 = param_5;
  uVar18 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_188 = param_2;
  if (this->TrianglesEnd <= (int)uVar18) {
    do {
      pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar17 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 4);
      if ((int)uVar17 < 0) {
        uVar17 = ~uVar17;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
        if (*param_3 + dVar10 < dVar8) {
          return;
        }
      }
      else {
        uVar15 = uVar17 - 1;
        uVar17 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                         (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar15,param_2);
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
        if (dVar9 <= dVar8) {
          if (*param_3 + dVar10 < dVar9) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar17,param_2,param_3,local_1b0,param_5,param_6);
          uVar17 = uVar15;
          if (*param_3 + dVar10 < dVar8) {
            return;
          }
        }
        else {
          if (*param_3 + dVar10 < dVar8) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar15,param_2,param_3,local_1b0,param_5,param_6);
          if (*param_3 + dVar10 < dVar9) {
            return;
          }
        }
      }
      uVar18 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar18);
  }
  pTVar19 = &(this->IndexList).Blocks;
  uVar17 = *(uint *)(*(longlong *)((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8)
                    + (ulonglong)(uVar18 & 0x1ff) * 4);
  local_198 = (ulonglong)uVar17;
  if (0 < (int)uVar17) {
    do {
      uVar18 = uVar18 + 1;
      iVar1 = *(int *)(*(longlong *)
                        ((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8) +
                      (ulonglong)(uVar18 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14a952818:
        pFVar5 = this->Mesh;
        pFVar14 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                            (&pFVar5->Mesh->Triangles,iVar1);
        local_1a0 = pFVar5->Mesh;
        uVar17 = (pFVar14->field0_0x0)._s_0.A;
        uVar15 = 0;
        if ((int)uVar17 < (local_1a0->Positions).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = (pFVar14->field0_0x0)._s_0.B;
        pFVar6 = (local_1a0->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(int)uVar17 * 0x18;
        local_178 = *(double *)pFVar2;
        dStack_170 = *(double *)(pFVar2 + 8);
        local_168 = *(double *)(pFVar6 + (longlong)(int)uVar17 * 0x18 + 0x10);
        local_1a0 = pFVar5->Mesh;
        uVar17 = 0;
        if ((int)uVar15 < (local_1a0->Positions).ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar17 = (pFVar14->field0_0x0)._s_0.C;
        pFVar7 = pFVar5->Mesh;
        pFVar6 = (local_1a0->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(int)uVar15 * 0x18;
        uStack_160 = *(undefined8 *)pFVar2;
        uStack_158 = *(undefined8 *)(pFVar2 + 8);
        uStack_150 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar15 * 0x18 + 0x10);
        uVar15 = 0;
        if ((int)uVar17 < (pFVar7->Positions).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar7->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(int)uVar17 * 0x18;
        local_148 = *(undefined8 *)pFVar2;
        uStack_140 = *(undefined8 *)(pFVar2 + 8);
        local_138 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar17 * 0x18 + 0x10);
        local_128._s_0.X = (local_188->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (local_188->Origin).field0_0x0._s_0.Y;
        local_128._s_0.Z = (local_188->Origin).field0_0x0._s_0.Z;
        dStack_110 = (local_188->Direction).field0_0x0._s_0.X;
        local_108 = (local_188->Direction).field0_0x0._s_0.Y;
        dStack_100 = (local_188->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = local_178;
        local_f8._s_0.Y = dStack_170;
        local_f8._s_0.Z = local_168;
        uStack_e0 = uStack_160;
        local_d8 = uStack_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        uStack_c0 = uStack_140;
        local_b8 = local_138;
        bVar12 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        param_6 = local_1a8;
        if ((bVar12) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1b0 = iVar1;
          (local_180->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_180->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_180->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1b8[0] = iVar1;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar3 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_6->TriangleFilterF;
        plVar16 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar16 = plVar3;
        }
        uVar13 = (**(code **)(*plVar16 + 8))();
        cVar11 = (*pcVar4)(uVar13,local_1b8);
        if (cVar11 != '\0') goto LAB_14a952818;
      }
      local_198 = local_198 - 1;
      pTVar19 = local_190;
    } while (local_198 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14a952a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FShapeMeshAdapter *pFVar7;
  FScriptContainerElement *pFVar8;
  FShapeMeshDescriptor<double,float> *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_228 [32];
  int local_1e8 [2];
  FShapeMeshDescriptor<double,float> *local_1e0;
  FIndex3i *local_1d8;
  ulonglong local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  int local_178;
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
  
  dVar13 = __real_47efffffe0000000;
  dVar12 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar1 = &(this->IndexList).Blocks;
  uVar26 = SUB84(__real_47efffffe0000000,0);
  uVar27 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar2 = param_4->MaxDistance;
  uVar24 = SUB84(dVar2,0);
  uVar25 = (int)((ulonglong)dVar2 >> 0x20);
  if (__real_47efffffe0000000 <= dVar2) {
    uVar24 = uVar26;
    uVar25 = uVar27;
  }
  uVar23 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar23) {
    do {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      dVar2 = (double)CONCAT44(uVar25,uVar24) + dVar12;
      uVar17 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar23 >> 9) * 8) +
                        (ulonglong)(uVar23 & 0x1ff) * 4);
      if ((int)uVar17 < 0) {
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar17,param_2);
        uVar23 = ~uVar17;
      }
      else {
        uVar17 = uVar17 - 1;
        uVar23 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                         (ulonglong)(uVar23 + 1 & 0x1ff) * 4) - 1;
        dVar11 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar23,param_2);
        if (dVar10 <= dVar11) {
          if (dVar2 < dVar10) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar23,param_2,param_3,param_4);
          uVar23 = uVar17;
          dVar10 = dVar11;
        }
        else {
          if (dVar2 < dVar11) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar17,param_2,param_3,param_4);
        }
      }
      if (dVar2 < dVar10) {
        return;
      }
      dVar2 = param_4->MaxDistance;
      uVar24 = SUB84(dVar2,0);
      uVar25 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar13 <= dVar2) {
        uVar24 = uVar26;
        uVar25 = uVar27;
      }
      uVar23 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar23);
  }
  uVar17 = *(uint *)(*(longlong *)((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar23 >> 9) * 8)
                    + (ulonglong)(uVar23 & 0x1ff) * 4);
  local_1d0 = (ulonglong)uVar17;
  if (0 < (int)uVar17) {
    do {
      uVar23 = uVar23 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar23 >> 9) * 8) +
                      (ulonglong)(uVar23 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14a952cc0:
        pFVar7 = this->Mesh;
        local_1d8 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                              (&pFVar7->Mesh->Triangles,iVar3);
        local_1e0 = pFVar7->Mesh;
        uVar17 = (local_1d8->field0_0x0)._s_0.A;
        uVar21 = 0;
        if ((int)uVar17 < (local_1e0->Positions).ArrayNum) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar8 = (local_1e0->Positions).AllocatorInstance.Data;
        uVar21 = (local_1d8->field0_0x0)._s_0.B;
        pFVar4 = pFVar8 + (longlong)(int)uVar17 * 0x18;
        local_1c8 = *(double *)pFVar4;
        dStack_1c0 = *(double *)(pFVar4 + 8);
        local_1b8 = *(double *)(pFVar8 + (longlong)(int)uVar17 * 0x18 + 0x10);
        local_1e0 = pFVar7->Mesh;
        uVar17 = 0;
        if ((int)uVar21 < (local_1e0->Positions).ArrayNum) {
          uVar17 = ~uVar21 >> 0x1f;
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
        pFVar9 = pFVar7->Mesh;
        pFVar8 = (local_1e0->Positions).AllocatorInstance.Data;
        pFVar4 = pFVar8 + (longlong)(int)uVar21 * 0x18;
        uStack_1b0 = *(undefined8 *)pFVar4;
        uStack_1a8 = *(undefined8 *)(pFVar4 + 8);
        uStack_1a0 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar21 * 0x18 + 0x10);
        uVar17 = (local_1d8->field0_0x0)._s_0.C;
        uVar21 = 0;
        if ((int)uVar17 < (pFVar9->Positions).ArrayNum) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        pFVar8 = (pFVar9->Positions).AllocatorInstance.Data;
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        pFVar4 = pFVar8 + (longlong)(int)uVar17 * 0x18;
        local_198 = *(undefined8 *)pFVar4;
        uStack_190 = *(undefined8 *)(pFVar4 + 8);
        local_188 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar17 * 0x18 + 0x10);
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        local_118._s_0.X = local_1c8;
        local_118._s_0.Y = dStack_1c0;
        local_118._s_0.Z = local_1b8;
        uStack_100 = uStack_1b0;
        local_f8 = uStack_1a8;
        uStack_f0 = uStack_1a0;
        local_e8 = local_198;
        uStack_e0 = uStack_190;
        local_d8 = local_188;
        bVar16 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar14 = local_c8._s_0.Y;
        uVar19 = local_c8._s_0.X;
        if ((bVar16) && (local_d0 <= (double)CONCAT44(uVar25,uVar24) + dVar12)) {
          iVar18 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = iVar3;
          if (iVar18 == param_3->ArrayMax) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar20 = (longlong)iVar18;
          param_3->ArrayNum = iVar18 + 1;
          pFVar4 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar4 + lVar20 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar4 + lVar20 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar4 + lVar20 * 0x28 + 0x10) = uVar19;
          *(undefined8 *)(pFVar4 + lVar20 * 0x28 + 0x10 + 8) = uVar14;
          *(double *)(pFVar4 + lVar20 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1e8[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_4->TriangleFilterF;
        plVar22 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar22 = plVar5;
        }
        uVar19 = (**(code **)(*plVar22 + 8))();
        cVar15 = (*pcVar6)(uVar19,local_1e8);
        if (cVar15 != '\0') goto LAB_14a952cc0;
      }
      local_1d0 = local_1d0 - 1;
    } while (local_1d0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14a9676d0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
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

// find_nearest_tri<1> @ 14a973770

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  int local_res10 [2];
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar1) {
    uVar12 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      dVar13 = BoxDistanceSqr(this,uVar12,param_2);
      if (*param_3 <= dVar13 && dVar13 != *param_3) {
        return false;
      }
    }
    else {
      iVar11 = uVar12 - 1;
      uVar12 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) - 1;
      dVar13 = BoxDistanceSqr(this,iVar11,param_2);
      dVar14 = BoxDistanceSqr(this,uVar12,param_2);
      if (dVar14 <= dVar13) {
        if (*param_3 <= dVar14) {
          return false;
        }
        bVar8 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
        if (!bVar8) {
          if (*param_3 <= dVar13) {
            return false;
          }
          bVar8 = find_nearest_tri<1>(this,iVar11,param_2,param_3,param_4,param_5);
          return bVar8;
        }
        return true;
      }
      if (*param_3 <= dVar13) {
        return false;
      }
      bVar8 = find_nearest_tri<1>(this,iVar11,param_2,param_3,param_4,param_5);
      if (bVar8) {
        return true;
      }
      if (*param_3 <= dVar14) {
        return false;
      }
    }
    bVar8 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
    if (!bVar8) {
      return false;
    }
    return true;
  }
  iVar11 = *(int *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
  if (iVar11 < 1) {
    return false;
  }
  uVar12 = uVar1 + 1;
  do {
    iVar2 = *(int *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14a97385e:
      dVar13 = TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::TriDistanceSqr
                         (this->Mesh,iVar2,param_2);
      if (dVar13 < *param_3) {
        *param_3 = dVar13;
        *param_4 = iVar2;
        return true;
      }
    }
    else {
      local_res10[0] = iVar2;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar6 = *(code **)&param_5->TriangleFilterF;
      plVar10 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar10 = plVar5;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar6)(uVar9,local_res10);
      if (cVar7 != '\0') goto LAB_14a97385e;
    }
    uVar12 = uVar12 + 1;
    if (iVar11 < (int)(uVar12 - uVar1)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14a973a30

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  int local_res10 [2];
  
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if ((int)uVar1 < this->TrianglesEnd) {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < (int)uVar2) {
      uVar12 = (ulonglong)uVar2;
      do {
        uVar1 = uVar1 + 1;
        iVar11 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14a973b0e:
          dVar13 = TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::TriDistanceSqr
                             (this->Mesh,iVar11,param_2);
          if (dVar13 < *param_3) {
            *param_3 = dVar13;
            *param_4 = iVar11;
          }
        }
        else {
          local_res10[0] = iVar11;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar9 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar9 = plVar5;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar6)(uVar8,local_res10);
          if (cVar7 != '\0') goto LAB_14a973b0e;
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar13 = BoxDistanceSqr(this,~uVar2,param_2);
      if (dVar13 < *param_3 || dVar13 == *param_3) {
        find_nearest_tri<0>(this,~uVar2,param_2,param_3,param_4,param_5);
      }
    }
    else {
      iVar10 = uVar2 - 1;
      iVar11 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) + -1;
      dVar13 = BoxDistanceSqr(this,iVar10,param_2);
      dVar14 = BoxDistanceSqr(this,iVar11,param_2);
      if (dVar14 <= dVar13) {
        if (*param_3 <= dVar14) {
          return false;
        }
        find_nearest_tri<0>(this,iVar11,param_2,param_3,param_4,param_5);
        iVar11 = iVar10;
        if (*param_3 <= dVar13) {
          return false;
        }
      }
      else {
        if (*param_3 <= dVar13) {
          return false;
        }
        find_nearest_tri<0>(this,iVar10,param_2,param_3,param_4,param_5);
        if (*param_3 <= dVar14) {
          return false;
        }
      }
      find_nearest_tri<0>(this,iVar11,param_2,param_3,param_4,param_5);
    }
  }
  return false;
}

// ~TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> @ 14a9779b0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
~TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this)

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

// operator() @ 14a985910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestSelfIntersection'
::__l2::<lambda_1>::operator()(void *this,TIntrTriangle3Triangle3<double> *param_1)

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

// AddTriTriIntersectionResult @ 14a989b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
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

// BoxDistanceSqr @ 14a998570

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::BoxDistanceSqr
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
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

// BuildTopDown @ 14a999390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::BuildTopDown
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// BuildTopDown @ 14a999ad0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::BuildTopDown
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  FShapeMeshDescriptor<double,float> *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  FIndex3i *pFVar10;
  uint uVar11;
  FShapeMeshAdapter *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_f0;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  uVar8 = (this->Mesh->Mesh->Triangles).ArrayNum;
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
  uVar8 = (this->Mesh->Mesh->Triangles).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar8,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  dVar5 = __real_3fd5555555555555;
  pFVar12 = this->Mesh;
  local_108[0] = 0;
  if (0 < (pFVar12->Mesh->Triangles).ArrayNum) {
    do {
      if ((-1 < local_108[0]) && (local_108[0] < (pFVar12->Mesh->Triangles).ArrayNum)) {
        pFVar10 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                            (&pFVar12->Mesh->Triangles,local_108[0]);
        pFVar2 = pFVar12->Mesh;
        uVar8 = (pFVar10->field0_0x0)._s_0.A;
        uVar11 = 0;
        if ((int)uVar8 < (pFVar2->Positions).ArrayNum) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pFVar2->Positions).AllocatorInstance.Data;
        uVar11 = (pFVar10->field0_0x0)._s_0.B;
        pFVar2 = pFVar12->Mesh;
        pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x18;
        local_c8 = *(double *)pFVar1;
        dStack_c0 = *(double *)(pFVar1 + 8);
        local_b8 = *(double *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 0x10);
        uVar8 = 0;
        if ((int)uVar11 < (pFVar2->Positions).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pFVar2->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar12->Mesh;
        uVar8 = (pFVar10->field0_0x0)._s_0.C;
        pFVar1 = pFVar3 + (longlong)(int)uVar11 * 0x18;
        local_b0 = *(double *)pFVar1;
        dStack_a8 = *(double *)(pFVar1 + 8);
        local_a0 = *(double *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10);
        uVar11 = 0;
        if ((int)uVar8 < (pFVar2->Positions).ArrayNum) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pFVar2->Positions).AllocatorInstance.Data;
        pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x18;
        local_98 = *(double *)pFVar1;
        dStack_90 = *(double *)(pFVar1 + 8);
        local_88 = *(double *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 0x10);
        dVar15 = (local_c8 + local_b0 + local_98) * dVar5;
        dVar14 = (dStack_c0 + dStack_a8 + dStack_90) * dVar5;
        dVar13 = (local_b8 + local_a0 + local_88) * dVar5;
        sVar7 = _dclass(SUB84(dVar14 * dVar14 + dVar15 * dVar15 + dVar13 * dVar13,0));
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
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = local_100.ArrayNum;
          if (local_100.ArrayNum == local_100.ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
          }
          local_100.ArrayNum = iVar9 + 1;
          *(int *)(local_100.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_108[0];
          pFVar12 = this->Mesh;
          pFVar10 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                              (&pFVar12->Mesh->Triangles,local_108[0]);
          pFVar2 = pFVar12->Mesh;
          uVar8 = (pFVar10->field0_0x0)._s_0.A;
          uVar11 = 0;
          if ((int)uVar8 < (pFVar2->Positions).ArrayNum) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pFVar2->Positions).AllocatorInstance.Data;
          uVar11 = (pFVar10->field0_0x0)._s_0.B;
          pFVar2 = pFVar12->Mesh;
          pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x18;
          local_78 = *(double *)pFVar1;
          dStack_70 = *(double *)(pFVar1 + 8);
          local_68 = *(double *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 0x10);
          uVar8 = 0;
          if ((int)uVar11 < (pFVar2->Positions).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pFVar2->Positions).AllocatorInstance.Data;
          uVar8 = (pFVar10->field0_0x0)._s_0.C;
          pFVar2 = pFVar12->Mesh;
          pFVar1 = pFVar3 + (longlong)(int)uVar11 * 0x18;
          local_60 = *(double *)pFVar1;
          dStack_58 = *(double *)(pFVar1 + 8);
          local_50 = *(double *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10);
          uVar11 = 0;
          if ((int)uVar8 < (pFVar2->Positions).ArrayNum) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pFVar2->Positions).AllocatorInstance.Data;
          pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x18;
          local_48 = *(double *)pFVar1;
          dStack_40 = *(double *)(pFVar1 + 8);
          local_38 = *(double *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 0x10);
          local_e0 = (local_78 + local_60 + local_48) * dVar5;
          dStack_d8 = (dStack_70 + dStack_58 + dStack_40) * dVar5;
          local_d0 = (local_68 + local_50 + local_38) * dVar5;
          if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 0x18)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
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
      pFVar12 = this->Mesh;
      local_108[0] = local_108[0] + 1;
    } while (local_108[0] < (pFVar12->Mesh->Triangles).ArrayNum);
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

// DoTraversal @ 14a9a2bb0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::DoTraversal
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// FindAllHitTriangles @ 14a9a35f0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindAllHitTriangles
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14a9a3640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindAllIntersections
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4a94e380;
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

// FindAllSelfIntersections @ 14a9a3820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
FindAllSelfIntersections
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4a94e3c0;
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

// FindNearestHitTriangle @ 14a9a4360

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// FindNearestHitTriangle @ 14a9a43e0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// FindNearestHitTriangle @ 14a9a4460

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// FindNearestPoint @ 14a9a44e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestPoint
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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
    TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::TriangleDistance
              (&local_b8,this->Mesh,iVar1,(TVector<double> *)&local_d8._s_0);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8.ClosestTrianglePoint.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Y;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 14a9a4590

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestTriangle
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// FindNearestTriangles @ 14a9a45f0

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestTriangles
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *param_1,
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
             (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *)param_2,
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

// FindNearestVertex @ 14a9a46b0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::FindNearestVertex
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// GetBox @ 14a9a5a10

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::GetBox
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// GetBox @ 14a9a5ad0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::GetBox
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3___CBUFShapeMeshAdapter_Private_Mutable_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 14a9a9c50

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::IsInside
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 14a9a9d80

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          TVector<double> *param_1,double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 14a9e8cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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
        goto LAB_14a9e9bdf;
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
LAB_14a9e9bdf:
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
      pTVar21 = TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::GetTriBounds
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
      goto LAB_14a9e9197;
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
LAB_14a9e9197:
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

// SupportsNearestTriangle @ 14a9ea910

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
SupportsNearestTriangle(TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this)

{
  return true;
}

// SupportsPointContainment @ 14a9ea920

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
SupportsPointContainment(TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 14a9ea930

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this)

{
  return true;
}

// TestAnyHitTriangle @ 14a9ea940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TRay<double> *param_2,int *param_3,double param_4,FQueryOptions *param_5)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FShapeMeshAdapter *pFVar4;
  FScriptContainerElement *pFVar5;
  FShapeMeshDescriptor<double,float> *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  FIndex3i *pFVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_228 [32];
  int local_1f8 [2];
  int local_1f0;
  FShapeMeshDescriptor<double,float> *local_1e8;
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
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar20 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1e0 = (ulonglong)uVar20;
  lVar19 = *(longlong *)(pFVar1 + (ulonglong)(uVar20 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar20) {
    uVar17 = *(uint *)(lVar19 + (ulonglong)(uVar20 & 0x1ff) * 4);
    dVar9 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar17 < 0) {
      uVar17 = ~uVar17;
      dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
    }
    else {
      iVar18 = uVar17 - 1;
      uVar17 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                       (ulonglong)(uVar20 + 1 & 0x1ff) * 4) - 1;
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar18,param_2);
      dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
      if (dVar7 <= dVar8) {
        if (dVar9 < dVar7) {
          return false;
        }
        bVar11 = TestAnyHitTriangle(this,uVar17,param_2,param_3,param_4,param_5);
        if (!bVar11) {
          if (dVar9 < dVar8) {
            return false;
          }
          bVar11 = TestAnyHitTriangle(this,iVar18,param_2,param_3,param_4,param_5);
          return bVar11;
        }
        return true;
      }
      if (dVar9 < dVar8) {
        return false;
      }
      bVar11 = TestAnyHitTriangle(this,iVar18,param_2,param_3,param_4,param_5);
      if (bVar11) {
        return true;
      }
    }
    if ((dVar7 <= dVar9) &&
       (bVar11 = TestAnyHitTriangle(this,uVar17,param_2,param_3,param_4,param_5), bVar11)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar19 + (ulonglong)(uVar20 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar20 = uVar20 + 1;
  do {
    iVar18 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14a9eaa4c:
      pFVar4 = this->Mesh;
      pFVar14 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                          (&pFVar4->Mesh->Triangles,iVar18);
      local_1e8 = pFVar4->Mesh;
      uVar17 = (pFVar14->field0_0x0)._s_0.A;
      uVar15 = 0;
      if ((int)uVar17 < (local_1e8->Positions).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      uVar15 = (pFVar14->field0_0x0)._s_0.B;
      pFVar5 = (local_1e8->Positions).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)(int)uVar17 * 0x18;
      local_1c0._s_0.X = (double)*(undefined8 *)pFVar1;
      local_1c0._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_1c0._s_0.Z = (double)*(undefined8 *)(pFVar5 + (longlong)(int)uVar17 * 0x18 + 0x10);
      local_1e8 = pFVar4->Mesh;
      uVar17 = 0;
      if ((int)uVar15 < (local_1e8->Positions).ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      uVar17 = (pFVar14->field0_0x0)._s_0.C;
      lVar19 = (longlong)(int)uVar17;
      pFVar6 = pFVar4->Mesh;
      pFVar5 = (local_1e8->Positions).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)(int)uVar15 * 0x18;
      dVar9 = *(double *)pFVar1;
      dVar7 = *(double *)(pFVar1 + 8);
      local_1d8._s_0.Z = (double)*(undefined8 *)(pFVar5 + (longlong)(int)uVar15 * 0x18 + 0x10);
      uVar21 = SUB84(local_1d8._s_0.Z,0);
      uVar22 = (undefined4)((ulonglong)local_1d8._s_0.Z >> 0x20);
      uVar15 = 0;
      if ((int)uVar17 < (pFVar6->Positions).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      local_1d8._0_8_ = dVar9;
      local_1d8._8_8_ = dVar7;
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      pFVar1 = (pFVar6->Positions).AllocatorInstance.Data;
      local_1a8._s_0.X = (double)*(undefined8 *)(pFVar1 + lVar19 * 0x18);
      local_1a8._s_0.Y = (double)*(undefined8 *)(pFVar1 + lVar19 * 0x18 + 8);
      local_1a8._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar19 * 0x18 + 0x10);
      bVar11 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1c0._s_0,
                          (TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_1a8._s_0);
      if (bVar11) {
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        local_148 = *(undefined8 *)(pFVar1 + lVar19 * 0x18 + 0x10);
        local_158 = *(undefined8 *)(pFVar1 + lVar19 * 0x18);
        uStack_150 = *(undefined8 *)(pFVar1 + lVar19 * 0x18 + 8);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_168._0_4_ = SUB84(dVar7,0);
        uStack_168._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_170._0_4_ = SUB84(dVar9,0);
        local_170._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
        uStack_178 = local_1c0._16_4_;
        uStack_174 = local_1c0._20_4_;
        local_108._16_4_ = local_1c0._16_4_;
        local_108._20_4_ = local_1c0._20_4_;
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_188 = local_1c0._s_0.X;
        dStack_180 = local_1c0._s_0.Y;
        local_108._s_0.X = local_1c0._s_0.X;
        local_108._s_0.Y = local_1c0._s_0.Y;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = dVar9;
        uStack_168 = dVar7;
        uStack_160 = uVar21;
        uStack_15c = uVar22;
        uStack_e0 = uVar21;
        uStack_dc = uVar22;
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
      local_1f8[0] = iVar18;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar2 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar3 = *(code **)&param_5->TriangleFilterF;
      plVar16 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar16 = plVar2;
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      cVar10 = (*pcVar3)(uVar13,local_1f8);
      if (cVar10 != '\0') goto LAB_14a9eaa4c;
    }
    uVar20 = uVar20 + 1;
    if (local_1f0 < (int)(uVar20 - (int)local_1e0)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14a9eae20

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// TestIntersection @ 14a9eae70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestIntersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14a9eaf50

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestIntersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14a9eafc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestIntersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
          FShapeMeshAdapter *param_1,TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  FShapeMeshDescriptor<double,float> *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  uint uVar16;
  TAxisAlignedBox3<double> *pTVar17;
  FIndex3i *pFVar18;
  undefined8 uVar19;
  TArrayView<UE::Geometry::FIndex3i_const_,int> *this_00;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  int local_1c8;
  FShapeMeshDescriptor<double,float> *local_1c0;
  FQueryOptions *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  local_1b8 = param_4;
  if (((dVar4 < (param_2->Max).field0_0x0._s_0.X || dVar4 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar4 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar4 < *pdVar1 || dVar4 == *pdVar1)) &&
     (dVar4 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar4 < *pdVar1 || dVar4 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_e0 = 0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3___CBUFShapeMeshAdapter_Private_Mutable_UE___Geometry_UE__UEBA_NPEBUFShapeMeshAdapter_Private_Mutable_5_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_f0 = param_3;
      pTVar17 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_108);
      dVar4 = (pTVar17->Min).field0_0x0._s_0.Y;
      dVar10 = (pTVar17->Min).field0_0x0._s_0.Z;
      dVar11 = (pTVar17->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar17->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar17->Max).field0_0x0._s_0.Y;
      dVar12 = (pTVar17->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar10;
      (param_2->Max).field0_0x0._s_0.X = dVar11;
      (param_2->Max).field0_0x0._s_0.Y = dVar4;
      (param_2->Max).field0_0x0._s_0.Z = dVar12;
    }
    bVar13 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar13) {
      return false;
    }
  }
  iVar22 = 0;
  local_1c8 = (param_1->Mesh->Triangles).ArrayNum;
  if (0 < local_1c8) {
    do {
      this_00 = &param_1->Mesh->Triangles;
      if (*(longlong *)param_3 == 0) {
        pFVar18 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[](this_00,iVar22);
        pFVar7 = param_1->Mesh;
        uVar5 = (pFVar18->field0_0x0)._s_0.A;
        lVar21 = (longlong)(int)uVar5;
        iVar6 = (pFVar7->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar5 < iVar6) {
          uVar16 = ~uVar5 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1d8 = lVar21, local_1d0 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (pFVar7->Positions).AllocatorInstance.Data;
        pFVar7 = param_1->Mesh;
        pFVar2 = pFVar8 + lVar21 * 0x18;
        local_a8 = *(undefined8 *)pFVar2;
        uStack_a0 = *(undefined8 *)(pFVar2 + 8);
        local_98 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
        uVar5 = (pFVar18->field0_0x0)._s_0.B;
        lVar21 = (longlong)(int)uVar5;
        iVar6 = (pFVar7->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar5 < iVar6) {
          uVar16 = ~uVar5 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1d8 = lVar21, local_1d0 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (pFVar7->Positions).AllocatorInstance.Data;
        pFVar7 = param_1->Mesh;
        pFVar2 = pFVar8 + lVar21 * 0x18;
        local_90 = *(undefined8 *)pFVar2;
        uStack_88 = *(undefined8 *)(pFVar2 + 8);
        local_80 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
        uVar5 = (pFVar18->field0_0x0)._s_0.C;
        lVar21 = (longlong)(int)uVar5;
        iVar6 = (pFVar7->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar5 < iVar6) {
          uVar16 = ~uVar5 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1d8 = lVar21, local_1d0 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (pFVar7->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar8 + lVar21 * 0x18;
        local_78 = *(undefined4 *)pFVar2;
        uStack_74 = *(undefined4 *)(pFVar2 + 4);
        uStack_70 = *(undefined4 *)(pFVar2 + 8);
        uStack_6c = *(undefined4 *)(pFVar2 + 0xc);
        uVar19 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
        uVar24 = (undefined4)uVar19;
        uVar25 = (undefined4)((ulonglong)uVar19 >> 0x20);
      }
      else {
        pFVar18 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[](this_00,iVar22);
        pFVar7 = param_1->Mesh;
        local_1b0 = *(undefined8 *)&pFVar18->field0_0x0;
        uVar5 = (pFVar18->field0_0x0)._s_0.C;
        lVar23 = (longlong)(int)uVar5;
        iVar6 = (pFVar7->Positions).ArrayNum;
        lVar21 = (longlong)(int)(uint)local_1b0;
        uVar16 = 0;
        if ((int)(uint)local_1b0 < iVar6) {
          uVar16 = ~(uint)local_1b0 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1d8 = lVar21, local_1d0 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (pFVar7->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar8 + lVar21 * 0x18;
        local_1a0 = *(undefined8 *)pFVar2;
        uStack_198 = *(undefined8 *)(pFVar2 + 8);
        local_190 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        puVar3 = &param_3->field_0x10;
        pcVar9 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)puVar3;
        }
        uVar19 = (**(code **)(*plVar20 + 8))();
        (*pcVar9)(&local_188,uVar19,&local_1a0);
        local_1c0 = param_1->Mesh;
        lVar21 = (longlong)(int)local_1b0._4_4_;
        local_a8 = local_188;
        uStack_a0 = uStack_180;
        local_98 = local_178;
        iVar6 = (local_1c0->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)local_1b0._4_4_ < iVar6) {
          uVar16 = ~local_1b0._4_4_ >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1d8 = lVar21, local_1d0 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (local_1c0->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar8 + lVar21 * 0x18;
        local_170 = *(undefined8 *)pFVar2;
        uStack_168 = *(undefined8 *)(pFVar2 + 8);
        local_160 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar9 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)puVar3;
        }
        uVar19 = (**(code **)(*plVar20 + 8))();
        (*pcVar9)(&local_158,uVar19,&local_170);
        pFVar7 = param_1->Mesh;
        local_80 = local_148;
        local_90 = local_158;
        uStack_88 = uStack_150;
        iVar6 = (pFVar7->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar5 < iVar6) {
          uVar16 = ~uVar5 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1d8 = lVar23, local_1d0 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (pFVar7->Positions).AllocatorInstance.Data;
        pFVar2 = pFVar8 + lVar23 * 0x18;
        local_140 = *(undefined8 *)pFVar2;
        uStack_138 = *(undefined8 *)(pFVar2 + 8);
        local_130 = *(undefined8 *)(pFVar8 + lVar23 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar9 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)puVar3;
        }
        uVar19 = (**(code **)(*plVar20 + 8))();
        (*pcVar9)(&local_128,uVar19,&local_140);
        uVar24 = (undefined4)local_118;
        uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
        local_78 = local_128;
        uStack_74 = uStack_124;
        uStack_70 = uStack_120;
        uStack_6c = uStack_11c;
      }
      local_68 = CONCAT44(uVar25,uVar24);
      cVar15 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,local_1b8);
      if (cVar15 != '\0') {
        return true;
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < local_1c8);
  }
  return false;
}

// TestSelfIntersection @ 14a9eb480

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestSelfIntersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,bool param_1,
          FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 14a9eb4c0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::TreeTraversalImpl
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          int param_2,FTreeTraversal *param_3,FQueryOptions *param_4)

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
LAB_14a9eb5d6:
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
          if (cVar10 != '\0') goto LAB_14a9eb5d6;
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

// box_box_distsqr @ 14a9ecda0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::box_box_distsqr
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
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

// box_box_intersect @ 14a9ece80

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::box_box_intersect
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
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

// find_any_intersection @ 14a9f1ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_any_intersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
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
  FShapeMeshAdapter *pFVar7;
  FShapeMeshDescriptor<double,float> *pFVar8;
  FScriptContainerElement *pFVar9;
  FIndex3i *pFVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStackY_138 [32];
  int local_108 [2];
  int local_100;
  FIndex3i *local_f8;
  FShapeMeshDescriptor<double,float> *local_f0;
  TTriangle3<double> *local_e8;
  ulonglong local_e0;
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
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar18 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_e0 = (ulonglong)uVar18;
  lVar1 = (ulonglong)(uVar18 & 0x1ff) * 4;
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8);
  local_e8 = param_2;
  if ((int)uVar18 < this->TrianglesEnd) {
    local_100 = *(int *)(lVar1 + lVar4);
    if (0 < local_100) {
      uVar18 = uVar18 + 1;
      do {
        iVar13 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14a9f1bcc:
          pFVar7 = this->Mesh;
          local_f8 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                               (&pFVar7->Mesh->Triangles,iVar13);
          pFVar8 = pFVar7->Mesh;
          uVar2 = (local_f8->field0_0x0)._s_0.A;
          uVar16 = 0;
          if ((int)uVar2 < (pFVar8->Positions).ArrayNum) {
            uVar16 = ~uVar2 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar13 = (*pcVar6)();
            return iVar13;
          }
          pFVar10 = local_f8;
          pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
          pFVar3 = pFVar9 + (longlong)(int)uVar2 * 0x18;
          local_a8 = *(undefined8 *)pFVar3;
          uStack_a0 = *(undefined8 *)(pFVar3 + 8);
          local_98 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar2 * 0x18 + 0x10);
          local_f0 = pFVar7->Mesh;
          uVar2 = (local_f8->field0_0x0)._s_0.B;
          uVar16 = 0;
          if ((int)uVar2 < (local_f0->Positions).ArrayNum) {
            uVar16 = ~uVar2 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar13 = (*pcVar6)();
            return iVar13;
          }
          pFVar9 = (local_f0->Positions).AllocatorInstance.Data;
          pFVar3 = pFVar9 + (longlong)(int)uVar2 * 0x18;
          local_90 = *(undefined8 *)pFVar3;
          uStack_88 = *(undefined8 *)(pFVar3 + 8);
          local_80 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar2 * 0x18 + 0x10);
          uVar2 = (pFVar10->field0_0x0)._s_0.C;
          pFVar8 = pFVar7->Mesh;
          uVar16 = 0;
          if ((int)uVar2 < (pFVar8->Positions).ArrayNum) {
            uVar16 = ~uVar2 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar13 = (*pcVar6)();
            return iVar13;
          }
          pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
          pFVar3 = pFVar9 + (longlong)(int)uVar2 * 0x18;
          local_78 = *(undefined4 *)pFVar3;
          uStack_74 = *(undefined4 *)(pFVar3 + 4);
          uStack_70 = *(undefined4 *)(pFVar3 + 8);
          uStack_6c = *(undefined4 *)(pFVar3 + 0xc);
          local_68 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar2 * 0x18 + 0x10);
          cVar11 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_e8,&local_a8);
          if (cVar11 != '\0') {
            return iVar13;
          }
        }
        else {
          local_108[0] = iVar13;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar17 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar17 = plVar5;
          }
          uVar15 = (**(code **)(*plVar17 + 8))();
          cVar11 = (*pcVar6)(uVar15,local_108);
          if (cVar11 != '\0') goto LAB_14a9f1bcc;
        }
        uVar18 = uVar18 + 1;
      } while ((int)(uVar18 - (int)local_e0) <= local_100);
    }
  }
  else {
    uVar2 = *(uint *)(lVar1 + lVar4);
    if (-1 < (int)uVar2) {
      iVar14 = -1;
      iVar13 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
      bVar12 = box_box_intersect(this,uVar2 - 1,param_3);
      if (bVar12) {
        local_c8._0_8_ = *(undefined8 *)param_4;
        local_c8._8_8_ = *(undefined8 *)&param_4->field_0x8;
        iVar14 = find_any_intersection(this,uVar2 - 1,param_2,param_3,&local_c8,param_5);
        if (iVar14 != -1) {
          return iVar14;
        }
      }
      bVar12 = box_box_intersect(this,iVar13 + -1,param_3);
      if (!bVar12) {
        return iVar14;
      }
      local_b8._0_8_ = *(undefined8 *)param_4;
      local_b8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar13 = find_any_intersection(this,iVar13 + -1,param_2,param_3,&local_b8,param_5);
      return iVar13;
    }
    bVar12 = box_box_intersect(this,~uVar2,param_3);
    if (bVar12) {
      local_d8._0_8_ = *(undefined8 *)param_4;
      local_d8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar13 = find_any_intersection(this,~uVar2,param_2,param_3,&local_d8,param_5);
      return iVar13;
    }
  }
  return -1;
}

// find_any_intersection @ 14a9f1ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_any_intersection
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  FShapeMeshAdapter *pFVar9;
  FShapeMeshDescriptor<double,float> *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  FIndex3i *pFVar21;
  uint uVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  undefined1 auStackY_368 [32];
  int local_2f4;
  int local_2f0 [2];
  int local_2e8 [2];
  uint local_2e0;
  ulonglong local_2d8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_2d0;
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
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  TAxisAlignedBox3<double> local_190;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
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
  uVar28 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar27 * 8) +
                    uVar26 * 4);
  uVar22 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_2e0 = uVar28;
  if ((int)uVar28 < this->TrianglesEnd) {
    if ((int)uVar22 < param_2->TrianglesEnd) {
      local_2f4 = 1;
      iVar29 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 4);
      iVar6 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
      if (iVar6 < 1) {
        return false;
      }
      do {
        uVar22 = uVar22 + 1;
        local_2d8 = (ulonglong)uVar22;
        iVar7 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14a9f206c:
          pFVar9 = param_2->Mesh;
          pFVar21 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                              (&pFVar9->Mesh->Triangles,iVar7);
          pFVar10 = pFVar9->Mesh;
          uVar22 = (pFVar21->field0_0x0)._s_0.A;
          uVar23 = 0;
          if ((int)uVar22 < (pFVar10->Positions).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar22 * 0x18;
          local_158 = *(undefined8 *)pFVar2;
          uStack_150 = *(undefined8 *)(pFVar2 + 8);
          local_148 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar22 * 0x18 + 0x10);
          uVar22 = (pFVar21->field0_0x0)._s_0.B;
          pFVar10 = pFVar9->Mesh;
          uVar23 = 0;
          if ((int)uVar22 < (pFVar10->Positions).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar22 * 0x18;
          local_140 = *(undefined8 *)pFVar2;
          uStack_138 = *(undefined8 *)(pFVar2 + 8);
          local_130 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar22 * 0x18 + 0x10);
          uVar22 = (pFVar21->field0_0x0)._s_0.C;
          pFVar10 = pFVar9->Mesh;
          uVar23 = 0;
          if ((int)uVar22 < (pFVar10->Positions).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar22 * 0x18;
          local_128 = *(undefined8 *)pFVar2;
          uStack_120 = *(undefined8 *)(pFVar2 + 8);
          local_118 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar22 * 0x18 + 0x10);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            puVar1 = &param_3->field_0x10;
            pcVar8 = *(code **)param_3;
            plVar24 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar24 = (longlong *)puVar1;
            }
            uVar20 = (**(code **)(*plVar24 + 8))();
            (*pcVar8)(&local_1d8,uVar20,&local_158);
            local_158 = local_1d8;
            uStack_150 = uStack_1d0;
            local_148 = local_1c8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar24 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar24 = (longlong *)puVar1;
            }
            uVar20 = (**(code **)(*plVar24 + 8))();
            (*pcVar8)(&local_1c0,uVar20,&local_140);
            local_140 = local_1c0;
            uStack_138 = uStack_1b8;
            local_130 = local_1b0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar24 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar24 = (longlong *)puVar1;
            }
            uVar20 = (**(code **)(*plVar24 + 8))();
            (*pcVar8)(&local_1a8,uVar20,&local_128);
            local_128 = local_1a8;
            uStack_120 = uStack_1a0;
            local_118 = local_198;
          }
          if (0 < iVar29) {
            uVar22 = uVar28 + 1;
            do {
              iVar7 = *(int *)(*(longlong *)
                                ((this->IndexList).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14a9f232a:
                pFVar9 = this->Mesh;
                pFVar21 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                                    (&pFVar9->Mesh->Triangles,iVar7);
                pFVar10 = pFVar9->Mesh;
                uVar28 = (pFVar21->field0_0x0)._s_0.A;
                uVar23 = 0;
                if ((int)uVar28 < (pFVar10->Positions).ArrayNum) {
                  uVar23 = ~uVar28 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  uVar19 = (*pcVar8)();
                  return (bool)uVar19;
                }
                pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
                pFVar2 = pFVar11 + (longlong)(int)uVar28 * 0x18;
                local_108 = *(undefined8 *)pFVar2;
                uStack_100 = *(undefined8 *)(pFVar2 + 8);
                local_f8 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar28 * 0x18 + 0x10);
                uVar28 = (pFVar21->field0_0x0)._s_0.B;
                pFVar10 = pFVar9->Mesh;
                uVar23 = 0;
                if ((int)uVar28 < (pFVar10->Positions).ArrayNum) {
                  uVar23 = ~uVar28 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  uVar19 = (*pcVar8)();
                  return (bool)uVar19;
                }
                pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
                pFVar2 = pFVar11 + (longlong)(int)uVar28 * 0x18;
                local_f0 = *(undefined8 *)pFVar2;
                uStack_e8 = *(undefined8 *)(pFVar2 + 8);
                local_e0 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar28 * 0x18 + 0x10);
                uVar28 = (pFVar21->field0_0x0)._s_0.C;
                pFVar10 = pFVar9->Mesh;
                uVar23 = 0;
                if ((int)uVar28 < (pFVar10->Positions).ArrayNum) {
                  uVar23 = ~uVar28 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  uVar19 = (*pcVar8)();
                  return (bool)uVar19;
                }
                pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
                pFVar2 = pFVar11 + (longlong)(int)uVar28 * 0x18;
                local_d8 = *(undefined4 *)pFVar2;
                uStack_d4 = *(undefined4 *)(pFVar2 + 4);
                uStack_d0 = *(undefined4 *)(pFVar2 + 8);
                uStack_cc = *(undefined4 *)(pFVar2 + 0xc);
                local_c8 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar28 * 0x18 + 0x10);
                cVar17 = (**(code **)local_2d0)
                                   (*(undefined8 *)&local_2d0->field_0x8,&local_158,&local_108);
                uVar28 = local_2e0;
                if (cVar17 != '\0') {
                  return true;
                }
              }
              else {
                local_2e8[0] = iVar7;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar24 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_7->TriangleFilterF;
                plVar25 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar24 != (longlong *)0x0) {
                  plVar25 = plVar24;
                }
                uVar20 = (**(code **)(*plVar25 + 8))();
                cVar17 = (*pcVar8)(uVar20,local_2e8);
                if (cVar17 != '\0') goto LAB_14a9f232a;
              }
              uVar22 = uVar22 + 1;
            } while ((int)(uVar22 - uVar28) <= iVar29);
          }
        }
        else {
          local_2f0[0] = iVar7;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar24 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_8->TriangleFilterF;
          plVar25 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar24 != (longlong *)0x0) {
            plVar25 = plVar24;
          }
          uVar20 = (**(code **)(*plVar25 + 8))();
          cVar17 = (*pcVar8)(uVar20,local_2f0);
          if (cVar17 != '\0') goto LAB_14a9f206c;
        }
        local_2f4 = local_2f4 + 1;
        uVar22 = (uint)local_2d8;
        if (iVar6 < local_2f4) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar22 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_190,param_4,param_3);
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar22 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar28 >> 9) * 8) +
                      (ulonglong)(uVar28 & 0x1ff) * 4);
    if ((int)uVar22 < 0) {
      bVar18 = box_box_intersect(this,~uVar22,&local_190);
      if (!bVar18) {
        return false;
      }
      local_298._0_8_ = *(undefined8 *)param_6;
      local_298._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,~uVar22,param_2,param_3,param_4,param_5 + 1,&local_298,param_7,
                          param_8);
      return bVar18;
    }
    iVar29 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar28 + 1 >> 9) * 8) +
                     (ulonglong)(uVar28 + 1 & 0x1ff) * 4) + -1;
    bVar18 = box_box_intersect(this,uVar22 - 1,&local_190);
    if (bVar18) {
      local_288._0_8_ = *(undefined8 *)param_6;
      local_288._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,uVar22 - 1,param_2,param_3,param_4,param_5 + 1,&local_288,param_7,
                          param_8);
      if (bVar18) {
        return true;
      }
    }
    bVar18 = box_box_intersect(this,iVar29,&local_190);
    if (bVar18) {
      local_278._0_8_ = *(undefined8 *)param_6;
      local_278._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,iVar29,param_2,param_3,param_4,param_5 + 1,&local_278,param_7,param_8
                         );
      return bVar18;
    }
    return false;
  }
  lVar12 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar27 * 8);
  dVar3 = *(double *)(lVar12 + uVar26 * 0x18);
  lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar27 * 8);
  dVar4 = *(double *)(lVar12 + 8 + uVar26 * 0x18);
  dVar5 = *(double *)(lVar12 + 0x10 + uVar26 * 0x18);
  dVar14 = dVar3 - *(double *)(lVar13 + uVar26 * 0x18);
  dVar15 = dVar4 - *(double *)(lVar13 + 8 + uVar26 * 0x18);
  dVar16 = dVar5 - *(double *)(lVar13 + 0x10 + uVar26 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar13 + uVar26 * 0x18);
  dVar4 = dVar4 + *(double *)(lVar13 + 8 + uVar26 * 0x18);
  dVar5 = dVar5 + *(double *)(lVar13 + 0x10 + uVar26 * 0x18);
  pFVar2 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar28 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar22 >> 9) * 8) +
                    (ulonglong)(uVar22 & 0x1ff) * 4);
  if ((int)uVar28 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_268._s_0,~uVar28,param_3);
    if (((local_268._s_0.X < dVar3) && (dVar14 < local_250)) &&
       ((local_268._s_0.Y < dVar4 &&
        (((dVar15 < local_248 && (local_268._s_0.Z < dVar5)) && (dVar16 < local_240)))))) {
      local_2c8._0_8_ = *(undefined8 *)param_6;
      local_2c8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,param_1,param_2,param_3,param_4,param_5 + 1,&local_2c8,param_7,
                          param_8);
      return bVar18;
    }
    return false;
  }
  iVar29 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                   (ulonglong)(uVar22 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_238._s_0,uVar28 - 1,param_3);
  if ((((local_238._s_0.X < dVar3) && (dVar14 < local_220)) && (local_238._s_0.Y < dVar4)) &&
     (((dVar15 < local_218 && (local_238._s_0.Z < dVar5)) && (dVar16 < local_210)))) {
    local_2b8._0_8_ = *(undefined8 *)param_6;
    local_2b8._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar18 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar28 - 1,param_5 + 1,&local_2b8,param_7,
                        param_8);
    if (bVar18) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_208._s_0,iVar29,param_3);
  if (dVar3 <= local_208._s_0.X) {
    return false;
  }
  if (local_1f0 <= dVar14) {
    return false;
  }
  if (dVar4 <= local_208._s_0.Y) {
    return false;
  }
  if (local_1e8 <= dVar15) {
    return false;
  }
  if (local_208._s_0.Z < dVar5) {
    if (dVar16 < local_1e0) {
      local_2a8._0_8_ = *(undefined8 *)param_6;
      local_2a8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,param_1,param_2,param_3,iVar29,param_5 + 1,&local_2a8,param_7,param_8
                         );
      return bVar18;
    }
    return false;
  }
  return false;
}

// find_intersections @ 14a9f2970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_intersections
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *param_2,
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
  FShapeMeshAdapter *pFVar9;
  FShapeMeshDescriptor<double,float> *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *pTVar18;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar19;
  char cVar20;
  bool bVar21;
  undefined8 uVar22;
  FIndex3i *pFVar23;
  uint uVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStackY_4d8 [32];
  FIntersectionsQueryResult *pFVar34;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar35;
  int local_488 [2];
  FIntersectionsQueryResult *local_480;
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *local_478;
  FQueryOptions *local_470;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_468;
  uint local_460;
  int local_458 [2];
  int local_450;
  uint local_44c;
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *local_448;
  ulonglong local_440;
  ulonglong local_438;
  ulonglong local_430;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_428;
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
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
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
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
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
  local_480 = param_6;
  local_470 = param_9;
  uVar31 = (ulonglong)((uint)param_1 >> 9);
  uVar30 = (ulonglong)(param_1 & 0x1ff);
  local_428 = param_7;
  uVar29 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar31 * 8) +
                    uVar30 * 4);
  uVar24 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_488[0] = param_1;
  local_478 = param_2;
  local_468 = param_3;
  local_460 = uVar29;
  local_448 = this;
  if ((int)uVar29 < this->TrianglesEnd) {
    if ((int)uVar24 < param_2->TrianglesEnd) {
      uVar29 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
      uVar25 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      local_430 = (ulonglong)uVar25;
      local_44c = uVar29;
      if ((int)uVar25 < 1) {
        return;
      }
      do {
        uVar24 = uVar24 + 1;
        local_438 = (ulonglong)uVar24;
        iVar28 = *(int *)(*(longlong *)
                           ((local_478->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
        local_450 = iVar28;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14a9f2b23:
          pFVar9 = local_478->Mesh;
          pFVar23 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                              (&pFVar9->Mesh->Triangles,iVar28);
          pFVar10 = pFVar9->Mesh;
          uVar24 = (pFVar23->field0_0x0)._s_0.A;
          uVar25 = 0;
          if ((int)uVar24 < (pFVar10->Positions).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar24 * 0x18;
          local_248 = *(double *)pFVar2;
          dStack_240 = *(double *)(pFVar2 + 8);
          local_238 = *(double *)(pFVar11 + (longlong)(int)uVar24 * 0x18 + 0x10);
          uVar24 = (pFVar23->field0_0x0)._s_0.B;
          pFVar10 = pFVar9->Mesh;
          uVar25 = 0;
          if ((int)uVar24 < (pFVar10->Positions).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar24 * 0x18;
          dStack_230 = *(double *)pFVar2;
          uStack_228 = *(undefined8 *)(pFVar2 + 8);
          uStack_220 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar24 * 0x18 + 0x10);
          uVar24 = (pFVar23->field0_0x0)._s_0.C;
          pFVar10 = pFVar9->Mesh;
          uVar25 = 0;
          if ((int)uVar24 < (pFVar10->Positions).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar19 = local_468;
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar24 * 0x18;
          local_218 = *(undefined4 *)pFVar2;
          uStack_214 = *(undefined4 *)(pFVar2 + 4);
          uStack_210 = *(undefined4 *)(pFVar2 + 8);
          uStack_20c = *(undefined4 *)(pFVar2 + 0xc);
          local_208 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar24 * 0x18 + 0x10);
          uVar32 = (undefined4)local_208;
          uVar33 = (undefined4)((ulonglong)local_208 >> 0x20);
          if (*(void **)local_468 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_468);
            puVar1 = &pTVar19->field_0x10;
            pcVar8 = *(code **)pTVar19;
            plVar26 = *(longlong **)&pTVar19->field_0x28;
            if (*(longlong **)&pTVar19->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar22 = (**(code **)(*plVar26 + 8))();
            (*pcVar8)(&local_330,uVar22,&local_248);
            local_248 = local_330;
            dStack_240 = dStack_328;
            local_238 = local_320;
            Core::Private::Function::CheckCallable(*(void **)pTVar19);
            pcVar8 = *(code **)pTVar19;
            plVar26 = *(longlong **)&pTVar19->field_0x28;
            if (*(longlong **)&pTVar19->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar22 = (**(code **)(*plVar26 + 8))();
            (*pcVar8)(&local_318,uVar22,&dStack_230);
            dStack_230 = local_318;
            uStack_228 = uStack_310;
            uStack_220 = local_308;
            Core::Private::Function::CheckCallable(*(void **)pTVar19);
            pcVar8 = *(code **)pTVar19;
            plVar26 = *(longlong **)&pTVar19->field_0x28;
            if (*(longlong **)&pTVar19->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar22 = (**(code **)(*plVar26 + 8))();
            (*pcVar8)(&local_300,uVar22,&local_218);
            uVar32 = (undefined4)local_2f0;
            uVar33 = (undefined4)((ulonglong)local_2f0 >> 0x20);
            local_208 = local_2f0;
            this = local_448;
            local_218 = local_300;
            uStack_214 = uStack_2fc;
            uStack_210 = uStack_2f8;
            uStack_20c = uStack_2f4;
          }
          local_1f8._s_0.X = local_248;
          local_1f8._s_0.Y = dStack_240;
          local_1d8 = uStack_228;
          uStack_1d0 = uStack_220;
          local_15c = local_15c & 0xffffffff00000000;
          local_1f8._s_0.Z = local_238;
          dStack_1e0 = dStack_230;
          local_1b8 = CONCAT44(uVar33,uVar32);
          param_9 = local_470;
          local_1c8 = local_218;
          uStack_1c4 = uStack_214;
          uStack_1c0 = uStack_210;
          uStack_1bc = uStack_20c;
          if (0 < (int)uVar29) {
            local_440 = (ulonglong)uVar29;
            uVar29 = local_460;
            do {
              uVar29 = uVar29 + 1;
              iVar28 = *(int *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14a9f2e3a:
                pFVar9 = this->Mesh;
                pFVar23 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                                    (&pFVar9->Mesh->Triangles,iVar28);
                pFVar10 = pFVar9->Mesh;
                uVar24 = (pFVar23->field0_0x0)._s_0.A;
                uVar25 = 0;
                if ((int)uVar24 < (pFVar10->Positions).ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
                uVar25 = (pFVar23->field0_0x0)._s_0.B;
                pFVar10 = pFVar9->Mesh;
                pFVar2 = pFVar11 + (longlong)(int)uVar24 * 0x18;
                local_2e8 = *(undefined8 *)pFVar2;
                uStack_2e0 = *(undefined8 *)(pFVar2 + 8);
                local_2d8 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar24 * 0x18 + 0x10);
                uVar24 = 0;
                if ((int)uVar25 < (pFVar10->Positions).ArrayNum) {
                  uVar24 = ~uVar25 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
                uVar24 = (pFVar23->field0_0x0)._s_0.C;
                pFVar10 = pFVar9->Mesh;
                pFVar2 = pFVar11 + (longlong)(int)uVar25 * 0x18;
                uStack_2d0 = *(undefined8 *)pFVar2;
                uStack_2c8 = *(undefined8 *)(pFVar2 + 8);
                uStack_2c0 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar25 * 0x18 + 0x10);
                uVar25 = 0;
                if ((int)uVar24 < (pFVar10->Positions).ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
                pFVar2 = pFVar11 + (longlong)(int)uVar24 * 0x18;
                local_2b8 = *(undefined4 *)pFVar2;
                uStack_2b4 = *(undefined4 *)(pFVar2 + 4);
                uStack_2b0 = *(undefined4 *)(pFVar2 + 8);
                uStack_2ac = *(undefined4 *)(pFVar2 + 0xc);
                local_2a8 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar24 * 0x18 + 0x10);
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
                cVar20 = (**(code **)local_428)(*(undefined8 *)&local_428->field_0x8,&local_1f8);
                this = local_448;
                if (cVar20 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,iVar28,local_450,
                             local_480);
                  this = local_448;
                }
              }
              else {
                local_458[0] = iVar28;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar26 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_8->TriangleFilterF;
                plVar27 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar26 != (longlong *)0x0) {
                  plVar27 = plVar26;
                }
                uVar22 = (**(code **)(*plVar27 + 8))();
                cVar20 = (*pcVar8)(uVar22,local_458);
                if (cVar20 != '\0') goto LAB_14a9f2e3a;
              }
              local_440 = local_440 - 1;
            } while (local_440 != 0);
            local_440 = 0;
            param_9 = local_470;
            uVar29 = local_44c;
          }
        }
        else {
          local_488[0] = iVar28;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar26 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_9->TriangleFilterF;
          plVar27 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar26 != (longlong *)0x0) {
            plVar27 = plVar26;
          }
          uVar22 = (**(code **)(*plVar27 + 8))();
          cVar20 = (*pcVar8)(uVar22,local_488);
          if (cVar20 != '\0') goto LAB_14a9f2b23;
        }
        uVar24 = (uint)local_438;
        local_430 = local_430 - 1;
        if (local_430 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar24 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar29 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
    if ((int)uVar29 < 0) {
      bVar21 = box_box_intersect(this,~uVar29,&local_298);
      if (!bVar21) {
        return;
      }
      local_3f0._0_8_ = *(undefined8 *)param_7;
      local_3f0._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar29,local_478,local_468,param_4,param_5 + 1,local_480,&local_3f0,
                         param_8,local_470);
      return;
    }
    bVar21 = box_box_intersect(this,uVar29 - 1,&local_298);
    pTVar18 = local_478;
    if (bVar21) {
      local_3e0._0_8_ = *(undefined8 *)param_7;
      local_3e0._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar29 - 1,local_478,local_468,param_4,param_5 + 1,local_480,
                         &local_3e0,param_8,local_470);
    }
    iVar28 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_460 + 1 >> 9) * 8) + (ulonglong)(local_460 + 1 & 0x1ff) * 4
                     );
    bVar21 = box_box_intersect(this,iVar28 + -1,&local_298);
    if (!bVar21) {
      return;
    }
    local_3d0._0_8_ = *(undefined8 *)param_7;
    local_3d0._8_8_ = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar28 + -1,pTVar18,local_468,param_4,param_5 + 1,local_480,&local_3d0,
                       param_8,local_470);
    return;
  }
  dVar4 = this->BoxEps;
  lVar12 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar31 * 8);
  dVar5 = *(double *)(lVar12 + uVar30 * 0x18);
  lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar31 * 8);
  dVar6 = *(double *)(lVar12 + 8 + uVar30 * 0x18);
  dVar7 = *(double *)(lVar12 + 0x10 + uVar30 * 0x18);
  pdVar3 = (double *)(lVar13 + uVar30 * 0x18);
  dVar15 = pdVar3[1] + dVar4;
  dVar14 = *pdVar3 + dVar4;
  dVar4 = *(double *)(lVar13 + 0x10 + uVar30 * 0x18) + dVar4;
  uVar29 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
  dVar16 = dVar6 - dVar15;
  dVar6 = dVar6 + dVar15;
  dVar15 = dVar5 - dVar14;
  dVar17 = dVar7 - dVar4;
  dVar5 = dVar5 + dVar14;
  dVar7 = dVar7 + dVar4;
  if ((int)uVar29 < 0) {
    uVar29 = ~uVar29;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3c0._s_0,uVar29,param_3);
    if (dVar5 <= local_3c0._s_0.X) {
      return;
    }
    if (local_3a8 <= dVar15) {
      return;
    }
    if (dVar6 <= local_3c0._s_0.Y) {
      return;
    }
    if (local_3a0 <= dVar16) {
      return;
    }
    if (dVar7 <= local_3c0._s_0.Z) {
      return;
    }
    if (local_398 <= dVar17) {
      return;
    }
    local_420._0_8_ = *(undefined8 *)param_7;
    pTVar35 = &local_420;
    local_420._8_8_ = *(undefined8 *)&param_7->field_0x8;
    iVar28 = local_488[0];
    pFVar34 = local_480;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_390._s_0,uVar29 - 1,param_3);
    pFVar34 = local_480;
    iVar28 = local_488[0];
    if ((((local_390._s_0.X < dVar5) && (dVar15 < local_378)) && (local_390._s_0.Y < dVar6)) &&
       (((dVar16 < local_370 && (local_390._s_0.Z < dVar7)) && (dVar17 < local_368)))) {
      local_410._0_8_ = *(undefined8 *)param_7;
      local_410._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,local_488[0],local_478,local_468,uVar29 - 1,param_5 + 1,local_480,
                         &local_410,param_8,local_470);
    }
    uVar29 = *(int *)(*(longlong *)
                       ((local_478->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar24 + 1 >> 9) * 8) + (ulonglong)(uVar24 + 1 & 0x1ff) * 4) - 1;
    GetBox(local_478,(TAxisAlignedBox3<double> *)&local_360._s_0,uVar29,local_468);
    if (dVar5 <= local_360._s_0.X) {
      return;
    }
    if (local_348 <= dVar15) {
      return;
    }
    if (dVar6 <= local_360._s_0.Y) {
      return;
    }
    if (local_340 <= dVar16) {
      return;
    }
    if (dVar7 <= local_360._s_0.Z) {
      return;
    }
    if (local_338 <= dVar17) {
      return;
    }
    local_400._0_8_ = *(undefined8 *)param_7;
    pTVar35 = &local_400;
    local_400._8_8_ = *(undefined8 *)&param_7->field_0x8;
  }
  find_intersections(this,iVar28,local_478,local_468,uVar29,param_5 + 1,pFVar34,pTVar35,param_8,
                     local_470);
  return;
}

// find_nearest_triangles @ 14a9f3f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_nearest_triangles
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  FShapeMeshAdapter *pFVar9;
  FShapeMeshDescriptor<double,float> *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FIndex2i_u_0 FVar19;
  char cVar20;
  bool bVar21;
  undefined8 uVar22;
  FIndex3i *pFVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong *plVar28;
  int iVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStackY_488 [32];
  ulonglong local_418;
  ulonglong local_408;
  int local_400 [2];
  uint local_3f8;
  int local_3f0 [2];
  int local_3e8;
  FShapeMeshDescriptor<double,float> *local_3e0;
  FIndex3i *local_3d8;
  int local_3d0;
  int iStack_3cc;
  ulonglong local_3c8;
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
  undefined8 local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar14 = __real_3fd0000000000000;
  uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  iVar29 = param_5 + 1;
LAB_14a9f4060:
  do {
    while( true ) {
      dVar4 = __real_bff0000000000000;
      uVar30 = (ulonglong)(param_1 & 0x1ff);
      uVar26 = (ulonglong)((uint)param_1 >> 9);
      uVar6 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar26 * 8)
                       + uVar30 * 4);
      uVar24 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar6 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar24)) goto LAB_14a9f4766;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3a8._s_0,param_4,param_3);
      pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar24 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                        (ulonglong)(uVar6 & 0x1ff) * 4);
      if ((int)uVar24 < 0) {
        dStack_3b8 = this->BoxEps;
        param_1 = ~uVar24;
        uVar26 = (ulonglong)(param_1 & 0x1ff);
        lVar12 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar4 = *(double *)(lVar12 + uVar26 * 0x18);
        dVar35 = *(double *)(lVar12 + 8 + uVar26 * 0x18);
        lVar13 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar3 = (double *)(lVar13 + uVar26 * 0x18);
        local_3c0 = *pdVar3 + dStack_3b8;
        local_3b0 = *(double *)(lVar13 + 0x10 + uVar26 * 0x18) + dStack_3b8;
        dStack_3b8 = pdVar3[1] + dStack_3b8;
        dVar34 = dVar4 + local_3c0;
        dVar4 = dVar4 - local_3c0;
        dVar15 = *(double *)(lVar12 + 0x10 + uVar26 * 0x18) - local_3b0;
        dVar17 = local_3b0 + *(double *)(lVar12 + 0x10 + uVar26 * 0x18);
        dVar5 = dVar35 + dStack_3b8;
        dVar35 = dVar35 - dStack_3b8;
        dVar33 = (local_3a8._s_0.X + local_390) - (dVar34 + dVar4);
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar25,SUB84(dVar33,0) & uVar7)
                - ((local_390 - local_3a8._s_0.X) + (dVar34 - dVar4));
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        dVar33 = (local_3a8._s_0.Y + local_388) - (dVar5 + dVar35);
        dVar35 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar25,SUB84(dVar33,0) & uVar7
                                 ) - ((local_388 - local_3a8._s_0.Y) + (dVar5 - dVar35));
        if (dVar35 <= 0.0) {
          dVar35 = 0.0;
        }
        dVar5 = (local_3a8._s_0.Z + local_380) - (dVar17 + dVar15);
        dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar25,SUB84(dVar5,0) & uVar7) -
                ((local_380 - local_3a8._s_0.Z) + (dVar17 - dVar15));
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        bVar21 = (dVar35 * dVar35 + dVar4 * dVar4 + dVar5 * dVar5) * dVar14 < *param_6;
        goto LAB_14a9f4d4e;
      }
      uVar24 = uVar24 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      dVar4 = box_box_distsqr(this,uVar24,(TAxisAlignedBox3<double> *)&local_3a8._s_0);
      dVar35 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_3a8._s_0);
      if (dVar35 < dVar4) {
        if (dVar35 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar29,param_6,param_7,param_8,param_9);
        }
        bVar21 = dVar4 < *param_6;
        param_1 = uVar24;
        goto LAB_14a9f4d4e;
      }
      if (dVar4 < *param_6) {
        find_nearest_triangles
                  (this,uVar24,param_2,param_3,param_4,iVar29,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar35) {
        return;
      }
      param_5 = param_5 + 1;
      iVar29 = iVar29 + 1;
    }
    if ((int)uVar24 < param_2->TrianglesEnd) {
      local_3f8 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
      uVar7 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      local_408 = (ulonglong)uVar7;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar7 < 1) {
        return;
      }
      break;
    }
LAB_14a9f4766:
    lVar12 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar26 * 8);
    dVar4 = *(double *)(lVar12 + uVar30 * 0x18);
    lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar26 * 8);
    dVar35 = *(double *)(lVar12 + 8 + uVar30 * 0x18);
    dVar5 = *(double *)(lVar12 + 0x10 + uVar30 * 0x18);
    pFVar2 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar15 = dVar4 - *(double *)(lVar13 + uVar30 * 0x18);
    dVar33 = dVar35 - *(double *)(lVar13 + 8 + uVar30 * 0x18);
    dVar34 = dVar5 - *(double *)(lVar13 + 0x10 + uVar30 * 0x18);
    dVar4 = dVar4 + *(double *)(lVar13 + uVar30 * 0x18);
    dVar35 = dVar35 + *(double *)(lVar13 + 8 + uVar30 * 0x18);
    dVar5 = dVar5 + *(double *)(lVar13 + 0x10 + uVar30 * 0x18);
    dVar17 = dVar4 - dVar15;
    dVar4 = dVar4 + dVar15;
    dVar15 = dVar35 + dVar33;
    dVar35 = dVar35 - dVar33;
    dVar33 = dVar5 + dVar34;
    dVar5 = dVar5 - dVar34;
    uVar6 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar24 >> 9) * 8) +
                     (ulonglong)(uVar24 & 0x1ff) * 4);
    if ((int)uVar6 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_378._s_0,~uVar6,param_3);
      dVar4 = dVar4 - (local_378._s_0.X + local_360);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar25,SUB84(dVar4,0) & uVar7) -
              ((local_360 - local_378._s_0.X) + dVar17);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar15 = dVar15 - (local_378._s_0.Y + local_358);
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar25,SUB84(dVar15,0) & uVar7)
               - ((local_358 - local_378._s_0.Y) + dVar35);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar33 = dVar33 - (local_378._s_0.Z + local_350);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar25,SUB84(dVar33,0) & uVar7) -
              ((local_350 - local_378._s_0.Z) + dVar5);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      bVar21 = (dVar35 * dVar35 + dVar4 * dVar4 + dVar5 * dVar5) * dVar14 < *param_6;
      param_4 = ~uVar6;
    }
    else {
      uVar6 = uVar6 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                        (ulonglong)(uVar24 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_348._s_0,uVar6,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_318._s_0,param_4,param_3);
      dVar34 = dVar4 - (local_348._s_0.X + local_330);
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar25,SUB84(dVar34,0) & uVar7)
               - ((local_330 - local_348._s_0.X) + dVar17);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar18 = dVar15 - (local_348._s_0.Y + local_328);
      dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar25,SUB84(dVar18,0) & uVar7)
               - ((local_328 - local_348._s_0.Y) + dVar35);
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      dVar16 = dVar33 - (local_348._s_0.Z + local_320);
      dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar25,SUB84(dVar16,0) & uVar7)
               - ((local_320 - local_348._s_0.Z) + dVar5);
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      dVar4 = dVar4 - (local_318._s_0.X + local_300);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar25,SUB84(dVar4,0) & uVar7) -
              ((local_300 - local_318._s_0.X) + dVar17);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar15 = dVar15 - (local_318._s_0.Y + local_2f8);
      dVar17 = (dVar18 * dVar18 + dVar34 * dVar34 + dVar16 * dVar16) * dVar14;
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar25,SUB84(dVar15,0) & uVar7)
               - ((local_2f8 - local_318._s_0.Y) + dVar35);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar33 = dVar33 - (local_318._s_0.Z + local_2f0);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar25,SUB84(dVar33,0) & uVar7) -
              ((local_2f0 - local_318._s_0.Z) + dVar5);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar4 = (dVar35 * dVar35 + dVar4 * dVar4 + dVar5 * dVar5) * dVar14;
      if (dVar17 <= dVar4) {
        if (dVar17 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar6,iVar29,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar4) {
          return;
        }
        param_5 = param_5 + 1;
        iVar29 = iVar29 + 1;
        goto LAB_14a9f4060;
      }
      if (dVar4 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar29,param_6,param_7,param_8,param_9);
      }
      bVar21 = dVar17 < *param_6;
      param_4 = uVar6;
    }
LAB_14a9f4d4e:
    if (!bVar21) {
      return;
    }
    param_5 = param_5 + 1;
    iVar29 = iVar29 + 1;
  } while( true );
LAB_14a9f4130:
  uVar24 = uVar24 + 1;
  local_3c8 = (ulonglong)uVar24;
  iVar29 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
  local_3e8 = iVar29;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14a9f4190:
    pFVar9 = param_2->Mesh;
    pFVar23 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                        (&pFVar9->Mesh->Triangles,iVar29);
    pFVar10 = pFVar9->Mesh;
    uVar7 = (pFVar23->field0_0x0)._s_0.A;
    uVar25 = 0;
    if ((int)uVar7 < (pFVar10->Positions).ArrayNum) {
      uVar25 = ~uVar7 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
    pFVar2 = pFVar11 + (longlong)(int)uVar7 * 0x18;
    local_248 = *(double *)pFVar2;
    dStack_240 = *(double *)(pFVar2 + 8);
    local_238 = *(double *)(pFVar11 + (longlong)(int)uVar7 * 0x18 + 0x10);
    pFVar10 = pFVar9->Mesh;
    uVar7 = (pFVar23->field0_0x0)._s_0.B;
    uVar25 = 0;
    if ((int)uVar7 < (pFVar10->Positions).ArrayNum) {
      uVar25 = ~uVar7 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
    pFVar2 = pFVar11 + (longlong)(int)uVar7 * 0x18;
    dStack_230 = *(double *)pFVar2;
    dStack_228 = *(double *)(pFVar2 + 8);
    dStack_220 = *(double *)(pFVar11 + (longlong)(int)uVar7 * 0x18 + 0x10);
    uVar7 = (pFVar23->field0_0x0)._s_0.C;
    pFVar10 = pFVar9->Mesh;
    uVar25 = 0;
    if ((int)uVar7 < (pFVar10->Positions).ArrayNum) {
      uVar25 = ~uVar7 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
    pFVar2 = pFVar11 + (longlong)(int)uVar7 * 0x18;
    local_218 = *(undefined4 *)pFVar2;
    uStack_214 = *(undefined4 *)(pFVar2 + 4);
    uStack_210 = *(undefined4 *)(pFVar2 + 8);
    uStack_20c = *(undefined4 *)(pFVar2 + 0xc);
    local_208 = *(undefined8 *)(pFVar11 + (longlong)(int)uVar7 * 0x18 + 0x10);
    uVar31 = (undefined4)local_208;
    uVar32 = (undefined4)((ulonglong)local_208 >> 0x20);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar8 = *(code **)param_3;
      plVar27 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar27 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar27 + 8))();
      (*pcVar8)(&local_2e8,uVar22,&local_248);
      local_248 = local_2e8;
      dStack_240 = dStack_2e0;
      local_238 = local_2d8;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar8 = *(code **)param_3;
      plVar27 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar27 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar27 + 8))();
      (*pcVar8)(&local_2d0,uVar22,&dStack_230);
      dStack_230 = local_2d0;
      dStack_228 = dStack_2c8;
      dStack_220 = local_2c0;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar8 = *(code **)param_3;
      plVar27 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar27 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar27 + 8))();
      (*pcVar8)(&local_2b8,uVar22,&local_218);
      uVar31 = (undefined4)local_2a8;
      uVar32 = (undefined4)((ulonglong)local_2a8 >> 0x20);
      local_208 = local_2a8;
      local_218 = local_2b8;
      uStack_214 = uStack_2b4;
      uStack_210 = uStack_2b0;
      uStack_20c = uStack_2ac;
    }
    local_418 = (ulonglong)local_3f8;
    local_1f8.DistanceSquared = dVar4;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar32,uVar31);
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = dStack_240;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = dStack_228;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = dStack_220;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_238;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = dStack_230;
    uVar7 = uVar6;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = uStack_214;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = uStack_210;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = uStack_20c;
    if (0 < (int)local_3f8) {
      do {
        uVar7 = uVar7 + 1;
        iVar29 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14a9f44bb:
          pFVar9 = this->Mesh;
          local_3d8 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                                (&pFVar9->Mesh->Triangles,iVar29);
          local_3e0 = pFVar9->Mesh;
          uVar25 = (local_3d8->field0_0x0)._s_0.A;
          uVar24 = 0;
          if ((int)uVar25 < (local_3e0->Positions).ArrayNum) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar11 = (local_3e0->Positions).AllocatorInstance.Data;
          uVar24 = (local_3d8->field0_0x0)._s_0.B;
          pFVar2 = pFVar11 + (longlong)(int)uVar25 * 0x18;
          local_298 = *(double *)pFVar2;
          dStack_290 = *(double *)(pFVar2 + 8);
          local_288 = *(double *)(pFVar11 + (longlong)(int)uVar25 * 0x18 + 0x10);
          local_3e0 = pFVar9->Mesh;
          uVar25 = 0;
          if ((int)uVar24 < (local_3e0->Positions).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar10 = pFVar9->Mesh;
          pFVar11 = (local_3e0->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar24 * 0x18;
          dStack_280 = *(double *)pFVar2;
          dStack_278 = *(double *)(pFVar2 + 8);
          dStack_270 = *(double *)(pFVar11 + (longlong)(int)uVar24 * 0x18 + 0x10);
          uVar25 = (local_3d8->field0_0x0)._s_0.C;
          uVar24 = 0;
          if ((int)uVar25 < (pFVar10->Positions).ArrayNum) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar11 = (pFVar10->Positions).AllocatorInstance.Data;
          pFVar2 = pFVar11 + (longlong)(int)uVar25 * 0x18;
          local_268 = *(double *)pFVar2;
          dStack_260 = *(double *)(pFVar2 + 8);
          local_258 = *(double *)(pFVar11 + (longlong)(int)uVar25 * 0x18 + 0x10);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = dStack_290;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = dStack_278;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = dStack_270;
          local_1f8.DistanceSquared = dVar4;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = local_288;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = dStack_280;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = dStack_260;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_258;
          dVar14 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar14 < *param_6) {
            iStack_3cc = local_3e8;
            FVar19._s_0.B = local_3e8;
            FVar19._s_0.A = iVar29;
            *param_6 = dVar14;
            param_7->field0_0x0 = FVar19;
            local_3d0 = iVar29;
          }
        }
        else {
          local_3f0[0] = iVar29;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar27 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_8->TriangleFilterF;
          plVar28 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar27 != (longlong *)0x0) {
            plVar28 = plVar27;
          }
          uVar22 = (**(code **)(*plVar28 + 8))();
          cVar20 = (*pcVar8)(uVar22,local_3f0);
          if (cVar20 != '\0') goto LAB_14a9f44bb;
        }
        local_418 = local_418 - 1;
      } while (local_418 != 0);
    }
  }
  else {
    local_400[0] = iVar29;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar27 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar8 = *(code **)&param_9->TriangleFilterF;
    plVar28 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar27 != (longlong *)0x0) {
      plVar28 = plVar27;
    }
    uVar22 = (**(code **)(*plVar28 + 8))();
    cVar20 = (*pcVar8)(uVar22,local_400);
    if (cVar20 != '\0') goto LAB_14a9f4190;
  }
  uVar24 = (uint)local_3c8;
  local_408 = local_408 - 1;
  if (local_408 == 0) {
    return;
  }
  goto LAB_14a9f4130;
}

// find_nearest_vertex @ 14a9f4de0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::find_nearest_vertex
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          TVector<double> *param_2,double *param_3,int *param_4,FQueryOptions *param_5)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FShapeMeshDescriptor<double,float> *pFVar6;
  FScriptContainerElement *pFVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  FIndex3i *pFVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_res10 [2];
  ulonglong local_98;
  uint local_80;
  uint uStack_7c;
  
  pTVar1 = &(this->IndexList).Blocks;
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar15) {
    do {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      uVar14 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar15 >> 9) * 8) +
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
        uVar14 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
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
  local_98 = (ulonglong)uVar14;
  if (0 < (int)uVar14) {
    do {
      uVar15 = uVar15 + 1;
      iVar2 = *(int *)(*(longlong *)
                        ((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar15 >> 9) * 8) +
                      (ulonglong)(uVar15 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14a9f4ffc:
        pFVar12 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                            (&this->Mesh->Mesh->Triangles,iVar2);
        uVar11 = *(undefined8 *)&pFVar12->field0_0x0;
        uVar14 = (pFVar12->field0_0x0)._s_0.C;
        local_80 = (uint)uVar11;
        pFVar6 = this->Mesh->Mesh;
        uVar10 = 0;
        if ((int)local_80 < (pFVar6->Positions).ArrayNum) {
          uVar10 = ~local_80 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
        pFVar3 = pFVar7 + (longlong)(int)local_80 * 0x18;
        dVar17 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar3;
        dVar18 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
        dVar16 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar7 + (longlong)(int)local_80 * 0x18 + 0x10);
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
        if (dVar16 < *param_3) {
          *param_3 = dVar16;
          *param_4 = local_80;
        }
        uStack_7c = (uint)((ulonglong)uVar11 >> 0x20);
        pFVar6 = this->Mesh->Mesh;
        uVar10 = 0;
        if ((int)uStack_7c < (pFVar6->Positions).ArrayNum) {
          uVar10 = ~uStack_7c >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
        pFVar3 = pFVar7 + (longlong)(int)uStack_7c * 0x18;
        dVar17 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar3;
        dVar16 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar7 + (longlong)(int)uStack_7c * 0x18 + 0x10);
        dVar18 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
        if (dVar16 < *param_3) {
          *param_3 = dVar16;
          *param_4 = uStack_7c;
        }
        pFVar6 = this->Mesh->Mesh;
        uVar10 = 0;
        if ((int)uVar14 < (pFVar6->Positions).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
        pFVar3 = pFVar7 + (longlong)(int)uVar14 * 0x18;
        dVar17 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar3;
        dVar16 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar7 + (longlong)(int)uVar14 * 0x18 + 0x10);
        dVar18 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
        if (dVar16 < *param_3) {
          *param_3 = dVar16;
          *param_4 = uVar14;
        }
      }
      else {
        local_res10[0] = iVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_5->TriangleFilterF;
        plVar13 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar13 = plVar4;
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        cVar8 = (*pcVar5)(uVar11,local_res10);
        if (cVar8 != '\0') goto LAB_14a9f4ffc;
      }
      local_98 = local_98 - 1;
    } while (local_98 != 0);
  }
  return;
}

// find_self_intersections @ 14a9f52c0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
find_self_intersections
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,
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

// find_self_intersections_acrossboxes @ 14a9f5450

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          int param_2,FIntersectionsQueryResult *param_3,bool param_4,int param_5,
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
LAB_14a9f5605:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14a9f5605;
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
      goto joined_r0x00014a9f5801;
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
joined_r0x00014a9f5801:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14a9f5a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_>::
find_tri_tri_intersections
          (TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *this,int param_1,
          int param_2,int param_3,FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  FShapeMeshAdapter *pFVar7;
  FShapeMeshDescriptor<double,float> *pFVar8;
  FScriptContainerElement *pFVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  FIndex3i *pFVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *pTVar19;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  char local_288;
  int local_284;
  int local_280;
  int local_278 [2];
  int local_270 [2];
  TMeshAABBTree3<UE::Mutable::Private::FShapeMeshAdapter_const_> *local_268;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_260;
  FIntersectionsQueryResult *local_258;
  undefined8 local_250;
  int local_248;
  undefined8 local_240;
  int local_238;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  TVector<double>_u_0 local_188;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_260 = param_6;
  local_258 = param_4;
  local_284 = param_1;
  local_280 = param_3;
  local_268 = this;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_278[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar5 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar6 = *(code **)&param_7->TriangleFilterF;
    plVar15 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar15 = plVar5;
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    cVar10 = (*pcVar6)(uVar13,local_278);
    if (cVar10 == '\0') {
      return false;
    }
  }
  pFVar7 = this->Mesh;
  local_288 = '\0';
  pFVar14 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                      (&pFVar7->Mesh->Triangles,param_1);
  pFVar8 = pFVar7->Mesh;
  uVar2 = (pFVar14->field0_0x0)._s_0.A;
  lVar17 = (longlong)(int)uVar2;
  iVar3 = (pFVar8->Positions).ArrayNum;
  uVar16 = 0;
  if ((int)uVar2 < iVar3) {
    uVar16 = ~uVar2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_298 = lVar17, local_290 = (longlong)iVar3,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
  uVar2 = (pFVar14->field0_0x0)._s_0.B;
  lVar18 = (longlong)(int)uVar2;
  pFVar8 = pFVar7->Mesh;
  pFVar1 = pFVar9 + lVar17 * 0x18;
  local_228 = *(double *)pFVar1;
  dStack_220 = *(double *)(pFVar1 + 8);
  local_218 = *(double *)(pFVar9 + lVar17 * 0x18 + 0x10);
  iVar3 = (pFVar8->Positions).ArrayNum;
  uVar16 = 0;
  if ((int)uVar2 < iVar3) {
    uVar16 = ~uVar2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_298 = lVar18, local_290 = (longlong)iVar3,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
  uVar2 = (pFVar14->field0_0x0)._s_0.C;
  lVar17 = (longlong)(int)uVar2;
  pFVar8 = pFVar7->Mesh;
  pFVar1 = pFVar9 + lVar18 * 0x18;
  uStack_210 = *(undefined8 *)pFVar1;
  uStack_208 = *(undefined8 *)(pFVar1 + 8);
  uStack_200 = *(undefined8 *)(pFVar9 + lVar18 * 0x18 + 0x10);
  iVar3 = (pFVar8->Positions).ArrayNum;
  uVar16 = 0;
  if ((int)uVar2 < iVar3) {
    uVar16 = ~uVar2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_298 = lVar17, local_290 = (longlong)iVar3,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pTVar19 = local_268;
  pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
  pFVar1 = pFVar9 + lVar17 * 0x18;
  local_1f8 = *(undefined8 *)pFVar1;
  uStack_1f0 = *(undefined8 *)(pFVar1 + 8);
  local_1e8 = *(undefined8 *)(pFVar9 + lVar17 * 0x18 + 0x10);
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_228;
  local_188._s_0.Y = dStack_220;
  local_168 = uStack_208;
  uStack_160 = uStack_200;
  local_f0 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_188._s_0.Z = local_218;
  uStack_170 = uStack_210;
  local_158 = local_1f8;
  uStack_150 = uStack_1f0;
  local_148 = local_1e8;
  pFVar14 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                      (&local_268->Mesh->Mesh->Triangles,local_284);
  local_250 = *(undefined8 *)&pFVar14->field0_0x0;
  local_248 = (pFVar14->field0_0x0)._s_0.C;
  cVar10 = '\0';
  if (param_2 < local_280) {
    do {
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar19->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14a9f5d6d:
        pFVar14 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                            (&pTVar19->Mesh->Mesh->Triangles,iVar3);
        local_240 = *(undefined8 *)&pFVar14->field0_0x0;
        local_238 = (pFVar14->field0_0x0)._s_0.C;
        if (param_5) {
          bVar11 = false;
          lVar17 = 0;
          do {
            if (bVar11) goto LAB_14a9f5f92;
            lVar18 = 0;
            do {
              if (*(int *)((longlong)&local_250 + lVar17 * 4) ==
                  *(int *)((longlong)&local_240 + lVar18 * 4)) {
                bVar11 = true;
                break;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 3);
            lVar17 = lVar17 + 1;
          } while (lVar17 < 3);
          if (bVar11) goto LAB_14a9f5f92;
        }
        pFVar7 = pTVar19->Mesh;
        pFVar14 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                            (&pFVar7->Mesh->Triangles,iVar3);
        pFVar8 = pFVar7->Mesh;
        uVar2 = (pFVar14->field0_0x0)._s_0.A;
        lVar17 = (longlong)(int)uVar2;
        iVar4 = (pFVar8->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar2 < iVar4) {
          uVar16 = ~uVar2 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_298 = lVar17, local_290 = (longlong)iVar4,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
        uVar2 = (pFVar14->field0_0x0)._s_0.B;
        lVar18 = (longlong)(int)uVar2;
        pFVar8 = pFVar7->Mesh;
        pFVar1 = pFVar9 + lVar17 * 0x18;
        local_1d8 = *(undefined8 *)pFVar1;
        uStack_1d0 = *(undefined8 *)(pFVar1 + 8);
        local_1c8 = *(undefined8 *)(pFVar9 + lVar17 * 0x18 + 0x10);
        iVar4 = (pFVar8->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar2 < iVar4) {
          uVar16 = ~uVar2 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_298 = lVar18, local_290 = (longlong)iVar4,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
        uVar2 = (pFVar14->field0_0x0)._s_0.C;
        lVar17 = (longlong)(int)uVar2;
        pFVar8 = pFVar7->Mesh;
        pFVar1 = pFVar9 + lVar18 * 0x18;
        uStack_1c0 = *(undefined8 *)pFVar1;
        uStack_1b8 = *(undefined8 *)(pFVar1 + 8);
        uStack_1b0 = *(undefined8 *)(pFVar9 + lVar18 * 0x18 + 0x10);
        iVar4 = (pFVar8->Positions).ArrayNum;
        uVar16 = 0;
        if ((int)uVar2 < iVar4) {
          uVar16 = ~uVar2 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_298 = lVar17, local_290 = (longlong)iVar4,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar9 = (pFVar8->Positions).AllocatorInstance.Data;
        pFVar1 = pFVar9 + lVar17 * 0x18;
        local_1a8 = *(undefined4 *)pFVar1;
        uStack_1a4 = *(undefined4 *)(pFVar1 + 4);
        uStack_1a0 = *(undefined4 *)(pFVar1 + 8);
        uStack_19c = *(undefined4 *)(pFVar1 + 0xc);
        local_198 = *(undefined8 *)(pFVar9 + lVar17 * 0x18 + 0x10);
        local_140 = local_1d8;
        uStack_138 = uStack_1d0;
        local_ec = 0;
        local_130 = (undefined4)local_1c8;
        uStack_12c = local_1c8._4_4_;
        uStack_128 = (undefined4)uStack_1c0;
        uStack_124 = uStack_1c0._4_4_;
        local_120 = (undefined4)uStack_1b8;
        uStack_11c = uStack_1b8._4_4_;
        uStack_118 = (undefined4)uStack_1b0;
        uStack_114 = uStack_1b0._4_4_;
        local_110 = local_1a8;
        uStack_10c = uStack_1a4;
        uStack_108 = uStack_1a0;
        uStack_104 = uStack_19c;
        local_100 = local_198;
        local_288 = (**(code **)local_260)(*(undefined8 *)&local_260->field_0x8,&local_188);
        pTVar19 = local_268;
        if (local_288 != '\0') {
          if (local_258 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,local_284,iVar3,local_258);
          pTVar19 = local_268;
        }
      }
      else {
        local_270[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar5 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_7->TriangleFilterF;
        plVar15 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar15 = plVar5;
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        cVar10 = (*pcVar6)(uVar13,local_270);
        if (cVar10 != '\0') goto LAB_14a9f5d6d;
      }
LAB_14a9f5f92:
      param_2 = param_2 + 1;
      cVar10 = local_288;
    } while (param_2 < local_280);
  }
  return (bool)cVar10;
}

