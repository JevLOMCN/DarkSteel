// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// GetDynamicMesh @ 14cb95d60

FDynamicMesh3 * __thiscall
IDynamicMeshProvider::GetDynamicMesh
          (IDynamicMeshProvider *this,FDynamicMesh3 *__return_storage_ptr__,
          FGetMeshParameters *param_1)

{
  (**(code **)((longlong)*this + 0x20))();
  return __return_storage_ptr__;
}

// GetDynamicMesh @ 14cb95d80

FDynamicMesh3 * __thiscall
IDynamicMeshProvider::GetDynamicMesh
          (IDynamicMeshProvider *this,FDynamicMesh3 *__return_storage_ptr__,bool param_1)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  
  local_18[0] = 0;
  local_14 = 1000;
  local_10 = param_1;
  (**(code **)((longlong)*this + 0x10))(this,__return_storage_ptr__,local_18);
  return __return_storage_ptr__;
}

