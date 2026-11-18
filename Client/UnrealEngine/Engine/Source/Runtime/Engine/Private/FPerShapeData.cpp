// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetMaterialMaskMapMaterials @ 14828b210

TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FPerShapeData::GetMaterialMaskMapMaterials(FPerShapeData *this)

{
  FMaterialData *pFVar1;
  
  if (this->Type == 0) {
    return (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
           &this[2].WorldSpaceShapeBounds.MMin.field_0x8;
  }
  pFVar1 = FShapeInstance::GetMaterialDataImpl((FShapeInstance *)this);
  return &pFVar1->MaterialMaskMapMaterials;
}

