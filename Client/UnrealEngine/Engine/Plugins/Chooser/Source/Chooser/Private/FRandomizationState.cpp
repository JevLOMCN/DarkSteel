// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// FRandomizationState @ 14a87d730

FRandomizationState * __thiscall
FRandomizationState::FRandomizationState(FRandomizationState *this,FRandomizationState *param_1)

{
  ForElementType<int> FVar1;
  
  (this->RecentlySelectedRows).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->RecentlySelectedRows).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    memmove(this,param_1,0x10);
  }
  FVar1 = (this->RecentlySelectedRows).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->RecentlySelectedRows).AllocatorInstance.SecondaryData =
       (param_1->RecentlySelectedRows).AllocatorInstance.SecondaryData;
  (param_1->RecentlySelectedRows).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->RecentlySelectedRows).ArrayNum = (param_1->RecentlySelectedRows).ArrayNum;
  (this->RecentlySelectedRows).ArrayMax = (param_1->RecentlySelectedRows).ArrayMax;
  (param_1->RecentlySelectedRows).ArrayNum = 0;
  (param_1->RecentlySelectedRows).ArrayMax = 4;
  this->LastSelectedRow = param_1->LastSelectedRow;
  return this;
}

