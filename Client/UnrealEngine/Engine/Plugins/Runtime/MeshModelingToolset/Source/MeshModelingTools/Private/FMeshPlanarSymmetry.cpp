// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator= @ 14ccc5290

FMeshPlanarSymmetry * __thiscall
UE::Geometry::FMeshPlanarSymmetry::operator=(FMeshPlanarSymmetry *this,FMeshPlanarSymmetry *param_1)

{
  TArray<UE::Geometry::FMeshPlanarSymmetry::FSymmetryVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FMeshPlanarSymmetry::FSymmetryVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  
  pTVar1 = &param_1->Vertices;
  this->bCanIgnoreDegenerateSymmetries = param_1->bCanIgnoreDegenerateSymmetries;
  pTVar2 = &this->Vertices;
  this->TargetMesh = param_1->TargetMesh;
  dVar4 = (param_1->SymmetryFrame).Origin.field0_0x0._s_0.Y;
  (this->SymmetryFrame).Origin.field0_0x0._s_0.X = (param_1->SymmetryFrame).Origin.field0_0x0._s_0.X
  ;
  (this->SymmetryFrame).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SymmetryFrame).Rotation.field0_0x0._s_0.X;
  (this->SymmetryFrame).Origin.field0_0x0._s_0.Z = (param_1->SymmetryFrame).Origin.field0_0x0._s_0.Z
  ;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SymmetryFrame).Rotation.field0_0x0._s_0.Z;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.Y =
       (param_1->SymmetryFrame).Rotation.field0_0x0._s_0.Y;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.Z = dVar4;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.W =
       (param_1->SymmetryFrame).Rotation.field0_0x0._s_0.W;
  dVar4 = (param_1->CachedSymmetryAxis).field0_0x0._s_0.Y;
  (this->CachedSymmetryAxis).field0_0x0._s_0.X = (param_1->CachedSymmetryAxis).field0_0x0._s_0.X;
  (this->CachedSymmetryAxis).field0_0x0._s_0.Y = dVar4;
  (this->CachedSymmetryAxis).field0_0x0._s_0.Z = (param_1->CachedSymmetryAxis).field0_0x0._s_0.Z;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vertices).ArrayNum = (param_1->Vertices).ArrayNum;
    (this->Vertices).ArrayMax = (param_1->Vertices).ArrayMax;
    (param_1->Vertices).ArrayNum = 0;
    (param_1->Vertices).ArrayMax = 0;
  }
  this->ErrorScale = param_1->ErrorScale;
  return this;
}

