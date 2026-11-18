// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// ElementNum @ 14ccf83f0

int __thiscall
FMeshDescriptionVertexAttributeAdapter::ElementNum(FMeshDescriptionVertexAttributeAdapter *this)

{
  return ((this->Attribute).ArrayPtr)->NumElements;
}

// GetValue @ 14cd02e50

float __thiscall
FMeshDescriptionVertexAttributeAdapter::GetValue
          (FMeshDescriptionVertexAttributeAdapter *this,int param_1)

{
  TMeshAttributeArrayBase<float> *this_00;
  float *pfVar1;
  
  this_00 = TMeshAttributeArraySet<float>::GetArrayForChannel
                      ((TMeshAttributeArraySet<float> *)(this->Attribute).ArrayPtr,0);
  pfVar1 = TMeshAttributeArrayBase<float>::GetElementBase(this_00,param_1);
  return *pfVar1;
}

// GetValueRange @ 14cd02ea0

TInterval1<float> __thiscall
FMeshDescriptionVertexAttributeAdapter::GetValueRange(FMeshDescriptionVertexAttributeAdapter *this)

{
  TInterval1<float> in_RDX;
  
  *(undefined4 *)in_RDX = 0;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x3f800000;
  return in_RDX;
}

// SetValue @ 14cd20450

void __thiscall
FMeshDescriptionVertexAttributeAdapter::SetValue
          (FMeshDescriptionVertexAttributeAdapter *this,int param_1,float param_2)

{
  TMeshAttributeArrayBase<float> *this_00;
  float *pfVar1;
  
  this_00 = TMeshAttributeArraySet<float>::GetArrayForChannel
                      ((TMeshAttributeArraySet<float> *)(this->Attribute).ArrayPtr,0);
  pfVar1 = TMeshAttributeArrayBase<float>::GetElementBase(this_00,param_1);
  *pfVar1 = param_2;
  return;
}

