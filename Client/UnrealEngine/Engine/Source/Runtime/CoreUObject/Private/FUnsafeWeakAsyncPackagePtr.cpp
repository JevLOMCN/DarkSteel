// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// HumanReadableStringForDebugging @ 141efb060

FName __thiscall
FUnsafeWeakAsyncPackagePtr::HumanReadableStringForDebugging(FUnsafeWeakAsyncPackagePtr *this)

{
  FName in_RDX;
  
  if (this->Package != (FAsyncPackage *)0x0) {
    *(FName *)in_RDX = (this->Package->Desc).Name;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

