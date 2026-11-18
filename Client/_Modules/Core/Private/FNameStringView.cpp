// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// IsNoneString @ 141a84a00

bool __thiscall FNameStringView::IsNoneString(FNameStringView *this)

{
  if ((this->bIsWide == false) && (this->Len == 4)) {
    return (*(uint *)(this->field0_0x0).Data & 0xdfdfdfdf) == 0x454e4f4e;
  }
  return false;
}

