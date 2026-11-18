// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ContainsType @ 14711b850

bool __thiscall
UE::Mass::FArchetypeGroups::ContainsType(FArchetypeGroups *this,FArchetypeGroupType param_1)

{
  undefined1 *puVar1;
  
  if ((-1 < (int)param_1.Identifier) &&
     ((int)param_1.Identifier < *(int *)&(this->IDContainer).field_0x28)) {
    puVar1 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &(this->IDContainer).field_0x10;
    }
    if ((*(uint *)(puVar1 + (ulonglong)(param_1.Identifier >> 5) * 4) >> (param_1.Identifier & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

