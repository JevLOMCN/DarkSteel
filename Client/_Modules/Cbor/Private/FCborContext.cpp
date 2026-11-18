// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Cbor
// Functions: 1

// IsIndefiniteContainer @ 143120da0

bool __thiscall FCborContext::IsIndefiniteContainer(FCborContext *this)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (this->Header).Header;
  bVar2 = bVar1 & 0xe0;
  if (((bVar2 == 0x80) || (((bVar2 - 0x40 & 0x9f) == 0 && (bVar2 != 0x80)))) &&
     ((bVar1 & 0x1f) == 0x1f)) {
    return true;
  }
  return false;
}

