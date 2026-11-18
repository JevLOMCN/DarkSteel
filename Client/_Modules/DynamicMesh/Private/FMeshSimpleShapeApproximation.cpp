// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 22

// operator() @ 14c8a12a0

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_AlignedBoxes'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar4;
  FSimpleShapeSet3d *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TVector<double>_u_0 local_a8;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar4 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  pFVar5 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  uVar9 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  bVar8 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                    (this_00,(FSourceMeshCache *)
                             ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                             (longlong)param_1 * 0xb8),pFVar5,pFVar4);
  if (!bVar8) {
    lVar6 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar6 + 0x78)) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
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
    UE::Geometry::FDynamicMesh3::GetBounds
              (*(FDynamicMesh3 **)(*(longlong *)(lVar6 + 0x70) + (longlong)param_1 * 8),
               (TAxisAlignedBox3<double> *)&local_a8._s_0,false);
    if (((local_a8._s_0.X <= local_90) && (local_a8._s_0.Y <= local_88)) &&
       (local_a8._s_0.Z <= local_80)) {
      local_48 = 0x3ff0000000000000;
      lVar6 = *(longlong *)this;
      local_78 = (local_a8._s_0.X + local_90) * __real_3fe0000000000000;
      dStack_60 = 0.0;
      local_68 = (local_a8._s_0.Z + local_80) * __real_3fe0000000000000;
      dVar14 = (local_90 - local_a8._s_0.X) * __real_3fe0000000000000;
      dVar13 = (local_80 - local_a8._s_0.Z) * __real_3fe0000000000000;
      dStack_70 = (local_a8._s_0.Y + local_88) * __real_3fe0000000000000;
      dVar12 = (local_88 - local_a8._s_0.Y) * __real_3fe0000000000000;
      local_58 = 0;
      uStack_50 = 0;
      uStack_40 = *(double *)(lVar6 + 8) * __real_3fe0000000000000;
      if (uStack_40 <= dVar14) {
        uStack_40 = dVar14;
      }
      local_38 = *(double *)(lVar6 + 8) * __real_3fe0000000000000;
      if (local_38 <= dVar12) {
        local_38 = dVar12;
      }
      uStack_30 = *(double *)(lVar6 + 8) * __real_3fe0000000000000;
      if (uStack_30 <= dVar13) {
        uStack_30 = dVar13;
      }
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar6 = *(longlong *)((longlong)this + 8);
      if ((*(double **)(lVar6 + 0x10) <= &local_78) &&
         (&local_78 < *(double **)(lVar6 + 0x10) + (longlong)*(int *)(lVar6 + 0x1c) * 10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)(lVar6 + 0x18);
      if (iVar10 == *(int *)(lVar6 + 0x1c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)(lVar6 + 0x10),(int *)(lVar6 + 0x1c));
      }
      lVar11 = (longlong)iVar10;
      *(int *)(lVar6 + 0x18) = iVar10 + 1;
      lVar6 = *(longlong *)(lVar6 + 0x10);
      pdVar1 = (double *)(lVar6 + lVar11 * 0x50);
      *pdVar1 = local_78;
      pdVar1[1] = dStack_70;
      pdVar1 = (double *)(lVar6 + 0x10 + lVar11 * 0x50);
      *pdVar1 = local_68;
      pdVar1[1] = dStack_60;
      puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar11 * 0x50);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar3 = (undefined4 *)(lVar6 + 0x30 + lVar11 * 0x50);
      *puVar3 = (undefined4)local_48;
      puVar3[1] = local_48._4_4_;
      puVar3[2] = (undefined4)uStack_40;
      puVar3[3] = uStack_40._4_4_;
      puVar3 = (undefined4 *)(lVar6 + 0x40 + lVar11 * 0x50);
      *puVar3 = (undefined4)local_38;
      puVar3[1] = local_38._4_4_;
      puVar3[2] = (undefined4)uStack_30;
      puVar3[3] = uStack_30._4_4_;
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
  }
  return;
}

// operator() @ 14c8a1590

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_Capsules'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar3;
  FSimpleShapeSet3d *pFVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  FSimpleShapeFitsResult local_318;
  
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar3 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  pFVar4 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  uVar9 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  bVar8 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                    (this_00,(FSourceMeshCache *)
                             ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                             (longlong)param_1 * 0xb8),pFVar4,pFVar3);
  if (!bVar8) {
    lVar5 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar5 + 0x78)) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
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
    pFVar6 = *(FDynamicMesh3 **)(*(longlong *)(lVar5 + 0x70) + (longlong)param_1 * 8);
    UE::Geometry::FSimpleShapeFitsResult::FSimpleShapeFitsResult(&local_318);
    UE::Geometry::ComputeSimpleShapeFits
              (pFVar6,false,false,true,*(double *)(*(longlong *)this + 8),
               *(bool *)(*(longlong *)this + 0x69),&local_318,(FProgressCancel *)0x0);
    if (local_318.bHaveCapsule != false) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar5 = *(longlong *)((longlong)this + 8);
      local_358 = local_318.Capsule.Segment.Center.field0_0x0._s_0.X;
      dStack_350 = local_318.Capsule.Segment.Center.field0_0x0._s_0.Y;
      local_348 = local_318.Capsule.Segment.Center.field0_0x0._s_0.Z;
      dStack_340 = local_318.Capsule.Segment.Direction.field0_0x0._s_0.X;
      local_338 = (double)local_318.Capsule.Segment.Direction.field0_0x0._8_8_;
      uStack_330 = (double)local_318.Capsule.Segment.Direction.field0_0x0._16_8_;
      local_328 = local_318.Capsule.Segment.Extent;
      uStack_320 = local_318.Capsule.Radius;
      if ((*(double **)(lVar5 + 0x20) <= &local_358) &&
         (&local_358 < *(double **)(lVar5 + 0x20) + (longlong)*(int *)(lVar5 + 0x2c) * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)(lVar5 + 0x28);
      if (iVar10 == *(int *)(lVar5 + 0x2c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar5 + 0x20),(int *)(lVar5 + 0x2c));
      }
      *(int *)(lVar5 + 0x28) = iVar10 + 1;
      lVar5 = *(longlong *)(lVar5 + 0x20);
      lVar11 = (longlong)iVar10 * 0x40;
      *(double *)(lVar11 + lVar5) = local_358;
      ((double *)(lVar11 + lVar5))[1] = dStack_350;
      pdVar1 = (double *)(lVar11 + 0x10 + lVar5);
      *pdVar1 = local_348;
      pdVar1[1] = dStack_340;
      puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar5);
      *puVar2 = (undefined4)local_338;
      puVar2[1] = local_338._4_4_;
      puVar2[2] = (undefined4)uStack_330;
      puVar2[3] = uStack_330._4_4_;
      puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar5);
      *puVar2 = (undefined4)local_328;
      puVar2[1] = local_328._4_4_;
      puVar2[2] = (undefined4)uStack_320;
      puVar2[3] = uStack_320._4_4_;
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_318.Convex);
  }
  return;
}

