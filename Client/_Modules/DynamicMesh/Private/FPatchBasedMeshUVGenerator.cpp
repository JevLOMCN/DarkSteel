// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// operator() @ 14c8a8d00

void __thiscall
`UE::Geometry::FPatchBasedMeshUVGenerator::AutoComputeUVs'::__l23::<lambda_1>::operator()
          (void *this,int param_1)

{
  char *pcVar1;
  code *pcVar2;
  FDynamicMeshUVEditor *this_00;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  pcVar1 = (char *)**(undefined8 **)this;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar7 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar7 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar3 = (*pcVar2)(uVar6);
    *pcVar1 = cVar3;
    if (cVar3 != '\0') {
      return;
    }
  }
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar5 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)param_1 + *plVar7) != '\0') {
    this_00 = *(FDynamicMeshUVEditor **)((longlong)this + 0x10);
    plVar7 = *(longlong **)((longlong)this + 0x18);
    uVar5 = 0;
    if (param_1 < (int)plVar7[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Geometry::FDynamicMeshUVEditor::AutoOrientUVArea
              (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((longlong)param_1 * 0x10 + *plVar7));
  }
  return;
}

// operator() @ 14c8b1b80

void __thiscall
`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l2::<lambda_4>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  char *pcVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  char cVar25;
  uint uVar26;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar27;
  FUVAreaMetrics *pFVar28;
  undefined8 uVar29;
  longlong lVar30;
  longlong *plVar31;
  FUVAreaMetrics local_148 [2];
  
  pTVar27 = UE::Geometry::FMeshRegionGraph::GetRegionTris(*(FMeshRegionGraph **)this,param_1);
  pFVar28 = Compute_UV_Area_Metrics
                      (local_148,*(FDynamicMesh3 **)((longlong)this + 0x10),pTVar27,
                       **(int **)((longlong)this + 0x18),
                       *(double *)(*(int **)((longlong)this + 0x18) + 2));
  plVar31 = *(longlong **)((longlong)this + 8);
  dVar6 = pFVar28->AvgSqrAreaDistortion;
  dVar7 = (pFVar28->AreaWeightedNormal).field0_0x0._s_0.X;
  dVar8 = (pFVar28->AreaWeightedNormal).field0_0x0._s_0.Y;
  dVar9 = (pFVar28->AreaWeightedNormal).field0_0x0._s_0.Z;
  dVar10 = pFVar28->NormalSpread;
  dVar11 = (pFVar28->BoundsUV).Min.field0_0x0._s_0.X;
  dVar12 = (pFVar28->BoundsUV).Min.field0_0x0._s_0.Y;
  dVar13 = (pFVar28->BoundsUV).Max.field0_0x0._s_0.X;
  dVar14 = (pFVar28->BoundsUV).Max.field0_0x0._s_0.Y;
  dVar15 = (pFVar28->Bounds3D).Min.field0_0x0._s_0.X;
  dVar16 = (pFVar28->Bounds3D).Min.field0_0x0._s_0.Y;
  dVar17 = (pFVar28->Bounds3D).Min.field0_0x0._s_0.Z;
  dVar18 = (pFVar28->Bounds3D).Max.field0_0x0._s_0.X;
  dVar19 = (pFVar28->Bounds3D).Max.field0_0x0._s_0.Y;
  dVar20 = (pFVar28->Bounds3D).Max.field0_0x0._s_0.Z;
  dVar21 = pFVar28->SurfAreaSum;
  dVar22 = pFVar28->UVAreaSum;
  dVar23 = pFVar28->UVPerimeter;
  dVar2 = pFVar28->Compactness;
  uVar26 = 0;
  if (param_1 < (int)plVar31[1]) {
    uVar26 = (uint)~param_1 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *plVar31;
  lVar30 = (longlong)param_1 * 0x98;
  *(double *)(lVar30 + lVar3) = dVar6;
  ((double *)(lVar30 + lVar3))[1] = dVar7;
  pdVar1 = (double *)(lVar30 + 0x10 + lVar3);
  *pdVar1 = dVar8;
  pdVar1[1] = dVar9;
  pdVar1 = (double *)(lVar30 + 0x20 + lVar3);
  *pdVar1 = dVar10;
  pdVar1[1] = dVar11;
  pdVar1 = (double *)(lVar30 + 0x30 + lVar3);
  *pdVar1 = dVar12;
  pdVar1[1] = dVar13;
  pdVar1 = (double *)(lVar30 + 0x40 + lVar3);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1 = (double *)(lVar30 + 0x50 + lVar3);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar17;
  pdVar1 = (double *)(lVar30 + 0x60 + lVar3);
  *pdVar1 = dVar18;
  pdVar1[1] = dVar19;
  pdVar1 = (double *)(lVar30 + 0x70 + lVar3);
  *pdVar1 = dVar20;
  pdVar1[1] = dVar21;
  pdVar1 = (double *)(lVar30 + 0x80 + lVar3);
  *pdVar1 = dVar22;
  pdVar1[1] = dVar23;
  *(double *)(lVar30 + 0x90 + lVar3) = dVar2;
  pcVar4 = (char *)**(undefined8 **)((longlong)this + 0x20);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) {
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar4 + 0x70));
    pcVar5 = *(code **)(pcVar4 + 0x70);
    plVar31 = (longlong *)(pcVar4 + 0x80);
    if (*(longlong **)(pcVar4 + 0x98) != (longlong *)0x0) {
      plVar31 = *(longlong **)(pcVar4 + 0x98);
    }
    uVar29 = (**(code **)(*plVar31 + 8))();
    cVar25 = (*pcVar5)(uVar29);
    *pcVar4 = cVar25;
  }
  return;
}

// operator() @ 14c8b3930

void __thiscall
`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l23::<lambda_5>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  char cVar25;
  uint uVar26;
  int iVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar29;
  FUVAreaMetrics *pFVar30;
  undefined8 uVar31;
  longlong *plVar32;
  longlong lVar33;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  FUVAreaMetrics local_f8;
  
  plVar32 = *(longlong **)this;
  uVar26 = 0;
  if (param_1 < (int)plVar32[1]) {
    uVar26 = (uint)~param_1 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar4 = *plVar32;
  lVar33 = (longlong)param_1 * 0xa0;
  pTVar28 = UE::Geometry::FMeshRegionGraph::GetRegionTris
                      (*(FMeshRegionGraph **)((longlong)this + 8),*(int *)(lVar33 + lVar4));
  pTVar29 = UE::Geometry::FMeshRegionGraph::GetRegionTris
                      (*(FMeshRegionGraph **)((longlong)this + 8),*(int *)(lVar33 + 4 + lVar4));
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  if (&local_108 == pTVar28) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar3 = pTVar28->ArrayNum;
  if (iVar3 != 0) {
    iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar3,&local_108.AllocatorInstance,&local_108.ArrayNum,
                        &local_108.ArrayMax);
    memcpy(local_108.AllocatorInstance.Data + (longlong)iVar27 * 4,(pTVar28->AllocatorInstance).Data
           ,(longlong)iVar3 << 2);
  }
  if (&local_108 == pTVar29) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar3 = pTVar29->ArrayNum;
  if (iVar3 != 0) {
    iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar3,&local_108.AllocatorInstance,&local_108.ArrayNum,
                        &local_108.ArrayMax);
    memcpy(local_108.AllocatorInstance.Data + (longlong)iVar27 * 4,(pTVar29->AllocatorInstance).Data
           ,(longlong)iVar3 << 2);
  }
  pFVar30 = Compute_UV_Area_Metrics
                      (&local_f8,*(FDynamicMesh3 **)((longlong)this + 0x10),&local_108,
                       **(int **)((longlong)this + 0x18),
                       *(double *)(*(int **)((longlong)this + 0x18) + 2));
  dVar7 = (pFVar30->AreaWeightedNormal).field0_0x0._s_0.X;
  dVar8 = (pFVar30->AreaWeightedNormal).field0_0x0._s_0.Y;
  dVar9 = (pFVar30->AreaWeightedNormal).field0_0x0._s_0.Z;
  dVar10 = pFVar30->NormalSpread;
  dVar11 = (pFVar30->BoundsUV).Min.field0_0x0._s_0.X;
  dVar12 = (pFVar30->BoundsUV).Min.field0_0x0._s_0.Y;
  dVar13 = (pFVar30->BoundsUV).Max.field0_0x0._s_0.X;
  dVar14 = (pFVar30->BoundsUV).Max.field0_0x0._s_0.Y;
  dVar15 = (pFVar30->Bounds3D).Min.field0_0x0._s_0.X;
  dVar16 = (pFVar30->Bounds3D).Min.field0_0x0._s_0.Y;
  dVar17 = (pFVar30->Bounds3D).Min.field0_0x0._s_0.Z;
  dVar18 = (pFVar30->Bounds3D).Max.field0_0x0._s_0.X;
  dVar19 = (pFVar30->Bounds3D).Max.field0_0x0._s_0.Y;
  dVar20 = (pFVar30->Bounds3D).Max.field0_0x0._s_0.Z;
  dVar21 = pFVar30->SurfAreaSum;
  dVar22 = pFVar30->UVAreaSum;
  dVar23 = pFVar30->UVPerimeter;
  dVar2 = pFVar30->Compactness;
  pdVar1 = (double *)(lVar33 + 8 + lVar4);
  *pdVar1 = pFVar30->AvgSqrAreaDistortion;
  pdVar1[1] = dVar7;
  pdVar1 = (double *)(lVar33 + 0x18 + lVar4);
  *pdVar1 = dVar8;
  pdVar1[1] = dVar9;
  pdVar1 = (double *)(lVar33 + 0x28 + lVar4);
  *pdVar1 = dVar10;
  pdVar1[1] = dVar11;
  pdVar1 = (double *)(lVar33 + 0x38 + lVar4);
  *pdVar1 = dVar12;
  pdVar1[1] = dVar13;
  pdVar1 = (double *)(lVar33 + 0x48 + lVar4);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1 = (double *)(lVar33 + 0x58 + lVar4);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar17;
  pdVar1 = (double *)(lVar33 + 0x68 + lVar4);
  *pdVar1 = dVar18;
  pdVar1[1] = dVar19;
  pdVar1 = (double *)(lVar33 + 0x78 + lVar4);
  *pdVar1 = dVar20;
  pdVar1[1] = dVar21;
  pdVar1 = (double *)(lVar33 + 0x88 + lVar4);
  *pdVar1 = dVar22;
  pdVar1[1] = dVar23;
  *(double *)(lVar33 + 0x98 + lVar4) = dVar2;
  pcVar5 = (char *)**(undefined8 **)((longlong)this + 0x20);
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\0')) {
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar5 + 0x70));
    pcVar6 = *(code **)(pcVar5 + 0x70);
    plVar32 = (longlong *)(pcVar5 + 0x80);
    if (*(longlong **)(pcVar5 + 0x98) != (longlong *)0x0) {
      plVar32 = *(longlong **)(pcVar5 + 0x98);
    }
    uVar31 = (**(code **)(*plVar32 + 8))();
    cVar25 = (*pcVar6)(uVar31);
    *pcVar5 = cVar25;
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14c8b3cb0

double __thiscall
`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l23::<lambda_6>::
operator()(void *this,FPotentialMatch *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  
  uVar10 = param_1->NbrRegionIdx;
  plVar1 = *(longlong **)this;
  uVar7 = 0;
  if ((int)uVar10 < (int)plVar1[1]) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  lVar9 = (longlong)(int)uVar10 * 0x98;
  uVar10 = param_1->RegionIdx;
  uVar7 = 0;
  if ((int)uVar10 < (int)plVar2[1]) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  lVar4 = *plVar2;
  lVar8 = (longlong)(int)uVar10 * 0x98;
  dVar12 = *(double *)(lVar8 + 0x10 + lVar4) * *(double *)(lVar9 + 0x10 + lVar3) +
           *(double *)(lVar8 + 8 + lVar4) * *(double *)(lVar9 + 8 + lVar3) +
           *(double *)(lVar8 + 0x18 + lVar4) * *(double *)(lVar9 + 0x18 + lVar3);
  dVar11 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar12) && (dVar11 = dVar12, __real_3ff0000000000000 <= dVar12)) {
    dVar11 = __real_3ff0000000000000;
  }
  dVar11 = acos(dVar11);
  uVar10 = param_1->RegionIdx;
  plVar1 = *(longlong **)this;
  dVar11 = dVar11 * __real_4024000000000000;
  uVar7 = 0;
  if ((int)uVar10 < (int)plVar1[1]) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  plVar2 = *(longlong **)this;
  uVar7 = param_1->NbrRegionIdx;
  dVar12 = (param_1->Metrics).AvgSqrAreaDistortion -
           *(double *)((longlong)(int)uVar10 * 0x98 + *plVar1);
  uVar13 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  dVar12 = (param_1->Metrics).AvgSqrAreaDistortion -
           *(double *)((longlong)(int)uVar7 * 0x98 + *plVar2);
  dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar12 <= (double)CONCAT44(uVar14,uVar13)) {
    dVar12 = (double)CONCAT44(uVar14,uVar13);
  }
  return dVar12 + dVar11;
}

