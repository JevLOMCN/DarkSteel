// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// AddEdgeInternal @ 14c6ff1a0

int __thiscall
UE::Geometry::FSimpleIntrinsicMesh::AddEdgeInternal
          (FSimpleIntrinsicMesh *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  FIndex2i_u_0 local_18;
  int local_10;
  int local_c;
  
  iVar1 = param_1;
  if (param_1 <= param_2) {
    iVar1 = param_2;
    param_2 = param_1;
  }
  uVar2 = FRefCountVector::Allocate((FRefCountVector *)&this->field_0x158);
  local_c = param_4;
  local_18._s_0.A = param_2;
  local_18._s_0.B = iVar1;
  local_10 = param_3;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::InsertAt
            ((TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *)&this->field_0x140,
             (FEdge *)&local_18._s_0,uVar2);
  FSmallListSet::Insert((FSmallListSet *)&this->field_0x68,param_2,uVar2);
  if (param_2 != iVar1) {
    FSmallListSet::Insert((FSmallListSet *)&this->field_0x68,iVar1,uVar2);
  }
  return uVar2;
}

// AddTriangleInternal @ 14c6ff950

int __thiscall
UE::Geometry::FSimpleIntrinsicMesh::AddTriangleInternal
          (FSimpleIntrinsicMesh *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  uint uVar1;
  FIndex3i_u_0 local_18;
  
  uVar1 = FRefCountVector::Allocate((FRefCountVector *)&this->field_0xf0);
  local_18._s_0.A = param_1;
  local_18._s_0.B = param_2;
  local_18._s_0.C = param_3;
  TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
            ((TDynamicVector<UE::Geometry::FIndex3i,512> *)&this->field_0xd8,
             (FIndex3i *)&local_18._s_0,uVar1);
  local_18._s_0.A = param_4;
  local_18._s_0.B = param_5;
  local_18._s_0.C = param_6;
  TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
            ((TDynamicVector<UE::Geometry::FIndex3i,512> *)&this->field_0x128,
             (FIndex3i *)&local_18._s_0,uVar1);
  return uVar1;
}

// PokeTriangle @ 14c756ab0

EMeshResult __thiscall
UE::Geometry::FSimpleIntrinsicMesh::PokeTriangle
          (FSimpleIntrinsicMesh *this,int param_1,TVector<double> *param_2,
          FPokeTriangleInfo *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  EMeshResult EVar12;
  longlong lVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double local_d8 [3];
  undefined1 local_c0 [16];
  double local_b0 [15];
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0xf0 * 0x200 + *(int *)&this->field_0xf4)) {
    uVar15 = (ulonglong)((uint)param_1 >> 9);
    uVar16 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)&this->field_0xf8 + uVar15 * 8) + uVar16 * 2)
                - 1U) < 0xfffe) {
      lVar13 = *(longlong *)&this->field_0x198;
      lVar11 = *(longlong *)(*(longlong *)&this->field_0x130 + uVar15 * 8);
      uVar8 = *(uint *)(lVar11 + 8 + uVar16 * 0xc);
      local_d8[0] = *(double *)(lVar11 + uVar16 * 0xc);
      dVar2 = *(double *)
               (*(longlong *)(lVar13 + (ulonglong)(local_d8[0]._0_4_ >> 9) * 8) +
               (ulonglong)(local_d8[0]._0_4_ & 0x1ff) * 8);
      dVar3 = *(double *)
               (*(longlong *)(lVar13 + ((ulonglong)local_d8[0] >> 0x29) * 8) +
               (ulonglong)((uint)((ulonglong)local_d8[0] >> 0x20) & 0x1ff) * 8);
      dVar4 = *(double *)
               (*(longlong *)(lVar13 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 8
               );
      EVar12 = PokeTriangleTopology(this,param_1,param_3);
      if (EVar12 == Ok) {
        uVar8 = (param_3->NewTriangles).field0_0x0._s_0.A;
        dVar5 = (param_2->field0_0x0)._s_0.X;
        dVar6 = (param_2->field0_0x0)._s_0.Y;
        uVar9 = (param_3->NewTriangles).field0_0x0._s_0.B;
        dVar7 = (param_2->field0_0x0)._s_0.Z;
        lVar13 = 0;
        do {
          local_d8[2] = 0.0;
          local_d8[0] = 0.0;
          local_d8[1] = 0.0;
          *(undefined8 *)((longlong)local_d8 + lVar13) = 0x3ff0000000000000;
          dVar18 = dVar6 - local_d8[1];
          local_d8[0] = dVar5 - local_d8[0];
          dVar17 = dVar7 - local_d8[2];
          dVar18 = dVar2 * dVar2 * local_d8[0] * dVar18 + dVar3 * dVar3 * dVar18 * dVar17 +
                   dVar4 * dVar4 * dVar17 * local_d8[0];
          dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^
                                    (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20
                                          ),SUB84(dVar18,0) ^
                                            (uint)__xmm_80000000000000008000000000000000);
          if (0.0 <= dVar18) {
            dVar18 = SQRT(dVar18);
          }
          else {
            dVar18 = 0.0;
          }
          *(double *)(local_c0 + lVar13) = dVar18;
          lVar13 = lVar13 + 8;
        } while (lVar13 < 0x18);
        lVar13 = *(longlong *)(*(longlong *)&this->field_0x130 + uVar15 * 8);
        local_d8[0] = *(double *)(lVar13 + uVar16 * 0xc);
        uVar10 = *(uint *)(lVar13 + 8 + uVar16 * 0xc);
        TDynamicVector<double,512>::InsertAt
                  ((TDynamicVector<double,512> *)&this->field_0x190,(double *)(local_c0 + 8),
                   (uint)((ulonglong)local_d8[0] >> 0x20));
        TDynamicVector<double,512>::InsertAt
                  ((TDynamicVector<double,512> *)&this->field_0x190,(double *)local_c0,uVar10);
        uVar10 = (param_3->NewTriangles).field0_0x0._s_0.A;
        local_d8[0] = *(double *)
                       (*(longlong *)
                         (*(longlong *)&this->field_0x130 + (ulonglong)(uVar10 >> 9) * 8) +
                       (ulonglong)(uVar10 & 0x1ff) * 0xc);
        TDynamicVector<double,512>::InsertAt
                  ((TDynamicVector<double,512> *)&this->field_0x190,local_b0,
                   (uint)((ulonglong)local_d8[0] >> 0x20));
        pTVar14 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                            ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)local_c0,uVar9)
        ;
        TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x1a8,pTVar14,uVar9
                  );
        pTVar14 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                            ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)local_c0,uVar8)
        ;
        TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x1a8,pTVar14,uVar8
                  );
        pTVar14 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                            ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)local_c0,
                             param_1);
        dVar3 = (pTVar14->field0_0x0)._s_0.Y;
        dVar2 = (pTVar14->field0_0x0)._s_0.Z;
        lVar13 = *(longlong *)(*(longlong *)&this->field_0x1b0 + uVar15 * 8);
        EVar12 = Ok;
        pdVar1 = (double *)(lVar13 + uVar16 * 0x18);
        *pdVar1 = (pTVar14->field0_0x0)._s_0.X;
        pdVar1[1] = dVar3;
        *(double *)(lVar13 + 0x10 + uVar16 * 0x18) = dVar2;
        dVar2 = (param_2->field0_0x0)._s_0.Y;
        (param_3->BaryCoords).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        (param_3->BaryCoords).field0_0x0._s_0.Y = dVar2;
        (param_3->BaryCoords).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      }
      return EVar12;
    }
  }
  return Failed_NotATriangle;
}

