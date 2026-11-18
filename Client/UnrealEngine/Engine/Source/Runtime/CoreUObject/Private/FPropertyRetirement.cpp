// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// CountBytes @ 141fc93c0

void __thiscall FPropertyRetirement::CountBytes(FPropertyRetirement *this,FArchive *param_1)

{
  FPropertyRetirement *pFVar1;
  
  for (pFVar1 = this->Next; pFVar1 != (FPropertyRetirement *)0x0; pFVar1 = pFVar1->Next) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x28,0x28);
  }
  return;
}