// AutoComputeUVs @ 14c8bc3c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryResult * __thiscall
UE::Geometry::FPatchBasedMeshUVGenerator::AutoComputeUVs
          (FPatchBasedMeshUVGenerator *this,FGeometryResult *__return_storage_ptr__,
          FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FProgressCancel *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  TConsoleVariableData<int> *pTVar6;
  FProgressCancel *pFVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  FText *pFVar11;
  FGeometryWarning *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  int iVar15;
  EWeightingType EVar16;
  FMeshConnectedComponents local_e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_d0;
  TVector<double>_u_0 local_b8;
  undefined1 local_98 [12];
  int iStack_8c;
  FDynamicMeshUVEditor *local_88;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  TArray<bool,TSizedDefaultAllocator<32>_> local_60;
  FDynamicMeshUVEditor local_50;
  
  pFVar7 = param_3;
  (__return_storage_ptr__->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Errors).ArrayNum = 0;
  (__return_storage_ptr__->Errors).ArrayMax = 0;
  (__return_storage_ptr__->Warnings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Warnings).ArrayNum = 0;
  (__return_storage_ptr__->Warnings).ArrayMax = 0;
  __return_storage_ptr__->Result = InProgress;
  pTVar6 = CVarEnableAutoUVAreaDensitySampling.Ref;
  bVar9 = this->bNormalWeightedPatches;
  pcVar1 = (code *)this->PatchNormalWeight;
  local_e8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Components.Array.ArrayNum = 0;
  local_e8.Components.Array.ArrayMax = 0;
  local_98[8] = true;
  local_80 = (undefined1  [8])0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_88 = (FDynamicMeshUVEditor *)((ulonglong)(uint3)((uint)local_88 >> 8) << 8);
  iStack_8c = this->MinPatchSize;
  local_e8.Mesh = param_1;
  local_98._0_8_ = param_1;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 4;
  }
  local_b8._s_0.Y = (double)___xmm_3ff00000000000003ff0000000000000;
  local_b8._s_0.Z = _UNK_150689688;
  EVar16 = (EWeightingType)(bVar9 != false);
  local_b8._s_0.X = (double)pcVar1;
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar10) == 0) {
    bVar9 = FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling
                      ((FPolygroupsGenerator *)local_98,this->TargetPatchCount,EVar16,
                       (TVector<double> *)&local_b8,this->GroupConstraint);
  }
  else {
    bVar9 = FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling
                      ((FPolygroupsGenerator *)local_98,this->TargetPatchCount,EVar16,
                       (TVector<double> *)&local_b8,this->GroupConstraint);
  }
  if ((bVar9 == false) ||
     ((pFVar7 != (FProgressCancel *)0x0 && (bVar9 = FProgressCancel::Cancelled(pFVar7), bVar9)))) {
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_80,(int)local_78.Data);
    if (local_80 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_80);
    }
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_b8,L"PatchBasedMeshUVGenerator",L"InitialPatchesFailed",
                         L"Failed to compute initial patch set");
    FGeometryResult::SetFailed(__return_storage_ptr__,pFVar11,0);
    FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
    uVar4 = local_e8.Components.Array._8_8_;
    for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar2 = *(undefined8 **)FVar14.Data;
      local_e8.Components.Array._8_8_ = uVar4;
      if (puVar2 != (undefined8 *)0x0) {
        if ((void *)*puVar2 != (void *)0x0) {
          FMemory::Free((void *)*puVar2);
        }
        ::operator_delete(puVar2,0x10);
      }
      FVar14.Data = FVar14.Data + 8;
      uVar4 = local_e8.Components.Array._8_8_;
    }
    local_e8.Components.Array.ArrayMax = (int)(uVar4 >> 0x20);
    iVar15 = local_e8.Components.Array.ArrayMax;
    goto joined_r0x00014c8bc564;
  }
  FMeshConnectedComponents::InitializeFromTriangleComponents
            (&local_e8,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)local_80
             ,true,false);
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_80,(int)local_78.Data);
  if (local_80 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_80);
  }
  pFVar7 = param_3;
  if (param_3 == (FProgressCancel *)0x0) {
LAB_14c8bc606:
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    bVar9 = ComputeIslandsByRegionMerging(this,param_1,param_2,&local_e8,false,&local_d0,param_3);
    if (bVar9) {
      bVar9 = FGeometryResult::CheckAndSetCancelled(__return_storage_ptr__,param_3);
      if (bVar9) {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
                   local_d0.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
        }
        FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
        for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
          puVar2 = *(undefined8 **)FVar14.Data;
          if (puVar2 != (undefined8 *)0x0) {
            if ((void *)*puVar2 != (void *)0x0) {
              FMemory::Free((void *)*puVar2);
            }
            ::operator_delete(puVar2,0x10);
          }
          FVar14.Data = FVar14.Data + 8;
        }
      }
      else {
        local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.ArrayNum = 0;
        local_60.ArrayMax = 0;
        iVar15 = ComputeUVsFromTriangleSets(this,param_1,param_2,&local_d0,&local_60,param_3);
        if (0 < iVar15) {
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              ((FText *)&local_b8,L"PatchBasedMeshUVGenerator",
                               L"PartialSolvesFailed",L"Failed to compute UVs for some UV islands");
          pFVar12 = FGeometryWarning::FGeometryWarning((FGeometryWarning *)local_98,0,pFVar11);
          FGeometryResult::AddWarning(__return_storage_ptr__,pFVar12);
          if ((code *)local_b8._s_0.X != (code *)0x0) {
            (**(code **)(*(longlong *)local_b8._s_0.X + 0x10))();
          }
        }
        bVar9 = FGeometryResult::CheckAndSetCancelled(__return_storage_ptr__,param_3);
        if (bVar9) {
          if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.AllocatorInstance.Data);
          }
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
                     local_d0.ArrayNum);
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_d0.AllocatorInstance.Data);
          }
          FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
          for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar2 = *(undefined8 **)FVar14.Data;
            if (puVar2 != (undefined8 *)0x0) {
              if ((void *)*puVar2 != (void *)0x0) {
                FMemory::Free((void *)*puVar2);
              }
              ::operator_delete(puVar2,0x10);
            }
            FVar14.Data = FVar14.Data + 8;
          }
        }
        else {
          FDynamicMeshUVEditor::FDynamicMeshUVEditor(&local_50,param_1,param_2);
          if (this->bAutoAlignPatches != false) {
            local_98._0_8_ = &param_3;
            unique0x00008e00 = (ITextData *)&local_60;
            local_88 = &local_50;
            local_80 = (undefined1  [8])&local_d0;
            local_b8._s_0.Y = (double)local_98;
            local_b8._s_0.X =
                 (double)Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FPatchBasedMeshUVGenerator::AutoComputeUVs'::__l23::<lambda_1>,void,int>
                         ::Call;
            ParallelFor(local_d0.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_b8,None);
          }
          bVar9 = FGeometryResult::CheckAndSetCancelled(__return_storage_ptr__,param_3);
          if (bVar9) {
            if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
                       local_d0.ArrayNum);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_d0.AllocatorInstance.Data);
            }
            FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
            for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
              puVar2 = *(undefined8 **)FVar14.Data;
              if (puVar2 != (undefined8 *)0x0) {
                if ((void *)*puVar2 != (void *)0x0) {
                  FMemory::Free((void *)*puVar2);
                }
                ::operator_delete(puVar2,0x10);
              }
              FVar14.Data = FVar14.Data + 8;
            }
          }
          else {
            if ((this->bAutoPack != false) &&
               (bVar9 = FDynamicMeshUVEditor::QuickPack
                                  (&local_50,this->PackingTextureResolution,this->PackingGutterWidth
                                  ), !bVar9)) {
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  ((FText *)&local_b8,L"PatchBasedMeshUVGenerator",
                                   L"IslandPackingFailed",L"Failed to pack UV islands");
              pFVar12 = FGeometryWarning::FGeometryWarning((FGeometryWarning *)local_98,0,pFVar11);
              FGeometryResult::AddWarning(__return_storage_ptr__,pFVar12);
              if ((code *)local_b8._s_0.X != (code *)0x0) {
                (**(code **)(*(longlong *)local_b8._s_0.X + 0x10))();
              }
            }
            bVar9 = FGeometryResult::CheckAndSetCancelled(__return_storage_ptr__,param_3);
            if (bVar9) {
              if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.AllocatorInstance.Data);
              }
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
                         local_d0.ArrayNum);
              if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
                  (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_d0.AllocatorInstance.Data);
              }
              FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
              for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
                puVar2 = *(undefined8 **)FVar14.Data;
                if (puVar2 != (undefined8 *)0x0) {
                  if ((void *)*puVar2 != (void *)0x0) {
                    FMemory::Free((void *)*puVar2);
                  }
                  ::operator_delete(puVar2,0x10);
                }
                FVar14.Data = FVar14.Data + 8;
              }
            }
            else {
              __return_storage_ptr__->Result = Success;
              if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.AllocatorInstance.Data);
              }
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
                         local_d0.ArrayNum);
              if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
                  (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_d0.AllocatorInstance.Data);
              }
              FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
              for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
                puVar2 = *(undefined8 **)FVar14.Data;
                if (puVar2 != (undefined8 *)0x0) {
                  if ((void *)*puVar2 != (void *)0x0) {
                    FMemory::Free((void *)*puVar2);
                  }
                  ::operator_delete(puVar2,0x10);
                }
                FVar14.Data = FVar14.Data + 8;
              }
            }
          }
        }
      }
    }
    else {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_b8,L"PatchBasedMeshUVGenerator",L"IslandMergingFailed",
                           L"Failed to merge UV islands");
      FGeometryResult::SetFailed(__return_storage_ptr__,pFVar11,0);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
                 local_d0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
      for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar2 = *(undefined8 **)FVar14.Data;
        if (puVar2 != (undefined8 *)0x0) {
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          ::operator_delete(puVar2,0x10);
        }
        FVar14.Data = FVar14.Data + 8;
      }
    }
    iVar15 = local_e8.Components.Array.ArrayMax;
    local_e8.Components.Array._8_8_ = local_e8.Components.Array._8_8_ & 0xffffffff00000000;
    uVar4 = local_e8.Components.Array._8_8_;
  }
  else {
    if (param_3->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&param_3->CancelF);
      pcVar1 = *(code **)&pFVar7->CancelF;
      plVar3 = *(longlong **)&(pFVar7->CancelF).field_0x28;
      plVar13 = (longlong *)&(pFVar7->CancelF).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar13 = plVar3;
      }
      (**(code **)(*plVar13 + 8))();
      bVar9 = (bool)(*pcVar1)();
      pFVar7->WasCancelled = bVar9;
      if (bVar9 == false) goto LAB_14c8bc606;
    }
    __return_storage_ptr__->Result = Cancelled;
    FVar14.Data = local_e8.Components.Array.AllocatorInstance.Data;
    for (iVar15 = local_e8.Components.Array.ArrayNum; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar2 = *(undefined8 **)FVar14.Data;
      if (puVar2 != (undefined8 *)0x0) {
        if ((void *)*puVar2 != (void *)0x0) {
          FMemory::Free((void *)*puVar2);
        }
        ::operator_delete(puVar2,0x10);
      }
      FVar14.Data = FVar14.Data + 8;
    }
    uVar5 = (ulonglong)local_e8.Components.Array._8_8_ >> 0x20;
    local_e8.Components.Array._8_8_ = local_e8.Components.Array._8_8_ & 0xffffffff00000000;
    uVar4 = local_e8.Components.Array._8_8_;
    iVar15 = (int)uVar5;
  }
