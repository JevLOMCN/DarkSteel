// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// GetTriVertices<UE::Math::TVector<double>_> @ 14c86ec60

void __thiscall
UE::Geometry::FDynamicMeshUVMesh::GetTriVertices<UE::Math::TVector<double>_>
          (FDynamicMeshUVMesh *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = param_1 * 3;
  lVar5 = *(longlong *)&this->UV->field_0x78;
  uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  lVar6 = *(longlong *)&this->UV->field_0x48;
  uVar3 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uVar4 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4);
  fVar1 = *(float *)(*(longlong *)(lVar6 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4);
  (param_2->field0_0x0)._s_0.X =
       (double)*(float *)(*(longlong *)(lVar6 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar4 * 2 & 0x1ff) * 4);
  (param_2->field0_0x0)._s_0.Y = (double)fVar1;
  (param_2->field0_0x0)._s_0.Z = 0.0;
  lVar5 = *(longlong *)&this->UV->field_0x48;
  fVar1 = *(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
  (param_3->field0_0x0)._s_0.X =
       (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
  (param_3->field0_0x0)._s_0.Y = (double)fVar1;
  (param_3->field0_0x0)._s_0.Z = 0.0;
  lVar5 = *(longlong *)&this->UV->field_0x48;
  fVar1 = *(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
  (param_4->field0_0x0)._s_0.X =
       (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
  (param_4->field0_0x0)._s_0.Y = (double)fVar1;
  (param_4->field0_0x0)._s_0.Z = 0.0;
  return;
}

