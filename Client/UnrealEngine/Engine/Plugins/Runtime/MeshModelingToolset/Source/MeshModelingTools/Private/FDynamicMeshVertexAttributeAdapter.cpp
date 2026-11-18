// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// ElementNum @ 14ccf83d0

int __thiscall
FDynamicMeshVertexAttributeAdapter::ElementNum(FDynamicMeshVertexAttributeAdapter *this)

{
  return (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
         (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
}

// GetValue @ 14cd02e20

float __thiscall
FDynamicMeshVertexAttributeAdapter::GetValue(FDynamicMeshVertexAttributeAdapter *this,int param_1)

{
  return *(float *)(*(longlong *)
                     ((this->WeightAttribute->AttribValues).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
}

// GetValueRange @ 14cd02e80

TInterval1<float> __thiscall
FDynamicMeshVertexAttributeAdapter::GetValueRange(FDynamicMeshVertexAttributeAdapter *this)

{
  TInterval1<float> in_RDX;
  
  *(undefined4 *)in_RDX = 0;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x3f800000;
  return in_RDX;
}

// SetValue @ 14cd20420

void __thiscall
FDynamicMeshVertexAttributeAdapter::SetValue
          (FDynamicMeshVertexAttributeAdapter *this,int param_1,float param_2)

{
  *(float *)(*(longlong *)
              ((this->WeightAttribute->AttribValues).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) = param_2;
  return;
}

