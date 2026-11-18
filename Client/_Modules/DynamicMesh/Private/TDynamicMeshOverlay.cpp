// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// GetTriBaryInterpolate<double> @ 14c86e8e0

void __thiscall
UE::Geometry::TDynamicMeshOverlay<float,2>::GetTriBaryInterpolate<double>
          (TDynamicMeshOverlay<float,2> *this,int param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar7 = (this->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar6 = param_1 * 3;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  uVar4 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  pFVar8 = (this->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                   (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                   (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
  *param_3 = (double)*(float *)(*(longlong *)(pFVar8 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar4 * 2 & 0x1ff) * 4) * dVar1 +
             (double)*(float *)(*(longlong *)(pFVar8 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar5 * 2 & 0x1ff) * 4) * dVar2 +
             (double)*(float *)(*(longlong *)(pFVar8 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar6 * 2 & 0x1ff) * 4) * dVar3;
  pFVar7 = (this->Elements).Blocks.AllocatorInstance.Data;
  param_3[1] = (double)*(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4) * dVar1 +
               (double)*(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4) * dVar2 +
               (double)*(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4) * dVar3;
  return;
}

// GetTriBaryInterpolate<double> @ 14c86ea70

void __thiscall
UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
          (TDynamicMeshOverlay<float,3> *this,int param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar4 = (this->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar6 = param_1 * 3;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  uVar7 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar6 >> 9) * 8) +
                  (ulonglong)(uVar6 & 0x1ff) * 4) * 3;
  pFVar5 = (this->Elements).Blocks.AllocatorInstance.Data;
  uVar8 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                  (ulonglong)(uVar6 + 1 & 0x1ff) * 4) * 3;
  uVar6 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                  (ulonglong)(uVar6 + 2 & 0x1ff) * 4) * 3;
  *param_3 = (double)*(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar8 >> 9) * 8) +
                               (ulonglong)(uVar8 & 0x1ff) * 4) * dVar2 +
             (double)*(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar7 >> 9) * 8) +
                               (ulonglong)(uVar7 & 0x1ff) * 4) * dVar1 +
             (double)*(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar6 >> 9) * 8) +
                               (ulonglong)(uVar6 & 0x1ff) * 4) * dVar3;
  pFVar4 = (this->Elements).Blocks.AllocatorInstance.Data;
  param_3[1] = (double)*(float *)(*(longlong *)(pFVar4 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 1 & 0x1ff) * 4) * dVar2 +
               (double)*(float *)(*(longlong *)(pFVar4 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar7 + 1 & 0x1ff) * 4) * dVar1 +
               (double)*(float *)(*(longlong *)(pFVar4 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar6 + 1 & 0x1ff) * 4) * dVar3;
  pFVar4 = (this->Elements).Blocks.AllocatorInstance.Data;
  param_3[2] = (double)*(float *)(*(longlong *)(pFVar4 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 2 & 0x1ff) * 4) * dVar2 +
               (double)*(float *)(*(longlong *)(pFVar4 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar7 + 2 & 0x1ff) * 4) * dVar1 +
               (double)*(float *)(*(longlong *)(pFVar4 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar6 + 2 & 0x1ff) * 4) * dVar3;
  return;
}