// PokeTriangleTopology @ 14c756e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FSimpleIntrinsicMesh::PokeTriangleTopology
          (FSimpleIntrinsicMesh *this,int param_1,FPokeTriangleInfo *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  short *psVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FIndex2i_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  uint local_120;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  uStack_c0 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
  uStack_bc = (undefined4)_UNK_15060db28;
  uStack_b8 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
  lVar9 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
  *(undefined8 *)param_2 = 0xffffffff00000000;
  *(undefined8 *)((longlong)&(param_2->TriVertices).field0_0x0 + 4) = 0xffffffffffffffff;
  *(longlong *)&param_2->NewVertex = lVar9;
  *(ulonglong *)((longlong)&(param_2->NewTriangles).field0_0x0 + 4) = CONCAT44(uStack_bc,uStack_c0);
  *(ulonglong *)((longlong)&(param_2->NewEdges).field0_0x0 + 4) = CONCAT44(0xffffffff,uStack_b8);
  (param_2->BaryCoords).field0_0x0._s_0.X = 0.0;
  (param_2->BaryCoords).field0_0x0._s_0.Y = 0.0;
  (param_2->BaryCoords).field0_0x0._s_0.Z = 0.0;
  if ((param_1 < 0) || (*(int *)&this->field_0xf0 * 0x200 + *(int *)&this->field_0xf4 <= param_1)) {
    return Failed_NotATriangle;
  }
  uVar27 = (ulonglong)((uint)param_1 >> 9);
  uVar25 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)&this->field_0xf8 + uVar27 * 8) +
                                  uVar25 * 2) - 1U)) {
    return Failed_NotATriangle;
  }
  lVar9 = *(longlong *)&this->field_0x20;
  lVar23 = *(longlong *)(*(longlong *)&this->field_0xe0 + uVar27 * 8);
  uVar5 = *(ulonglong *)(lVar23 + uVar25 * 0xc);
  uVar7 = *(uint *)(lVar23 + 8 + uVar25 * 0xc);
  lVar23 = *(longlong *)(*(longlong *)&this->field_0x130 + uVar27 * 8);
  uVar8 = *(uint *)(lVar23 + 8 + uVar25 * 0xc);
  uVar6 = *(undefined8 *)(lVar23 + uVar25 * 0xc);
  local_120 = (uint)uVar5;
  uVar21 = (ulonglong)(local_120 & 0x1ff);
  lVar23 = *(longlong *)(lVar9 + (ulonglong)(local_120 >> 9) * 8);
  pdVar1 = (double *)(lVar23 + uVar21 * 0x18);
  uVar15 = (uint)(uVar5 >> 0x20);
  lVar10 = *(longlong *)(lVar9 + (uVar5 >> 0x29) * 8);
  pdVar2 = (double *)(lVar10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
  uVar22 = (ulonglong)(uVar7 & 0x1ff);
  lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  pdVar3 = (double *)(lVar9 + uVar22 * 0x18);
  dVar12 = (*(double *)(lVar23 + 0x10 + uVar21 * 0x18) +
            *(double *)(lVar10 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18) +
           *(double *)(lVar9 + 0x10 + uVar22 * 0x18)) * __real_3fd5555555555555;
  dVar11 = (pdVar1[1] + pdVar2[1] + pdVar3[1]) * __real_3fd5555555555555;
  dVar13 = (*pdVar1 + *pdVar2 + *pdVar3) * __real_3fd5555555555555;
  uVar16 = FRefCountVector::Allocate((FRefCountVector *)&this->field_0x30);
  iVar19 = *(int *)&this->field_0x18;
  iVar28 = *(int *)&this->field_0x1c;
  uVar26 = iVar19 * 0x200 + iVar28;
  if (uVar16 == uVar26) {
    if (iVar28 == 0x200) {
      if (iVar19 == *(int *)&this->field_0x28 + -1) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18);
      }
      *(int *)&this->field_0x18 = *(int *)&this->field_0x18 + 1;
      iVar19 = *(int *)&this->field_0x18;
      *(undefined4 *)&this->field_0x1c = 0;
      iVar28 = 0;
    }
  }
  else {
    if (uVar16 <= uVar26) {
      uVar24 = (ulonglong)(uVar16 & 0x1ff);
      lVar9 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(uVar16 >> 9) * 8);
      *(double *)(lVar9 + uVar24 * 0x18) = dVar13;
      *(double *)(lVar9 + 8 + uVar24 * 0x18) = dVar11;
      *(double *)(lVar9 + 0x10 + uVar24 * 0x18) = dVar12;
      goto LAB_14c757146;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize
              ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18,uVar16);
    iVar28 = *(int *)&this->field_0x1c;
    if (iVar28 == 0x200) {
      if (*(int *)&this->field_0x18 == *(int *)&this->field_0x28 + -1) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18);
      }
      *(int *)&this->field_0x18 = *(int *)&this->field_0x18 + 1;
      *(undefined4 *)&this->field_0x1c = 0;
      iVar28 = 0;
    }
    iVar19 = *(int *)&this->field_0x18;
  }
  lVar23 = (longlong)iVar28;
  lVar9 = *(longlong *)(*(longlong *)&this->field_0x20 + (longlong)iVar19 * 8);
  *(double *)(lVar9 + lVar23 * 0x18) = dVar13;
  *(double *)(lVar9 + 8 + lVar23 * 0x18) = dVar11;
  *(double *)(lVar9 + 0x10 + lVar23 * 0x18) = dVar12;
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
LAB_14c757146:
  if ((int)uVar16 < *(int *)&this->field_0x68 * 0x200 + *(int *)&this->field_0x6c) {
    FSmallListSet::Clear((FSmallListSet *)&this->field_0x68,uVar16);
  }
  FSmallListSet::AllocateAt((FSmallListSet *)&this->field_0x68,uVar16);
  uVar26 = AddEdgeInternal(this,local_120,uVar16,-1,-1);
  uVar17 = AddEdgeInternal(this,uVar15,uVar16,-1,-1);
  uVar18 = AddEdgeInternal(this,uVar7,uVar16,-1,-1);
  psVar4 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(local_120 >> 9) * 8)
                    + uVar21 * 2);
  *psVar4 = *psVar4 + 1;
  psVar4 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 2);
  *psVar4 = *psVar4 + 1;
  psVar4 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(uVar7 >> 9) * 8) +
                    uVar22 * 2);
  *psVar4 = *psVar4 + 1;
  psVar4 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(uVar16 >> 9) * 8) +
                    (ulonglong)(uVar16 & 0x1ff) * 2);
  *psVar4 = *psVar4 + 3;
  lVar9 = *(longlong *)(*(longlong *)&this->field_0xe0 + uVar27 * 8);
  *(ulonglong *)(lVar9 + uVar25 * 0xc) = uVar5;
  *(uint *)(lVar9 + 8 + uVar25 * 0xc) = uVar16;
  lVar9 = *(longlong *)(*(longlong *)&this->field_0x130 + uVar27 * 8);
  local_110 = (undefined4)uVar6;
  *(undefined4 *)(lVar9 + uVar25 * 0xc) = local_110;
  *(uint *)(lVar9 + 4 + uVar25 * 0xc) = uVar17;
  *(uint *)(lVar9 + 8 + uVar25 * 0xc) = uVar26;
  uStack_10c = (uint)((ulonglong)uVar6 >> 0x20);
  iVar19 = AddTriangleInternal(this,uVar15,uVar7,uVar16,uStack_10c,uVar18,uVar17);
  iVar20 = AddTriangleInternal(this,uVar7,local_120,uVar16,uVar8,uVar26,uVar18);
  uVar25 = (ulonglong)(uStack_10c & 0x1ff);
  lVar9 = *(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uStack_10c >> 9) * 8);
  iVar28 = *(int *)(lVar9 + 0xc + uVar25 * 0x10);
  if (*(int *)(lVar9 + 8 + uVar25 * 0x10) == param_1) {
    if (iVar19 == -1) {
      *(int *)(lVar9 + 8 + uVar25 * 0x10) = iVar28;
      *(undefined4 *)(lVar9 + 0xc + uVar25 * 0x10) = 0xffffffff;
    }
    else {
      *(int *)(lVar9 + 8 + uVar25 * 0x10) = iVar19;
    }
  }
  else if (iVar28 == param_1) {
    *(int *)(lVar9 + 0xc + uVar25 * 0x10) = iVar19;
  }
  uVar25 = (ulonglong)(uVar8 & 0x1ff);
  lVar9 = *(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar8 >> 9) * 8);
  iVar28 = *(int *)(lVar9 + 0xc + uVar25 * 0x10);
  if (*(int *)(lVar9 + 8 + uVar25 * 0x10) == param_1) {
    if (iVar20 == -1) {
      *(int *)(lVar9 + 8 + uVar25 * 0x10) = iVar28;
      *(undefined4 *)(lVar9 + 0xc + uVar25 * 0x10) = 0xffffffff;
    }
    else {
      *(int *)(lVar9 + 8 + uVar25 * 0x10) = iVar20;
    }
  }
  else if (iVar28 == param_1) {
    *(int *)(lVar9 + 0xc + uVar25 * 0x10) = iVar20;
  }
  *(int *)(*(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar26 >> 9) * 8) + 8 +
          (ulonglong)(uVar26 & 0x1ff) * 0x10) = param_1;
  *(int *)(*(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar26 >> 9) * 8) + 0xc +
          (ulonglong)(uVar26 & 0x1ff) * 0x10) = iVar20;
  *(int *)(*(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar17 >> 9) * 8) + 8 +
          (ulonglong)(uVar17 & 0x1ff) * 0x10) = param_1;
  *(int *)(*(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar17 >> 9) * 8) + 0xc +
          (ulonglong)(uVar17 & 0x1ff) * 0x10) = iVar19;
  *(int *)(*(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar18 >> 9) * 8) + 8 +
          (ulonglong)(uVar18 & 0x1ff) * 0x10) = iVar19;
  *(int *)(*(longlong *)(*(longlong *)&this->field_0x148 + (ulonglong)(uVar18 >> 9) * 8) + 0xc +
          (ulonglong)(uVar18 & 0x1ff) * 0x10) = iVar20;
  param_2->OriginalTriangle = param_1;
  (param_2->TriVertices).field0_0x0._s_0.A = local_120;
  (param_2->TriVertices).field0_0x0._s_0.B = uVar15;
  (param_2->TriVertices).field0_0x0._s_0.C = uVar7;
  FVar14._s_0.B = iVar20;
  FVar14._s_0.A = iVar19;
  (param_2->NewTriangles).field0_0x0 = FVar14;
  param_2->NewVertex = uVar16;
  (param_2->NewEdges).field0_0x0._s_0.A = uVar26;
  (param_2->NewEdges).field0_0x0._s_0.B = uVar17;
  (param_2->NewEdges).field0_0x0._s_0.C = uVar18;
  (param_2->BaryCoords).field0_0x0._s_0.X = 0.3333333333333333;
  (param_2->BaryCoords).field0_0x0._s_0.Y = 0.3333333333333333;
  (param_2->BaryCoords).field0_0x0._s_0.Z = 0.3333333333333333;
  return Ok;
}

