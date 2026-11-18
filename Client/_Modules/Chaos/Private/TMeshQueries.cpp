// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// GetVolumeNonWatertight @ 144041830

double __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeNonWatertight
          (FDynamicMesh3 *param_1,double param_2)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  uVar20 = 0;
  dVar21 = 0.0;
  dVar7 = 0.0;
  uVar17 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  dVar9 = 0.0;
  iVar12 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar19 = 0;
  dVar11 = 0.0;
  iVar18 = uVar17 + iVar12;
  dVar6 = 0.0;
  dVar8 = 0.0;
  dVar10 = 0.0;
  if (0 < iVar18) {
    uVar16 = 0;
    do {
      if ((int)uVar19 < iVar18) {
        uVar15 = (ulonglong)(uVar16 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar19 >> 9) * 8) + uVar15 * 2) - 1U) < 0xfffe) {
          lVar4 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8
                   );
          pdVar1 = (double *)(lVar4 + uVar15 * 0x18);
          dVar9 = dVar9 + *(double *)(lVar4 + 0x10 + uVar15 * 0x18);
          dVar21 = dVar21 + *pdVar1;
          dVar7 = dVar7 + pdVar1[1];
        }
      }
      uVar19 = uVar19 + 1;
      uVar16 = uVar16 + 1;
      dVar6 = dVar21;
      dVar8 = dVar7;
      dVar10 = dVar9;
    } while ((int)uVar19 < (int)(iVar12 + uVar17));
  }
  iVar18 = (param_1->VertexRefCounts).UsedCount;
  if (0 < iVar18) {
    dVar21 = __real_3ff0000000000000 / (double)iVar18;
    dVar6 = dVar6 * dVar21;
    dVar8 = dVar8 * dVar21;
    dVar10 = dVar10 * dVar21;
  }
  iVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar17 = uVar20;
  dVar21 = 0.0;
  if (0 < iVar18) {
    do {
      uVar15 = (ulonglong)(uVar17 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar20 >> 9) * 8) + uVar15 * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
        ;
        pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar19 = *(uint *)(lVar4 + uVar15 * 0xc);
        uVar13 = (ulonglong)(uVar19 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar19 >> 9) * 8) + uVar13 * 0x18);
        uVar16 = *(uint *)(lVar4 + 4 + uVar15 * 0xc);
        uVar14 = (ulonglong)(uVar16 & 0x1ff);
        pdVar2 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) + uVar14 * 0x18);
        uVar3 = *(uint *)(lVar4 + 8 + uVar15 * 0xc);
        uVar15 = (ulonglong)(uVar3 & 0x1ff);
        dVar21 = (*(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) + 0x10 + uVar14 * 0x18) -
                 dVar10) * param_2;
        dVar9 = (pdVar2[1] - dVar8) * param_2;
        dVar24 = (*pdVar2 - dVar6) * param_2;
        pdVar2 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar3 >> 9) * 8) + uVar15 * 0x18);
        dVar23 = (*(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 + uVar15 * 0x18) -
                 dVar10) * param_2;
        dVar7 = (pdVar2[1] - dVar8) * param_2;
        dVar22 = (*pdVar2 - dVar6) * param_2;
        dVar11 = dVar11 + (dVar7 * dVar21 - dVar9 * dVar23) * (*pdVar1 - dVar6) * param_2 +
                          (dVar24 * dVar23 - dVar21 * dVar22) * (pdVar1[1] - dVar8) * param_2 +
                          (dVar9 * dVar22 - dVar7 * dVar24) *
                          (*(double *)
                            (*(longlong *)(pFVar5 + (ulonglong)(uVar19 >> 9) * 8) + 0x10 +
                            uVar13 * 0x18) - dVar10) * param_2;
      }
      uVar20 = uVar20 + 1;
      uVar17 = uVar17 + 1;
      dVar21 = dVar11;
    } while ((int)uVar20 < iVar18);
  }
  return dVar21 * __real_3fc5555555555555;
}

