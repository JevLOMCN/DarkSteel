// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// GetMeshVerticesCentroid @ 1433a8f80

TVector<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetMeshVerticesCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  
  uVar2 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar9 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  iVar6 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  iVar3 = uVar2 + iVar6;
  if (0 < iVar3) {
    uVar10 = uVar9;
    do {
      if ((int)uVar9 < iVar3) {
        uVar7 = (ulonglong)((uint)uVar10 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (uVar9 >> 9) * 8) + uVar7 * 2) - 1U) < 0xfffe) {
          lVar4 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar9 >> 9) * 8);
          pdVar1 = (double *)(lVar4 + uVar7 * 0x18);
          dVar11 = *pdVar1;
          dVar5 = pdVar1[1];
          (__return_storage_ptr__->field0_0x0)._s_0.Z =
               *(double *)(lVar4 + 0x10 + uVar7 * 0x18) +
               (__return_storage_ptr__->field0_0x0)._s_0.Z;
          (__return_storage_ptr__->field0_0x0)._s_0.Y =
               dVar5 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
          (__return_storage_ptr__->field0_0x0)._s_0.X =
               dVar11 + (__return_storage_ptr__->field0_0x0)._s_0.X;
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 1;
    } while ((int)uVar8 < (int)(iVar6 + uVar2));
  }
  iVar3 = (param_1->VertexRefCounts).UsedCount;
  if (0 < iVar3) {
    dVar11 = __real_3ff0000000000000 / (double)iVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X * dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (__return_storage_ptr__->field0_0x0)._s_0.Y * dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar11 * (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetTriBounds @ 1433b2640

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::
TMeshQueries<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
GetTriBounds(TAxisAlignedBox3<double> *__return_storage_ptr__,FHullMeshWrapper *param_1,int param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  TConvexHull3<double> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TAxisAlignedBox3<double> *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint local_a8;
  undefined8 local_98;
  double local_88;
  undefined8 local_80;
  double local_70;
  
  pTVar4 = param_1->Hull;
  uVar8 = 0;
  if (param_2 < (pTVar4->Hull).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar5 = (pTVar4->Hull).AllocatorInstance.Data;
  uVar11 = *(ulonglong *)(pFVar5 + (longlong)param_2 * 0xc);
  uVar8 = *(uint *)(pFVar5 + (longlong)param_2 * 0xc + 8);
  pFVar5 = (param_1->SourceMesh->Vertices).Blocks.AllocatorInstance.Data;
  local_a8 = (uint)uVar11;
  auVar2 = *(undefined1 (*) [16])
            (*(longlong *)(pFVar5 + (ulonglong)(local_a8 >> 9) * 8) +
            (ulonglong)(local_a8 & 0x1ff) * 0x18);
  uVar13 = auVar2._0_4_;
  uVar14 = auVar2._4_4_;
  uVar19 = auVar2._8_4_;
  uVar20 = auVar2._12_4_;
  local_88 = *(double *)
              (*(longlong *)(pFVar5 + (ulonglong)(local_a8 >> 9) * 8) + 0x10 +
              (ulonglong)(local_a8 & 0x1ff) * 0x18);
  uVar10 = (ulonglong)((uint)(uVar11 >> 0x20) & 0x1ff);
  auVar3 = *(undefined1 (*) [16])(*(longlong *)(pFVar5 + (uVar11 >> 0x29) * 8) + uVar10 * 0x18);
  dVar21 = auVar3._0_8_;
  dVar22 = auVar3._8_8_;
  dVar1 = *(double *)(*(longlong *)(pFVar5 + (uVar11 >> 0x29) * 8) + 0x10 + uVar10 * 0x18);
  local_98 = auVar2._0_8_;
  uVar17 = auVar3._0_4_;
  uVar18 = auVar3._4_4_;
  local_80 = dVar21;
  if ((local_98 <= dVar21) &&
     (uVar17 = uVar13, uVar18 = uVar14, local_80 = local_98, local_98 < dVar21)) {
    uVar13 = auVar3._0_4_;
    uVar14 = auVar3._4_4_;
    local_98 = dVar21;
  }
  dVar23 = auVar2._8_8_;
  uVar15 = uVar19;
  uVar16 = uVar20;
  dVar21 = dVar23;
  if (dVar23 <= dVar22) {
    if (dVar23 < dVar22) {
      local_98 = (double)CONCAT44(uVar14,uVar13);
      uVar15 = auVar3._8_4_;
      uVar16 = auVar3._12_4_;
      dVar21 = dVar22;
    }
  }
  else {
    local_80 = (double)CONCAT44(uVar18,uVar17);
    uVar19 = auVar3._8_4_;
    uVar20 = auVar3._12_4_;
    dVar23 = dVar22;
  }
  uVar24 = SUB84(local_88,0);
  uVar25 = (undefined4)((ulonglong)local_88 >> 0x20);
  uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar26 = SUB84(dVar1,0);
  uVar27 = uVar12;
  local_70 = dVar1;
  if ((local_88 <= dVar1) &&
     (uVar26 = uVar24, uVar27 = uVar25, local_70 = local_88, local_88 < dVar1)) {
    uVar24 = SUB84(dVar1,0);
    uVar25 = uVar12;
    local_88 = dVar1;
  }
  uVar11 = (ulonglong)(uVar8 & 0x1ff);
  auVar2 = *(undefined1 (*) [16])
            (*(longlong *)(pFVar5 + (ulonglong)(uVar8 >> 9) * 8) + uVar11 * 0x18);
  dVar22 = auVar2._0_8_;
  dVar1 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar8 >> 9) * 8) + 0x10 + uVar11 * 0x18);
  if ((double)CONCAT44(uVar18,uVar17) <= dVar22) {
    if ((double)CONCAT44(uVar14,uVar13) <= dVar22 && dVar22 != (double)CONCAT44(uVar14,uVar13)) {
      uVar15 = SUB84(dVar21,0);
      uVar16 = (undefined4)((ulonglong)dVar21 >> 0x20);
      uVar13 = auVar2._0_4_;
      uVar14 = auVar2._4_4_;
      local_98 = dVar22;
    }
  }
  else {
    uVar19 = SUB84(dVar23,0);
    uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
    uVar17 = auVar2._0_4_;
    uVar18 = auVar2._4_4_;
    local_80 = dVar22;
  }
  if (dVar23 <= auVar2._8_8_) {
    if (dVar21 < auVar2._8_8_) {
      uVar13 = (undefined4)local_98;
      uVar14 = local_98._4_4_;
      uVar15 = auVar2._8_4_;
      uVar16 = auVar2._12_4_;
    }
  }
  else {
    uVar17 = (undefined4)local_80;
    uVar18 = local_80._4_4_;
    uVar19 = auVar2._8_4_;
    uVar20 = auVar2._12_4_;
  }
  dVar21 = dVar1;
  if (((double)CONCAT44(uVar27,uVar26) <= dVar1) &&
     (dVar21 = local_70,
     (double)CONCAT44(uVar25,uVar24) <= dVar1 && dVar1 != (double)CONCAT44(uVar25,uVar24))) {
    local_88 = dVar1;
  }
  local_70 = dVar21;
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar17;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar19;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar20;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_70;
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar13;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar14;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar16;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_88;
  return __return_storage_ptr__;
}

