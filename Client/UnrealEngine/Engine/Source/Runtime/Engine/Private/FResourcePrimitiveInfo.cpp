// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FResourcePrimitiveInfo @ 1483e5680

FResourcePrimitiveInfo * __thiscall
Nanite::FResourcePrimitiveInfo::FResourcePrimitiveInfo
          (FResourcePrimitiveInfo *this,FResources *param_1)

{
  this->ResourceID = param_1->RuntimeResourceID;
  this->HierarchyOffset = param_1->HierarchyOffset;
  this->ImposterIndex = param_1->ImposterIndex;
  this->AssemblyTransformOffset = param_1->AssemblyTransformOffset;
  this->AssemblyTransformCount = (param_1->AssemblyTransforms).ArrayNum;
  return this;
}

