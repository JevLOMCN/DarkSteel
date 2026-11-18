// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetAllocatedSize @ 1487386a0

ulong64 __thiscall UE::SVT::FStreamingManager::FFrameInfo::GetAllocatedSize(FFrameInfo *this)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(this->TileAllocations).ArrayMax;
  uVar1 = *(uint *)&(this->TileIndexToPendingRequestIndex).field_0x48;
  if (1 < uVar1) {
    lVar2 = (int)uVar1 + lVar2;
  }
  return (ulonglong)((*(int *)&(this->TileIndexToPendingRequestIndex).field_0x2c + 0x1fU >> 5) << 2)
         + (lVar2 + (longlong)*(int *)&(this->TileIndexToPendingRequestIndex).field_0xc * 4) * 4 +
         (ulonglong)(((this->StreamingTiles).MaxBits + 0x1fU >> 5) << 2) +
         (ulonglong)(((this->ResidentTiles).MaxBits + 0x1fU >> 5) << 2) +
         (ulonglong)(((this->InvalidatedPages).MaxBits + 0x1fU >> 5) << 2) +
         (ulonglong)(((this->ResidentPages).MaxBits + 0x1fU >> 5) << 2);
}

