// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Pos @ 1435bdd30

TVector<double> * __thiscall
UE::Geometry::FMeshSurfacePoint::Pos
          (FMeshSurfacePoint *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar10 = this->ElementID;
  if (this->PointType == Vertex) {
    lVar11 = *(longlong *)
              ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
    pdVar1 = (double *)(lVar11 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    dVar5 = pdVar1[1];
    dVar4 = *(double *)(lVar11 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  }
  else {
    pFVar12 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    uVar17 = (ulonglong)(uVar10 & 0x1ff);
    if (this->PointType == Edge) {
      dVar4 = (this->BaryCoord).field0_0x0._s_0.X;
      dVar5 = (this->BaryCoord).field0_0x0._s_0.Y;
      uVar17 = *(ulonglong *)
                (*(longlong *)
                  ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8) +
                uVar17 * 0x10);
      uVar16 = (ulonglong)((uint)uVar17 & 0x1ff);
      pdVar1 = (double *)(*(longlong *)(pFVar12 + ((uVar17 & 0xffffffff) >> 9) * 8) + uVar16 * 0x18)
      ;
      dVar8 = pdVar1[1];
      dVar6 = *(double *)
               (*(longlong *)(pFVar12 + ((uVar17 & 0xffffffff) >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar16 = (ulonglong)((uint)(uVar17 >> 0x20) & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar12 + (uVar17 >> 0x29) * 8) + uVar16 * 0x18);
      dVar9 = pdVar2[1];
      dVar7 = *(double *)(*(longlong *)(pFVar12 + (uVar17 >> 0x29) * 8) + 0x10 + uVar16 * 0x18);
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * *pdVar2 + dVar4 * *pdVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar9 + dVar4 * dVar8;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar7 + dVar4 * dVar6;
    }
    else {
      dVar4 = (this->BaryCoord).field0_0x0._s_0.X;
      dVar5 = (this->BaryCoord).field0_0x0._s_0.Z;
      lVar11 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      dVar6 = (this->BaryCoord).field0_0x0._s_0.Y;
      uVar10 = *(uint *)(lVar11 + uVar17 * 0xc);
      uVar16 = (ulonglong)(uVar10 & 0x1ff);
      pdVar1 = (double *)(*(longlong *)(pFVar12 + (ulonglong)(uVar10 >> 9) * 8) + uVar16 * 0x18);
      dVar13 = pdVar1[1];
      dVar7 = *(double *)
               (*(longlong *)(pFVar12 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar10 = *(uint *)(lVar11 + 4 + uVar17 * 0xc);
      uVar16 = (ulonglong)(uVar10 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar12 + (ulonglong)(uVar10 >> 9) * 8) + uVar16 * 0x18);
      dVar14 = pdVar2[1];
      dVar8 = *(double *)
               (*(longlong *)(pFVar12 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar10 = *(uint *)(lVar11 + 8 + uVar17 * 0xc);
      uVar17 = (ulonglong)(uVar10 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar12 + (ulonglong)(uVar10 >> 9) * 8) + uVar17 * 0x18);
      dVar15 = pdVar3[1];
      dVar9 = *(double *)
               (*(longlong *)(pFVar12 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar17 * 0x18);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           dVar6 * *pdVar2 + dVar4 * *pdVar1 + dVar5 * *pdVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * dVar8 + dVar4 * dVar7 + dVar5 * dVar9;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar14 + dVar4 * dVar13 + dVar5 * dVar15
      ;
    }
  }
  return __return_storage_ptr__;
}