// operator() @ 14c8a1820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c8a1a39) */
/* WARNING: Removing unreachable block (ram,0x00014c8a1a4d) */
/* WARNING: Removing unreachable block (ram,0x00014c8a1a51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double dVar1;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar2;
  FSimpleShapeSet3d *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5a8 [4];
  int local_5a4;
  int *local_5a0;
  undefined8 local_598;
  undefined4 uStack_590;
  uint uStack_58c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_588;
  FDynamicMesh3 local_578;
  undefined1 local_348 [32];
  undefined **local_328;
  longlong lStack_320;
  undefined8 local_318;
  undefined ***pppuStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [192];
  undefined1 local_218 [64];
  void *local_1d8;
  undefined4 local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [128];
  longlong local_128;
  longlong local_118 [3];
  longlong *local_100;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar2 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  pFVar3 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  uVar10 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar9 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                    (this_00,(FSourceMeshCache *)
                             ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                             (longlong)param_1 * 0xb8),pFVar3,pFVar2);
  if (bVar9) {
    return;
  }
  if (((FProgressCancel *)**(undefined8 **)((longlong)this + 0x18) != (FProgressCancel *)0x0) &&
     (bVar9 = FProgressCancel::Cancelled
                        ((FProgressCancel *)**(undefined8 **)((longlong)this + 0x18)), bVar9)) {
    return;
  }
  lVar4 = *(longlong *)this;
  iVar14 = 0;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar4 + 0x78)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = local_318;
  dVar6 = __real_3fe0000000000000;
  lStack_320 = *(longlong *)this;
  dVar1 = *(double *)(lStack_320 + 0x48);
  local_348._8_8_ = dVar1;
  if ((*(char *)(lStack_320 + 0x50) != '\0') &&
     (local_348._8_8_ = *(double *)(lStack_320 + 0x58) * __real_3fe0000000000000,
     dVar1 <= (double)local_348._8_8_)) {
    local_348._8_8_ = dVar1;
  }
  if ((double)local_348._8_8_ <= __real_3e45798ee2308c3a) {
    local_348._8_8_ = __real_3e45798ee2308c3a;
  }
  local_318 = local_2e8;
  pppuStack_310 = (undefined ***)0x0;
  local_328 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  local_308 = 0;
  uStack_300 = local_348._24_8_;
  local_2e8 = uVar8;
  uStack_2e0 = 0;
  uStack_2e0 = 0;
  local_308 = 0;
  pppuStack_310 = (undefined ***)0x0;
  local_328 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  local_348._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_348[0] = true;
  local_2d8._0_8_ = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
  local_2d8._8_8_ = _UNK_150afcb08;
  local_2d8._32_8_ = ___xmm_4065400000000000403e000000000000;
  local_2d8._40_8_ = _UNK_150b37cc8;
  local_2d8._48_8_ = __real_3fb999999999999a;
  local_2d8._96_8_ = 0.0;
  local_2d8._104_8_ = 0.0;
  local_2d8._56_4_ = 0x32;
  local_2d8._16_8_ = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
  local_2d8._24_8_ = _UNK_150b37cb8;
  local_2d8._128_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2d8._136_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2d8._112_8_ = ___xmm_3ff00000000000000000000000000000;
  local_2d8._120_8_ = _UNK_15061cbc8;
  local_2d8[0x3c] = true;
  local_2d8[0x3d] = true;
  local_2d8._144_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2d8._168_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_2d8._72_4_ = -1;
  local_2d8._80_8_ = (FScriptContainerElement *)0x0;
  local_2d8._88_4_ = 0;
  local_2d8._92_4_ = 0;
  local_2d8._152_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_2d8._160_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_2d8._176_8_ = (FScriptContainerElement *)0x0;
  local_2d8._184_4_ = 0;
  local_2d8._188_4_ = 0;
  local_218._0_8_ = 0;
  local_218._8_8_ = 0;
  local_218._32_8_ = 0;
  local_218._40_4_ = 0;
  local_218._44_4_ = 0x80;
  local_218._48_4_ = 0xffffffff;
  local_218._52_4_ = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  local_2d8._64_8_ = local_348._8_8_;
  UE::Geometry::FConvexDecomposition3::InitializeFromMesh
            ((FConvexDecomposition3 *)local_2d8,
             *(FDynamicMesh3 **)(*(longlong *)(lVar4 + 0x70) + (longlong)param_1 * 8),
             (FPreprocessMeshOptions *)local_348);
  if ((local_2d8._88_4_ == 1) &&
     (iVar15 = 1, *(char *)(*(longlong *)local_2d8._80_8_ + 0x2d8) == '\0')) {
LAB_14c8a1be5:
    if ((iVar15 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar9 = UE::Geometry::FDynamicMesh3::IsClosed(*(FDynamicMesh3 **)local_2d8._80_8_);
  }
  else {
    local_5a8[0] = 0;
    bVar9 = FConvexDecomposition3::IsInputSolid'::__l3::<lambda_1>::operator()(local_5a8);
    if (bVar9) {
      iVar15 = local_2d8._88_4_;
      goto LAB_14c8a1be5;
    }
    bVar9 = false;
  }
  lVar4 = *(longlong *)this;
  local_2d8[0x3d] = bVar9;
  if (*(char *)(lVar4 + 0x50) == '\0') {
    fVar16 = (float)*(int *)(lVar4 + 0x30);
    UE::Geometry::FConvexDecomposition3::Compute
              ((FConvexDecomposition3 *)local_2d8,*(int *)(lVar4 + 0x30),
               (int)ROUND((fVar16 + fVar16) * *(float *)(lVar4 + 0x38) - __real_3f000000) >> 1,
               *(double *)(lVar4 + 0x40),*(double *)(lVar4 + 0x48),-1,false);
    goto LAB_14c8a1eda;
  }
  UE::Geometry::FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings
            ((FNegativeSpaceSampleSettings *)local_1a8);
  dVar1 = __real_3f1a36e2eb1c432d;
  lVar4 = *(longlong *)this;
  local_1a8[0x40] = (bool)(bVar9 ^ 1);
  local_1a8._56_8_ = __real_3ff0000000000000;
  local_1a8._8_8_ = 0.0;
  local_1a8._72_8_ = __real_3f1a36e2eb1c432d;
  local_1a8._44_4_ = 0x400;
  local_1a8._4_4_ = 0;
  local_1a8[0x29] = *(undefined1 *)(lVar4 + 0x68);
  local_1a8._24_8_ = *(double *)(lVar4 + 0x58);
  local_598 = 0;
  uStack_590 = 0;
  local_2d8._64_8_ = local_348._8_8_;
  local_1a8._32_8_ = (*(double *)(lVar4 + 0x58) + *(double *)(lVar4 + 0x60)) * dVar6;
  local_1a8[0] = NavigableVoxelSearch;
  local_1a8[0x28] = true;
  local_2d8._56_4_ = 4;
  if ((double)local_1a8._32_8_ <= __real_3ff0000000000000) {
    local_1a8._32_8_ = __real_3ff0000000000000;
  }
  local_2d8[0x3c] = false;
  local_2d8._32_8_ = __real_4066800000000000;
  local_588._8_8_ = (ulonglong)uStack_58c << 0x20;
  local_588.DataPtr = (TVector<double> *)0x0;
  UE::Geometry::FConvexDecomposition3::InitializeNegativeSpace
            ((FConvexDecomposition3 *)local_2d8,(FNegativeSpaceSampleSettings *)local_1a8,&local_588
            );
  dVar7 = __real_bff0000000000000;
  local_5a4 = 0;
  if (*(char *)(*(longlong *)this + 0x34) == '\0') {
    iVar15 = 0xf4241;
LAB_14c8a1d80:
    do {
      iVar11 = UE::Geometry::FConvexDecomposition3::SplitWorst
                         ((FConvexDecomposition3 *)local_2d8,false,dVar7,true,
                          (double)local_1a8._24_8_ * dVar6);
      if (iVar11 == 0) break;
      if (999999 < local_5a4) {
        local_5a0 = &local_5a4;
        bVar9 = ``UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions'::
                __l2::<lambda_1>::operator()'::__l17::<lambda_2>::operator()(&local_5a0);
        if (!bVar9) break;
      }
      local_5a4 = local_5a4 + 1;
    } while (local_5a4 < iVar15);
  }
  else {
    iVar15 = *(int *)(*(longlong *)this + 0x30) + -1;
    if (0 < iVar15) goto LAB_14c8a1d80;
  }
  UE::Geometry::FConvexDecomposition3::FixHullOverlapsInNegativeSpace
            ((FConvexDecomposition3 *)local_2d8,dVar1,dVar1);
  lVar4 = *(longlong *)this;
  if (*(char *)(lVar4 + 0x34) == '\0') {
    iVar15 = -1;
  }
  else {
    iVar15 = *(int *)(lVar4 + 0x30);
  }
  UE::Geometry::FConvexDecomposition3::MergeBest
            ((FConvexDecomposition3 *)local_2d8,iVar15,0.0,*(double *)(lVar4 + 0x48),true,false,-1,
             (FSphereCovering *)0x0,(TTransform<double> *)0x0);
  if (local_128 != 0) {
    plVar12 = local_118;
    if (local_100 != (longlong *)0x0) {
      plVar12 = local_100;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_1a8._80_8_ != 0) {
    plVar12 = (longlong *)(local_1a8 + 0x60);
    if ((longlong *)local_1a8._120_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_1a8._120_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_14c8a1eda:
  if (0 < (int)local_2d8._88_4_) {
    do {
      UE::Geometry::FConvexDecomposition3::GetHullMesh
                ((FConvexDecomposition3 *)local_2d8,&local_578,iVar14);
      if ((*(char *)(*(longlong *)this + 0x10) != '\0') &&
         (bVar9 = UE::Geometry::FMeshConvexHull::SimplifyHull
                            (&local_578,*(int *)(*(longlong *)this + 0x14),
                             (FProgressCancel *)**(undefined8 **)((longlong)this + 0x18)), !bVar9))
      {
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_578);
        break;
      }
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar4 = *(longlong *)((longlong)this + 8);
      iVar15 = *(int *)(lVar4 + 0x38);
      if (iVar15 == *(int *)(lVar4 + 0x3c)) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x230,8,(ForAnyElementType *)(lVar4 + 0x30),(int *)(lVar4 + 0x3c));
      }
      *(int *)(lVar4 + 0x38) = iVar15 + 1;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                ((FDynamicMesh3 *)((longlong)iVar15 * 0x230 + *(longlong *)(lVar4 + 0x30)),
                 &local_578);
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_578);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)local_2d8._88_4_);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  local_1d0 = 0;
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_218);
  if ((FScriptContainerElement *)local_2d8._176_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2d8._176_8_);
  }
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
              *)(local_2d8 + 0x50));
  if ((code *)local_348._16_8_ != (code *)0x0) {
    pppuVar13 = &local_328;
    if (pppuStack_310 != (undefined ***)0x0) {
      pppuVar13 = pppuStack_310;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  return;
}

// operator() @ 14c8a2060

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHulls'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar1;
  FSimpleShapeSet3d *pFVar2;
  longlong lVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FMeshConvexHull local_288;
  
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar1 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  pFVar2 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
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
  bVar6 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                    (this_00,(FSourceMeshCache *)
                             ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                             (longlong)param_1 * 0xb8),pFVar2,pFVar1);
  if (!bVar6) {
    lVar3 = *(longlong *)this;
    uVar7 = 0;
    if (param_1 < *(int *)(lVar3 + 0x78)) {
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
    pFVar4 = *(FDynamicMesh3 **)(*(longlong *)(lVar3 + 0x70) + (longlong)param_1 * 8);
    local_288.MinDimension = 0.0;
    local_288.VertexSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.VertexSet.ArrayNum = 0;
    local_288.VertexSet.ArrayMax = 0;
    local_288.bPostSimplify = false;
    local_288.MaxTargetFaceCount = 0;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_288.ConvexHull);
    lVar3 = *(longlong *)this;
    local_288.bPostSimplify = *(bool *)(lVar3 + 0x10);
    local_288.MaxTargetFaceCount = *(int *)(lVar3 + 0x14);
    local_288.MinDimension = *(double *)(lVar3 + 8);
    local_288.Mesh = pFVar4;
    bVar6 = UE::Geometry::FMeshConvexHull::Compute
                      (&local_288,(FProgressCancel *)**(undefined8 **)((longlong)this + 0x18));
    if (bVar6) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar3 = *(longlong *)((longlong)this + 8);
      iVar8 = *(int *)(lVar3 + 0x38);
      if (iVar8 == *(int *)(lVar3 + 0x3c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x230,8,(ForAnyElementType *)(lVar3 + 0x30),(int *)(lVar3 + 0x3c));
      }
      *(int *)(lVar3 + 0x38) = iVar8 + 1;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                ((FDynamicMesh3 *)((longlong)iVar8 * 0x230 + *(longlong *)(lVar3 + 0x30)),
                 &local_288.ConvexHull);
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_288.ConvexHull);
    if (local_288.VertexSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.VertexSet.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14c8a2250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_LevelSets'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar4;
  FSimpleShapeSet3d *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  ForAnyElementType *pFVar15;
  FText *pFVar16;
  uint uVar17;
  double dVar18;
  undefined1 auStack_3a8 [32];
  FText *local_388;
  FText *local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  FText local_358;
  undefined4 local_348;
  undefined8 local_340;
  undefined1 local_338 [8];
  TVector<double>_u_0 local_330;
  double dStack_318;
  double local_310;
  double dStack_308;
  FText local_300;
  TVector<double>_u_0 local_2e8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [112];
  undefined **local_248;
  code *local_240;
  undefined ***local_230;
  TVector<float>_u_0 local_228;
  ForAnyElementType local_218;
  undefined8 local_210;
  FVector3i_u_0 local_208;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  FVector3i_u_0 local_1e8;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FVector3i_u_0 local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  FScriptContainerElement *local_158;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  float local_138;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_128;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar4 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  pFVar16 = (FText *)(longlong)param_1;
  pFVar5 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  iVar12 = (this_00->SourceMeshCaches).ArrayNum;
  uVar17 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < iVar12) {
    uVar11 = uVar17;
  }
  if (uVar11 == 0) {
    local_388 = pFVar16;
    local_380 = (FText *)(longlong)iVar12;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar10 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                     (this_00,(FSourceMeshCache *)
                              ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                              (longlong)pFVar16 * 0xb8),pFVar5,pFVar4);
  if (!bVar10) {
    lVar6 = *(longlong *)this;
    iVar12 = *(int *)(lVar6 + 0x78);
    uVar11 = 0;
    if (param_1 < iVar12) {
      uVar11 = uVar17;
    }
    if (uVar11 == 0) {
      local_388 = pFVar16;
      local_380 = (FText *)(longlong)iVar12;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    UE::Geometry::FDynamicMesh3::GetBounds
              (*(FDynamicMesh3 **)(*(longlong *)(lVar6 + 0x70) + (longlong)pFVar16 * 8),
               (TAxisAlignedBox3<double> *)&local_330._s_0,false);
    dVar18 = dStack_308 - local_330._s_0.Z;
    lVar6 = *(longlong *)this;
    dVar9 = local_310 - local_330._s_0.Y;
    dVar8 = dStack_318 - local_330._s_0.X;
    if (dVar18 <= 0.0) {
      dVar18 = 0.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    uVar11 = 0;
    if (param_1 < *(int *)(lVar6 + 0x78)) {
      uVar11 = uVar17;
    }
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    if (dVar9 <= dVar18) {
      dVar9 = dVar18;
    }
    if (dVar9 <= dVar8) {
      dVar9 = dVar8;
    }
    dVar9 = dVar9 / (double)*(int *)(lVar6 + 0x6c);
    if (uVar11 == 0) {
      local_388 = pFVar16;
      local_380 = (FText *)(longlong)*(int *)(lVar6 + 0x78);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              (&local_128,*(FDynamicMesh3 **)(*(longlong *)(lVar6 + 0x70) + (longlong)pFVar16 * 8),
               true);
    lVar6 = *(longlong *)this;
    local_248 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_240 = UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::<lambda_42_>::
                <lambda_invoker_cdecl>;
    local_2b8._96_8_ =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    local_2b8[0x30] = true;
    local_2b8._52_4_ = 0x1000;
    local_2b8[0x48] = true;
    local_2b8._76_4_ = WindingCount;
    local_2b8[0x50] = false;
    local_2b8[0x51] = false;
    local_230 = (undefined ***)0x0;
    local_228._0_8_ = 0;
    local_228._s_0.Z = 0.0;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210._0_4_ = 0;
    local_210._4_4_ = 0;
    local_208._0_8_ = 0;
    local_208._s_0.Z = 0;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0._0_4_ = 0;
    local_1f0._4_4_ = 0;
    local_1e8._0_8_ = 0;
    local_1e8._s_0.Z = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0._0_4_ = 0;
    local_1d0._4_4_ = 0;
    local_1c8._0_8_ = 0;
    local_1c8._s_0.Z = 0;
    iVar12 = *(int *)(lVar6 + 0x78);
    uVar11 = 0;
    if (param_1 < iVar12) {
      uVar11 = uVar17;
    }
    if (uVar11 == 0) {
      local_388 = pFVar16;
      local_380 = (FText *)(longlong)iVar12;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_2b8._64_8_ = dVar9 + dVar9;
    local_2b8._16_4_ = (undefined4)dVar9;
    local_2b8._0_8_ = *(undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)pFVar16 * 8);
    local_2b8._8_8_ = &local_128;
    local_2b8._56_4_ = NarrowBand_SpatialFloodFill;
    local_2b8._40_8_ =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * (double)local_2b8._64_8_;
    local_2b8._24_8_ =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * (double)local_2b8._64_8_;
    local_2b8._32_8_ =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * (double)local_2b8._64_8_;
    local_2b8._20_4_ =
         -((int)ROUND(__real_bfe0000000000000 -
                      ((double)local_2b8._64_8_ + (double)local_2b8._64_8_) / dVar9) >> 1);
    local_2e8._s_0.Z = local_330._s_0.Z;
    dStack_2d0 = dStack_318;
    local_2e8._s_0.X = local_330._s_0.X;
    local_2e8._s_0.Y = local_330._s_0.Y;
    local_2c8 = local_310;
    dStack_2c0 = dStack_308;
    bVar10 = UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute
                       ((TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *)local_2b8,
                        (TAxisAlignedBox3<double> *)&local_2e8._s_0);
    if (bVar10) {
      local_1b8._0_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1b8._8_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
      local_158 = local_218.Data;
      local_150._0_4_ = (int)local_210;
      local_150._4_4_ = local_210._4_4_;
      local_1a8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_1a0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210._0_4_ = 0;
      local_210._4_4_ = 0;
      local_140 = local_208._s_0.Z;
      local_198._8_4_ = SUB84((double)local_228._s_0.Y,0);
      local_198._0_8_ = (double)local_228._s_0.X;
      local_198._12_4_ = (int)((ulonglong)(double)local_228._s_0.Y >> 0x20);
      local_188 = (double)local_228._s_0.Z;
      local_178 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      dStack_170 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_168 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      uStack_160 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      dStack_180 = 0.0;
      local_148 = local_208._0_8_;
      local_138 = (float)local_2b8._16_4_;
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar6 = *(longlong *)((longlong)this + 8);
      pFVar16 = *(FText **)(lVar6 + 0x40);
      if ((pFVar16 <= (FText *)local_1b8) &&
         ((FText *)local_1b8 < pFVar16 + (longlong)*(int *)(lVar6 + 0x4c) * 9)) {
        local_370 = (longlong)*(int *)(lVar6 + 0x48);
        local_368 = 0x90;
        local_388 = (FText *)local_1b8;
        local_380 = pFVar16;
        local_378 = (longlong)*(int *)(lVar6 + 0x4c);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar12 = *(int *)(lVar6 + 0x48);
      if (iVar12 == *(int *)(lVar6 + 0x4c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1090,(ForAnyElementType *)(lVar6 + 0x40),(int *)(lVar6 + 0x4c));
      }
      lVar13 = (longlong)iVar12;
      *(int *)(lVar6 + 0x48) = iVar12 + 1;
      lVar6 = *(longlong *)(lVar6 + 0x40);
      pdVar1 = (double *)(lVar6 + lVar13 * 0x90);
      *pdVar1 = (double)local_1b8._0_8_;
      pdVar1[1] = (double)local_1b8._8_8_;
      pdVar1 = (double *)(lVar6 + 0x10 + lVar13 * 0x90);
      *pdVar1 = local_1a8;
      pdVar1[1] = dStack_1a0;
      puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar13 * 0x90);
      *puVar2 = local_198._0_8_;
      puVar2[1] = local_198._8_8_;
      pdVar1 = (double *)(lVar6 + 0x30 + lVar13 * 0x90);
      *pdVar1 = local_188;
      pdVar1[1] = dStack_180;
      pdVar1 = (double *)(lVar6 + 0x40 + lVar13 * 0x90);
      *pdVar1 = local_178;
      pdVar1[1] = dStack_170;
      puVar3 = (undefined4 *)(lVar6 + 0x50 + lVar13 * 0x90);
      *puVar3 = (undefined4)local_168;
      puVar3[1] = local_168._4_4_;
      puVar3[2] = (undefined4)uStack_160;
      puVar3[3] = uStack_160._4_4_;
      *(undefined8 *)(lVar6 + 0x60 + lVar13 * 0x90) = 0;
      *(FScriptContainerElement **)(lVar6 + 0x60 + lVar13 * 0x90) = local_158;
      local_158 = (void *)0x0;
      *(int *)(lVar6 + 0x68 + lVar13 * 0x90) = (int)local_150;
      *(int *)(lVar6 + 0x6c + lVar13 * 0x90) = local_150._4_4_;
      local_150 = 0;
      *(undefined8 *)(lVar6 + 0x70 + lVar13 * 0x90) = local_148;
      *(int *)(lVar6 + 0x78 + lVar13 * 0x90) = local_140;
      *(float *)(lVar6 + 0x80 + lVar13 * 0x90) = local_138;
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
    }
    else if (**(longlong **)((longlong)this + 0x18) != 0) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar6 = **(longlong **)((longlong)this + 0x18);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_300,L"MeshSimpleShapeApproximation",L"Generate_LevelSets_Failed",
                           L"Generating a new Level Set failed");
      pFVar15 = (ForAnyElementType *)(lVar6 + 0xa0);
      local_358.TextData.Reference = (pFVar16->TextData).Reference;
      if (local_358.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358.TextData.Reference + 8))
                  (local_358.TextData.Reference,local_338);
      }
      local_358.Flags = pFVar16->Flags;
      local_348 = 3;
      FDateTime::Now();
      pFVar16 = (FText *)pFVar15->Data;
      if ((pFVar16 <= &local_358) && (&local_358 < pFVar16 + (longlong)*(int *)(lVar6 + 0xac) * 2))
      {
        local_370 = (longlong)*(int *)(lVar6 + 0xa8);
        local_368 = 0x20;
        local_388 = &local_358;
        local_380 = pFVar16;
        local_378 = (longlong)*(int *)(lVar6 + 0xac);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar12 = *(int *)(lVar6 + 0xa8);
      if (iVar12 == *(int *)(lVar6 + 0xac)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,pFVar15,(int *)(lVar6 + 0xac));
      }
      *(int *)(lVar6 + 0xa8) = iVar12 + 1;
      pFVar16 = (FText *)(pFVar15->Data + (longlong)iVar12 * 0x20);
      FText::FText(pFVar16,&local_358);
      *(undefined4 *)&pFVar16[1].TextData.Reference = local_348;
      *(undefined8 *)&pFVar16[1].Flags = local_340;
      if (local_358.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
      }
      if (local_300.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
    }
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
    if ((code *)local_2b8._96_8_ != (code *)0x0) {
      pppuVar14 = &local_248;
      if (local_230 != (undefined ***)0x0) {
        pppuVar14 = local_230;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_128);
  }
  return;
}

// operator() @ 14c8a29f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinVolume'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FMeshSimpleShapeApproximation *this_00;
  FSimpleShapeSet3d *pFVar10;
  FWindowsRecursiveMutex *pFVar11;
  FDynamicMesh3 *this_01;
  ForAnyElementType *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  TAxisAlignedBox3<double> *pTVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  double local_568 [4];
  undefined8 local_548;
  undefined8 uStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498 [16];
  double local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  double dStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  double dStack_410;
  undefined1 local_408 [16];
  FSimpleShapeFitsResult local_3f8;
  TAxisAlignedBox3<double> local_f8 [4];
  
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar10 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  pFVar11 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  uVar20 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  bVar19 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                     (this_00,(FSourceMeshCache *)
                              ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                              (longlong)param_1 * 0xb8),pFVar10,pFVar11);
  if (bVar19) {
    return;
  }
  lVar23 = *(longlong *)this;
  uVar20 = 0;
  if (param_1 < *(int *)(lVar23 + 0x78)) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_01 = *(FDynamicMesh3 **)(*(longlong *)(lVar23 + 0x70) + (longlong)param_1 * 8);
  pTVar22 = UE::Geometry::FDynamicMesh3::GetBounds(this_01,local_f8,false);
  uVar29 = __real_3ff0000000000000._4_4_;
  uVar27 = (undefined4)__real_3ff0000000000000;
  uStack_480 = 0;
  dVar6 = (pTVar22->Max).field0_0x0._s_0.Y;
  dVar7 = (pTVar22->Max).field0_0x0._s_0.Z;
  dVar8 = (pTVar22->Max).field0_0x0._s_0.X;
  dVar9 = (pTVar22->Min).field0_0x0._s_0.X;
  dVar17 = (dVar6 - (pTVar22->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar18 = (dVar7 - (pTVar22->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar15 = *(double *)(*(longlong *)this + 8) * __real_3fe0000000000000;
  dVar16 = (dVar8 - dVar9) * __real_3fe0000000000000;
  dVar8 = (dVar8 + dVar9) * __real_3fe0000000000000;
  if (dVar17 <= dVar15) {
    dVar17 = dVar15;
  }
  dVar6 = (dVar6 + (pTVar22->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  uVar30 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (dVar16 <= dVar15) {
    dVar16 = dVar15;
  }
  dVar7 = (dVar7 + (pTVar22->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  if (dVar18 <= dVar15) {
    dVar18 = dVar15;
  }
  uVar35 = (undefined4)((ulonglong)dVar18 >> 0x20);
  uVar31 = SUB84(dVar18,0);
  local_498._8_8_ = dVar6;
  local_498._0_8_ = dVar8;
  local_458._8_8_ = dVar18;
  local_458._0_8_ = dVar17;
  local_468 = (undefined4)__real_3ff0000000000000;
  uStack_464 = __real_3ff0000000000000._4_4_;
  local_478 = 0;
  uStack_470 = 0;
  local_488 = dVar7;
  dStack_460 = dVar16;
  UE::Geometry::FSimpleShapeFitsResult::FSimpleShapeFitsResult(&local_3f8);
  UE::Geometry::ComputeSimpleShapeFits
            (this_01,true,true,true,*(double *)(*(longlong *)this + 8),
             *(bool *)(*(longlong *)this + 0x69),&local_3f8,(FProgressCancel *)0x0);
  dVar9 = dVar17;
  if (dVar17 <= 0.0) {
    dVar9 = 0.0;
  }
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  dVar15 = dVar16;
  if (dVar16 <= 0.0) {
    dVar15 = 0.0;
  }
  local_568[0] = dVar18 * dVar9 * dVar15 * __real_4020000000000000;
  local_568[1] = __real_7fefffffffffffff;
  if (local_3f8.bHaveBox != false) {
    uVar26 = SUB84(local_3f8.Box.Extents.field0_0x0._s_0.Y,0);
    uVar28 = (undefined4)((ulonglong)local_3f8.Box.Extents.field0_0x0._8_8_ >> 0x20);
    uVar34 = local_3f8.Box.Extents.field0_0x0._s_0.Z;
    if (local_3f8.Box.Extents.field0_0x0._s_0.Z <= 0.0) {
      uVar34 = 0.0;
    }
    uVar32 = SUB84(local_3f8.Box.Extents.field0_0x0._s_0.X,0);
    uVar33 = (undefined4)((ulonglong)local_3f8.Box.Extents.field0_0x0._0_8_ >> 0x20);
    if (local_3f8.Box.Extents.field0_0x0._s_0.Y <= 0.0) {
      uVar26 = 0;
      uVar28 = 0;
    }
    if (local_3f8.Box.Extents.field0_0x0._s_0.X <= 0.0) {
      uVar32 = 0;
      uVar33 = 0;
    }
    local_568[1] = (double)uVar34 * (double)CONCAT44(uVar28,uVar26) *
                   (double)CONCAT44(uVar33,uVar32) * __real_4020000000000000;
  }
  local_568[2] = __real_7fefffffffffffff;
  if (local_3f8.bHaveSphere != false) {
    local_568[2] = local_3f8.Sphere.Radius * __real_4010c152382d7365 * local_3f8.Sphere.Radius *
                   local_3f8.Sphere.Radius;
  }
  local_568[3] = __real_7fefffffffffffff;
  if (local_3f8.bHaveCapsule != false) {
    dVar9 = local_3f8.Capsule.Radius * __real_400921fb54442d18 * local_3f8.Capsule.Radius;
    local_568[3] = local_3f8.Capsule.Segment.Extent * __real_4000000000000000 * dVar9 +
                   dVar9 * ___real_3ff5555555555555 * local_3f8.Capsule.Radius;
  }
  uVar25 = (ulonglong)(local_568[1] < local_568[0]);
  if (local_568[2] < local_568[uVar25]) {
    uVar25 = 2;
  }
  if (local_568[3] < local_568[uVar25]) {
    uVar25 = 3;
  }
  if (__real_7fefffffffffffff < local_568[uVar25] || __real_7fefffffffffffff == local_568[uVar25])
  goto LAB_14c8a31cb;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
  iVar21 = (int)uVar25;
  if (iVar21 == 0) {
    lVar23 = *(longlong *)((longlong)this + 8);
    local_448._8_4_ = SUB84(dVar6,0);
    local_448._0_8_ = dVar8;
    local_448._12_4_ = uVar30;
    dStack_430 = 0.0;
    local_498._8_4_ = SUB84(dVar6,0);
    local_498._12_4_ = uVar30;
    uStack_480 = 0;
    local_418 = uVar27;
    uStack_414 = uVar29;
    local_408._8_4_ = uVar31;
    local_408._0_8_ = dVar17;
    local_408._12_4_ = uVar35;
    local_428 = 0;
    uStack_420 = 0;
    local_468 = uVar27;
    uStack_464 = uVar29;
    local_458._8_4_ = uVar31;
    local_458._12_4_ = uVar35;
    local_488 = dVar7;
    dStack_460 = dVar16;
    local_438 = dVar7;
    dStack_410 = dVar16;
    if (((*(undefined1 **)(lVar23 + 0x10) <= local_448) &&
        (local_448 < *(undefined1 **)(lVar23 + 0x10) + (longlong)*(int *)(lVar23 + 0x1c) * 0x50)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    iVar21 = *(int *)(lVar23 + 0x18);
    if (iVar21 == *(int *)(lVar23 + 0x1c)) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,(ForAnyElementType *)(lVar23 + 0x10),(int *)(lVar23 + 0x1c));
    }
    lVar24 = (longlong)iVar21;
    *(int *)(lVar23 + 0x18) = iVar21 + 1;
    lVar23 = *(longlong *)(lVar23 + 0x10);
    puVar3 = (undefined8 *)(lVar23 + lVar24 * 0x50);
    *puVar3 = local_448._0_8_;
    puVar3[1] = local_448._8_8_;
    pdVar4 = (double *)(lVar23 + 0x10 + lVar24 * 0x50);
    *pdVar4 = local_438;
    pdVar4[1] = dStack_430;
    puVar3 = (undefined8 *)(lVar23 + 0x20 + lVar24 * 0x50);
    *puVar3 = local_428;
    puVar3[1] = uStack_420;
    puVar3 = (undefined8 *)(lVar23 + 0x30 + lVar24 * 0x50);
    *puVar3 = CONCAT44(uStack_414,local_418);
    puVar3[1] = dStack_410;
    uVar27 = local_408._0_4_;
    uVar29 = local_408._4_4_;
    uVar30 = local_408._8_4_;
    uVar31 = local_408._12_4_;
LAB_14c8a31bc:
    puVar5 = (undefined4 *)(lVar23 + 0x40 + lVar24 * 0x50);
    *puVar5 = uVar27;
    puVar5[1] = uVar29;
    puVar5[2] = uVar30;
    puVar5[3] = uVar31;
  }
  else {
    if (iVar21 == 1) {
      lVar23 = *(longlong *)((longlong)this + 8);
      local_4e8 = local_3f8.Box.Frame.Origin.field0_0x0._s_0.X;
      dStack_4e0 = local_3f8.Box.Frame.Origin.field0_0x0._s_0.Y;
      local_4c8 = local_3f8.Box.Frame.Rotation.field0_0x0._s_0.Y;
      dStack_4c0 = local_3f8.Box.Frame.Rotation.field0_0x0._s_0.Z;
      local_4d8 = local_3f8.Box.Frame.Origin.field0_0x0._s_0.Z;
      dStack_4d0 = local_3f8.Box.Frame.Rotation.field0_0x0._s_0.X;
      local_4a8 = (double)local_3f8.Box.Extents.field0_0x0._8_8_;
      uStack_4a0 = (double)local_3f8.Box.Extents.field0_0x0._16_8_;
      local_4b8 = local_3f8.Box.Frame.Rotation.field0_0x0._s_0.W;
      dStack_4b0 = local_3f8.Box.Extents.field0_0x0._s_0.X;
      if (((*(double **)(lVar23 + 0x10) <= &local_4e8) &&
          (&local_4e8 < *(double **)(lVar23 + 0x10) + (longlong)*(int *)(lVar23 + 0x1c) * 10)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar21 = *(int *)(lVar23 + 0x18);
      if (iVar21 == *(int *)(lVar23 + 0x1c)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)(lVar23 + 0x10),(int *)(lVar23 + 0x1c));
      }
      lVar24 = (longlong)iVar21;
      *(int *)(lVar23 + 0x18) = iVar21 + 1;
      lVar23 = *(longlong *)(lVar23 + 0x10);
      pdVar4 = (double *)(lVar23 + lVar24 * 0x50);
      *pdVar4 = local_4e8;
      pdVar4[1] = dStack_4e0;
      pdVar4 = (double *)(lVar23 + 0x10 + lVar24 * 0x50);
      *pdVar4 = local_4d8;
      pdVar4[1] = dStack_4d0;
      pdVar4 = (double *)(lVar23 + 0x20 + lVar24 * 0x50);
      *pdVar4 = local_4c8;
      pdVar4[1] = dStack_4c0;
      pdVar4 = (double *)(lVar23 + 0x30 + lVar24 * 0x50);
      *pdVar4 = local_4b8;
      pdVar4[1] = dStack_4b0;
      uVar27 = (undefined4)local_4a8;
      uVar29 = local_4a8._4_4_;
      uVar30 = (undefined4)uStack_4a0;
      uVar31 = uStack_4a0._4_4_;
      goto LAB_14c8a31bc;
    }
    if (iVar21 == 2) {
      pFVar12 = *(ForAnyElementType **)((longlong)this + 8);
      local_548 = (double)local_3f8.Sphere.Center.field0_0x0._0_8_;
      uStack_540 = (double)local_3f8.Sphere.Center.field0_0x0._8_8_;
      local_538 = local_3f8.Sphere.Center.field0_0x0._s_0.Z;
      dStack_530 = local_3f8.Sphere.Radius;
      if (((pFVar12->Data <= (FScriptContainerElement *)&local_548) &&
          ((FScriptContainerElement *)&local_548 <
           pFVar12->Data + (longlong)*(int *)((longlong)&pFVar12[1].Data + 4) * 0x20)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar21 = *(int *)&pFVar12[1].Data;
      piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,pFVar12,piVar1);
      }
      *(int *)&pFVar12[1].Data = iVar21 + 1;
      pFVar13 = pFVar12->Data;
      pFVar2 = pFVar13 + (longlong)iVar21 * 0x20;
      *(undefined4 *)pFVar2 = (undefined4)local_548;
      *(undefined4 *)(pFVar2 + 4) = local_548._4_4_;
      *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_540;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_540._4_4_;
      pFVar13 = pFVar13 + (longlong)iVar21 * 0x20 + 0x10;
      *(double *)pFVar13 = local_538;
      *(double *)(pFVar13 + 8) = dStack_530;
    }
    else if (iVar21 == 3) {
      lVar23 = *(longlong *)((longlong)this + 8);
      local_528 = local_3f8.Capsule.Segment.Center.field0_0x0._s_0.X;
      dStack_520 = local_3f8.Capsule.Segment.Center.field0_0x0._s_0.Y;
      local_518 = local_3f8.Capsule.Segment.Center.field0_0x0._s_0.Z;
      dStack_510 = local_3f8.Capsule.Segment.Direction.field0_0x0._s_0.X;
      local_508 = (double)local_3f8.Capsule.Segment.Direction.field0_0x0._8_8_;
      uStack_500 = (double)local_3f8.Capsule.Segment.Direction.field0_0x0._16_8_;
      local_4f8 = local_3f8.Capsule.Segment.Extent;
      dStack_4f0 = local_3f8.Capsule.Radius;
      if (((*(double **)(lVar23 + 0x20) <= &local_528) &&
          (&local_528 < *(double **)(lVar23 + 0x20) + (longlong)*(int *)(lVar23 + 0x2c) * 8)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar21 = *(int *)(lVar23 + 0x28);
      if (iVar21 == *(int *)(lVar23 + 0x2c)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar23 + 0x20),(int *)(lVar23 + 0x2c));
      }
      *(int *)(lVar23 + 0x28) = iVar21 + 1;
      lVar23 = *(longlong *)(lVar23 + 0x20);
      lVar24 = (longlong)iVar21 * 0x40;
      *(double *)(lVar24 + lVar23) = local_528;
      ((double *)(lVar24 + lVar23))[1] = dStack_520;
      pdVar4 = (double *)(lVar24 + 0x10 + lVar23);
      *pdVar4 = local_518;
      pdVar4[1] = dStack_510;
      puVar5 = (undefined4 *)(lVar24 + 0x20 + lVar23);
      *puVar5 = (undefined4)local_508;
      puVar5[1] = local_508._4_4_;
      puVar5[2] = (undefined4)uStack_500;
      puVar5[3] = uStack_500._4_4_;
      pdVar4 = (double *)(lVar24 + 0x30 + lVar23);
      *pdVar4 = local_4f8;
      pdVar4[1] = dStack_4f0;
    }
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
LAB_14c8a31cb:
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3f8.Convex);
  return;
}

// operator() @ 14c8a3250

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinimalSpheres'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar3;
  FSimpleShapeSet3d *pFVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  FSimpleShapeFitsResult local_318;
  
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar3 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  pFVar4 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  uVar11 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  bVar10 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                     (this_00,(FSourceMeshCache *)
                              ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                              (longlong)param_1 * 0xb8),pFVar4,pFVar3);
  if (!bVar10) {
    lVar5 = *(longlong *)this;
    uVar11 = 0;
    if (param_1 < *(int *)(lVar5 + 0x78)) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar6 = *(FDynamicMesh3 **)(*(longlong *)(lVar5 + 0x70) + (longlong)param_1 * 8);
    UE::Geometry::FSimpleShapeFitsResult::FSimpleShapeFitsResult(&local_318);
    UE::Geometry::ComputeSimpleShapeFits
              (pFVar6,true,false,false,*(double *)(*(longlong *)this + 8),
               *(bool *)(*(longlong *)this + 0x69),&local_318,(FProgressCancel *)0x0);
    if (local_318.bHaveSphere != false) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      pFVar7 = *(ForAnyElementType **)((longlong)this + 8);
      local_338 = (double)local_318.Sphere.Center.field0_0x0._0_8_;
      uStack_330 = (double)local_318.Sphere.Center.field0_0x0._8_8_;
      local_328 = (double)local_318.Sphere.Center.field0_0x0._16_8_;
      uStack_320 = local_318.Sphere.Radius;
      if ((pFVar7->Data <= (FScriptContainerElement *)&local_338) &&
         ((FScriptContainerElement *)&local_338 <
          pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x20)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar12 = *(int *)&pFVar7[1].Data;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,pFVar7,piVar1);
      }
      *(int *)&pFVar7[1].Data = iVar12 + 1;
      pFVar8 = pFVar7->Data;
      pFVar2 = pFVar8 + (longlong)iVar12 * 0x20;
      *(undefined4 *)pFVar2 = (undefined4)local_338;
      *(undefined4 *)(pFVar2 + 4) = local_338._4_4_;
      *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_330;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_330._4_4_;
      pFVar8 = pFVar8 + (longlong)iVar12 * 0x20 + 0x10;
      *(undefined4 *)pFVar8 = (undefined4)local_328;
      *(undefined4 *)(pFVar8 + 4) = local_328._4_4_;
      *(undefined4 *)(pFVar8 + 8) = (undefined4)uStack_320;
      *(undefined4 *)(pFVar8 + 0xc) = uStack_320._4_4_;
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_318.Convex);
  }
  return;
}

// operator() @ 14c8a34a0

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_OrientedBoxes'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  FSimpleShapeSet3d *pFVar4;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  TVector<double>_u_0 local_378;
  double dStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  FSimpleShapeFitsResult local_328;
  
  pFVar4 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar5 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  uVar10 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar9 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                    (this_00,(FSourceMeshCache *)
                             ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                             (longlong)param_1 * 0xb8),pFVar4,pFVar5);
  if (bVar9) {
    return;
  }
  lVar6 = *(longlong *)this;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar6 + 0x78)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = *(FDynamicMesh3 **)(*(longlong *)(lVar6 + 0x70) + (longlong)param_1 * 8);
  UE::Geometry::FSimpleShapeFitsResult::FSimpleShapeFitsResult(&local_328);
  UE::Geometry::ComputeSimpleShapeFits
            (pFVar7,false,true,false,*(double *)(*(longlong *)this + 8),
             *(bool *)(*(longlong *)this + 0x69),&local_328,
             (FProgressCancel *)**(undefined8 **)((longlong)this + 0x18));
  if ((((FProgressCancel *)**(undefined8 **)((longlong)this + 0x18) == (FProgressCancel *)0x0) ||
      (bVar9 = FProgressCancel::Cancelled
                         ((FProgressCancel *)**(undefined8 **)((longlong)this + 0x18)), !bVar9)) &&
     (local_328.bHaveBox != false)) {
    UE::Geometry::TOrientedBox3<double>::ReparameterizedCloserToWorldFrame
              (&local_328.Box,(TOrientedBox3<double> *)&local_378._s_0);
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    lVar6 = *(longlong *)((longlong)this + 8);
    local_3c8 = local_378._s_0.X;
    dStack_3c0 = local_378._s_0.Y;
    local_3a8 = local_358;
    uStack_3a0 = uStack_350;
    local_3b8 = local_378._s_0.Z;
    dStack_3b0 = dStack_360;
    local_388 = local_338;
    uStack_380 = uStack_330;
    local_398 = local_348;
    uStack_390 = uStack_340;
    if (((*(double **)(lVar6 + 0x10) <= &local_3c8) &&
        (&local_3c8 < *(double **)(lVar6 + 0x10) + (longlong)*(int *)(lVar6 + 0x1c) * 10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = *(int *)(lVar6 + 0x18);
    if (iVar11 == *(int *)(lVar6 + 0x1c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,(ForAnyElementType *)(lVar6 + 0x10),(int *)(lVar6 + 0x1c));
    }
    lVar12 = (longlong)iVar11;
    *(int *)(lVar6 + 0x18) = iVar11 + 1;
    lVar6 = *(longlong *)(lVar6 + 0x10);
    pdVar1 = (double *)(lVar6 + lVar12 * 0x50);
    *pdVar1 = local_3c8;
    pdVar1[1] = dStack_3c0;
    pdVar1 = (double *)(lVar6 + 0x10 + lVar12 * 0x50);
    *pdVar1 = local_3b8;
    pdVar1[1] = dStack_3b0;
    puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar12 * 0x50);
    *puVar2 = local_3a8;
    puVar2[1] = uStack_3a0;
    puVar3 = (undefined4 *)(lVar6 + 0x30 + lVar12 * 0x50);
    *puVar3 = (undefined4)local_398;
    puVar3[1] = local_398._4_4_;
    puVar3[2] = (undefined4)uStack_390;
    puVar3[3] = uStack_390._4_4_;
    puVar3 = (undefined4 *)(lVar6 + 0x40 + lVar12 * 0x50);
    *puVar3 = (undefined4)local_388;
    puVar3[1] = local_388._4_4_;
    puVar3[2] = (undefined4)uStack_380;
    puVar3[3] = uStack_380._4_4_;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_328.Convex);
  return;
}

// operator() @ 14c8a3760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::Generate_ProjectedHulls'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  FSimpleShapeSet3d *pFVar2;
  FMeshSimpleShapeApproximation *this_00;
  FWindowsRecursiveMutex *pFVar3;
  longlong lVar4;
  FDynamicMesh3 *this_01;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TVector2<double> *pTVar11;
  TFrame3<double> *pTVar12;
  char cVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  TQuaternion<double>_u_0 TStack_1080;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  TQuaternion<double>_u_0 TStack_1048;
  double local_1028;
  double dStack_1020;
  double local_1018;
  TQuaternion<double>_u_0 TStack_1010;
  double local_ff0;
  double dStack_fe8;
  double local_fe0;
  TQuaternion<double>_u_0 TStack_fd8;
  double local_fb8;
  double dStack_fb0;
  double local_fa8;
  TQuaternion<double>_u_0 TStack_fa0;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  TQuaternion<double>_u_0 TStack_f68;
  double local_f48 [3];
  TVector<double>_u_0 local_f30;
  TVector<double>_u_0 local_f18;
  TVector<double>_u_0 local_f00;
  double local_ee8;
  double local_ee0;
  double local_ed8;
  TVector<double>_u_0 local_ed0;
  TVector<double>_u_0 local_eb8;
  TVector<double>_u_0 local_ea0;
  TVector<double>_u_0 local_e88;
  TVector<double>_u_0 local_e70;
  TVector<double>_u_0 local_e58;
  TVector<double>_u_0 local_e40;
  TVector<double>_u_0 local_e28;
  TVector<double>_u_0 local_e10;
  TVector<double>_u_0 local_df8;
  TVector2<double> local_de0;
  TVector2<double> local_dd0;
  TVector2<double> local_dc0;
  FMeshProjectionHull local_da8;
  FMeshProjectionHull local_ae8;
  FMeshProjectionHull local_828;
  FMeshProjectionHull local_568;
  FDynamicMesh3 local_2a8;
  undefined8 uStack_30;
  
  uStack_30 = 0x14c8a3784;
  pFVar2 = *(FSimpleShapeSet3d **)((longlong)this + 8);
  this_00 = *(FMeshSimpleShapeApproximation **)this;
  pFVar3 = *(FWindowsRecursiveMutex **)((longlong)this + 0x10);
  uVar16 = 0;
  if (param_1 < (this_00->SourceMeshCaches).ArrayNum) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar7 = UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
                    (this_00,(FSourceMeshCache *)
                             ((this_00->SourceMeshCaches).AllocatorInstance.Data +
                             (longlong)param_1 * 0xb8),pFVar2,pFVar3);
  if (bVar7) {
    return;
  }
  lVar4 = *(longlong *)this;
  uVar16 = 0;
  if (param_1 < *(int *)(lVar4 + 0x78)) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_3ff0000000000000;
  this_01 = *(FDynamicMesh3 **)(*(longlong *)(lVar4 + 0x70) + (longlong)param_1 * 8);
  local_ed0._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  local_ed0._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  local_ed0._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  TStack_1080._s_0.X = 0.0;
  local_eb8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TStack_1080._24_8_ = __real_3ff0000000000000;
  TStack_1080._s_0.Y = 0.0;
  TStack_1080._s_0.Z = 0.0;
  local_eb8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_eb8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_1080._s_0,(TVector<double> *)&local_eb8._s_0,
             (TVector<double> *)&local_ed0._s_0);
  uVar16 = **(uint **)((longlong)this + 0x18);
  if (uVar16 == 3) {
    UE::Geometry::FDynamicMesh3::GetBounds
              (this_01,(TAxisAlignedBox3<double> *)&local_f00._s_0,false);
    local_f48[0] = local_ee8 - local_f00._s_0.X;
    local_f48[1] = local_ee0 - local_f00._s_0.Y;
    local_f48[2] = local_ed8 - local_f00._s_0.Z;
    uVar16 = SUB84(local_f48[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = (uint)((ulonglong)local_f48[0] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar20 = SUB84(local_f48[1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar21 = (uint)((ulonglong)local_f48[1] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar18 = SUB84(local_f48[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar19 = (uint)((ulonglong)local_f48[2] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar21,uVar20) <= (double)CONCAT44(uVar17,uVar16) &&
        (double)CONCAT44(uVar17,uVar16) != (double)CONCAT44(uVar21,uVar20)) {
      uVar15 = (ulonglong)(((double)CONCAT44(uVar19,uVar18) < (double)CONCAT44(uVar21,uVar20)) + 1);
    }
    else {
      uVar15 = 2;
      if ((double)CONCAT44(uVar17,uVar16) <= (double)CONCAT44(uVar19,uVar18)) {
        uVar15 = 0;
      }
    }
    if ((double)CONCAT44(uVar21,uVar20) <= (double)CONCAT44(uVar17,uVar16)) {
      uVar16 = uVar20;
      uVar17 = uVar21;
    }
    if ((double)CONCAT44(uVar19,uVar18) <= (double)CONCAT44(uVar17,uVar16)) {
      uVar16 = uVar18;
      uVar17 = uVar19;
    }
    if (((double)CONCAT44(uVar17,uVar16) != local_f48[uVar15]) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MinAbsElement(Bounds.Diagonal()) == Bounds.Diagonal()[AxisIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\ShapeApproximation\\MeshSimpleShapeApproximation.cpp"
                           ,0x1e2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_f30._s_0.Z = 0.0;
    local_f30._s_0.X = 0.0;
    local_f30._s_0.Y = 0.0;
    uVar14 = 2;
    if ((uint)uVar15 < 2) {
      uVar14 = uVar15;
    }
    TStack_1048._s_0.X = 0.0;
    local_1060 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uStack_1058 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar15 = 0;
    if ((int)uVar14 != 0) {
      uVar15 = uVar14;
    }
    local_1050 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    *(undefined8 *)((longlong)&local_f30 + uVar15 * 8) = 0x3ff0000000000000;
    TStack_1048._24_8_ = dVar6;
    TStack_1048._s_0.Y = 0.0;
    TStack_1048._s_0.Z = 0.0;
    local_ea0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_ea0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_ea0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&TStack_1048._s_0,(TVector<double> *)&local_ea0._s_0,
               (TVector<double> *)&local_f30._s_0);
    uVar34 = SUB84(TStack_1048._s_0.W,0);
    uVar35 = (undefined4)((ulonglong)TStack_1048._24_8_ >> 0x20);
    uVar23 = (undefined4)local_1060;
    uVar25 = local_1060._4_4_;
    uVar22 = (undefined4)uStack_1058;
    uVar24 = uStack_1058._4_4_;
    uVar26 = (undefined4)local_1050;
    uVar27 = local_1050._4_4_;
    uVar28 = TStack_1048._0_4_;
    uVar29 = TStack_1048._4_4_;
    uVar30 = TStack_1048._8_4_;
    uVar31 = TStack_1048._12_4_;
    uVar32 = TStack_1048._16_4_;
    uVar33 = TStack_1048._20_4_;
  }
  else {
    if (uVar16 == 4) {
      UE::Geometry::FMeshProjectionHull::FMeshProjectionHull(&local_568,this_01);
      local_e88._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_e88._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_e88._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      TStack_1010._s_0.X = 0.0;
      local_1028 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1020 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1018 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e70._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TStack_1010._24_8_ = dVar6;
      TStack_1010._s_0.Y = 0.0;
      TStack_1010._s_0.Z = 0.0;
      local_e70._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_e70._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&TStack_1010._s_0,(TVector<double> *)&local_e70._s_0,
                 (TVector<double> *)&local_e88._s_0);
      local_568.ProjectionFrame.Origin.field0_0x0._s_0.X = local_1028;
      local_568.ProjectionFrame.Origin.field0_0x0._s_0.Y = dStack_1020;
      local_568.ProjectionFrame.Origin.field0_0x0._s_0.Z = local_1018;
      local_568.ProjectionFrame.Rotation.field0_0x0._s_0.X = TStack_1010._s_0.X;
      local_568.ProjectionFrame.Rotation.field0_0x0._s_0.Y = TStack_1010._s_0.Y;
      local_568.ProjectionFrame.Rotation.field0_0x0._s_0.Z = TStack_1010._s_0.Z;
      local_568.ProjectionFrame.Rotation.field0_0x0._24_8_ = TStack_1010._s_0.W;
      local_568.MinThickness = *(double *)(*(longlong *)this + 8);
      if (local_568.MinThickness <= 0.0) {
        local_568.MinThickness = 0.0;
      }
      bVar7 = UE::Geometry::FMeshProjectionHull::Compute(&local_568);
      UE::Geometry::FMeshProjectionHull::FMeshProjectionHull(&local_828,this_01);
      local_e58._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_e58._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_e58._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      TStack_fd8._s_0.X = 0.0;
      local_ff0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_fe8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_fe0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e40._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TStack_fd8._24_8_ = dVar6;
      TStack_fd8._s_0.Y = 0.0;
      TStack_fd8._s_0.Z = 0.0;
      local_e40._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_e40._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&TStack_fd8._s_0,(TVector<double> *)&local_e40._s_0,
                 (TVector<double> *)&local_e58._s_0);
      local_828.ProjectionFrame.Origin.field0_0x0._s_0.X = local_ff0;
      local_828.ProjectionFrame.Origin.field0_0x0._s_0.Y = dStack_fe8;
      local_828.ProjectionFrame.Origin.field0_0x0._s_0.Z = local_fe0;
      local_828.ProjectionFrame.Rotation.field0_0x0._s_0.X = TStack_fd8._s_0.X;
      local_828.ProjectionFrame.Rotation.field0_0x0._s_0.Y = TStack_fd8._s_0.Y;
      local_828.ProjectionFrame.Rotation.field0_0x0._s_0.Z = TStack_fd8._s_0.Z;
      local_828.ProjectionFrame.Rotation.field0_0x0._24_8_ = TStack_fd8._s_0.W;
      local_828.MinThickness = *(double *)(*(longlong *)this + 8);
      if (local_828.MinThickness <= 0.0) {
        local_828.MinThickness = 0.0;
      }
      bVar8 = UE::Geometry::FMeshProjectionHull::Compute(&local_828);
      UE::Geometry::FMeshProjectionHull::FMeshProjectionHull(&local_ae8,this_01);
      local_e28._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_e28._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_e28._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TStack_fa0._s_0.X = 0.0;
      local_fb8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_fb0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_fa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TStack_fa0._24_8_ = dVar6;
      TStack_fa0._s_0.Y = 0.0;
      TStack_fa0._s_0.Z = 0.0;
      local_e10._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_e10._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_e10._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&TStack_fa0._s_0,(TVector<double> *)&local_e10._s_0,
                 (TVector<double> *)&local_e28._s_0);
      local_ae8.ProjectionFrame.Origin.field0_0x0._s_0.X = local_fb8;
      local_ae8.ProjectionFrame.Origin.field0_0x0._s_0.Y = dStack_fb0;
      local_ae8.ProjectionFrame.Origin.field0_0x0._s_0.Z = local_fa8;
      local_ae8.ProjectionFrame.Rotation.field0_0x0._s_0.X = TStack_fa0._s_0.X;
      local_ae8.ProjectionFrame.Rotation.field0_0x0._s_0.Y = TStack_fa0._s_0.Y;
      local_ae8.ProjectionFrame.Rotation.field0_0x0._s_0.Z = TStack_fa0._s_0.Z;
      local_ae8.ProjectionFrame.Rotation.field0_0x0._24_8_ = TStack_fa0._s_0.W;
      local_ae8.MinThickness = *(double *)(*(longlong *)this + 8);
      if (local_ae8.MinThickness <= 0.0) {
        local_ae8.MinThickness = 0.0;
      }
      bVar9 = UE::Geometry::FMeshProjectionHull::Compute(&local_ae8);
      uVar22 = (undefined4)__real_7fefffffffffffff;
      uVar24 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      uVar23 = uVar22;
      uVar25 = uVar24;
      if (bVar9) {
        pTVar11 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
                            (&local_de0,&local_ae8.ConvexHull3D);
        uVar23 = (int)*(undefined8 *)&pTVar11->field0_0x0;
        uVar25 = (int)((ulonglong)*(undefined8 *)&pTVar11->field0_0x0 >> 0x20);
      }
      uVar26 = uVar22;
      uVar27 = uVar24;
      if (bVar8) {
        pTVar11 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
                            (&local_dd0,&local_828.ConvexHull3D);
        uVar26 = (int)*(undefined8 *)&pTVar11->field0_0x0;
        uVar27 = (int)((ulonglong)*(undefined8 *)&pTVar11->field0_0x0 >> 0x20);
      }
      if (bVar7) {
        pTVar11 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
                            (&local_dc0,&local_568.ConvexHull3D);
        uVar22 = (undefined4)*(undefined8 *)&pTVar11->field0_0x0;
        uVar24 = (undefined4)((ulonglong)*(undefined8 *)&pTVar11->field0_0x0 >> 0x20);
      }
      if ((double)CONCAT44(uVar27,uVar26) <= (double)CONCAT44(uVar24,uVar22) &&
          (double)CONCAT44(uVar24,uVar22) != (double)CONCAT44(uVar27,uVar26)) {
        cVar13 = ((double)CONCAT44(uVar25,uVar23) < (double)CONCAT44(uVar27,uVar26)) + '\x01';
      }
      else {
        cVar13 = '\x02';
        if ((double)CONCAT44(uVar24,uVar22) <= (double)CONCAT44(uVar25,uVar23)) {
          cVar13 = '\0';
        }
      }
      if (cVar13 == '\0') {
        pTVar12 = &local_568.ProjectionFrame;
      }
      else {
        pTVar12 = &local_828.ProjectionFrame;
        if (cVar13 != '\x01') {
          pTVar12 = &local_ae8.ProjectionFrame;
        }
      }
      uVar23 = *(undefined4 *)&(pTVar12->Origin).field0_0x0;
      uVar25 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 4);
      uVar22 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 8);
      uVar24 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 0xc);
      uVar26 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 0x10);
      uVar27 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 0x14);
      uVar28 = *(undefined4 *)&(pTVar12->Rotation).field0_0x0;
      uVar29 = *(undefined4 *)((longlong)&(pTVar12->Rotation).field0_0x0 + 4);
      TStack_1080._s_0.X = (pTVar12->Rotation).field0_0x0._s_0.X;
      pdVar1 = &(pTVar12->Rotation).field0_0x0._s_0.Y;
      uVar30 = *(undefined4 *)pdVar1;
      uVar31 = *(undefined4 *)((longlong)&(pTVar12->Rotation).field0_0x0 + 0xc);
      TStack_1080._s_0.Y = *pdVar1;
      pdVar1 = &(pTVar12->Rotation).field0_0x0._s_0.Z;
      uVar32 = *(undefined4 *)pdVar1;
      uVar33 = *(undefined4 *)((longlong)&(pTVar12->Rotation).field0_0x0 + 0x14);
      TStack_1080._s_0.Z = *pdVar1;
      TStack_1080._s_0.W = *(double *)((longlong)&(pTVar12->Rotation).field0_0x0 + 0x18);
      uVar34 = SUB84(TStack_1080._s_0.W,0);
      uVar35 = (undefined4)((ulonglong)TStack_1080._s_0.W >> 0x20);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_ae8.ConvexHull3D);
      if (local_ae8.SimplifiedHull2D.Vertices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ae8.SimplifiedHull2D.Vertices.AllocatorInstance.Data);
      }
      if (local_ae8.ConvexHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_ae8.ConvexHull2D.Vertices.AllocatorInstance.Data);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_828.ConvexHull3D);
      if (local_828.SimplifiedHull2D.Vertices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.SimplifiedHull2D.Vertices.AllocatorInstance.Data);
      }
      if (local_828.ConvexHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_828.ConvexHull2D.Vertices.AllocatorInstance.Data);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_568.ConvexHull3D);
      if (local_568.SimplifiedHull2D.Vertices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.SimplifiedHull2D.Vertices.AllocatorInstance.Data);
      }
      if (local_568.ConvexHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_568.ConvexHull2D.Vertices.AllocatorInstance.Data);
      }
      goto LAB_14c8a3f8b;
    }
    local_f18._s_0.Z = 0.0;
    local_f18._s_0.X = 0.0;
    local_f18._s_0.Y = 0.0;
    uVar17 = 2;
    if ((int)uVar16 < 2) {
      uVar17 = uVar16;
    }
    uVar16 = 0;
    if (0 < (int)uVar17) {
      uVar16 = uVar17;
    }
    if ((2 < uVar16) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_f80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uStack_f78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    *(undefined8 *)((longlong)&local_f18 + (longlong)(int)uVar16 * 8) = 0x3ff0000000000000;
    local_f70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    local_df8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    TStack_f68._s_0.X = 0.0;
    TStack_f68._24_8_ = dVar6;
    TStack_f68._s_0.Y = 0.0;
    TStack_f68._s_0.Z = 0.0;
    local_df8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_df8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&TStack_f68._s_0,(TVector<double> *)&local_df8._s_0,
               (TVector<double> *)&local_f18._s_0);
    uVar34 = SUB84(TStack_f68._s_0.W,0);
    uVar35 = (undefined4)((ulonglong)TStack_f68._24_8_ >> 0x20);
    uVar23 = (undefined4)local_f80;
    uVar25 = local_f80._4_4_;
    uVar22 = (undefined4)uStack_f78;
    uVar24 = uStack_f78._4_4_;
    uVar26 = (undefined4)local_f70;
    uVar27 = local_f70._4_4_;
    uVar28 = TStack_f68._0_4_;
    uVar29 = TStack_f68._4_4_;
    uVar30 = TStack_f68._8_4_;
    uVar31 = TStack_f68._12_4_;
    uVar32 = TStack_f68._16_4_;
    uVar33 = TStack_f68._20_4_;
  }
  TStack_1080._s_0.W = (double)CONCAT44(uVar35,uVar34);
  TStack_1080._12_4_ = uVar31;
  TStack_1080._8_4_ = uVar30;
  TStack_1080._20_4_ = uVar33;
  TStack_1080._16_4_ = uVar32;
  TStack_1080._4_4_ = uVar29;
  TStack_1080._0_4_ = uVar28;
LAB_14c8a3f8b:
  UE::Geometry::FMeshProjectionHull::FMeshProjectionHull(&local_da8,this_01);
  lVar4 = *(longlong *)this;
  local_da8.ProjectionFrame.Rotation.field0_0x0._s_0.W = (double)CONCAT44(uVar35,uVar34);
  local_da8.MinThickness = *(double *)(lVar4 + 8);
  if (local_da8.MinThickness <= 0.0) {
    local_da8.MinThickness = 0.0;
  }
  local_da8.bSimplifyPolygon = *(bool *)(lVar4 + 0x10);
  local_da8.MinEdgeLength = *(double *)(lVar4 + 0x18);
  local_da8.DeviationTolerance = *(double *)(lVar4 + 0x18);
  local_da8.ProjectionFrame.Origin.field0_0x0._0_4_ = uVar23;
  local_da8.ProjectionFrame.Origin.field0_0x0._4_4_ = uVar25;
  local_da8.ProjectionFrame.Origin.field0_0x0._8_4_ = uVar22;
  local_da8.ProjectionFrame.Origin.field0_0x0._12_4_ = uVar24;
  local_da8.ProjectionFrame.Origin.field0_0x0._16_4_ = uVar26;
  local_da8.ProjectionFrame.Origin.field0_0x0._20_4_ = uVar27;
  local_da8.ProjectionFrame.Rotation.field0_0x0._0_4_ = uVar28;
  local_da8.ProjectionFrame.Rotation.field0_0x0._4_4_ = uVar29;
  local_da8.ProjectionFrame.Rotation.field0_0x0._8_4_ = uVar30;
  local_da8.ProjectionFrame.Rotation.field0_0x0._12_4_ = uVar31;
  local_da8.ProjectionFrame.Rotation.field0_0x0._16_4_ = uVar32;
  local_da8.ProjectionFrame.Rotation.field0_0x0._20_4_ = uVar33;
  bVar7 = UE::Geometry::FMeshProjectionHull::Compute(&local_da8);
  if (bVar7) {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2a8);
    UE::Geometry::FDynamicMesh3::operator=(&local_2a8,&local_da8.ConvexHull3D);
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    lVar4 = *(longlong *)((longlong)this + 8);
    if (((*(FDynamicMesh3 **)(lVar4 + 0x30) <= &local_2a8) &&
        (&local_2a8 < *(FDynamicMesh3 **)(lVar4 + 0x30) + *(int *)(lVar4 + 0x3c))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = *(int *)(lVar4 + 0x38);
    if (iVar10 == *(int *)(lVar4 + 0x3c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x230,8,(ForAnyElementType *)(lVar4 + 0x30),(int *)(lVar4 + 0x3c));
    }
    *(int *)(lVar4 + 0x38) = iVar10 + 1;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3
              ((FDynamicMesh3 *)((longlong)iVar10 * 0x230 + *(longlong *)(lVar4 + 0x30)),&local_2a8)
    ;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2a8);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_da8.ConvexHull3D);
  if (local_da8.SimplifiedHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_da8.SimplifiedHull2D.Vertices.AllocatorInstance.Data);
  }
  if (local_da8.ConvexHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_da8.ConvexHull2D.Vertices.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14c8a4180

void __thiscall
`UE::Geometry::FMeshSimpleShapeApproximation::InitializeSourceMeshes'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar1 + 0x88)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  puVar7 = (undefined4 *)((longlong)param_1 * 0xb8 + *(longlong *)(lVar1 + 0x80));
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x78)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = *(FDynamicMesh3 **)(*(longlong *)(lVar2 + 0x70) + (longlong)param_1 * 8);
  bVar5 = UE::Geometry::IsBoxMesh
                    (pFVar3,(TOrientedBox3<double> *)(puVar7 + 10),__real_3fb999999999999a,
                     __real_3f847ae147ae147b);
  if (bVar5) {
    *puVar7 = 4;
  }
  else {
    bVar5 = UE::Geometry::IsSphereMesh
                      (pFVar3,(TSphere3<double> *)(puVar7 + 2),__real_3f9999999999999a,
                       __real_4052000000000000);
    if (bVar5) {
      *puVar7 = 2;
    }
    else {
      bVar5 = UE::Geometry::IsCapsuleMesh
                        (pFVar3,(TCapsule3<double> *)(puVar7 + 0x1e),__real_3f9999999999999a,
                         __real_4052000000000000);
      if (bVar5) {
        *puVar7 = 8;
      }
    }
  }
  return;
}

// DetectAndCacheSimpleShapeType @ 14c8d8390

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::DetectAndCacheSimpleShapeType
          (FMeshSimpleShapeApproximation *this,FDynamicMesh3 *param_1,FSourceMeshCache *param_2)

{
  bool bVar1;
  
  bVar1 = IsBoxMesh(param_1,&param_2->DetectedBox,__real_3fb999999999999a,__real_3f847ae147ae147b);
  if (bVar1) {
    param_2->DetectedType = Box;
    return;
  }
  bVar1 = IsSphereMesh(param_1,&param_2->DetectedSphere,__real_3f9999999999999a,
                       __real_4052000000000000);
  if (bVar1) {
    param_2->DetectedType = Sphere;
    return;
  }
  bVar1 = IsCapsuleMesh(param_1,&param_2->DetectedCapsule,__real_3f9999999999999a,
                        __real_4052000000000000);
  if (bVar1) {
    param_2->DetectedType = Capsule;
  }
  return;
}

// Generate_AlignedBoxes @ 14c8f1340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_AlignedBoxes
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1)

{
  undefined1 auStackY_b8 [32];
  <lambda_1> local_78;
  TArrayView<std::nullptr_t,int> local_70;
  code *local_60;
  FMeshSimpleShapeApproximation **local_58;
  FMeshSimpleShapeApproximation *local_50;
  FSimpleShapeSet3d *local_48;
  _RTL_CRITICAL_SECTION *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  InitializeCriticalSectionAndSpinCount(&local_38,4000);
  local_40 = &local_38;
  local_70.DataPtr = (void **)0x0;
  local_60 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_AlignedBoxes'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = &local_50;
  local_70.ArrayNum = 0;
  local_50 = this;
  local_48 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_60,local_78,None,&local_70);
  DeleteCriticalSection(&local_38);
  return;
}

// Generate_Capsules @ 14c8f1420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_Capsules
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1)

{
  undefined1 auStackY_b8 [32];
  <lambda_1> local_78;
  TArrayView<std::nullptr_t,int> local_70;
  code *local_60;
  FMeshSimpleShapeApproximation **local_58;
  FMeshSimpleShapeApproximation *local_50;
  FSimpleShapeSet3d *local_48;
  _RTL_CRITICAL_SECTION *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  InitializeCriticalSectionAndSpinCount(&local_38,4000);
  local_40 = &local_38;
  local_70.DataPtr = (void **)0x0;
  local_60 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_Capsules'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = &local_50;
  local_70.ArrayNum = 0;
  local_50 = this;
  local_48 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_60,local_78,None,&local_70);
  DeleteCriticalSection(&local_38);
  return;
}

// Generate_ConvexHullDecompositions @ 14c8f1500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1,FProgressCancel *param_2)

{
  FProgressCancel *local_res18 [2];
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FMeshSimpleShapeApproximation **local_68;
  FMeshSimpleShapeApproximation *local_60;
  FSimpleShapeSet3d *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  FProgressCancel **local_48;
  _RTL_CRITICAL_SECTION local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_res18[0] = param_2;
  InitializeCriticalSectionAndSpinCount(&local_40,4000);
  local_50 = &local_40;
  local_48 = local_res18;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_60 = this;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,None,&local_80);
  DeleteCriticalSection(&local_40);
  return;
}

// Generate_ConvexHulls @ 14c8f15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHulls
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1,FProgressCancel *param_2)

{
  FProgressCancel *local_res18 [2];
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FMeshSimpleShapeApproximation **local_68;
  FMeshSimpleShapeApproximation *local_60;
  FSimpleShapeSet3d *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  FProgressCancel **local_48;
  _RTL_CRITICAL_SECTION local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_res18[0] = param_2;
  InitializeCriticalSectionAndSpinCount(&local_40,4000);
  local_50 = &local_40;
  local_48 = local_res18;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHulls'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_60 = this;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,None,&local_80);
  DeleteCriticalSection(&local_40);
  return;
}

// Generate_LevelSets @ 14c8f16e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_LevelSets
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1,FProgressCancel *param_2)

{
  FProgressCancel *local_res18 [2];
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FMeshSimpleShapeApproximation **local_68;
  FMeshSimpleShapeApproximation *local_60;
  FSimpleShapeSet3d *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  FProgressCancel **local_48;
  _RTL_CRITICAL_SECTION local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_res18[0] = param_2;
  InitializeCriticalSectionAndSpinCount(&local_40,4000);
  local_50 = &local_40;
  local_48 = local_res18;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_LevelSets'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_60 = this;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,None,&local_80);
  DeleteCriticalSection(&local_40);
  return;
}

// Generate_MinVolume @ 14c8f17d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinVolume
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1)

{
  undefined1 auStackY_b8 [32];
  <lambda_1> local_78;
  TArrayView<std::nullptr_t,int> local_70;
  code *local_60;
  FMeshSimpleShapeApproximation **local_58;
  FMeshSimpleShapeApproximation *local_50;
  FSimpleShapeSet3d *local_48;
  _RTL_CRITICAL_SECTION *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  InitializeCriticalSectionAndSpinCount(&local_38,4000);
  local_40 = &local_38;
  local_70.DataPtr = (void **)0x0;
  local_60 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinVolume'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = &local_50;
  local_70.ArrayNum = 0;
  local_50 = this;
  local_48 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_60,local_78,None,&local_70);
  DeleteCriticalSection(&local_38);
  return;
}

// Generate_MinimalSpheres @ 14c8f18b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinimalSpheres
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1)

{
  undefined1 auStackY_b8 [32];
  <lambda_1> local_78;
  TArrayView<std::nullptr_t,int> local_70;
  code *local_60;
  FMeshSimpleShapeApproximation **local_58;
  FMeshSimpleShapeApproximation *local_50;
  FSimpleShapeSet3d *local_48;
  _RTL_CRITICAL_SECTION *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  InitializeCriticalSectionAndSpinCount(&local_38,4000);
  local_40 = &local_38;
  local_70.DataPtr = (void **)0x0;
  local_60 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinimalSpheres'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = &local_50;
  local_70.ArrayNum = 0;
  local_50 = this;
  local_48 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_60,local_78,None,&local_70);
  DeleteCriticalSection(&local_38);
  return;
}

// Generate_OrientedBoxes @ 14c8f1990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_OrientedBoxes
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1,FProgressCancel *param_2)

{
  FProgressCancel *local_res18 [2];
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FMeshSimpleShapeApproximation **local_68;
  FMeshSimpleShapeApproximation *local_60;
  FSimpleShapeSet3d *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  FProgressCancel **local_48;
  _RTL_CRITICAL_SECTION local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_res18[0] = param_2;
  InitializeCriticalSectionAndSpinCount(&local_40,4000);
  local_50 = &local_40;
  local_48 = local_res18;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_OrientedBoxes'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_60 = this;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,None,&local_80);
  DeleteCriticalSection(&local_40);
  return;
}

// Generate_ProjectedHulls @ 14c8f1a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::Generate_ProjectedHulls
          (FMeshSimpleShapeApproximation *this,FSimpleShapeSet3d *param_1,
          EProjectedHullAxisMode param_2)

{
  EProjectedHullAxisMode local_res18 [4];
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FMeshSimpleShapeApproximation **local_68;
  FMeshSimpleShapeApproximation *local_60;
  FSimpleShapeSet3d *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  EProjectedHullAxisMode *local_48;
  _RTL_CRITICAL_SECTION local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_res18[0] = param_2;
  InitializeCriticalSectionAndSpinCount(&local_40,4000);
  local_50 = &local_40;
  local_48 = local_res18;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::Generate_ProjectedHulls'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_60 = this;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,None,&local_80);
  DeleteCriticalSection(&local_40);
  return;
}

// GetDetectedSimpleShape @ 14c8f39e0

bool __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::GetDetectedSimpleShape
          (FMeshSimpleShapeApproximation *this,FSourceMeshCache *param_1,FSimpleShapeSet3d *param_2,
          FWindowsRecursiveMutex *param_3)

{
  int *piVar1;
  EDetectedSimpleShapeType EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  TVector<double>_u_0 local_58;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  EVar2 = param_1->DetectedType;
  if (EVar2 == Sphere) {
    if (this->bDetectSpheres != false) {
      EnterCriticalSection((LPCRITICAL_SECTION)param_3);
      local_108 = *(undefined8 *)&(param_1->DetectedSphere).Center.field0_0x0;
      uStack_100 = *(undefined8 *)((longlong)&(param_1->DetectedSphere).Center.field0_0x0 + 8);
      pFVar3 = (param_2->Spheres).AllocatorInstance.Data;
      local_f8 = *(undefined8 *)((longlong)&(param_1->DetectedSphere).Center.field0_0x0 + 0x10);
      uStack_f0 = (param_1->DetectedSphere).Radius;
      if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar3 + (longlong)(param_2->Spheres).ArrayMax * 0x20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = (param_2->Spheres).ArrayNum;
      piVar1 = &(param_2->Spheres).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)param_2,piVar1);
      }
      (param_2->Spheres).ArrayNum = iVar8 + 1;
      pFVar4 = (param_2->Spheres).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar8 * 0x20;
      *(undefined4 *)pFVar3 = (undefined4)local_108;
      *(undefined4 *)(pFVar3 + 4) = local_108._4_4_;
      *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_100;
      *(undefined4 *)(pFVar3 + 0xc) = uStack_100._4_4_;
      pFVar4 = pFVar4 + (longlong)iVar8 * 0x20 + 0x10;
      *(undefined4 *)pFVar4 = (undefined4)local_f8;
      *(undefined4 *)(pFVar4 + 4) = local_f8._4_4_;
      *(undefined4 *)(pFVar4 + 8) = (undefined4)uStack_f0;
      *(undefined4 *)(pFVar4 + 0xc) = uStack_f0._4_4_;
      LeaveCriticalSection((LPCRITICAL_SECTION)param_3);
      return true;
    }
  }
  else if (EVar2 == Box) {
    if (this->bDetectBoxes != false) {
      TOrientedBox3<double>::ReparameterizedCloserToWorldFrame
                (&param_1->DetectedBox,(TOrientedBox3<double> *)&local_58._s_0);
      EnterCriticalSection((LPCRITICAL_SECTION)param_3);
      pFVar3 = (param_2->Boxes).AllocatorInstance.Data;
      local_a8 = local_58._s_0.X;
      dStack_a0 = local_58._s_0.Y;
      local_88 = local_38;
      uStack_80 = uStack_30;
      local_98 = local_58._s_0.Z;
      uStack_90 = uStack_40;
      local_68 = local_18;
      uStack_60 = uStack_10;
      local_78 = local_28;
      uStack_70 = uStack_20;
      if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar3 + (longlong)(param_2->Boxes).ArrayMax * 0x50)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = (param_2->Boxes).ArrayNum;
      piVar1 = &(param_2->Boxes).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&(param_2->Boxes).AllocatorInstance,piVar1);
      }
      lVar9 = (longlong)iVar8;
      (param_2->Boxes).ArrayNum = iVar8 + 1;
      pFVar4 = (param_2->Boxes).AllocatorInstance.Data;
      *(double *)(pFVar4 + lVar9 * 0x50) = local_a8;
      *(double *)(pFVar4 + lVar9 * 0x50 + 8) = dStack_a0;
      *(double *)(pFVar4 + lVar9 * 0x50 + 0x10) = local_98;
      *(undefined8 *)(pFVar4 + lVar9 * 0x50 + 0x10 + 8) = uStack_90;
      *(undefined8 *)(pFVar4 + lVar9 * 0x50 + 0x20) = local_88;
      *(undefined8 *)(pFVar4 + lVar9 * 0x50 + 0x20 + 8) = uStack_80;
      pFVar3 = pFVar4 + lVar9 * 0x50 + 0x30;
      *(undefined4 *)pFVar3 = (undefined4)local_78;
      *(undefined4 *)(pFVar3 + 4) = local_78._4_4_;
      *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_70;
      *(undefined4 *)(pFVar3 + 0xc) = uStack_70._4_4_;
      pFVar4 = pFVar4 + lVar9 * 0x50 + 0x40;
      *(undefined4 *)pFVar4 = (undefined4)local_68;
      *(undefined4 *)(pFVar4 + 4) = local_68._4_4_;
      *(undefined4 *)(pFVar4 + 8) = (undefined4)uStack_60;
      *(undefined4 *)(pFVar4 + 0xc) = uStack_60._4_4_;
      LeaveCriticalSection((LPCRITICAL_SECTION)param_3);
      return true;
    }
  }
  else if ((EVar2 == Capsule) && (this->bDetectCapsules != false)) {
    EnterCriticalSection((LPCRITICAL_SECTION)param_3);
    local_e8 = (param_1->DetectedCapsule).Segment.Center.field0_0x0._s_0.X;
    dStack_e0 = (param_1->DetectedCapsule).Segment.Center.field0_0x0._s_0.Y;
    pFVar3 = (param_2->Capsules).AllocatorInstance.Data;
    local_d8 = (param_1->DetectedCapsule).Segment.Center.field0_0x0._s_0.Z;
    dStack_d0 = (param_1->DetectedCapsule).Segment.Direction.field0_0x0._s_0.X;
    local_c8 = *(undefined8 *)
                ((longlong)&(param_1->DetectedCapsule).Segment.Direction.field0_0x0 + 8);
    uStack_c0 = *(undefined8 *)
                 ((longlong)&(param_1->DetectedCapsule).Segment.Direction.field0_0x0 + 0x10);
    local_b8 = (param_1->DetectedCapsule).Segment.Extent;
    uStack_b0 = (param_1->DetectedCapsule).Radius;
    if ((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
       (((FScriptContainerElement *)&local_e8 <
         pFVar3 + (longlong)(param_2->Capsules).ArrayMax * 0x40 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar8 = (param_2->Capsules).ArrayNum;
    piVar1 = &(param_2->Capsules).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(param_2->Capsules).AllocatorInstance,piVar1);
    }
    (param_2->Capsules).ArrayNum = iVar8 + 1;
    pFVar4 = (param_2->Capsules).AllocatorInstance.Data;
    lVar9 = (longlong)iVar8 * 0x40;
    *(double *)(pFVar4 + lVar9) = local_e8;
    *(double *)(pFVar4 + lVar9 + 8) = dStack_e0;
    *(double *)(pFVar4 + lVar9 + 0x10) = local_d8;
    *(double *)(pFVar4 + lVar9 + 0x10 + 8) = dStack_d0;
    pFVar3 = pFVar4 + lVar9 + 0x20;
    *(undefined4 *)pFVar3 = (undefined4)local_c8;
    *(undefined4 *)(pFVar3 + 4) = local_c8._4_4_;
    *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_c0;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_c0._4_4_;
    pFVar4 = pFVar4 + lVar9 + 0x30;
    *(undefined4 *)pFVar4 = (undefined4)local_b8;
    *(undefined4 *)(pFVar4 + 4) = local_b8._4_4_;
    *(undefined4 *)(pFVar4 + 8) = (undefined4)uStack_b0;
    *(undefined4 *)(pFVar4 + 0xc) = uStack_b0._4_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)param_3);
    return true;
  }
  return false;
}

// InitializeSourceMeshes @ 14c8ff2d0

void __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::InitializeSourceMeshes
          (FMeshSimpleShapeApproximation *this,
          TArray<UE::Geometry::FDynamicMesh3_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Geometry::FDynamicMesh3_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<UE::Geometry::FMeshSimpleShapeApproximation::FSourceMeshCache,TSizedDefaultAllocator<32>_>
  *pTVar4;
  uint uVar5;
  code *pcVar6;
  <lambda_1> <Var7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FMeshSimpleShapeApproximation *local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FMeshSimpleShapeApproximation **local_30;
  
  pTVar1 = &this->SourceMeshes;
  if (pTVar1 != param_1) {
    iVar10 = param_1->ArrayNum;
    piVar2 = &(this->SourceMeshes).ArrayMax;
    pFVar11 = (param_1->AllocatorInstance).Data;
    (this->SourceMeshes).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar10,*piVar2,&pTVar1->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 3);
      }
    }
  }
  pTVar4 = &this->SourceMeshCaches;
  piVar2 = &(this->SourceMeshCaches).ArrayMax;
  (this->SourceMeshCaches).ArrayNum = 0;
  piVar3 = &(this->SourceMeshCaches).ArrayNum;
  if ((this->SourceMeshCaches).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  uVar5 = (this->SourceMeshes).ArrayNum;
  iVar10 = *piVar3;
  if (iVar10 < (int)uVar5) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb8,8,uVar5 - iVar10,&pTVar4->AllocatorInstance,piVar3,piVar2);
    DefaultConstructItems<UE::Geometry::FMeshSimpleShapeApproximation::FSourceMeshCache,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0xb8,uVar5 - iVar10);
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar10) {
      uVar12 = iVar10 - uVar5;
      if ((int)(uVar12 | uVar5) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (uVar12 != 0) {
        pFVar11 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xb8;
        iVar10 = (*piVar3 - uVar5) - uVar12;
        if (iVar10 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar12 * 0xb8,(longlong)iVar10 * 0xb8);
        }
        *piVar3 = *piVar3 - uVar12;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,&pTVar4->AllocatorInstance,*piVar3,piVar2);
      }
    }
  }
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSimpleShapeApproximation::InitializeSourceMeshes'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = &local_res8;
  local_48.DataPtr = (void **)0x0;
  local_res8._0_1_ = SUB81(this,0);
  local_48.ArrayNum = 0;
  <Var7 = local_res8._0_1_;
  local_res8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SourceMeshes).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_38,<Var7,None,&local_48);
  return;
}

