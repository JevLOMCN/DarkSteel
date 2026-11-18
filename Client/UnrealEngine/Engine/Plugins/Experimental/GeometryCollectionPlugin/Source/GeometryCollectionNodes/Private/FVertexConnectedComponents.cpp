// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// ConnectTriangles<UE::Geometry::FDynamicMesh3> @ 14e8f59a0

void __thiscall
UE::Geometry::FVertexConnectedComponents::ConnectTriangles<UE::Geometry::FDynamicMesh3>
          (FVertexConnectedComponents *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar7 = 0;
  if (0 < (int)(uVar4 * 0x200 + uVar5)) {
    do {
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)(uVar4 * 0x200 + uVar5))) {
        uVar6 = (ulonglong)(uVar7 & 0x1ff);
        lVar1 = (ulonglong)(uVar7 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar1) + uVar6 * 2) - 1U) < 0xfffe) {
          lVar1 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar1);
          uVar2 = *(undefined8 *)(lVar1 + uVar6 * 0xc);
          iVar3 = *(int *)(lVar1 + 8 + uVar6 * 0xc);
          iVar8 = (int)((ulonglong)uVar2 >> 0x20);
          FSizedDisjointSet::Union(&this->DisjointSet,(int)uVar2,iVar8);
          FSizedDisjointSet::Union(&this->DisjointSet,iVar8,iVar3);
        }
      }
      uVar4 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      uVar7 = uVar7 + 1;
      uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    } while ((int)uVar7 < (int)(uVar4 * 0x200 + uVar5));
  }
  return;
}

