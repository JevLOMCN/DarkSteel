// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Clone @ 1479b8650

IStereoLayerShape * __thiscall FQuadLayer::Clone(FQuadLayer *this)

{
  IStereoLayerShape *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IStereoLayerShape *)0x0) {
    *pIVar1 = (IStereoLayerShape)&___7FQuadLayer__6B_;
    return pIVar1;
  }
  return (IStereoLayerShape *)0x0;
}

// GetShapeName @ 1479d0a30

FName __thiscall FQuadLayer::GetShapeName(FQuadLayer *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ShapeName;
  return in_RDX;
}

