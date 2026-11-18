// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// FItemInfo @ 142e09eb0

FItemInfo * __thiscall FItemInfo::FItemInfo(FItemInfo *this,FItemInfo *param_1)

{
  ForElementType<unsigned_int> FVar1;
  uint uVar2;
  
  (this->NeedsVerticalWire).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->NeedsVerticalWire).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(this,param_1,0x10);
  }
  FVar1 = (this->NeedsVerticalWire).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->NeedsVerticalWire).AllocatorInstance.SecondaryData =
       (param_1->NeedsVerticalWire).AllocatorInstance.SecondaryData;
  (param_1->NeedsVerticalWire).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->NeedsVerticalWire).NumBits = (param_1->NeedsVerticalWire).NumBits;
  (this->NeedsVerticalWire).MaxBits = (param_1->NeedsVerticalWire).MaxBits;
  (param_1->NeedsVerticalWire).NumBits = 0;
  (param_1->NeedsVerticalWire).MaxBits = 0;
  uVar2 = (this->bHasChildren ^ param_1->bHasChildren) & 1 ^ *(uint *)&this->field_0x20;
  *(uint *)&this->field_0x20 = uVar2;
  *(uint *)&this->field_0x20 = (uVar2 ^ *(uint *)&param_1->field_0x20) & 2 ^ uVar2;
  this->ParentIndex = param_1->ParentIndex;
  return this;
}

