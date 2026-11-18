// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// PopChunkSafe @ 1442ca2f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::TChunkedArrayWithChunkManagement<unsigned_int,4096>::PopChunkSafe
          (TChunkedArrayWithChunkManagement<unsigned_int,4096> *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&this->field_0x10;
  if (0 < iVar1) {
    iVar2 = 0x400;
    if (iVar1 < 0x400) {
      iVar2 = iVar1;
    }
    *(int *)&this->field_0x10 = iVar1 - iVar2;
    TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::RemoveAt((TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                *)this,0,1,No);
    return;
  }
  return;
}

