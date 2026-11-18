// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Clone @ 1479b8560

IStereoLayerShape * __thiscall FCylinderLayer::Clone(FCylinderLayer *this)

{
  IStereoLayerShape *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IStereoLayerShape *)0x0) {
    *pIVar1 = (IStereoLayerShape)&___7FCylinderLayer__6B_;
    *(float *)(pIVar1 + 1) = this->Radius;
    *(float *)&pIVar1[1].field_0x4 = this->OverlayArc;
    *(float *)(pIVar1 + 2) = this->Height;
    return pIVar1;
  }
  return (IStereoLayerShape *)0x0;
}

// GetShapeName @ 1479d09f0

FName __thiscall FCylinderLayer::GetShapeName(FCylinderLayer *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ShapeName;
  return in_RDX;
}

