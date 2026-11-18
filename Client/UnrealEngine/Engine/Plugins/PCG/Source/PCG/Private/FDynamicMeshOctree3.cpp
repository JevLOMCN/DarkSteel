// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ReinsertTriangles<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14988a950

void __thiscall
UE::Geometry::FDynamicMeshOctree3::ReinsertTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>
          (FDynamicMeshOctree3 *this,IndexEnumerable *param_1)

{
  double dVar1;
  short sVar2;
  FRefCountVector *pFVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMesh3 *this_00;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  
  pFVar3 = param_1->Vector;
  uVar8 = (pFVar3->RefCounts).CurBlockUsed + (pFVar3->RefCounts).CurBlock * 0x200;
  uVar7 = 0;
  if ((uVar8 != 0) &&
     (pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data, uVar7 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar8) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar7 = uVar6, sVar2 != -1)) break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
      } while ((int)uVar6 < (int)uVar8);
    }
  }
joined_r0x00014988a9d9:
  do {
    if (uVar7 == uVar8) {
      return;
    }
    while( true ) {
      this_00 = this->Mesh;
      if ((((int)uVar7 < 0) ||
          ((int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar7)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this_00->TriangleRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                                      (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))) {
        FSparseDynamicOctree3::RemoveObject((FSparseDynamicOctree3 *)this,uVar7);
      }
      else {
        FDynamicMesh3::GetTriBounds(this_00,(TAxisAlignedBox3<double> *)&local_48._s_0,uVar7);
        uVar9 = (this->ModifiedBounds).Min.field0_0x0._s_0.X;
        if (local_48._s_0.X <= (double)uVar9) {
          uVar9 = local_48._s_0.X;
        }
        uVar11 = (this->ModifiedBounds).Min.field0_0x0._s_0.Y;
        if (local_48._s_0.Y <= (double)uVar11) {
          uVar11 = local_48._s_0.Y;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.X = (double)uVar9;
        uVar9 = (this->ModifiedBounds).Min.field0_0x0._s_0.Z;
        if (local_48._s_0.Z <= (double)uVar9) {
          uVar9 = local_48._s_0.Z;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)uVar11;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.X;
        dVar12 = local_30;
        if (local_30 <= dVar1) {
          dVar12 = dVar1;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)uVar9;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.Y;
        dVar10 = local_28;
        if (local_28 <= dVar1) {
          dVar10 = dVar1;
        }
        (this->ModifiedBounds).Max.field0_0x0._s_0.X = dVar12;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.Z;
        dVar12 = local_20;
        if (local_20 <= dVar1) {
          dVar12 = dVar1;
        }
        (this->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar10;
        (this->ModifiedBounds).Max.field0_0x0._s_0.Z = dVar12;
        FSparseDynamicOctree3::ReinsertObject
                  ((FSparseDynamicOctree3 *)this,uVar7,(TAxisAlignedBox3<double> *)&local_48._s_0,
                   0xffffffff);
      }
      uVar7 = uVar7 + 1;
      if ((int)uVar8 <= (int)uVar7) break;
      while( true ) {
        lVar5 = *(longlong *)
                 ((pFVar3->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar7 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar5 + (ulonglong)(uVar7 & 0x1ff) * 2) != -1)) break;
        uVar7 = uVar7 + 1;
        if ((int)uVar8 <= (int)uVar7) goto joined_r0x00014988a9d9;
      }
    }
  } while( true );
}

// Initialize @ 1498caa80

void __thiscall
UE::Geometry::FDynamicMeshOctree3::Initialize(FDynamicMeshOctree3 *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FDynamicMesh3 *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  
  this->Mesh = param_1;
  uVar6 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar5 = 0;
  if ((uVar6 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar5 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar6) {
      do {
        lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8);
        if ((*(short *)(lVar3 + (ulonglong)(uVar4 & 0x1ff) * 2) != 0) &&
           (uVar5 = uVar4, *(short *)(lVar3 + (ulonglong)(uVar4 & 0x1ff) * 2) != -1)) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while ((int)uVar4 < (int)uVar6);
    }
  }
joined_r0x0001498cab18:
  do {
    if (uVar5 == uVar6) {
      return;
    }
    while( true ) {
      this_00 = this->Mesh;
      if (((-1 < (int)uVar5) &&
          ((int)uVar5 <
           (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        FDynamicMesh3::GetTriBounds(this_00,(TAxisAlignedBox3<double> *)&local_48._s_0,uVar5);
        uVar8 = (this->ModifiedBounds).Min.field0_0x0._s_0.Y;
        if (local_48._s_0.Y <= (double)uVar8) {
          uVar8 = local_48._s_0.Y;
        }
        dVar1 = (this->ModifiedBounds).Min.field0_0x0._s_0.X;
        uVar7 = local_48._s_0.X;
        if (dVar1 <= local_48._s_0.X) {
          uVar7 = dVar1;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)uVar8;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.X;
        dVar10 = local_30;
        if (local_30 <= dVar1) {
          dVar10 = dVar1;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.X = (double)uVar7;
        uVar8 = (this->ModifiedBounds).Min.field0_0x0._s_0.Z;
        if (local_48._s_0.Z <= (double)uVar8) {
          uVar8 = local_48._s_0.Z;
        }
        (this->ModifiedBounds).Max.field0_0x0._s_0.X = dVar10;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.Z;
        dVar10 = local_20;
        if (local_20 <= dVar1) {
          dVar10 = dVar1;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)uVar8;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.Y;
        dVar9 = local_28;
        if (local_28 <= dVar1) {
          dVar9 = dVar1;
        }
        (this->ModifiedBounds).Max.field0_0x0._s_0.Z = dVar10;
        (this->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar9;
        FSparseDynamicOctree3::InsertObject
                  ((FSparseDynamicOctree3 *)this,uVar5,(TAxisAlignedBox3<double> *)&local_48._s_0);
      }
      uVar5 = uVar5 + 1;
      if ((int)uVar6 <= (int)uVar5) break;
      pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                       (ulonglong)(uVar5 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 2) != -1)) break;
        uVar5 = uVar5 + 1;
        if ((int)uVar6 <= (int)uVar5) goto joined_r0x0001498cab18;
      }
    }
  } while( true );
}

