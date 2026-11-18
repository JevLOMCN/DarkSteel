// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FMeshContactGeneratorSettings @ 1439c0970

FMeshContactGeneratorSettings * __thiscall
Chaos::Private::FMeshContactGeneratorSettings::FMeshContactGeneratorSettings
          (FMeshContactGeneratorSettings *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  
  iVar6 = 1;
  if (Chaos_Collision_MeshManifoldHashSize != 0) {
    iVar6 = Chaos_Collision_MeshManifoldHashSize;
  }
  uVar3 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  this->HashSize = 1 << ((byte)lVar4 & 0x1f);
  this->FaceNormalDotThreshold = (double)Chaos_Collision_MeshContactNormalThreshold;
  fVar5 = Chaos_Collision_MeshContactNormalRejectionThreshold;
  this->BackFaceCullTolerance = 1e-06;
  this->BarycentricTolerance = 0.001;
  this->MaxContactsBufferSize = 1000;
  puVar2 = &this->field_0x28;
  this->bCullBackFaces = 1;
  this->bUseTwoPassLoop = 1;
  this->bSortForSolverConvergence = 0;
  this->bSortByPhi = 0;
  this->bFixNormals = 1;
  this->EdgeNormalDotRejectTolerance = (double)fVar5;
  return this;
}