// GetVolumeArea @ 1433b3ab0

TVector2<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
          (TVector2<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  double dVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 local_res8 [8];
  
  pFVar17 = (param_2->AllocatorInstance).Data;
  iVar5 = param_2->ArrayNum;
  dVar11 = 0.0;
  dVar12 = 0.0;
  pFVar1 = pFVar17 + (longlong)iVar5 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar5) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      in_XMM0 = extraout_XMM0;
    }
    if (pFVar17 == pFVar1) break;
    uVar6 = *(uint *)pFVar17;
    if ((-1 < (int)uVar6) &&
       ((int)uVar6 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar16 = (ulonglong)(uVar6 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar6 >> 9) * 8) + uVar16 * 2) - 1U) < 0xfffe) {
        lVar8 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8);
        pFVar9 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar6 = *(uint *)(lVar8 + uVar16 * 0xc);
        uVar15 = (ulonglong)(uVar6 & 0x1ff);
        auVar4 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) + uVar15 * 0x18);
        dVar3 = *(double *)
                 (*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar15 * 0x18);
        uVar6 = *(uint *)(lVar8 + 4 + uVar16 * 0xc);
        auVar13._4_8_ = in_XMM0._8_8_;
        auVar13._0_4_ = auVar4._4_4_;
        auVar18._0_8_ = auVar13._0_8_ << 0x20;
        auVar18._8_4_ = auVar4._8_4_;
        auVar18._12_4_ = auVar4._12_4_;
        uVar15 = (ulonglong)(uVar6 & 0x1ff);
        pdVar2 = (double *)(*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) + uVar15 * 0x18);
        dVar14 = *pdVar2;
        uVar7 = *(uint *)(lVar8 + 8 + uVar16 * 0xc);
        dVar24 = *(double *)
                  (*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar15 * 0x18) -
                 dVar3;
        dVar10 = auVar4._0_8_;
        dVar26 = dVar14 - dVar10;
        dVar25 = pdVar2[1] - auVar18._8_8_;
        uVar16 = (ulonglong)(uVar7 & 0x1ff);
        auVar4 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar9 + (ulonglong)(uVar7 >> 9) * 8) + uVar16 * 0x18);
        dVar3 = *(double *)
                 (*(longlong *)(pFVar9 + (ulonglong)(uVar7 >> 9) * 8) + 0x10 + uVar16 * 0x18) -
                dVar3;
        dVar23 = auVar4._0_8_ - dVar10;
        dVar21 = auVar4._8_8_ - auVar18._8_8_;
        dVar22 = dVar21 * dVar24 - dVar3 * dVar25;
        dVar3 = dVar3 * dVar26 - dVar23 * dVar24;
        auVar19._8_4_ = auVar4._8_4_;
        auVar19._0_8_ = dVar22;
        auVar19._12_4_ = auVar4._12_4_;
        auVar20._8_8_ = auVar19._8_8_;
        auVar20._0_8_ = dVar22 * dVar22;
        dVar24 = dVar23 * dVar25 - dVar21 * dVar26;
        dVar11 = dVar11 + (dVar14 + dVar10 + auVar4._0_8_) * dVar22;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar3 * dVar3 + auVar20._0_8_ + dVar24 * dVar24;
        in_XMM0 = sqrtpd(auVar20,auVar4);
        dVar12 = dVar12 + in_XMM0._0_8_;
      }
    }
    pFVar17 = pFVar17 + 4;
  }
  dVar12 = dVar12 * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11 * __real_3fc5555555555555;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
  return __return_storage_ptr__;
}