joined_r0x00014c8bc564:
  local_e8.Components.Array._8_8_ = uVar4;
  if (iVar15 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_e8.Components,0,&local_e8.Components.Array.ArrayMax
              );
  }
  if (local_e8.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Components.Array.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ComputeInitialMeshPatches @ 14c8ca3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FPatchBasedMeshUVGenerator::ComputeInitialMeshPatches
          (FPatchBasedMeshUVGenerator *this,FDynamicMesh3 *param_1,FMeshConnectedComponents *param_2
          ,FProgressCancel *param_3)

{
  double dVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  EWeightingType EVar6;
  TVector<double>_u_0 local_88;
  FPolygroupsGenerator local_68;
  
  pTVar2 = CVarEnableAutoUVAreaDensitySampling.Ref;
  lVar5 = 0;
  bVar4 = this->bNormalWeightedPatches;
  local_68.MinGroupSize = this->MinPatchSize;
  dVar1 = this->PatchNormalWeight;
  local_68.bApplyPostProcessing = true;
  local_68.InitialGroupID = 0;
  local_68.FoundPolygroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FoundPolygroups.ArrayNum = 0;
  local_68.FoundPolygroups.ArrayMax = 0;
  local_68.PolygroupEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.PolygroupEdges.ArrayNum = 0;
  local_68.PolygroupEdges.ArrayMax = 0;
  local_68.bCopyToMesh = false;
  local_68.Mesh = param_1;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar5 = 4;
    }
  }
  local_88._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
  local_88._s_0.Z = _UNK_150689688;
  EVar6 = (EWeightingType)(bVar4 != false);
  local_88._s_0.X = dVar1;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 0) {
    bVar4 = FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling
                      (&local_68,this->TargetPatchCount,EVar6,(TVector<double> *)&local_88._s_0,
                       this->GroupConstraint);
  }
  else {
    bVar4 = FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling
                      (&local_68,this->TargetPatchCount,EVar6,(TVector<double> *)&local_88._s_0,
                       this->GroupConstraint);
  }
  if (bVar4 == false) {
LAB_14c8ca487:
    bVar4 = false;
  }
  else {
    if (param_3 != (FProgressCancel *)0x0) {
      bVar4 = FProgressCancel::Cancelled(param_3);
      if (bVar4) goto LAB_14c8ca487;
    }
    FMeshConnectedComponents::InitializeFromTriangleComponents
              (param_2,&local_68.FoundPolygroups,true,false);
    bVar4 = true;
  }
  if (local_68.PolygroupEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.PolygroupEdges.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_68.FoundPolygroups.AllocatorInstance.Data,local_68.FoundPolygroups.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.FoundPolygroups.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68.FoundPolygroups.AllocatorInstance.Data);
  }
  return bVar4;
}

// ComputeIslandsByRegionMerging @ 14c8ca4e0

bool __thiscall
UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging
          (FPatchBasedMeshUVGenerator *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FMeshConnectedComponents *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          FProgressCancel *param_5)

{
  bool bVar1;
  
  bVar1 = ComputeIslandsByRegionMerging(this,param_1,param_2,param_3,false,param_4,param_5);
  return bVar1;
}

