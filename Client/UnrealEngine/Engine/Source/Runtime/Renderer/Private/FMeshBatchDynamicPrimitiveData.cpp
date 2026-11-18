// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetPayloadFloat4Stride @ 14491ca40

uint __thiscall
FMeshBatchDynamicPrimitiveData::GetPayloadFloat4Stride(FMeshBatchDynamicPrimitiveData *this)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = this->PayloadDataFlags;
  if ((char)uVar1 < '\0') {
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
    if ((uVar1 & 0x50) != 0) {
      uVar4 = 1;
    }
  }
  if ((uVar1 & 8) != 0) {
    bVar2 = AreCompressedTransformsSupported();
    if (bVar2) {
      uVar4 = uVar4 + 2;
    }
    else {
      uVar4 = uVar4 + 3;
    }
  }
  uVar1 = this->PayloadDataFlags;
  uVar3 = uVar4 + 1;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 + 1;
  if ((uVar1 & 0x20) == 0) {
    uVar4 = uVar3;
  }
  if ((uVar1 & 4) != 0) {
    return (this->NumInstanceCustomDataFloats + 3 >> 2) + uVar4;
  }
  return uVar4;
}

