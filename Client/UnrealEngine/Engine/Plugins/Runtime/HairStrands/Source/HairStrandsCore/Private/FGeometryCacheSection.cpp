// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// GetBaseIndex @ 14dfc5ea0

uint __thiscall GroomBinding_Mesh::FGeometryCacheSection::GetBaseIndex(FGeometryCacheSection *this)

{
  return this->Section->StartIndex;
}

// GetBaseVertexIndex @ 14dfc6090

uint __thiscall
GroomBinding_Mesh::FGeometryCacheSection::GetBaseVertexIndex(FGeometryCacheSection *this)

{
  return this->BaseVertexIndex;
}

// GetMaterialIndex @ 14dfc7610

uint __thiscall
GroomBinding_Mesh::FGeometryCacheSection::GetMaterialIndex(FGeometryCacheSection *this)

{
  return this->MaterialIndex;
}

// GetNumTriangles @ 14dfc7cb0

uint __thiscall
GroomBinding_Mesh::FGeometryCacheSection::GetNumTriangles(FGeometryCacheSection *this)

{
  return this->Section->NumTriangles;
}

// GetNumVertices @ 14dfc7eb0

uint __thiscall
GroomBinding_Mesh::FGeometryCacheSection::GetNumVertices(FGeometryCacheSection *this)

{
  return this->NumVertices;
}

