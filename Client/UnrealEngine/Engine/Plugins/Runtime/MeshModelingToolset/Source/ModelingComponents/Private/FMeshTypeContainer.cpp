// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// GetStaticMesh @ 14cb147e0

UStaticMesh * __thiscall UE::Geometry::FMeshTypeContainer::GetStaticMesh(FMeshTypeContainer *this)

{
  code *pcVar1;
  bool bVar2;
  UStaticMesh *pUVar3;
  
  if (this->MeshType == StaticMeshAsset) {
    return this->MeshPointer;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8098873281488093131>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Scene\\MeshSceneAdapter.h"
                     ,0x35,"MeshType == ESceneMeshType::StaticMeshAsset");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UStaticMesh *)(*pcVar1)();
    return pUVar3;
  }
  return (UStaticMesh *)0x0;
}

