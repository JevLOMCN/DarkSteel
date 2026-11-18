// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// GetTriBaryInterpolate<float> @ 14ccafd90

void __thiscall
UE::Geometry::TDynamicMeshOverlay<float,4>::GetTriBaryInterpolate<float>
          (TDynamicMeshOverlay<float,4> *this,int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  pFVar7 = (this->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar6 = param_1 * 3;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  uVar4 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  pFVar8 = (this->Elements).Blocks.AllocatorInstance.Data;
  uVar11 = uVar4 * 4;
  uVar5 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                   (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
  uVar10 = uVar5 * 4;
  uVar6 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                   (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
  uVar9 = uVar6 * 4;
  *param_3 = fVar1 * *(float *)(*(longlong *)(pFVar8 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 4) +
             fVar2 * *(float *)(*(longlong *)(pFVar8 + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8) +
                               (ulonglong)(uVar10 & 0x1ff) * 4) +
             fVar3 * *(float *)(*(longlong *)(pFVar8 + (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) +
                               (ulonglong)(uVar9 & 0x1ff) * 4);
  pFVar7 = (this->Elements).Blocks.AllocatorInstance.Data;
  param_3[1] = fVar1 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar11 + 1 & 0x1ff) * 4) +
               fVar2 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar10 + 1 & 0x1ff) * 4) +
               fVar3 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
  pFVar7 = (this->Elements).Blocks.AllocatorInstance.Data;
  param_3[2] = fVar1 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar11 + 2 & 0x1ff) * 4) +
               fVar2 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar10 + 2 & 0x1ff) * 4) +
               fVar3 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
  pFVar7 = (this->Elements).Blocks.AllocatorInstance.Data;
  param_3[3] = fVar1 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar11 + 3 & 0x1ff) * 4) +
               fVar2 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar10 + 3 & 0x1ff) * 4) +
               fVar3 * *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar9 + 3 & 0x1ff) * 4);
  return;
}