// ComputeIslandsByRegionMerging @ 14c8ca510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging
          (FPatchBasedMeshUVGenerator *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FMeshConnectedComponents *param_3,bool param_4,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5,
          FProgressCancel *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  FIdentityFunctor FVar23;
  FProgressCancel *pFVar24;
  FMeshConnectedComponents *this_00;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar25;
  bool bVar26;
  undefined1 uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  TFunctionRef<bool___cdecl(int,int)> *pTVar32;
  undefined8 uVar33;
  FComponent *pFVar34;
  byte bVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *plVar38;
  FScriptContainerElement *pFVar39;
  ForElementType<FSetElementId> FVar40;
  TTuple<int,int> *pTVar41;
  char cVar42;
  FScriptContainerElement *pFVar43;
  ulonglong uVar44;
  uint uVar45;
  bool *pbVar46;
  uint *puVar47;
  TFunctionRef<int___cdecl(int)> *pTVar48;
  ulonglong uVar49;
  uint uVar50;
  undefined8 uVar51;
  ForAnyElementType FVar52;
  uint uVar53;
  ulong64 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined1 auStackY_718 [32];
  FIdentityFunctor local_6c8;
  char local_6c7;
  ForAnyElementType local_6c0;
  undefined8 local_6b8;
  undefined1 local_6b0;
  undefined1 local_6af;
  undefined1 local_6ae;
  undefined1 local_6ad;
  undefined1 local_6ac;
  <lambda_1> local_6ab [3];
  uint local_6a8;
  ForAnyElementType local_6a0;
  undefined8 local_698;
  FProgressCancel *local_690;
  uint local_688;
  uint local_684;
  ForAnyElementType local_680;
  int local_678 [2];
  longlong *local_670;
  undefined8 uStack_668;
  TBitArray<FDefaultBitArrayAllocator> *local_660;
  uint uStack_658;
  uint uStack_654;
  uint local_650;
  undefined4 uStack_64c;
  int iStack_648;
  undefined4 uStack_644;
  ulonglong local_640;
  undefined8 local_638;
  FMeshRegionGraph local_628;
  uint local_5e8 [2];
  FScriptContainerElement *local_5e0;
  FMeshConnectedComponents *local_5d8;
  FDynamicMesh3 *local_5d0;
  undefined4 local_5c8;
  uint local_5c4;
  undefined4 local_5c0;
  uint local_5bc;
  longlong local_5b8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_5b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_5a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_598;
  int local_578;
  int local_574;
  int local_570;
  FPatchBasedMeshUVGenerator *local_568;
  ForAnyElementType *local_560;
  ForAnyElementType **local_558;
  double local_550;
  int local_548;
  int local_544;
  int local_540;
  int local_53c;
  int local_538 [2];
  double local_530;
  int local_528;
  undefined1 local_524 [12];
  longlong *local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_510;
  undefined8 uStack_4f0;
  longlong *local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e0;
  undefined8 uStack_4c0;
  longlong *local_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b0;
  undefined8 uStack_490;
  code *local_488;
  undefined1 *local_480;
  code *local_478;
  FMeshRegionGraph **local_470;
  TArrayView<std::nullptr_t,int> local_468;
  code *local_458;
  ForAnyElementType **local_450;
  code *local_448;
  FPatchBasedMeshUVGenerator **local_440;
  code *local_438;
  undefined1 *local_430;
  code *local_428;
  <lambda_1> *local_420;
  FMeshRegionGraph *local_418;
  ForAnyElementType *local_410;
  FDynamicMesh3 *local_408;
  int *local_400;
  FProgressCancel **local_3f8;
  ForAnyElementType *local_3f0;
  FMeshRegionGraph *local_3e8;
  FDynamicMesh3 *local_3e0;
  int *local_3d8;
  FProgressCancel **local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  double local_340;
  double dStack_338;
  FPotentialMatch local_330;
  undefined4 local_274;
  undefined4 local_254;
  undefined1 local_248 [32];
  uint *local_228;
  uint local_220;
  undefined4 local_21c;
  undefined4 local_218;
  int local_214;
  ForElementType<FSetElementId> local_208;
  int local_200;
  TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> local_1f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1a8;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_718;
  local_5b0 = param_5;
  local_690 = param_6;
  local_5d8 = param_3;
  local_5d0 = param_1;
  if ((param_6 != (FProgressCancel *)0x0) && (bVar26 = FProgressCancel::Cancelled(param_6), bVar26))
  {
    return false;
  }
  uVar49 = 0;
  local_628.Regions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.Regions.ArrayNum = 0;
  local_628.Regions.ArrayMax = 0;
  local_628.TriangleToRegionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.TriangleToRegionMap.ArrayNum = 0;
  local_628.TriangleToRegionMap.ArrayMax = 0;
  local_628.TriangleNbrTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.TriangleNbrTris.ArrayNum = 0;
  local_628.TriangleNbrTris.ArrayMax = 0;
  local_628.EmptyTriSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.EmptyTriSet.ArrayNum = 0;
  local_628.EmptyTriSet.ArrayMax = 0;
  if (this->GroupConstraint == (FPolygroupSet *)0x0) {
    local_420 = local_6ab;
    local_6af = 0;
    pTVar48 = (TFunctionRef<int___cdecl(int)> *)&local_488;
    local_428 = Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_29_>,bool,int,int>
                ::Call;
    local_480 = &local_6af;
    local_488 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l10::<lambda_3>,int,int>
                ::Call;
    pTVar32 = (TFunctionRef<bool___cdecl(int,int)> *)&local_428;
  }
  else {
    local_440 = &local_568;
    pTVar48 = (TFunctionRef<int___cdecl(int)> *)&local_438;
    local_6b0 = 0;
    local_448 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l8::<lambda_2>,bool,int,int>
                ::Call;
    local_430 = &local_6b0;
    local_438 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l8::<lambda_1>,int,int>
                ::Call;
    pTVar32 = (TFunctionRef<bool___cdecl(int,int)> *)&local_448;
    local_568 = this;
  }
  FMeshRegionGraph::BuildFromComponents(&local_628,param_1,local_5d8,pTVar48,pTVar32);
  if ((local_690 != (FProgressCancel *)0x0) &&
     (bVar26 = FProgressCancel::Cancelled(local_690), bVar26)) {
    bVar26 = false;
    goto LAB_14c8cbc2c;
  }
  local_248._0_8_ = 0;
  local_248._8_8_ = 0;
  local_228 = (uint *)0x0;
  local_220 = 0;
  local_21c = 0x80;
  local_218 = 0xffffffff;
  local_214 = 0;
  local_208 = (ForElementType<FSetElementId>)0x0;
  local_200 = 0;
  local_688 = 0;
  uVar44 = uVar49;
  uVar45 = local_628.Regions.ArrayNum;
  if (0 < local_628.Regions.ArrayNum) {
    do {
      uVar50 = (uint)uVar44;
      if ((-1 < (int)uVar50) && ((int)uVar50 < (int)uVar45)) {
        uVar30 = 0;
        if ((int)uVar50 < (int)uVar45) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if (uVar30 == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar4 = (code *)swi(3);
            uVar27 = (*pcVar4)();
            return (bool)uVar27;
          }
          uVar45 = local_628.Regions.ArrayNum;
        }
        if (local_628.Regions.AllocatorInstance.Data[(longlong)(int)uVar50 * 0x30].field_0x0 != '\0'
           ) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_248,&local_548,
                     (bool *)&local_688);
          uVar45 = local_628.Regions.ArrayNum;
        }
      }
      local_688 = uVar50 + 1;
      param_1 = local_5d0;
      uVar44 = (ulonglong)local_688;
    } while ((int)local_688 < (int)uVar45);
  }
  dVar60 = this->MergingThreshold;
  local_530 = this->NormalSmoothingAlpha;
  dVar6 = dVar60 * __real_4010000000000000;
  local_538[0] = this->NormalSmoothingRounds;
  local_680.Data = (FScriptContainerElement *)0x0;
  local_678[0] = 0;
  local_678[1] = 0;
  local_550 = dVar6;
  if ((int)uVar45 < 1) {
    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
    }
  }
  else {
    iVar28 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x98,8,uVar45,&local_680,local_678,local_678 + 1);
    DefaultConstructItems<FUVAreaMetrics,int>(local_680.Data + (longlong)iVar28 * 0x98,uVar45);
    uVar45 = local_628.Regions.ArrayNum;
  }
  local_418 = &local_628;
  local_410 = &local_680;
  local_400 = local_538;
  local_3f8 = &local_690;
  local_470 = &local_418;
  local_478 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l2::<lambda_4>,void,int>
              ::Call;
  local_408 = param_1;
  ParallelFor(uVar45,(TFunctionRef<void___cdecl(int)> *)&local_478,None);
  if ((local_690 == (FProgressCancel *)0x0) ||
     (bVar26 = FProgressCancel::Cancelled(local_690), !bVar26)) {
    dVar61 = this->MaxNormalDeviationDeg * __real_3fc0000000000000;
    local_1f8.Elements._0_8_ = 0;
    dVar57 = this->CompactnessThreshold;
    local_1f8.Elements._8_8_ = 0;
    local_1f8.Elements._32_8_ = 0;
    local_1f8.Elements._40_4_ = 0;
    local_1f8.Elements._44_4_ = 0x80;
    local_1f8.Elements._48_4_ = 0xffffffff;
    local_1f8.Elements._52_4_ = 0;
    local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1f8.HashSize = 0;
    local_6c0.Data = (FScriptContainerElement *)0x0;
    local_6b8 = 0;
    iVar29 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_6c0,(int *)((longlong)&local_6b8 + 4));
    local_e8 = dVar61;
    uVar55 = SUB84(dVar57,0);
    uVar56 = (undefined4)((ulonglong)dVar57 >> 0x20);
    local_f8._8_4_ = uVar55;
    local_f8._0_8_ = dVar60;
    local_f8._12_4_ = uVar56;
    iVar28 = iVar29 + 1;
    local_158 = dVar60;
    auVar5._8_4_ = uVar55;
    auVar5._0_8_ = dVar60;
    auVar5._12_4_ = uVar56;
    *(undefined1 (*) [16])(local_6c0.Data + (longlong)iVar29 * 0x18) = auVar5;
    *(double *)(local_6c0.Data + (longlong)iVar29 * 0x18 + 0x10) = dVar61;
    dStack_150 = this->CompactnessThreshold;
    local_148 = this->MaxNormalDeviationDeg * __real_3fd0000000000000;
    local_6b8._0_4_ = iVar28;
    if ((local_6c0.Data <= (FScriptContainerElement *)&local_158) &&
       (((FScriptContainerElement *)&local_158 < local_6c0.Data + (longlong)local_6b8._4_4_ * 0x18
        && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)))) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    if ((int)local_6b8 == local_6b8._4_4_) {
      local_6b8._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_6c0,(int *)((longlong)&local_6b8 + 4));
    }
    iVar28 = (int)local_6b8 + 1;
    local_140 = dVar60;
    *(double *)(local_6c0.Data + (longlong)(int)local_6b8 * 0x18) = local_158;
    *(double *)(local_6c0.Data + (longlong)(int)local_6b8 * 0x18 + 8) = dStack_150;
    *(double *)(local_6c0.Data + (longlong)(int)local_6b8 * 0x18 + 0x10) = local_148;
    dStack_138 = this->CompactnessThreshold;
    local_130 = this->MaxNormalDeviationDeg * __real_3fe0000000000000;
    local_6b8._0_4_ = iVar28;
    if (((local_6c0.Data <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < local_6c0.Data + (longlong)local_6b8._4_4_ * 0x18))
       && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar26)) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    if ((int)local_6b8 == local_6b8._4_4_) {
      local_6b8._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_6c0,(int *)((longlong)&local_6b8 + 4));
    }
    iVar28 = (int)local_6b8 + 1;
    local_128 = dVar60;
    *(double *)(local_6c0.Data + (longlong)(int)local_6b8 * 0x18) = local_140;
    *(double *)(local_6c0.Data + (longlong)(int)local_6b8 * 0x18 + 8) = dStack_138;
    *(double *)(local_6c0.Data + (longlong)(int)local_6b8 * 0x18 + 0x10) = local_130;
    dStack_120 = this->CompactnessThreshold;
    dStack_118 = this->MaxNormalDeviationDeg;
    local_6b8._0_4_ = iVar28;
    if (((local_6c0.Data <= (FScriptContainerElement *)&local_128) &&
        ((FScriptContainerElement *)&local_128 < local_6c0.Data + (longlong)local_6b8._4_4_ * 0x18))
       && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar26)) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    iVar28 = (int)local_6b8;
    if ((int)local_6b8 == local_6b8._4_4_) {
      iVar28 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_6c0,(int *)((longlong)&local_6b8 + 4));
    }
    dVar66 = _UNK_1528d0768;
    dVar65 = ___xmm_7fefffffffffffff3ff0000000000000;
    dVar59 = _UNK_150a9e6d8;
    dVar58 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dVar64 = _UNK_150a9e648;
    dVar63 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dVar62 = _UNK_1508ffb58;
    dVar61 = ___xmm_ffefffffffffffffffefffffffffffff;
    dVar57 = _UNK_15061cbc8;
    dVar60 = ___xmm_3ff00000000000000000000000000000;
    uVar51 = 1;
    uVar67 = (undefined4)__real_ffefffffffffffff;
    uVar68 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar69 = (undefined4)__real_7fefffffffffffff;
    uVar70 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar55 = (undefined4)__real_bff0000000000000;
    uVar56 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    uVar71 = (undefined4)__real_3ff0000000000000;
    uVar72 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_6b8 = CONCAT44(local_6b8._4_4_,iVar28 + 1);
    local_684 = 0;
    local_640 = 0;
    local_638 = 1;
    *(double *)(local_6c0.Data + (longlong)iVar28 * 0x18) = local_128;
    *(double *)(local_6c0.Data + (longlong)iVar28 * 0x18 + 8) = dStack_120;
    *(double *)(local_6c0.Data + (longlong)iVar28 * 0x18 + 0x10) = dStack_118;
    uVar44 = uVar49;
    do {
      uVar45 = 0;
      if ((int)(uint)uVar44 < (int)local_6b8) {
        uVar45 = ~(uint)uVar44 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar4 = (code *)swi(3);
        uVar27 = (*pcVar4)();
        return (bool)uVar27;
      }
      uVar50 = local_220;
      uVar30 = (uint)uVar51;
      local_6c7 = '\x01';
      local_100 = *(double *)(local_6c0.Data + uVar49 * 0x18 + 0x10);
      uVar45 = 0;
      local_6a0.Data = (FScriptContainerElement *)0x0;
      local_698 = 0;
      local_650 = 0;
      local_110 = *(double *)(local_6c0.Data + uVar49 * 0x18);
      dStack_108 = *(double *)(local_6c0.Data + uVar49 * 0x18 + 8);
      uStack_654 = uVar45;
      if (local_220 != 0) {
        puVar47 = (uint *)(local_248 + 0x10);
        if (local_228 != (uint *)0x0) {
          puVar47 = local_228;
        }
        uVar53 = *puVar47;
        local_650 = 0;
        uVar45 = 0;
        while (uVar53 == 0) {
          lVar36 = (longlong)(int)uVar45;
          local_650 = local_650 + 0x20;
          uVar45 = uVar45 + 1;
          uStack_654 = local_220;
          if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar45)
          goto LAB_14c8cadd3;
          uVar53 = (puVar47 + 1)[lVar36];
        }
        uVar30 = -uVar53 & uVar53;
        uVar49 = (ulonglong)uVar30 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar49 != 0) {
          for (; uVar49 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_544 = (int)lVar36;
        uStack_654 = local_544 + -1 + local_650;
        if ((int)local_220 < (int)uStack_654) {
          uStack_654 = local_220;
        }
      }
LAB_14c8cadd3:
      local_670 = (longlong *)local_248;
      local_660 = (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10);
      iStack_648 = local_248._8_4_ - local_214;
      uStack_658 = 0xffffffff;
      uVar53 = local_220 & 0xffffffe0;
      uStack_668 = CONCAT44(uVar30,uVar45);
      uStack_64c = local_274;
      TStack_510._padding_ = uStack_668;
      iVar28 = (int)local_220 >> 5;
      uStack_4f0 = CONCAT44(uStack_644,iStack_648);
      bVar35 = (byte)local_220;
      TStack_510.UnvisitedBitMask = 0xffffffff;
      TStack_510.CurrentBitIndex = uStack_654;
      TStack_510.BaseBitIndex = local_650;
      TStack_510._28_4_ = local_274;
      local_518 = local_670;
      TStack_510.Array = local_660;
      if (((int)local_220 < 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar26)) {
        pcVar4 = (code *)swi(3);
        uVar27 = (*pcVar4)();
        return (bool)uVar27;
      }
      if (uVar50 != local_220) {
        puVar47 = (uint *)(local_248 + 0x10);
        if (local_228 != (uint *)0x0) {
          puVar47 = local_228;
        }
        uVar45 = -1 << (bVar35 & 0x1f) & puVar47[iVar28];
        while (uVar45 == 0) {
          lVar36 = (longlong)iVar28;
          uVar53 = uVar53 + 0x20;
          iVar28 = iVar28 + 1;
          uVar50 = local_220;
          if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
          goto LAB_14c8caef7;
          uVar45 = (puVar47 + 1)[lVar36];
        }
        uVar49 = (ulonglong)(-uVar45 & uVar45) * 2 + 1;
        lVar36 = 0x3f;
        if (uVar49 != 0) {
          for (; uVar49 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_540 = (int)lVar36;
        uVar50 = (uVar53 - 1) + local_540;
        if ((int)local_220 < (int)uVar50) {
          uVar50 = local_220;
        }
      }
LAB_14c8caef7:
      while( true ) {
        plVar3 = local_518;
        if ((int)local_518[1] - *(int *)((longlong)local_518 + 0x34) != (int)uStack_4f0) {
          local_6ae = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6ae);
        }
        uVar51 = local_638;
        if (((TStack_510.CurrentBitIndex == uVar50) &&
            (TStack_510.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10))) &&
           (plVar3 == (longlong *)local_248)) break;
        uVar45 = *(uint *)(*plVar3 + (longlong)TStack_510.CurrentBitIndex * 0xc);
        FMeshRegionGraph::GetNeighbours(&local_628,&local_5a8,uVar45);
        iVar28 = local_5a8.ArrayNum;
        pFVar43 = local_5a8.AllocatorInstance.Data + (longlong)local_5a8.ArrayNum * 4;
        FVar52.Data = local_5a8.AllocatorInstance.Data;
        while( true ) {
          if (local_5a8.ArrayNum != iVar28) {
            local_6c8 = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_6c8);
          }
          if (FVar52.Data == pFVar43) break;
          iVar29 = *(int *)FVar52.Data;
          if ((int)uVar45 < iVar29) {
            if (local_1f8.Elements._8_4_ != local_1f8.Elements._52_4_) {
              FVar40 = (ForElementType<FSetElementId>)&local_1f8.Hash;
              if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar40 = local_1f8.Hash.SecondaryData;
              }
              iVar31 = *(int *)((longlong)FVar40 +
                               (ulonglong)
                               (local_1f8.HashSize - 1U &
                               (uVar45 * 0x40 + iVar29 + (uVar45 >> 2) + 0x9e3779b9 ^ uVar45)) * 4);
              while (iVar31 != -1) {
                lVar36 = (longlong)iVar31;
                if ((*(uint *)(local_1f8.Elements._0_8_ + lVar36 * 0x10) == uVar45) &&
                   (*(int *)(local_1f8.Elements._0_8_ + lVar36 * 0x10 + 4) == iVar29)) {
                  if (iVar31 != -1) goto LAB_14c8cb21e;
                  break;
                }
                iVar31 = *(int *)(local_1f8.Elements._0_8_ + lVar36 * 0x10 + 8);
              }
            }
            dStack_3c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_3b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            dStack_3b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_388 = (double)CONCAT44(uVar68,uVar67);
            local_350 = 0;
            uStack_348 = 0;
            local_3c8 = (double)CONCAT44(uVar70,uVar69);
            local_330.Metrics.AreaWeightedNormal.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_330.Metrics.AreaWeightedNormal.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_330.Metrics.AreaWeightedNormal.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_330.Metrics.SurfAreaSum = 0.0;
            local_330.Metrics.UVAreaSum = 0.0;
            local_3a8 = dVar65;
            dStack_3a0 = dVar66;
            local_398 = dVar58;
            dStack_390 = dVar59;
            dStack_380 = dVar63;
            dStack_378 = dVar64;
            dStack_370 = dVar58;
            dStack_368 = dVar59;
            local_360 = dVar61;
            dStack_358 = dVar62;
            local_340 = dVar60;
            dStack_338 = dVar57;
            local_330.RegionIdx = uVar45;
            local_330.NbrRegionIdx = iVar29;
            local_330.Metrics.AvgSqrAreaDistortion = local_3c8;
            local_330.Metrics.NormalSpread = dVar65;
            local_330.Metrics.BoundsUV.Min.field0_0x0._s_0.X = dVar66;
            local_330.Metrics.BoundsUV.Min.field0_0x0._s_0.Y = dVar58;
            local_330.Metrics.BoundsUV.Max.field0_0x0._s_0.X = dVar59;
            local_330.Metrics.BoundsUV.Max.field0_0x0._s_0.Y = local_388;
            local_330.Metrics.Bounds3D.Min.field0_0x0._s_0.X = dVar63;
            local_330.Metrics.Bounds3D.Min.field0_0x0._s_0.Y = dVar64;
            local_330.Metrics.Bounds3D.Min.field0_0x0._s_0.Z = dVar58;
            local_330.Metrics.Bounds3D.Max.field0_0x0._s_0.X = dVar59;
            local_330.Metrics.Bounds3D.Max.field0_0x0._s_0.Y = dVar61;
            local_330.Metrics.Bounds3D.Max.field0_0x0._s_0.Z = dVar62;
            local_330.Metrics.UVPerimeter = dVar60;
            local_330.Metrics.Compactness = dVar57;
            if (((local_6a0.Data <= &local_330) &&
                (&local_330 < (FPotentialMatch *)(local_6a0.Data + (longlong)local_698._4_4_ * 0xa0)
                )) && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar26)) {
              pcVar4 = (code *)swi(3);
              uVar27 = (*pcVar4)();
              return (bool)uVar27;
            }
            iVar29 = (int)local_698;
            if ((int)local_698 == local_698._4_4_) {
              iVar29 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8a0,&local_6a0,(int *)((longlong)&local_698 + 4));
            }
            local_698 = CONCAT44(local_698._4_4_,iVar29 + 1);
            pFVar39 = local_6a0.Data + (longlong)iVar29 * 0xa0;
            *(ulonglong *)pFVar39 = CONCAT44(local_330.NbrRegionIdx,local_330.RegionIdx);
            *(double *)(pFVar39 + 8) = local_330.Metrics.AvgSqrAreaDistortion;
            *(double *)(pFVar39 + 0x10) = local_330.Metrics.AreaWeightedNormal.field0_0x0._s_0.X;
            *(double *)(pFVar39 + 0x18) = local_330.Metrics.AreaWeightedNormal.field0_0x0._s_0.Y;
            *(double *)(pFVar39 + 0x20) = local_330.Metrics.AreaWeightedNormal.field0_0x0._s_0.Z;
            *(double *)(pFVar39 + 0x28) = local_330.Metrics.NormalSpread;
            *(double *)(pFVar39 + 0x30) = local_330.Metrics.BoundsUV.Min.field0_0x0._s_0.X;
            *(double *)(pFVar39 + 0x38) = local_330.Metrics.BoundsUV.Min.field0_0x0._s_0.Y;
            *(double *)(pFVar39 + 0x40) = local_330.Metrics.BoundsUV.Max.field0_0x0._s_0.X;
            *(double *)(pFVar39 + 0x48) = local_330.Metrics.BoundsUV.Max.field0_0x0._s_0.Y;
            *(double *)(pFVar39 + 0x50) = local_330.Metrics.Bounds3D.Min.field0_0x0._s_0.X;
            *(double *)(pFVar39 + 0x58) = local_330.Metrics.Bounds3D.Min.field0_0x0._s_0.Y;
            *(double *)(pFVar39 + 0x60) = local_330.Metrics.Bounds3D.Min.field0_0x0._s_0.Z;
            *(double *)(pFVar39 + 0x68) = local_330.Metrics.Bounds3D.Max.field0_0x0._s_0.X;
            *(double *)(pFVar39 + 0x70) = local_330.Metrics.Bounds3D.Max.field0_0x0._s_0.Y;
            *(double *)(pFVar39 + 0x78) = local_330.Metrics.Bounds3D.Max.field0_0x0._s_0.Z;
            *(double *)(pFVar39 + 0x80) = local_330.Metrics.SurfAreaSum;
            *(double *)(pFVar39 + 0x88) = local_330.Metrics.UVAreaSum;
            *(double *)(pFVar39 + 0x90) = local_330.Metrics.UVPerimeter;
            *(double *)(pFVar39 + 0x98) = local_330.Metrics.Compactness;
          }