// TriangleDistance @ 1433daf00

TDistPoint3Triangle3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
          (TDistPoint3Triangle3<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TVector<double> *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TDistPoint3Triangle3<double> *pTVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 TStack_40;
  TVector<double>_u_0 local_28;
  
  if (((param_2 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.IsTriangle(TriIdx)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                       ,0x1e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDistPoint3Triangle3<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (param_1,param_2,(TVector<double> *)&local_58._s_0,(TVector<double> *)&TStack_40._s_0,
             (TVector<double> *)&local_28._s_0);
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Point).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.X = local_58._s_0.X;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Y = local_58._s_0.Y;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Z = local_58._s_0.Z;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.X = TStack_40._s_0.X;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Y = TStack_40._s_0.Y;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Z = TStack_40._s_0.Z;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Z = local_28._s_0.Z;
  TDistPoint3Triangle3<double>::ComputeResult(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTriBounds @ 1434c58e0

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FColliderMesh>::GetTriBounds
          (TAxisAlignedBox3<double> *__return_storage_ptr__,FColliderMesh *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TAxisAlignedBox3<double> *pTVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint local_f8;
  uint uStack_f4;
  undefined8 local_e8;
  double local_d8;
  undefined8 local_d0;
  double local_c0;
  
  uVar10 = 0;
  if (param_2 < (param_1->Triangles).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar5 = (param_1->Triangles).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar5 + (longlong)param_2 * 0xc);
  uVar10 = *(uint *)(pFVar5 + (longlong)param_2 * 0xc + 8);
  local_f8 = (uint)uVar1;
  uVar8 = 0;
  if ((int)local_f8 < (param_1->Vertices).ArrayNum) {
    uVar8 = ~local_f8 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar9;
  }
  uStack_f4 = (uint)((ulonglong)uVar1 >> 0x20);
  pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
  auVar3 = *(undefined1 (*) [16])(pFVar5 + (longlong)(int)local_f8 * 0x18);
  local_e8 = auVar3._0_8_;
  uVar14 = auVar3._0_4_;
  uVar15 = auVar3._4_4_;
  uVar20 = auVar3._8_4_;
  uVar21 = auVar3._12_4_;
  local_d8 = *(double *)(pFVar5 + (longlong)(int)local_f8 * 0x18 + 0x10);
  uVar8 = 0;
  if ((int)uStack_f4 < (param_1->Vertices).ArrayNum) {
    uVar8 = ~uStack_f4 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
  auVar4 = *(undefined1 (*) [16])(pFVar5 + (longlong)(int)uStack_f4 * 0x18);
  dVar11 = auVar4._0_8_;
  dVar2 = *(double *)(pFVar5 + (longlong)(int)uStack_f4 * 0x18 + 0x10);
  uVar26 = auVar4._0_4_;
  uVar27 = auVar4._4_4_;
  local_d0 = dVar11;
  if ((local_e8 <= dVar11) &&
     (uVar26 = uVar14, uVar27 = uVar15, local_d0 = local_e8, local_e8 < dVar11)) {
    uVar14 = auVar4._0_4_;
    uVar15 = auVar4._4_4_;
    local_e8 = dVar11;
  }
  uVar16 = uVar20;
  uVar17 = uVar21;
  if (auVar3._8_8_ <= auVar4._8_8_) {
    if (auVar3._8_8_ < auVar4._8_8_) {
      local_e8 = (double)CONCAT44(uVar15,uVar14);
      uVar16 = auVar4._8_4_;
      uVar17 = auVar4._12_4_;
    }
  }
  else {
    local_d0 = (double)CONCAT44(uVar27,uVar26);
    uVar20 = auVar4._8_4_;
    uVar21 = auVar4._12_4_;
  }
  uVar22 = SUB84(local_d8,0);
  uVar23 = (undefined4)((ulonglong)local_d8 >> 0x20);
  uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar24 = SUB84(dVar2,0);
  uVar25 = uVar18;
  local_c0 = dVar2;
  if ((local_d8 <= dVar2) &&
     (uVar24 = uVar22, uVar25 = uVar23, local_c0 = local_d8, local_d8 < dVar2)) {
    uVar22 = SUB84(dVar2,0);
    uVar23 = uVar18;
    local_d8 = dVar2;
  }
  uVar8 = 0;
  if ((int)uVar10 < (param_1->Vertices).ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
  auVar3 = *(undefined1 (*) [16])(pFVar5 + (longlong)(int)uVar10 * 0x18);
  dVar12 = auVar3._0_8_;
  dVar13 = auVar3._8_8_;
  dVar2 = *(double *)(pFVar5 + (longlong)(int)uVar10 * 0x18 + 0x10);
  uVar18 = auVar3._0_4_;
  uVar19 = auVar3._4_4_;
  dVar11 = dVar12;
  if (((double)CONCAT44(uVar27,uVar26) <= dVar12) &&
     (uVar18 = uVar26, uVar19 = uVar27, dVar11 = local_d0,
     (double)CONCAT44(uVar15,uVar14) <= dVar12 && dVar12 != (double)CONCAT44(uVar15,uVar14))) {
    uVar14 = auVar3._0_4_;
    uVar15 = auVar3._4_4_;
    local_e8 = dVar12;
  }
  local_d0 = dVar11;
  if ((double)CONCAT44(uVar21,uVar20) <= dVar13) {
    if ((double)CONCAT44(uVar17,uVar16) <= dVar13 && dVar13 != (double)CONCAT44(uVar17,uVar16)) {
      uVar14 = (undefined4)local_e8;
      uVar15 = local_e8._4_4_;
      uVar16 = auVar3._8_4_;
      uVar17 = auVar3._12_4_;
    }
  }
  else {
    uVar18 = (undefined4)local_d0;
    uVar19 = local_d0._4_4_;
    uVar20 = auVar3._8_4_;
    uVar21 = auVar3._12_4_;
  }
  dVar11 = dVar2;
  if (((double)CONCAT44(uVar25,uVar24) <= dVar2) &&
     (dVar11 = local_c0,
     (double)CONCAT44(uVar23,uVar22) <= dVar2 && dVar2 != (double)CONCAT44(uVar23,uVar22))) {
    local_d8 = dVar2;
  }
  local_c0 = dVar11;
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar19;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar20;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar21;
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar14;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar16;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar17;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_c0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_d8;
  return __return_storage_ptr__;
}

// GetVertexWeightsOnTriangle @ 1434cb860

TVector<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexWeightsOnTriangle
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,double param_3
          ,bool param_4,bool param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  TVector<double> *pTVar5;
  TVector<double> local_38 [2];
  
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  if (param_5) {
    pTVar5 = FDynamicMesh3::GetTriInternalAnglesR(param_1,local_38,param_2);
    dVar3 = (pTVar5->field0_0x0)._s_0.Y;
    dVar1 = (pTVar5->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  if (param_4) {
    dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Y * param_3;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.X * param_3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = param_3 * dVar1;
  }
  return __return_storage_ptr__;
}

