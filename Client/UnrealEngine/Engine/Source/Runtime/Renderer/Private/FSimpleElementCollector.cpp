// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// HasAnyPrimitives @ 1451587a0

bool __thiscall FSimpleElementCollector::HasAnyPrimitives(FSimpleElementCollector *this)

{
  if ((((((this->BatchedElements).LineVertices.ArrayNum == 0) &&
        ((this->BatchedElements).Points.ArrayNum == 0)) &&
       ((this->BatchedElements).Sprites.ArrayNum == 0)) &&
      (((((this->BatchedElements).MeshElements.ArrayNum == 0 &&
         ((this->BatchedElements).ThickLines.ArrayNum == 0)) &&
        (((this->BatchedElements).WireTris.ArrayNum < 1 &&
         (((this->TopBatchedElements).LineVertices.ArrayNum == 0 &&
          ((this->TopBatchedElements).Points.ArrayNum == 0)))))) &&
       ((this->TopBatchedElements).Sprites.ArrayNum == 0)))) &&
     ((((this->TopBatchedElements).MeshElements.ArrayNum == 0 &&
       ((this->TopBatchedElements).ThickLines.ArrayNum == 0)) &&
      ((this->TopBatchedElements).WireTris.ArrayNum < 1)))) {
    return false;
  }
  return true;
}

