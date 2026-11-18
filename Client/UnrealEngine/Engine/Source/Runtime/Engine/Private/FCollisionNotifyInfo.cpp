// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// IsValidForNotify @ 148310d80

bool __thiscall FCollisionNotifyInfo::IsValidForNotify(FCollisionNotifyInfo *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Info0).Component.WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->Info1).Component.WeakPtr);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

