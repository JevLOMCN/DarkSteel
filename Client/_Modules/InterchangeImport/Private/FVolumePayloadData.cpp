// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// ~FVolumePayloadData @ 14e709800

void __thiscall UE::Interchange::FVolumePayloadData::~FVolumePayloadData(FVolumePayloadData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::SVT::FTextureData::FMipMap,int>
            ((FMipMap *)(this->TextureData).MipMaps.AllocatorInstance.Data,
             (this->TextureData).MipMaps.ArrayNum);
  pFVar1 = (this->TextureData).MipMaps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