LAB_14c8cb21e:
          FVar52.Data = FVar52.Data + 4;
        }
        if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a8.AllocatorInstance.Data);
        }
        TStack_510.UnvisitedBitMask = TStack_510.UnvisitedBitMask & ~TStack_510._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_510);
      }
      local_3f0 = &local_6a0;
      local_3e8 = &local_628;
      local_3e0 = local_5d0;
      local_3d8 = local_538;
      local_3d0 = &local_690;
      local_458 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging'::__l23::<lambda_5>,void,int>
                  ::Call;
      local_450 = &local_3f0;
      local_468.DataPtr = (void **)0x0;
      local_468.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)local_698,(int)local_638,
                 (TFunctionRef<void___cdecl(int)> *)&local_458,local_6ab[0],None,&local_468);
      pFVar24 = local_690;
      FVar23 = local_6c8;
      if (local_690 != (FProgressCancel *)0x0) {
        if (local_690->WasCancelled == false) {
          Core::Private::Function::CheckCallable(*(void **)&local_690->CancelF);
          plVar3 = *(longlong **)&(pFVar24->CancelF).field_0x28;
          pcVar4 = *(code **)&pFVar24->CancelF;
          plVar38 = (longlong *)&(pFVar24->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar38 = plVar3;
          }
          uVar33 = (**(code **)(*plVar38 + 8))();
          bVar26 = (bool)(*pcVar4)(uVar33);
          pFVar24->WasCancelled = bVar26;
          if (bVar26 == false) goto LAB_14c8cb33e;
        }
LAB_14c8cbbb3:
        if ((FPotentialMatch *)local_6a0.Data != (FPotentialMatch *)0x0) {
          FMemory::Free(local_6a0.Data);
        }
        goto LAB_14c8cbbc2;
      }
