// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 3

// IsBrushShape @ 145ee7600

bool __thiscall ABrush::IsBrushShape(ABrush *this)

{
  return false;
}

// NeedsLoadForClient @ 145ee79e0

bool __thiscall ABrush::NeedsLoadForClient(ABrush *this)

{
  bool bVar1;
  
  if (this->bNotForClientOrServer == 0) {
    bVar1 = UObject::NeedsLoadForClient((UObject *)this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// NeedsLoadForServer @ 145ee7a10

bool __thiscall ABrush::NeedsLoadForServer(ABrush *this)

{
  bool bVar1;
  
  if (this->bNotForClientOrServer == 0) {
    bVar1 = UObject::NeedsLoadForServer((UObject *)this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

