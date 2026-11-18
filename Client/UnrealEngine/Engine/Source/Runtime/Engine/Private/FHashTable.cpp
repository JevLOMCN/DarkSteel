// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Remove @ 1482a19f0

void __thiscall FHashTable::Remove(FHashTable *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 < this->IndexSize) {
    uVar3 = this->HashMask & param_1;
    uVar1 = this->Hash[uVar3];
    if (uVar1 == param_2) {
      this->Hash[uVar3] = this->NextIndex[param_2];
      return;
    }
    if (uVar1 != 0xffffffff) {
      puVar2 = this->NextIndex;
      while( true ) {
        uVar4 = (ulonglong)uVar1;
        uVar1 = puVar2[uVar1];
        if (uVar1 == param_2) break;
        if (uVar1 == 0xffffffff) {
          return;
        }
      }
      puVar2[uVar4] = puVar2[param_2];
    }
  }
  return;
}