LAB_14c8cb33e:
      local_560 = &local_680;
      local_558 = &local_560;
      AlgoImpl::
      IntroSortInternal<_UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging_::__l2::FPotentialMatch,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging_::__l2::FPotentialMatch,_UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging_::__l23::<lambda_7>_>_>
                ((FPotentialMatch *)local_6a0.Data,(int)local_698,FVar23,(<lambda_7> *)&local_558);
      local_1a8.Elements._0_8_ = 0;
      local_1a8.Elements._8_8_ = 0;
      local_1a8.Elements._32_8_ = 0;
      local_1a8.Elements._40_4_ = 0;
      local_1a8.Elements._44_4_ = 0x80;
      local_1a8.Elements._48_4_ = 0xffffffff;
      local_1a8.Elements._52_4_ = 0;
      local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_1a8.HashSize = 0;
      local_6a8 = 0;
      if (0 < (int)local_698) {
        local_5b8 = 0;
        do {
          lVar36 = local_5b8;
          uVar45 = 0;
          if ((int)local_6a8 < (int)local_698) {
            uVar45 = ~local_6a8 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar4 = (code *)swi(3);
            uVar27 = (*pcVar4)();
            return (bool)uVar27;
          }
          pFVar43 = local_6a0.Data + lVar36;
          if (local_1a8.Elements._8_4_ == local_1a8.Elements._52_4_) {
            uVar45 = *(uint *)(pFVar43 + 4);
          }
          else {
            FVar40 = (ForElementType<FSetElementId>)&local_1a8.Hash;
            if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar40 = local_1a8.Hash.SecondaryData;
            }
            for (iVar28 = *(int *)((longlong)FVar40 +
                                  (ulonglong)(local_1a8.HashSize - 1U & *(uint *)pFVar43) * 4);
                iVar28 != -1;
                iVar28 = *(int *)(local_1a8.Elements._0_8_ + 4 + (longlong)iVar28 * 0xc)) {
              if (*(uint *)(local_1a8.Elements._0_8_ + (longlong)iVar28 * 0xc) == *(uint *)pFVar43)
              goto LAB_14c8cb824;
            }
            local_5e0 = pFVar43 + 4;
            uVar45 = *(uint *)local_5e0;
            FVar40 = (ForElementType<FSetElementId>)&local_1a8.Hash;
            if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar40 = local_1a8.Hash.SecondaryData;
            }
            for (iVar28 = *(int *)((longlong)FVar40 +
                                  (ulonglong)(local_1a8.HashSize - 1U & uVar45) * 4); iVar28 != -1;
                iVar28 = *(int *)(local_1a8.Elements._0_8_ + 4 + (longlong)iVar28 * 0xc)) {
              if (*(uint *)(local_1a8.Elements._0_8_ + (longlong)iVar28 * 0xc) == uVar45)
              goto LAB_14c8cb824;
            }
          }
          pFVar39 = pFVar43 + 4;
          dVar60 = *(double *)(pFVar43 + 8);
          uVar50 = 0;
          if ((int)uVar45 < local_678[0]) {
            uVar50 = ~uVar45 >> 0x1f;
          }
          local_5e0 = pFVar39;
          if ((uVar50 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar4 = (code *)swi(3);
            uVar27 = (*pcVar4)();
            return (bool)uVar27;
          }
          FVar52.Data = local_680.Data;
          uVar50 = *(uint *)pFVar43;
          lVar36 = (longlong)(int)uVar45 * 0x98;
          uVar45 = 0;
          if ((int)uVar50 < local_678[0]) {
            uVar45 = ~uVar50 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar4 = (code *)swi(3);
            uVar27 = (*pcVar4)();
            return (bool)uVar27;
          }
          lVar37 = (longlong)(int)uVar50 * 0x98;
          dVar57 = *(double *)(FVar52.Data + lVar36 + 0x10) *
                   *(double *)(local_680.Data + lVar37 + 0x10) +
                   *(double *)(local_680.Data + lVar37 + 8) * *(double *)(FVar52.Data + lVar36 + 8)
                   + *(double *)(FVar52.Data + lVar36 + 0x18) *
                     *(double *)(local_680.Data + lVar37 + 0x18);
          if ((double)CONCAT44(uVar56,uVar55) <= dVar57) {
            if ((double)CONCAT44(uVar72,uVar71) <= dVar57) {
              dVar57 = (double)CONCAT44(uVar72,uVar71);
            }
          }
          else {
            dVar57 = (double)CONCAT44(uVar56,uVar55);
          }
          dVar57 = acos(dVar57);
          if (((local_100 <= dVar57 * __real_404ca5dc1a63c1f8) ||
              (dStack_108 < *(double *)(pFVar43 + 0x98) || dStack_108 == *(double *)(pFVar43 + 0x98)
              )) || (dVar6 < dVar60)) {
            local_5c0 = *(undefined4 *)pFVar43;
            pbVar46 = (bool *)&local_5c0;
            pTVar41 = (TTuple<int,int> *)(local_524 + 4);
            local_5bc = *(uint *)pFVar39;
LAB_14c8cb7c7:
            TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::
            Emplace<TTuple<int,int>_>(&local_1f8,pTVar41,pbVar46);
          }
          else if (dVar60 < local_110) {
            bVar26 = FMeshRegionGraph::MergeRegion(&local_628,*(uint *)pFVar39,*(int *)pFVar43);
            if (!bVar26) {
              local_5c8 = *(undefined4 *)pFVar43;
              pbVar46 = (bool *)&local_5c8;
              pTVar41 = (TTuple<int,int> *)local_524;
              local_5c4 = *(uint *)pFVar39;
              goto LAB_14c8cb7c7;
            }
            uVar45 = *(uint *)pFVar43;
            uVar51 = *(undefined8 *)(pFVar43 + 8);
            uVar33 = *(undefined8 *)(pFVar43 + 0x10);
            uVar7 = *(undefined8 *)(pFVar43 + 0x18);
            uVar8 = *(undefined8 *)(pFVar43 + 0x20);
            uVar9 = *(undefined8 *)(pFVar43 + 0x28);
            uVar10 = *(undefined8 *)(pFVar43 + 0x30);
            uVar11 = *(undefined8 *)(pFVar43 + 0x38);
            uVar12 = *(undefined8 *)(pFVar43 + 0x40);
            uVar50 = 0;
            if ((int)uVar45 < local_678[0]) {
              uVar50 = ~uVar45 >> 0x1f;
            }
            uVar2 = *(undefined8 *)(pFVar43 + 0x98);
            uVar13 = *(undefined8 *)(pFVar43 + 0x48);
            uVar14 = *(undefined8 *)(pFVar43 + 0x50);
            uVar15 = *(undefined8 *)(pFVar43 + 0x58);
            uVar16 = *(undefined8 *)(pFVar43 + 0x60);
            uVar17 = *(undefined8 *)(pFVar43 + 0x68);
            uVar18 = *(undefined8 *)(pFVar43 + 0x70);
            uVar19 = *(undefined8 *)(pFVar43 + 0x78);
            uVar20 = *(undefined8 *)(pFVar43 + 0x80);
            uVar21 = *(undefined8 *)(pFVar43 + 0x88);
            uVar22 = *(undefined8 *)(pFVar43 + 0x90);
            if ((uVar50 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar4 = (code *)swi(3);
              uVar27 = (*pcVar4)();
              return (bool)uVar27;
            }
            lVar36 = (longlong)(int)uVar45 * 0x98;
            *(undefined8 *)(local_680.Data + lVar36) = uVar51;
            *(undefined8 *)(local_680.Data + lVar36 + 8) = uVar33;
            *(undefined8 *)(local_680.Data + lVar36 + 0x10) = uVar7;
            *(undefined8 *)(local_680.Data + lVar36 + 0x10 + 8) = uVar8;
            *(undefined8 *)(local_680.Data + lVar36 + 0x20) = uVar9;
            *(undefined8 *)(local_680.Data + lVar36 + 0x20 + 8) = uVar10;
            *(undefined8 *)(local_680.Data + lVar36 + 0x30) = uVar11;
            *(undefined8 *)(local_680.Data + lVar36 + 0x30 + 8) = uVar12;
            *(undefined8 *)(local_680.Data + lVar36 + 0x40) = uVar13;
            *(undefined8 *)(local_680.Data + lVar36 + 0x40 + 8) = uVar14;
            *(undefined8 *)(local_680.Data + lVar36 + 0x50) = uVar15;
            *(undefined8 *)(local_680.Data + lVar36 + 0x50 + 8) = uVar16;
            *(undefined8 *)(local_680.Data + lVar36 + 0x60) = uVar17;
            *(undefined8 *)(local_680.Data + lVar36 + 0x60 + 8) = uVar18;
            *(undefined8 *)(local_680.Data + lVar36 + 0x70) = uVar19;
            *(undefined8 *)(local_680.Data + lVar36 + 0x70 + 8) = uVar20;
            *(undefined8 *)(local_680.Data + lVar36 + 0x80) = uVar21;
            *(undefined8 *)(local_680.Data + lVar36 + 0x80 + 8) = uVar22;
            *(undefined8 *)(local_680.Data + lVar36 + 0x90) = uVar2;
            local_5e8[0] = *(uint *)pFVar39;
            if (local_248._8_4_ != local_214) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_248,
                         local_5e8[0],(int *)local_5e8);
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_1a8,&local_53c,(bool *)pFVar43);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_1a8,&local_528,(bool *)local_5e0);
            uVar55 = (undefined4)__real_bff0000000000000;
            uVar56 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            uVar71 = (undefined4)__real_3ff0000000000000;
            uVar72 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            local_6c7 = '\0';
            dVar6 = local_550;
          }
          pFVar24 = local_690;
          if (local_690 != (FProgressCancel *)0x0) {
            if (local_690->WasCancelled != false) goto LAB_14c8cbb8f;
            Core::Private::Function::CheckCallable(*(void **)&local_690->CancelF);
            plVar3 = *(longlong **)&(pFVar24->CancelF).field_0x28;
            pcVar4 = *(code **)&pFVar24->CancelF;
            plVar38 = (longlong *)&(pFVar24->CancelF).field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar38 = plVar3;
            }
            uVar51 = (**(code **)(*plVar38 + 8))();
            bVar26 = (bool)(*pcVar4)(uVar51);
            pFVar24->WasCancelled = bVar26;
            if (bVar26 != false) goto LAB_14c8cbb8f;
          }
