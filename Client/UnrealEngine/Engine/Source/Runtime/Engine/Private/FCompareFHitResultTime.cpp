// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 1476e9ae0

bool __thiscall
FCompareFHitResultTime::operator()
          (FCompareFHitResultTime *this,FHitResult *param_1,FHitResult *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (param_1->Time == param_2->Time) {
    bVar1 = param_2->bBlockingHit;
    bVar2 = true;
    if (param_1->bBlockingHit != bVar1) {
      bVar2 = bVar1;
    }
    return bVar2;
  }
  return param_1->Time < param_2->Time;
}

