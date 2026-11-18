// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// InteriorAngleGradient @ 14c74eca0

TVector<double> * __cdecl
UE::Geometry::FMeshDerivatives::InteriorAngleGradient
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,int param_3,
          int param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  ulonglong uVar18;
  TVector<double> *pTVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  undefined8 local_188;
  int local_180;
  TVector<double>_u_0 local_178 [14];
  
  lVar5 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
           );
  local_188 = *(undefined8 *)(lVar5 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  local_180 = *(int *)(lVar5 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  uVar16 = local_188;
  if ((int)local_188 == param_3) {
    iVar20 = 0;
    local_188 = uVar16;
  }
  else if ((int)((ulonglong)local_188 >> 0x20) == param_3) {
    iVar20 = 1;
    local_188 = uVar16;
  }
  else if (local_180 == param_3) {
    iVar20 = 2;
    local_188 = uVar16;
  }
  else {
    iVar20 = -1;
    local_188 = uVar16;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("TriVertIndex != IndexConstants::InvalidID",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshDerivatives.cpp"
                        ,0xf,L"");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TVector<double> *)(*pcVar8)();
      return pTVar19;
    }
  }
  iVar21 = iVar20 + 1;
  uVar3 = *(uint *)((longlong)&local_188 +
                   (longlong)
                   (iVar21 + (iVar21 / 3 + (iVar21 >> 0x1f) +
                             (int)(((longlong)iVar21 / 3 + ((longlong)iVar21 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) * 4);
  iVar20 = iVar20 + 2;
  uVar4 = *(uint *)((longlong)&local_188 +
                   (longlong)
                   (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                             (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) * 4);
  FDynamicMesh3::GetTriNormal(param_1,(TVector<double> *)&local_178[0]._s_0,param_2);
  if (param_4 == param_3) {
    pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    pdVar1 = (double *)
             (*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) +
             (ulonglong)(uVar3 & 0x1ff) * 0x18);
    uVar18 = (ulonglong)(param_3 & 0x1ff);
    lVar5 = *(longlong *)(pFVar6 + (ulonglong)((uint)param_3 >> 9) * 8);
    dVar13 = *(double *)
              (*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 +
              (ulonglong)(uVar3 & 0x1ff) * 0x18) - *(double *)(lVar5 + 0x10 + uVar18 * 0x18);
    pdVar2 = (double *)(lVar5 + uVar18 * 0x18);
    dVar14 = *pdVar1 - *pdVar2;
    dVar15 = pdVar1[1] - pdVar2[1];
    pdVar1 = (double *)
             (*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) +
             (ulonglong)(uVar4 & 0x1ff) * 0x18);
    dVar9 = *(double *)
             (*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 +
             (ulonglong)(uVar4 & 0x1ff) * 0x18) - *(double *)(lVar5 + 0x10 + uVar18 * 0x18);
    pdVar2 = (double *)(lVar5 + uVar18 * 0x18);
    dVar10 = *pdVar1 - *pdVar2;
    dVar11 = pdVar1[1] - pdVar2[1];
    dVar22 = __real_3ff0000000000000 / (dVar15 * dVar15 + dVar14 * dVar14 + dVar13 * dVar13);
    dVar12 = __real_3ff0000000000000 / (dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((double)local_178[0]._16_8_ * dVar15 - (double)local_178[0]._8_8_ * dVar13) * dVar22 +
         ((double)local_178[0]._8_8_ * dVar9 - (double)local_178[0]._16_8_ * dVar11) * dVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((double)local_178[0]._0_8_ * dVar13 - (double)local_178[0]._16_8_ * dVar14) * dVar22 +
         ((double)local_178[0]._16_8_ * dVar10 - (double)local_178[0]._0_8_ * dVar9) * dVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((double)local_178[0]._8_8_ * dVar14 - (double)local_178[0]._0_8_ * dVar15) * dVar22 +
         ((double)local_178[0]._0_8_ * dVar11 - (double)local_178[0]._8_8_ * dVar10) * dVar12;
  }
  else if (param_4 == uVar3) {
    pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    lVar5 = *(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8);
    pdVar1 = (double *)(lVar5 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
    lVar7 = *(longlong *)(pFVar6 + (ulonglong)((uint)param_3 >> 9) * 8);
    dVar10 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar3 & 0x1ff) * 0x18) -
             *(double *)(lVar7 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    pdVar2 = (double *)(lVar7 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    dVar9 = *pdVar1 - *pdVar2;
    dVar11 = pdVar1[1] - pdVar2[1];
    dVar22 = __real_3ff0000000000000 / (dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((double)local_178[0]._8_8_ * dVar10 - (double)local_178[0]._16_8_ * dVar11) * dVar22;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((double)local_178[0]._16_8_ * dVar9 - (double)local_178[0]._0_8_ * dVar10) * dVar22;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((double)local_178[0]._0_8_ * dVar11 - (double)local_178[0]._8_8_ * dVar9) * dVar22;
  }
  else {
    if (param_4 != uVar4) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("WRTVertexIndex == VertK",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshDerivatives.cpp"
                          ,0x27,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TVector<double> *)(*pcVar8)();
        return pTVar19;
      }
    }
    pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    lVar5 = *(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8);
    pdVar1 = (double *)(lVar5 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
    lVar7 = *(longlong *)(pFVar6 + (ulonglong)((uint)param_3 >> 9) * 8);
    dVar11 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18) -
             *(double *)(lVar7 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    pdVar2 = (double *)(lVar7 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    dVar9 = *pdVar1 - *pdVar2;
    dVar10 = pdVar1[1] - pdVar2[1];
    dVar22 = __real_3ff0000000000000 / (dVar10 * dVar10 + dVar9 * dVar9 + dVar11 * dVar11);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((double)local_178[0]._16_8_ * dVar10 - dVar11 * (double)local_178[0]._8_8_) * dVar22;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (dVar11 * (double)local_178[0]._0_8_ - (double)local_178[0]._16_8_ * dVar9) * dVar22;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar9 * (double)local_178[0]._8_8_ - dVar10 * (double)local_178[0]._0_8_) * dVar22;
  }
  return __return_storage_ptr__;
}

// TriangleAreaScaledNormalGradient @ 14c76ffa0

TMatrix3<double> * __cdecl
UE::Geometry::FMeshDerivatives::TriangleAreaScaledNormalGradient
          (TMatrix3<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,int param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  ulonglong uVar14;
  TMatrix3<double> *pTVar15;
  double dVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  int local_98;
  int iStack_94;
  
  dVar21 = __real_bfe0000000000000;
  dVar19 = __real_3fe0000000000000;
  pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  uVar14 = (ulonglong)(param_2 & 0x1ff);
  lVar7 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
           );
  uVar5 = *(uint *)(lVar7 + uVar14 * 0xc);
  uVar2 = *(undefined8 *)(lVar7 + uVar14 * 0xc);
  uVar17 = (ulonglong)(uVar5 & 0x1ff);
  dVar3 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar17 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + uVar17 * 0x18);
  dVar9 = *pdVar1;
  dVar10 = pdVar1[1];
  uVar5 = *(uint *)(lVar7 + 4 + uVar14 * 0xc);
  uVar17 = (ulonglong)(uVar5 & 0x1ff);
  dVar4 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar17 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + uVar17 * 0x18);
  dVar11 = *pdVar1;
  dVar12 = pdVar1[1];
  uVar5 = *(uint *)(lVar7 + 8 + uVar14 * 0xc);
  uVar17 = (ulonglong)(uVar5 & 0x1ff);
  dVar20 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar17 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + uVar17 * 0x18);
  dVar22 = *pdVar1;
  dVar18 = pdVar1[1];
  local_98 = (int)uVar2;
  if (param_3 == local_98) {
    dVar16 = 0.0;
    dVar9 = dVar22;
    dVar10 = dVar18;
    dVar3 = dVar20;
  }
  else {
    iStack_94 = (int)((ulonglong)uVar2 >> 0x20);
    if (param_3 == iStack_94) {
      dVar22 = dVar22 - dVar9;
      dVar20 = dVar20 - dVar3;
      dVar18 = dVar18 - dVar10;
      (__return_storage_ptr__->Row0).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = 0.0;
      (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = dVar20 * dVar21;
      (__return_storage_ptr__->Row2).field0_0x0._s_0.X = dVar18 * dVar21;
      (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar22 * dVar19;
      goto LAB_14c7701b9;
    }
    if (param_3 != *(int *)(lVar7 + 8 + uVar14 * 0xc)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("WRTVertexIndex == Tri[2]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshDerivatives.cpp"
                          ,0x59,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TMatrix3<double> *)(*pcVar8)();
        return pTVar15;
      }
    }
    dVar16 = -0.0;
    dVar19 = __real_bfe0000000000000;
    dVar21 = __real_3fe0000000000000;
  }
  dVar20 = dVar4 - dVar3;
  dVar18 = dVar12 - dVar10;
  dVar22 = dVar11 - dVar9;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = dVar20 * dVar21;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X = dVar16;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = dVar16;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = dVar16;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar22 * dVar19;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = dVar18 * dVar21;
LAB_14c7701b9:
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dVar22 * dVar21;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = dVar20 * dVar19;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = dVar18 * dVar19;
  return __return_storage_ptr__;
}

// TriangleNormalGradient @ 14c770210

TMatrix3<double> * __cdecl
UE::Geometry::FMeshDerivatives::TriangleNormalGradient
          (TMatrix3<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  TMatrix3<double> *pTVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_res8;
  int local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0 [5];
  
  FDynamicMesh3::GetTriInfo(param_1,param_2,(TVector<double> *)&local_b8._s_0,&local_res8,local_a0);
  uVar13 = (ulonglong)(param_2 & 0x1ff);
  lVar5 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
           );
  uVar3 = *(undefined8 *)(lVar5 + uVar13 * 0xc);
  local_c8 = (int)uVar3;
  if (local_c8 == param_3) {
    iVar15 = 0;
  }
  else if ((int)((ulonglong)uVar3 >> 0x20) == param_3) {
    iVar15 = 1;
  }
  else if (*(int *)(lVar5 + 8 + uVar13 * 0xc) == param_3) {
    iVar15 = 2;
  }
  else {
    iVar15 = -1;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TriVertIndex != IndexConstants::InvalidID",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshDerivatives.cpp"
                        ,0x38,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TMatrix3<double> *)(*pcVar8)();
      return pTVar11;
    }
  }
  iVar12 = iVar15 + 2;
  pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  lVar5 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
           );
  uVar4 = *(uint *)(lVar5 + ((longlong)
                             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) + uVar13 * 3) * 4);
  uVar14 = (ulonglong)(uVar4 & 0x1ff);
  lVar7 = *(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8);
  pdVar1 = (double *)(lVar7 + uVar14 * 0x18);
  iVar15 = iVar15 + 1;
  uVar4 = *(uint *)(lVar5 + ((longlong)
                             (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) + uVar13 * 3) * 4);
  uVar13 = (ulonglong)(uVar4 & 0x1ff);
  lVar5 = *(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8);
  pdVar2 = (double *)(lVar5 + uVar13 * 0x18);
  dVar17 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18) - *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
  dVar16 = *pdVar1 - *pdVar2;
  dVar9 = pdVar1[1] - pdVar2[1];
  dVar18 = dVar17 * local_b8._s_0.Y - dVar9 * local_b8._s_0.Z;
  dVar9 = dVar9 * local_b8._s_0.X - dVar16 * local_b8._s_0.Y;
  dVar16 = dVar16 * local_b8._s_0.Z - dVar17 * local_b8._s_0.X;
  dVar17 = __real_3ff0000000000000 / (local_res8 * __real_4000000000000000);
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = dVar18 * local_b8._s_0.Y * dVar17;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X = dVar18 * local_b8._s_0.X * dVar17;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = dVar18 * local_b8._s_0.Z * dVar17;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = dVar16 * local_b8._s_0.X * dVar17;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = dVar16 * local_b8._s_0.Y * dVar17;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = dVar9 * local_b8._s_0.Z * dVar17;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar9 * local_b8._s_0.Y * dVar17;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dVar16 * local_b8._s_0.Z * dVar17;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = dVar9 * local_b8._s_0.X * dVar17;
  return __return_storage_ptr__;
}