// SplitEdge @ 14c768e20

EMeshResult __thiscall
UE::Geometry::FSimpleIntrinsicMesh::SplitEdge
          (FSimpleIntrinsicMesh *this,int param_1,FEdgeSplitInfo *param_2,double param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  EMeshResult EVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double local_res20;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  double local_d8;
  TVector<double>_u_0 local_d0;
  uint local_b8;
  uint uStack_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  
  dVar3 = __real_3ff0000000000000;
  if (__real_3ff0000000000000 <= param_3) {
    param_3 = __real_3ff0000000000000;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x158 * 0x200 + *(int *)&this->field_0x15c))
  {
    uVar14 = (ulonglong)((uint)param_1 >> 9);
    uVar15 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)&this->field_0x160 + uVar14 * 8) + uVar15 * 2
                           ) - 1U) < 0xfffe) {
      lVar6 = *(longlong *)(*(longlong *)&this->field_0x148 + uVar14 * 8);
      lVar1 = lVar6 + uVar15 * 0x10;
      pdVar2 = (double *)(lVar1 + 8);
      local_b8 = *(uint *)pdVar2;
      uVar7 = *(uint *)(lVar1 + 0xc);
      local_108._0_8_ = *pdVar2;
      if (*(int *)(lVar6 + 0xc + uVar15 * 0x10) == -1) {
        uVar16 = (ulonglong)(local_b8 & 0x1ff);
        lVar1 = *(longlong *)(*(longlong *)&this->field_0x130 + (ulonglong)(local_b8 >> 9) * 8);
        local_120._s_0.X = *(double *)(lVar1 + uVar16 * 0xc);
        uVar7 = (uint)((ulonglong)local_120._s_0.X >> 0x20);
        if (local_120._0_4_ == param_1) {
          iVar11 = 0;
        }
        else if (uVar7 == param_1) {
          iVar11 = 1;
        }
        else {
          iVar11 = -1;
          if (*(int *)(lVar1 + 8 + uVar16 * 0xc) == param_1) {
            iVar11 = 2;
          }
        }
        uVar9 = *(uint *)(lVar1 + 8 + uVar16 * 0xc);
        lVar1 = *(longlong *)&this->field_0x198;
        local_138._s_0.X =
             *(double *)
              (*(longlong *)(lVar1 + (ulonglong)((uint)local_120._0_4_ >> 9) * 8) +
              (ulonglong)(local_120._0_4_ & 0x1ff) * 8);
        local_138._s_0.Y =
             *(double *)
              (*(longlong *)(lVar1 + ((ulonglong)local_120._s_0.X >> 0x29) * 8) +
              (ulonglong)(uVar7 & 0x1ff) * 8);
        local_138._s_0.Z =
             *(double *)
              (*(longlong *)(lVar1 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 8);
        FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                  ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_120._s_0,iVar11,
                   (TVector<double> *)&local_138._s_0);
        EVar8 = SplitEdgeTopology(this,param_1,param_2);
        if (EVar8 != Ok) {
          return EVar8;
        }
        local_f0._s_0.Z = dVar3;
        dVar17 = local_120._s_0.X * param_3;
        local_138._s_0.Y = dVar3 - param_3;
        uVar7 = (param_2->NewTriangles).field0_0x0._s_0.A;
        uVar9 = (param_2->NewEdges).field0_0x0._s_0.A;
        uVar12 = (param_2->NewEdges).field0_0x0._s_0.B;
        local_f0._s_0.X = 0.0;
        local_f0._s_0.Y = 0.0;
        local_d8 = local_120._s_0.X - dVar17;
        local_138._s_0.Z = 0.0;
        if (local_d8 <= 0.0) {
          local_d8 = 0.0;
        }
        local_138._s_0.X = param_3;
        local_res20 = ::`anonymous_namespace'::DistanceBetweenBarycentricPoints
                                (local_120._s_0.X,local_120._s_0.Y,local_120._s_0.Z,
                                 (TVector<double> *)&local_138._s_0,
                                 (TVector<double> *)&local_f0._s_0);
        TDynamicVector<double,512>::InsertAt
                  ((TDynamicVector<double,512> *)&this->field_0x190,&local_res20,uVar12);
        TDynamicVector<double,512>::InsertAt
                  ((TDynamicVector<double,512> *)&this->field_0x190,&local_d8,uVar9);
        *(double *)(*(longlong *)(*(longlong *)&this->field_0x198 + uVar14 * 8) + uVar15 * 8) =
             dVar17;
        pTVar10 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                            ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,
                             uVar7);
        TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x1a8,pTVar10,uVar7
                  );
        pTVar10 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                            ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,
                             local_108._0_4_);
        dVar17 = (pTVar10->field0_0x0)._s_0.Y;
        dVar3 = (pTVar10->field0_0x0)._s_0.Z;
        lVar1 = *(longlong *)(*(longlong *)&this->field_0x1b0 + (ulonglong)(local_b8 >> 9) * 8);
        pdVar2 = (double *)(lVar1 + uVar16 * 0x18);
        *pdVar2 = (pTVar10->field0_0x0)._s_0.X;
        pdVar2[1] = dVar17;
        *(double *)(lVar1 + 0x10 + uVar16 * 0x18) = dVar3;
        return Ok;
      }
      local_a8 = (ulonglong)(local_b8 >> 9);
      local_b0 = (ulonglong)(local_b8 & 0x1ff);
      lVar1 = *(longlong *)(*(longlong *)&this->field_0x130 + local_a8 * 8);
      local_120._s_0.X = (double)*(ulonglong *)(lVar1 + local_b0 * 0xc);
      uVar9 = (uint)((ulonglong)local_120._s_0.X >> 0x20);
      if (local_120._0_4_ == param_1) {
        iVar11 = 0;
      }
      else if (uVar9 == param_1) {
        iVar11 = 1;
      }
      else {
        iVar11 = -1;
        if (*(int *)(lVar1 + 8 + local_b0 * 0xc) == param_1) {
          iVar11 = 2;
        }
      }
      uVar12 = *(uint *)(lVar1 + 8 + local_b0 * 0xc);
      lVar1 = *(longlong *)&this->field_0x198;
      local_138._s_0.X =
           *(double *)
            (*(longlong *)(lVar1 + (ulonglong)((uint)local_120._0_4_ >> 9) * 8) +
            (ulonglong)(local_120._0_4_ & 0x1ff) * 8);
      local_138._s_0.Y =
           *(double *)
            (*(longlong *)(lVar1 + ((ulonglong)local_120._s_0.X >> 0x29) * 8) +
            (ulonglong)(uVar9 & 0x1ff) * 8);
      local_138._s_0.Z =
           *(double *)
            (*(longlong *)(lVar1 + (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 8);
      uStack_b4 = uVar7;
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_d0._s_0,iVar11,
                 (TVector<double> *)&local_138._s_0);
      local_a0 = (ulonglong)(uVar7 & 0x1ff);
      local_120._s_0.X = (double)(ulonglong)(uVar7 >> 9);
      lVar1 = *(longlong *)(*(longlong *)&this->field_0x130 + (longlong)local_120._s_0.X * 8);
      local_108._s_0.X = (double)*(ulonglong *)(lVar1 + local_a0 * 0xc);
      uVar9 = (uint)((ulonglong)local_108._s_0.X >> 0x20);
      iVar11 = 0;
      if (local_108._0_4_ != param_1) {
        if (uVar9 == param_1) {
          iVar11 = 1;
        }
        else {
          iVar11 = -1;
          if (*(int *)(lVar1 + 8 + local_a0 * 0xc) == param_1) {
            iVar11 = 2;
          }
        }
      }
      uVar12 = *(uint *)(lVar1 + 8 + local_a0 * 0xc);
      lVar1 = *(longlong *)&this->field_0x198;
      local_138._s_0.X =
           *(double *)
            (*(longlong *)(lVar1 + (ulonglong)((uint)local_108._0_4_ >> 9) * 8) +
            (ulonglong)(local_108._0_4_ & 0x1ff) * 8);
      local_138._s_0.Y =
           *(double *)
            (*(longlong *)(lVar1 + ((ulonglong)local_108._s_0.X >> 0x29) * 8) +
            (ulonglong)(uVar9 & 0x1ff) * 8);
      local_138._s_0.Z =
           *(double *)
            (*(longlong *)(lVar1 + (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 8);
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,iVar11,
                 (TVector<double> *)&local_138._s_0);
      EVar8 = SplitEdgeTopology(this,param_1,param_2);
      if (EVar8 != Ok) {
        return EVar8;
      }
      uVar9 = (param_2->NewTriangles).field0_0x0._s_0.A;
      uVar12 = (param_2->NewTriangles).field0_0x0._s_0.B;
      uVar4 = (param_2->NewEdges).field0_0x0._s_0.A;
      uVar5 = (param_2->NewEdges).field0_0x0._s_0.B;
      uVar13 = (param_2->NewEdges).field0_0x0._s_0.C;
      local_108._s_0.X = 0.0;
      local_108._s_0.Y = 0.0;
      dVar17 = local_d0._s_0.X * param_3;
      local_108._s_0.Z = dVar3;
      local_d8 = local_d0._s_0.X - dVar17;
      local_138._s_0.Z = 0.0;
      if (local_d8 <= 0.0) {
        local_d8 = 0.0;
      }
      local_138._s_0.X = param_3;
      local_138._s_0.Y = dVar3 - param_3;
      local_108._s_0.X =
           ::`anonymous_namespace'::DistanceBetweenBarycentricPoints
                     (local_d0._s_0.X,local_d0._s_0.Y,local_d0._s_0.Z,
                      (TVector<double> *)&local_138._s_0,(TVector<double> *)&local_108._s_0);
      local_138._s_0.X = 0.0;
      local_138._s_0.Y = 0.0;
      local_138._s_0.Z = dVar3;
      local_d0._s_0.Z = 0.0;
      local_d0._s_0.X = dVar3 - param_3;
      local_d0._s_0.Y = param_3;
      local_res20 = ::`anonymous_namespace'::DistanceBetweenBarycentricPoints
                              (local_f0._s_0.X,local_f0._s_0.Y,local_f0._s_0.Z,
                               (TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_138._s_0)
      ;
      TDynamicVector<double,512>::InsertAt
                ((TDynamicVector<double,512> *)&this->field_0x190,&local_res20,uVar13);
      TDynamicVector<double,512>::InsertAt
                ((TDynamicVector<double,512> *)&this->field_0x190,local_108.XYZ,uVar5);
      TDynamicVector<double,512>::InsertAt
                ((TDynamicVector<double,512> *)&this->field_0x190,&local_d8,uVar4);
      *(double *)(*(longlong *)(*(longlong *)&this->field_0x198 + uVar14 * 8) + uVar15 * 8) = dVar17
      ;
      pTVar10 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                          ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,
                           uVar12);
      TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x1a8,pTVar10,uVar12)
      ;
      pTVar10 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                          ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,
                           uVar9);
      TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x1a8,pTVar10,uVar9);
      pTVar10 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                          ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,
                           local_b8);
      dVar17 = (pTVar10->field0_0x0)._s_0.Y;
      dVar3 = (pTVar10->field0_0x0)._s_0.Z;
      lVar1 = *(longlong *)(*(longlong *)&this->field_0x1b0 + local_a8 * 8);
      pdVar2 = (double *)(lVar1 + local_b0 * 0x18);
      *pdVar2 = (pTVar10->field0_0x0)._s_0.X;
      pdVar2[1] = dVar17;
      *(double *)(lVar1 + 0x10 + local_b0 * 0x18) = dVar3;
      pTVar10 = FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
                          ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f0._s_0,
                           uVar7);
      dVar17 = (pTVar10->field0_0x0)._s_0.Y;
      dVar3 = (pTVar10->field0_0x0)._s_0.Z;
      lVar1 = *(longlong *)(*(longlong *)&this->field_0x1b0 + (longlong)local_120._s_0.X * 8);
      pdVar2 = (double *)(lVar1 + local_a0 * 0x18);
      *pdVar2 = (pTVar10->field0_0x0)._s_0.X;
      pdVar2[1] = dVar17;
      *(double *)(lVar1 + 0x10 + local_a0 * 0x18) = dVar3;
      return Ok;
    }
  }
  return Failed_NotAnEdge;
}

// SplitEdgeTopology @ 14c769570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FSimpleIntrinsicMesh::SplitEdgeTopology
          (FSimpleIntrinsicMesh *this,int param_1,FEdgeSplitInfo *param_2)

{
  double *pdVar1;
  double *pdVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  FIndex2i_u_0 FVar10;
  FIndex2i_u_0 FVar11;
  FIndex2i_u_0 FVar12;
  FIndex2i_u_0 FVar13;
  FIndex2i_u_0 FVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint local_res8;
  uint uStackX_c;
  ulonglong local_150;
  int local_148;
  uint local_140;
  int local_13c;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  int local_118;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  
  lVar25 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_b4 = 0;
  uStack_b0 = 0;
  iVar17 = 0;
  local_d0 = 0;
  local_bc = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_98 = 0;
  uStack_9c = 0xffffffff;
  uStack_cc = (undefined4)___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c8 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
  uStack_c4 = (undefined4)_UNK_15060db28;
  uStack_c0 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
  *(longlong *)param_2 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
  *(ulonglong *)((longlong)&(param_2->OriginalVertices).field0_0x0 + 4) =
       CONCAT44(uStack_c4,uStack_c8);
  *(ulonglong *)((longlong)&(param_2->OtherVertices).field0_0x0 + 4) =
       CONCAT44(0xffffffff,uStack_c0);
  *(undefined8 *)((longlong)&(param_2->OriginalTriangles).field0_0x0 + 4) = 0xffffffff;
  *(longlong *)&param_2->NewVertex = lVar25 << 0x20;
  *(ulonglong *)((longlong)&(param_2->NewTriangles).field0_0x0 + 4) = CONCAT44(uStack_c4,uStack_c8);
  *(ulonglong *)((longlong)&(param_2->NewEdges).field0_0x0 + 4) = CONCAT44(0xffffffff,uStack_c0);
  param_2->SplitT = 0.0;
  if ((param_1 < 0) || (*(int *)&this->field_0x158 * 0x200 + *(int *)&this->field_0x15c <= param_1))
  {
    return Failed_NotAnEdge;
  }
  local_100 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)&this->field_0x160 + local_100 * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar25 = (ulonglong)(param_1 & 0x1ff) * 0x10;
  local_138 = lVar25;
  local_128 = *(ulonglong *)
               (*(longlong *)(*(longlong *)&this->field_0x148 + local_100 * 8) + 8 + lVar25);
  uVar16 = (uint)local_128;
  if (uVar16 == 0xffffffff) {
    return Failed_BrokenTopology;
  }
  uVar21 = (ulonglong)(uVar16 & 0x1ff);
  local_130 = (local_128 & 0xffffffff) >> 9;
  lVar22 = *(longlong *)(*(longlong *)&this->field_0xe0 + local_130 * 8);
  local_118 = *(undefined4 *)(lVar22 + 8 + uVar21 * 0xc);
  local_120 = *(ulonglong *)(lVar22 + uVar21 * 0xc);
  lVar22 = *(longlong *)(*(longlong *)&this->field_0x130 + local_130 * 8);
  local_150 = *(ulonglong *)(lVar22 + uVar21 * 0xc);
  local_148 = *(int *)(lVar22 + 8 + uVar21 * 0xc);
  uVar23 = local_150;
  iVar15 = iVar17;
  if ((int)local_150 != param_1) {
    if ((int)(local_150 >> 0x20) == param_1) {
      iVar15 = 1;
    }
    else {
      iVar15 = -1;
      if (local_148 == param_1) {
        iVar15 = 2;
      }
    }
  }
  local_108 = (longlong)iVar15;
  local_140 = *(uint *)((longlong)&local_120 + local_108 * 4);
  uVar4 = *(uint *)((longlong)&local_120 + (longlong)*(int *)(&this->field_0x0 + local_108 * 4) * 4)
  ;
  iVar15 = *(int *)((longlong)&local_150 + (longlong)*(int *)(&this->field_0x0 + local_108 * 4) * 4)
  ;
  uVar5 = *(uint *)((longlong)&local_120 + (longlong)*(int *)(&this->field_0xc + local_108 * 4) * 4)
  ;
  local_f8 = (ulonglong)(uVar5 >> 9);
  local_f0 = (ulonglong)(uVar5 & 0x1ff);
  if (0xfffc < *(ushort *)
                (*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(uVar5 >> 9) * 8) +
                (ulonglong)(uVar5 & 0x1ff) * 2)) {
    return Failed_HitValenceLimit;
  }
  FVar13._s_0.B = uVar4;
  FVar13._s_0.A = local_140;
  (param_2->OriginalVertices).field0_0x0 = FVar13;
  param_2->OriginalEdge = param_1;
  FVar14._s_0.B = 0xffffffff;
  FVar14._s_0.A = uVar16;
  (param_2->OriginalTriangles).field0_0x0 = FVar14;
  param_2->SplitT = 0.5;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)&this->field_0x148 + local_100 * 8) + 0xc + lVar25);
  iVar18 = 0;
  uStack_ac = uStack_cc;
  uStack_a8 = uStack_c8;
  uStack_a4 = uStack_c4;
  uStack_a0 = uStack_c0;
  if (uVar16 != 0xffffffff) {
    (param_2->OriginalTriangles).field0_0x0._s_0.B = uVar16;
    local_e8 = (ulonglong)(uVar16 & 0x1ff);
    local_d8 = (ulonglong)(uVar16 >> 9);
    lVar22 = *(longlong *)(*(longlong *)&this->field_0xe0 + local_d8 * 8);
    local_148 = *(undefined4 *)(lVar22 + 8 + local_e8 * 0xc);
    local_150 = *(ulonglong *)(lVar22 + local_e8 * 0xc);
    lVar22 = *(longlong *)(*(longlong *)&this->field_0x130 + local_d8 * 8);
    local_120 = *(ulonglong *)(lVar22 + local_e8 * 0xc);
    local_118 = *(int *)(lVar22 + 8 + local_e8 * 0xc);
    iVar19 = iVar18;
    if ((((int)local_120 != param_1) && (iVar19 = 1, (int)(local_120 >> 0x20) != param_1)) &&
       (iVar19 = -1, local_118 == param_1)) {
      iVar19 = 2;
    }
    local_e0 = (longlong)iVar19;
    uVar26 = *(uint *)((longlong)&local_150 +
                      (longlong)*(int *)(&this->field_0xc + (longlong)iVar19 * 4) * 4);
    local_138 = (ulonglong)uVar26;
    local_13c = *(int *)((longlong)&local_120 +
                        (longlong)*(int *)(&this->field_0xc + (longlong)iVar19 * 4) * 4);
    local_150 = (ulonglong)(uVar26 >> 9);
    local_120 = (ulonglong)(uVar26 & 0x1ff);
    if (0xfffc < *(ushort *)
                  (*(longlong *)(*(longlong *)&this->field_0x38 + local_150 * 8) + local_120 * 2)) {
      return Failed_HitValenceLimit;
    }
    lVar22 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(local_140 >> 9) * 8);
    pdVar1 = (double *)(lVar22 + (ulonglong)(local_140 & 0x1ff) * 0x18);
    lVar24 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(uVar4 >> 9) * 8);
    pdVar2 = (double *)(lVar24 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
    dVar7 = (*(double *)(lVar22 + 0x10 + (ulonglong)(local_140 & 0x1ff) * 0x18) +
            *(double *)(lVar24 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18)) *
            __real_3fe0000000000000;
    dVar6 = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
    dVar8 = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
    uVar26 = FRefCountVector::Allocate((FRefCountVector *)&this->field_0x30);
    iVar20 = *(int *)&this->field_0x18;
    iVar19 = *(int *)&this->field_0x1c;
    uVar27 = iVar20 * 0x200 + iVar19;
    if (uVar26 == uVar27) {
      if (iVar19 == 0x200) {
        if (iVar20 == *(int *)&this->field_0x28 + -1) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                    ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18);
        }
        *(int *)&this->field_0x18 = *(int *)&this->field_0x18 + 1;
        iVar20 = *(int *)&this->field_0x18;
        *(undefined4 *)&this->field_0x1c = 0;
        iVar19 = iVar18;
      }
LAB_14c769d5a:
      lVar24 = (longlong)iVar19;
      lVar22 = *(longlong *)(*(longlong *)&this->field_0x20 + (longlong)iVar20 * 8);
      *(double *)(lVar22 + lVar24 * 0x18) = dVar8;
      *(double *)(lVar22 + 8 + lVar24 * 0x18) = dVar6;
      *(double *)(lVar22 + 0x10 + lVar24 * 0x18) = dVar7;
      *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
    }
    else {
      if (uVar27 < uVar26) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18,uVar26);
        iVar19 = *(int *)&this->field_0x1c;
        if (iVar19 == 0x200) {
          if (*(int *)&this->field_0x18 == *(int *)&this->field_0x28 + -1) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                      ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18);
          }
          *(int *)&this->field_0x18 = *(int *)&this->field_0x18 + 1;
          *(undefined4 *)&this->field_0x1c = 0;
          iVar19 = iVar17;
        }
        iVar20 = *(int *)&this->field_0x18;
        goto LAB_14c769d5a;
      }
      uVar23 = (ulonglong)(uVar26 & 0x1ff);
      lVar22 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(uVar26 >> 9) * 8);
      *(double *)(lVar22 + uVar23 * 0x18) = dVar8;
      *(double *)(lVar22 + 8 + uVar23 * 0x18) = dVar6;
      *(double *)(lVar22 + 0x10 + uVar23 * 0x18) = dVar7;
    }
    if ((int)uVar26 < *(int *)&this->field_0x68 * 0x200 + *(int *)&this->field_0x6c) {
      FSmallListSet::Clear((FSmallListSet *)&this->field_0x68,uVar26);
    }
    FSmallListSet::AllocateAt((FSmallListSet *)&this->field_0x68,uVar26);
    *(uint *)(*(longlong *)(*(longlong *)&this->field_0xe0 + local_130 * 8) +
             (uVar21 * 3 + (longlong)*(int *)(&this->field_0x0 + local_108 * 4)) * 4) = uVar26;
    *(uint *)(*(longlong *)(*(longlong *)&this->field_0xe0 + local_d8 * 8) +
             local_e0 * 4 + local_e8 * 0xc) = uVar26;
    local_res8 = AddTriangleInternal(this,uVar26,uVar4,uVar5,-1,-1,-1);
    uStackX_c = AddTriangleInternal(this,uVar26,(int)local_138,uVar4,-1,-1,-1);
    FSimpleIntrinsicEdgeFlipMesh::ReplaceEdgeTriangle
              ((FSimpleIntrinsicEdgeFlipMesh *)this,iVar15,(int)local_128,local_res8);
    FSimpleIntrinsicEdgeFlipMesh::ReplaceEdgeTriangle
              ((FSimpleIntrinsicEdgeFlipMesh *)this,local_13c,uVar16,uStackX_c);
    uVar27 = uVar26;
    if ((int)uVar26 < (int)local_140) {
      uVar27 = local_140;
    }
    uVar9 = uVar26;
    if ((int)local_140 < (int)uVar26) {
      uVar9 = local_140;
    }
    local_130 = CONCAT44(uVar27,uVar9);
    *(ulonglong *)(lVar25 + *(longlong *)(*(longlong *)&this->field_0x148 + local_100 * 8)) =
         local_130;
    if (local_140 != uVar4) {
      FSmallListSet::Remove((FSmallListSet *)&this->field_0x68,uVar4,param_1);
    }
    FSmallListSet::Insert((FSmallListSet *)&this->field_0x68,uVar26,param_1);
    iVar18 = AddEdgeInternal(this,uVar26,uVar4,local_res8,uStackX_c);
    iVar17 = (int)local_128;
    iVar19 = AddEdgeInternal(this,uVar26,uVar5,iVar17,local_res8);
    iVar20 = AddEdgeInternal(this,(int)local_138,uVar26,uVar16,uStackX_c);
    FSimpleIntrinsicEdgeFlipMesh::ReplaceTriangleEdge
              ((FSimpleIntrinsicEdgeFlipMesh *)this,iVar17,iVar15,iVar19);
    iVar17 = local_13c;
    FSimpleIntrinsicEdgeFlipMesh::ReplaceTriangleEdge
              ((FSimpleIntrinsicEdgeFlipMesh *)this,uVar16,local_13c,iVar20);
    uVar23 = (ulonglong)(local_res8 & 0x1ff);
    lVar25 = *(longlong *)(*(longlong *)&this->field_0x130 + (ulonglong)(local_res8 >> 9) * 8);
    *(int *)(lVar25 + uVar23 * 0xc) = iVar18;
    *(int *)(lVar25 + 4 + uVar23 * 0xc) = iVar15;
    *(int *)(lVar25 + 8 + uVar23 * 0xc) = iVar19;
    uVar23 = (ulonglong)(uStackX_c & 0x1ff);
    lVar25 = *(longlong *)(*(longlong *)&this->field_0x130 + (ulonglong)(uStackX_c >> 9) * 8);
    *(int *)(lVar25 + uVar23 * 0xc) = iVar20;
    *(int *)(lVar25 + 4 + uVar23 * 0xc) = iVar17;
    *(int *)(lVar25 + 8 + uVar23 * 0xc) = iVar18;
    psVar3 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + local_f8 * 8) + local_f0 * 2);
    *psVar3 = *psVar3 + 1;
    psVar3 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + local_150 * 8) + local_120 * 2
                      );
    *psVar3 = *psVar3 + 1;
    psVar3 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(uVar26 >> 9) * 8)
                      + (ulonglong)(uVar26 & 0x1ff) * 2);
    *psVar3 = *psVar3 + 4;
    param_2->bIsBoundary = false;
    param_2->NewVertex = uVar26;
    FVar12._s_0.B = (int)local_138;
    FVar12._s_0.A = uVar5;
    (param_2->OtherVertices).field0_0x0 = FVar12;
    (param_2->NewEdges).field0_0x0._s_0.A = iVar18;
    (param_2->NewEdges).field0_0x0._s_0.B = iVar19;
    (param_2->NewEdges).field0_0x0._s_0.C = iVar20;
    goto LAB_14c769b47;
  }
  lVar25 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(local_140 >> 9) * 8);
  pdVar1 = (double *)(lVar25 + (ulonglong)(local_140 & 0x1ff) * 0x18);
  lVar22 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(uVar4 >> 9) * 8);
  pdVar2 = (double *)(lVar22 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
  dVar7 = (*(double *)(lVar25 + 0x10 + (ulonglong)(local_140 & 0x1ff) * 0x18) +
          *(double *)(lVar22 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18)) * __real_3fe0000000000000;
  dVar6 = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
  dVar8 = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
  local_150 = uVar23;
  uVar16 = FRefCountVector::Allocate((FRefCountVector *)&this->field_0x30);
  iVar20 = *(int *)&this->field_0x18;
  iVar19 = *(int *)&this->field_0x1c;
  uVar26 = iVar20 * 0x200 + iVar19;
  if (uVar16 == uVar26) {
    if (iVar19 == 0x200) {
      if (iVar20 == *(int *)&this->field_0x28 + -1) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18);
      }
      *(int *)&this->field_0x18 = *(int *)&this->field_0x18 + 1;
      iVar20 = *(int *)&this->field_0x18;
      *(undefined4 *)&this->field_0x1c = 0;
      iVar19 = iVar18;
    }
LAB_14c7698f7:
    lVar22 = (longlong)iVar19;
    lVar25 = *(longlong *)(*(longlong *)&this->field_0x20 + (longlong)iVar20 * 8);
    *(double *)(lVar25 + lVar22 * 0x18) = dVar8;
    *(double *)(lVar25 + 8 + lVar22 * 0x18) = dVar6;
    *(double *)(lVar25 + 0x10 + lVar22 * 0x18) = dVar7;
    *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  }
  else {
    if (uVar26 < uVar16) {
      TDynamicVector<UE::Math::TVector<double>,512>::Resize
                ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18,uVar16);
      iVar19 = *(int *)&this->field_0x1c;
      if (iVar19 == 0x200) {
        if (*(int *)&this->field_0x18 == *(int *)&this->field_0x28 + -1) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                    ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x18);
        }
        *(int *)&this->field_0x18 = *(int *)&this->field_0x18 + 1;
        *(undefined4 *)&this->field_0x1c = 0;
        iVar19 = iVar17;
      }
      iVar20 = *(int *)&this->field_0x18;
      goto LAB_14c7698f7;
    }
    uVar23 = (ulonglong)(uVar16 & 0x1ff);
    lVar25 = *(longlong *)(*(longlong *)&this->field_0x20 + (ulonglong)(uVar16 >> 9) * 8);
    *(double *)(lVar25 + uVar23 * 0x18) = dVar8;
    *(double *)(lVar25 + 8 + uVar23 * 0x18) = dVar6;
    *(double *)(lVar25 + 0x10 + uVar23 * 0x18) = dVar7;
  }
  if ((int)uVar16 < *(int *)&this->field_0x68 * 0x200 + *(int *)&this->field_0x6c) {
    FSmallListSet::Clear((FSmallListSet *)&this->field_0x68,uVar16);
  }
  FSmallListSet::AllocateAt((FSmallListSet *)&this->field_0x68,uVar16);
  *(uint *)(*(longlong *)(*(longlong *)&this->field_0xe0 + local_130 * 8) +
           (uVar21 * 3 + (longlong)*(int *)(&this->field_0x0 + local_108 * 4)) * 4) = uVar16;
  local_res8 = AddTriangleInternal(this,uVar16,uVar4,uVar5,-1,-1,-1);
  FSimpleIntrinsicEdgeFlipMesh::ReplaceEdgeTriangle
            ((FSimpleIntrinsicEdgeFlipMesh *)this,iVar15,(int)local_128,local_res8);
  uVar26 = uVar16;
  if ((int)local_140 < (int)uVar16) {
    uVar26 = local_140;
  }
  uVar27 = uVar16;
  if ((int)uVar16 < (int)local_140) {
    uVar27 = local_140;
  }
  *(ulonglong *)(local_138 + *(longlong *)(*(longlong *)&this->field_0x148 + local_100 * 8)) =
       CONCAT44(uVar27,uVar26);
  if (local_140 != uVar4) {
    FSmallListSet::Remove((FSmallListSet *)&this->field_0x68,uVar4,param_1);
  }
  FSmallListSet::Insert((FSmallListSet *)&this->field_0x68,uVar16,param_1);
  iVar17 = AddEdgeInternal(this,uVar16,uVar4,local_res8,-1);
  iVar19 = (int)local_128;
  iVar18 = AddEdgeInternal(this,uVar16,uVar5,iVar19,local_res8);
  FSimpleIntrinsicEdgeFlipMesh::ReplaceTriangleEdge
            ((FSimpleIntrinsicEdgeFlipMesh *)this,iVar19,iVar15,iVar18);
  uVar23 = (ulonglong)(local_res8 & 0x1ff);
  lVar25 = *(longlong *)(*(longlong *)&this->field_0x130 + (ulonglong)(local_res8 >> 9) * 8);
  *(int *)(lVar25 + uVar23 * 0xc) = iVar17;
  *(int *)(lVar25 + 4 + uVar23 * 0xc) = iVar15;
  *(int *)(lVar25 + 8 + uVar23 * 0xc) = iVar18;
  psVar3 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + local_f8 * 8) + local_f0 * 2);
  *psVar3 = *psVar3 + 1;
  psVar3 = (short *)(*(longlong *)(*(longlong *)&this->field_0x38 + (ulonglong)(uVar16 >> 9) * 8) +
                    (ulonglong)(uVar16 & 0x1ff) * 2);
  *psVar3 = *psVar3 + 2;
  param_2->bIsBoundary = true;
  param_2->NewVertex = uVar16;
  FVar10._s_0.B = 0xffffffff;
  FVar10._s_0.A = uVar5;
  (param_2->OtherVertices).field0_0x0 = FVar10;
  (param_2->NewEdges).field0_0x0._s_0.A = iVar17;
  (param_2->NewEdges).field0_0x0._s_0.B = iVar18;
  (param_2->NewEdges).field0_0x0._s_0.C = -1;
  uStackX_c = 0xffffffff;
LAB_14c769b47:
  FVar11._s_0.B = uStackX_c;
  FVar11._s_0.A = local_res8;
  (param_2->NewTriangles).field0_0x0 = FVar11;
  return Ok;
}

