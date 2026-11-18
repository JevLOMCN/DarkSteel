// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// ~IModelingToolExternalDynamicMeshUpdateAPI @ 14ccc3350

void __thiscall
IModelingToolExternalDynamicMeshUpdateAPI::~IModelingToolExternalDynamicMeshUpdateAPI
          (IModelingToolExternalDynamicMeshUpdateAPI *this)

{
  *this = (IModelingToolExternalDynamicMeshUpdateAPI)
          &___7IModelingToolExternalDynamicMeshUpdateAPI__6B_;
  return;
}

// AllowToolMeshUpdates @ 14ccde290

bool __thiscall
IModelingToolExternalDynamicMeshUpdateAPI::AllowToolMeshUpdates
          (IModelingToolExternalDynamicMeshUpdateAPI *this)

{
  return false;
}

// NumToolMeshes @ 14cd0c3c0

int __thiscall
IModelingToolExternalDynamicMeshUpdateAPI::NumToolMeshes
          (IModelingToolExternalDynamicMeshUpdateAPI *this)

{
  return 0;
}

// ProcessToolMeshes @ 14cd169c0

void __thiscall
IModelingToolExternalDynamicMeshUpdateAPI::ProcessToolMeshes
          (IModelingToolExternalDynamicMeshUpdateAPI *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&,int)> *param_1)

{
  return;
}

// UpdateToolMeshes @ 14cd3c330

void __thiscall
IModelingToolExternalDynamicMeshUpdateAPI::UpdateToolMeshes
          (IModelingToolExternalDynamicMeshUpdateAPI *this,
          TFunctionRef<TUniquePtr<FMeshRegionChangeBase,TDefaultDelete<FMeshRegionChangeBase>_>___cdecl(UE::Geometry::FDynamicMesh3_&,int)>
          *param_1)

{
  return;
}

// _getUObject @ 14cd3f5c0

UObject * __thiscall
IModelingToolExternalDynamicMeshUpdateAPI::_getUObject
          (IModelingToolExternalDynamicMeshUpdateAPI *this)

{
  return (UObject *)0x0;
}