LAB_14c8cb824:
          local_6a8 = local_6a8 + 1;
          local_5b8 = local_5b8 + 0xa0;
        } while ((int)local_6a8 < (int)local_698);
        uVar67 = (undefined4)__real_ffefffffffffffff;
        uVar68 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
        uVar69 = (undefined4)__real_7fefffffffffffff;
        uVar70 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
        uVar51 = local_638;
        dVar58 = ___xmm_ffefffffffffffff7fefffffffffffff;
        dVar59 = _UNK_150a9e6d8;
        dVar60 = ___xmm_3ff00000000000000000000000000000;
        dVar57 = _UNK_15061cbc8;
        dVar61 = ___xmm_ffefffffffffffffffefffffffffffff;
        dVar62 = _UNK_1508ffb58;
        dVar63 = ___xmm_7fefffffffffffff7fefffffffffffff;
        dVar64 = _UNK_150a9e648;
        dVar65 = ___xmm_7fefffffffffffff3ff0000000000000;
        dVar66 = _UNK_1528d0768;
      }
      pFVar24 = local_690;
      uVar54 = 0;
      if (local_690 != (FProgressCancel *)0x0) {
        if (local_690->WasCancelled == false) {
          Core::Private::Function::CheckCallable(*(void **)&local_690->CancelF);
          plVar3 = *(longlong **)&(pFVar24->CancelF).field_0x28;
          pcVar4 = *(code **)&pFVar24->CancelF;
          plVar38 = (longlong *)&(pFVar24->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar38 = plVar3;
          }
          uVar33 = (**(code **)(*plVar38 + 8))();
          bVar26 = (bool)(*pcVar4)(uVar33);
          pFVar24->WasCancelled = bVar26;
          if (bVar26 == false) goto LAB_14c8cb8d7;
        }
LAB_14c8cbb8f:
        local_1a8.HashSize = 0;
        if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1a8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1a8.Elements);
        goto LAB_14c8cbbb3;
      }
LAB_14c8cb8d7:
      uVar44 = (ulonglong)local_684;
      uVar49 = local_640;
      cVar42 = local_6c7;
      if ((local_6c7 != '\0') && ((int)local_684 < (int)local_6b8 + -1)) {
        local_684 = local_684 + 1;
        uVar44 = (ulonglong)local_684;
        uVar49 = local_640 + 1;
        local_640 = uVar49;
        if (local_1f8.Elements._8_4_ != local_1f8.Elements._52_4_) {
          TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::
          UnhashElements(&local_1f8);
          bVar26 = (longlong)local_1f8.Elements._8_8_ < 0;
          local_1f8.Elements._8_8_ = local_1f8.Elements._8_8_ & 0xffffffff00000000;
          if (bVar26) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)&local_1f8,0,
                       (int *)&local_1f8.Elements.field_0xc);
          }
          local_1f8.Elements._48_4_ = 0xffffffff;
          local_1f8.Elements._52_4_ = 0;
          local_1f8.Elements._40_4_ = 0;
        }
        cVar42 = '\0';
      }
      local_1a8.HashSize = 0;
      if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1a8.Elements);
      if ((FPotentialMatch *)local_6a0.Data != (FPotentialMatch *)0x0) {
        FMemory::Free(local_6a0.Data);
      }
    } while (cVar42 == '\0');
    local_598.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10);
    local_598._padding_._4_4_ = (undefined4)uVar51;
    local_598._padding_._0_4_ = 0;
    local_598.UnvisitedBitMask = 0xffffffff;
    local_598.CurrentBitIndex = 0;
    local_598.BaseBitIndex = 0;
    if (local_220 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_598);
    }
    uVar50 = local_220;
    uStack_668 = CONCAT44(local_598._padding_._4_4_,(undefined4)local_598._padding_);
    local_670 = (longlong *)local_248;
    uStack_654 = local_598.CurrentBitIndex;
    uStack_658 = local_598.UnvisitedBitMask;
    uStack_64c = local_598._28_4_;
    local_650 = local_598.BaseBitIndex;
    iStack_648 = local_248._8_4_ - local_214;
    local_660 = local_598.Array;
    uVar45 = local_220 & 0xffffffe0;
    iVar28 = (int)local_220 >> 5;
    bVar35 = (byte)local_220;
    uStack_4c0 = CONCAT44(uStack_644,iStack_648);
    TStack_4e0.Array = local_598.Array;
    local_4e8 = local_670;
    TStack_4e0._padding_ = uStack_668;
    TStack_4e0._16_8_ = _uStack_658;
    TStack_4e0._24_8_ = _local_650;
    if (((int)local_220 < 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    this_00 = local_5d8;
    if (uVar50 != local_220) {
      puVar47 = (uint *)(local_248 + 0x10);
      if (local_228 != (uint *)0x0) {
        puVar47 = local_228;
      }
      uVar50 = -1 << (bVar35 & 0x1f) & puVar47[iVar28];
      while (uVar50 == 0) {
        lVar36 = (longlong)iVar28;
        uVar45 = uVar45 + 0x20;
        iVar28 = iVar28 + 1;
        uVar50 = local_220;
        if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_14c8cbb20;
        uVar50 = (puVar47 + 1)[lVar36];
      }
      uVar49 = (ulonglong)(-uVar50 & uVar50) * 2 + 1;
      lVar36 = 0x3f;
      if (uVar49 != 0) {
        for (; uVar49 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      local_578 = (int)lVar36;
      uVar50 = (uVar45 - 1) + local_578;
      if ((int)local_220 < (int)uVar50) {
        uVar50 = local_220;
      }
    }
LAB_14c8cbb20:
    while( true ) {
      plVar3 = local_4e8;
      if ((int)local_4e8[1] - *(int *)((longlong)local_4e8 + 0x34) != (int)uStack_4c0) {
        local_6ad = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6ad);
      }
      iVar28 = (int)uVar54;
      if (((TStack_4e0.CurrentBitIndex == uVar50) &&
          (TStack_4e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10))) &&
         (plVar3 == (longlong *)local_248)) break;
      uVar45 = *(uint *)(*plVar3 + (longlong)TStack_4e0.CurrentBitIndex * 0xc);
      if (param_4) {
        pFVar34 = FMeshConnectedComponents::operator[](this_00,uVar45);
        iVar29 = (pFVar34->Indices).ArrayNum;
      }
      else {
        iVar29 = 0;
      }
      iVar31 = FMeshRegionGraph::IsRegion(&local_628,uVar45);
      if (iVar31 == 0) {
        iVar31 = 0;
      }
      else {
        uVar30 = 0;
        if ((int)uVar45 < local_628.Regions.ArrayNum) {
          uVar30 = ~uVar45 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          uVar27 = (*pcVar4)();
          return (bool)uVar27;
        }
        iVar31 = *(int *)(local_628.Regions.AllocatorInstance.Data +
                         (longlong)(int)uVar45 * 0x30 + 0x10);
      }
      uVar54 = (ulong64)(iVar28 + (uint)(iVar29 < iVar31));
      TStack_4e0.UnvisitedBitMask = TStack_4e0.UnvisitedBitMask & ~TStack_4e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e0);
    }
    if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar54);
    }
    piVar1 = &local_5b0->ArrayMax;
    if (local_5b0->ArrayMax < iVar28) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar28,&local_5b0->AllocatorInstance,local_5b0->ArrayNum,piVar1);
    }
    uVar45 = local_220;
    iVar28 = 0;
    local_650 = 0;
    uStack_654 = 0;
    if (local_220 == 0) {
LAB_14c8cbe64:
      uVar50 = (uint)local_638;
    }
    else {
      puVar47 = (uint *)(local_248 + 0x10);
      if (local_228 != (uint *)0x0) {
        puVar47 = local_228;
      }
      uVar50 = *puVar47;
      while (uVar50 == 0) {
        lVar36 = (longlong)iVar28;
        local_650 = local_650 + 0x20;
        iVar28 = iVar28 + 1;
        uStack_654 = local_220;
        if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_14c8cbe64;
        uVar50 = (puVar47 + 1)[lVar36];
      }
      uVar50 = -uVar50 & uVar50;
      uVar49 = (ulonglong)uVar50 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar49 != 0) {
        for (; uVar49 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      local_574 = (int)lVar36;
      uStack_654 = local_574 + -1 + local_650;
      if ((int)local_220 < (int)uStack_654) {
        uStack_654 = local_220;
      }
    }
    local_670 = (longlong *)local_248;
    local_660 = (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10);
    iStack_648 = local_248._8_4_ - local_214;
    uVar30 = local_220 & 0xffffffe0;
    uStack_658 = 0xffffffff;
    local_6a8 = -1 << ((byte)local_220 & 0x1f);
    uStack_668 = CONCAT44(uVar50,iVar28);
    uStack_64c = local_254;
    TStack_4b0._padding_ = uStack_668;
    iVar28 = (int)local_220 >> 5;
    uStack_490 = CONCAT44(uStack_644,iStack_648);
    TStack_4b0.UnvisitedBitMask = 0xffffffff;
    TStack_4b0.CurrentBitIndex = uStack_654;
    TStack_4b0.BaseBitIndex = local_650;
    TStack_4b0._28_4_ = local_254;
    local_4b8 = local_670;
    TStack_4b0.Array = local_660;
    if (((int)local_220 < 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    if (uVar45 != local_220) {
      puVar47 = (uint *)(local_248 + 0x10);
      if (local_228 != (uint *)0x0) {
        puVar47 = local_228;
      }
      uVar45 = local_6a8 & puVar47[iVar28];
      while (uVar45 == 0) {
        lVar36 = (longlong)iVar28;
        uVar30 = uVar30 + 0x20;
        iVar28 = iVar28 + 1;
        uVar45 = local_220;
        if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_14c8cbfb0;
        uVar45 = (puVar47 + 1)[lVar36];
      }
      uVar49 = (ulonglong)(-uVar45 & uVar45) * 2 + 1;
      lVar36 = 0x3f;
      if (uVar49 != 0) {
        for (; uVar49 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      local_570 = (int)lVar36;
      uVar45 = local_570 + -1 + uVar30;
      if ((int)local_220 < (int)uVar45) {
        uVar45 = local_220;
      }
    }
LAB_14c8cbfb0:
    do {
      plVar3 = local_4b8;
      if ((int)local_4b8[1] - *(int *)((longlong)local_4b8 + 0x34) != (int)uStack_490) {
        local_6ac = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6ac);
      }
      if (((TStack_4b0.CurrentBitIndex == uVar45) &&
          (TStack_4b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10))) &&
         (plVar3 == (longlong *)local_248)) {
        bVar26 = true;
        goto LAB_14c8cbbc4;
      }
      uVar50 = *(uint *)(*plVar3 + (longlong)TStack_4b0.CurrentBitIndex * 0xc);
      if (param_4) {
        pFVar34 = FMeshConnectedComponents::operator[](local_5d8,uVar50);
        iVar28 = (pFVar34->Indices).ArrayNum;
      }
      else {
        iVar28 = 0;
      }
      iVar29 = FMeshRegionGraph::IsRegion(&local_628,uVar50);
      if (iVar29 == 0) {
        iVar29 = 0;
        iVar31 = local_628.Regions.ArrayNum;
      }
      else {
        uVar30 = 0;
        if ((int)uVar50 < local_628.Regions.ArrayNum) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if (uVar30 == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar4 = (code *)swi(3);
            uVar27 = (*pcVar4)();
            return (bool)uVar27;
          }
        }
        iVar29 = *(int *)(local_628.Regions.AllocatorInstance.Data +
                         (longlong)(int)uVar50 * 0x30 + 0x10);
        iVar31 = local_628.Regions.ArrayNum;
      }
      if (iVar28 < iVar29) {
        uVar30 = 0;
        if ((int)uVar50 < iVar31) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          uVar27 = (*pcVar4)();
          return (bool)uVar27;
        }
        pTVar25 = local_5b0;
        pFVar39 = local_628.Regions.AllocatorInstance.Data + (longlong)(int)uVar50 * 0x30 + 8;
        pFVar43 = (local_5b0->AllocatorInstance).Data;
        if (((pFVar43 <= pFVar39) && (pFVar39 < pFVar43 + (longlong)*piVar1 * 0x10)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          uVar27 = (*pcVar4)();
          return (bool)uVar27;
        }
        iVar28 = pTVar25->ArrayNum;
        if (iVar28 == *piVar1) {
          iVar28 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar25->AllocatorInstance,piVar1);
        }
        lVar36 = (longlong)iVar28;
        pTVar25->ArrayNum = iVar28 + 1;
        pFVar43 = (pTVar25->AllocatorInstance).Data;
        *(undefined8 *)(pFVar43 + lVar36 * 0x10) = 0;
        *(undefined8 *)(pFVar43 + lVar36 * 0x10) = *(undefined8 *)pFVar39;
        *(undefined8 *)pFVar39 = 0;
        *(undefined4 *)(pFVar43 + lVar36 * 0x10 + 8) = *(undefined4 *)(pFVar39 + 8);
        *(undefined4 *)(pFVar43 + lVar36 * 0x10 + 0xc) = *(undefined4 *)(pFVar39 + 0xc);
        *(undefined8 *)(pFVar39 + 8) = 0;
      }
      pFVar24 = local_690;
      if (local_690 != (FProgressCancel *)0x0) {
        if (local_690->WasCancelled != false) goto LAB_14c8cbbc2;
        Core::Private::Function::CheckCallable(*(void **)&local_690->CancelF);
        plVar3 = *(longlong **)&(pFVar24->CancelF).field_0x28;
        pcVar4 = *(code **)&pFVar24->CancelF;
        plVar38 = (longlong *)&(pFVar24->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar38 = plVar3;
        }
        uVar51 = (**(code **)(*plVar38 + 8))();
        bVar26 = (bool)(*pcVar4)(uVar51);
        pFVar24->WasCancelled = bVar26;
        if (bVar26 != false) goto LAB_14c8cbbc2;
      }
      TStack_4b0.UnvisitedBitMask = TStack_4b0.UnvisitedBitMask & ~TStack_4b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b0);
    } while( true );
  }
  bVar26 = false;
  goto LAB_14c8cbbfa;
LAB_14c8cbbc2:
  bVar26 = false;
LAB_14c8cbbc4:
  if (local_6c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.Data);
  }
  local_1f8.HashSize = 0;
  if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1f8.Elements);
LAB_14c8cbbfa:
  if (local_680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data);
  }
  local_200 = 0;
  if (local_208 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_208);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_248);
LAB_14c8cbc2c:
  if (local_628.EmptyTriSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.EmptyTriSet.AllocatorInstance.Data);
  }
  if (local_628.TriangleNbrTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.TriangleNbrTris.AllocatorInstance.Data);
  }
  if (local_628.TriangleToRegionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.TriangleToRegionMap.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FMeshRegionGraph::FRegion,int>
            ((FRegion *)local_628.Regions.AllocatorInstance.Data,local_628.Regions.ArrayNum);
  if ((FRegion *)local_628.Regions.AllocatorInstance.Data != (FRegion *)0x0) {
    FMemory::Free(local_628.Regions.AllocatorInstance.Data);
  }
  return bVar26;
}

// ComputeUVsFromTriangleSets @ 14c8ceb40

int __thiscall
UE::Geometry::FPatchBasedMeshUVGenerator::ComputeUVsFromTriangleSets
          (FPatchBasedMeshUVGenerator *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4,FProgressCancel *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  bool local_res8 [8];
  FExpMapOptions local_60;
  FDynamicMeshUVEditor local_50;
  
  local_60.NormalSmoothingRounds = this->NormalSmoothingRounds;
  local_60.NormalSmoothingAlpha = this->NormalSmoothingAlpha;
  FDynamicMeshUVEditor::FDynamicMeshUVEditor(&local_50,param_1,param_2);
  iVar6 = param_3->ArrayNum;
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_4,local_res8,iVar6);
  iVar12 = 0;
  uVar11 = 0;
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < param_3->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      FVar4 = (FScriptContainerElement)
              FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
                        (&local_50,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)
                         ((param_3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10),
                         &local_60,(FUVEditResult *)0x0);
      uVar5 = 0;
      if ((int)uVar11 < param_4->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      (param_4->AllocatorInstance).Data[lVar10] = FVar4;
      uVar5 = 0;
      if ((int)uVar11 < param_4->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      if ((param_4->AllocatorInstance).Data[lVar10] == (FScriptContainerElement)0x0) {
        iVar12 = iVar12 + 1;
      }
      if (param_5 != (FProgressCancel *)0x0) {
        if (param_5->WasCancelled != false) {
          return -1;
        }
        Core::Private::Function::CheckCallable(*(void **)&param_5->CancelF);
        plVar1 = *(longlong **)&(param_5->CancelF).field_0x28;
        pcVar2 = *(code **)&param_5->CancelF;
        plVar8 = (longlong *)&(param_5->CancelF).field_0x10;
        if (plVar1 != (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        bVar3 = (bool)(*pcVar2)(uVar7);
        param_5->WasCancelled = bVar3;
        if (bVar3 != false) {
          return -1;
        }
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar6);
  }
  return iVar12;
}

