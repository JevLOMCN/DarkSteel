// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FObjectResource @ 1420e9e60

FObjectResource * __thiscall
FObjectResource::FObjectResource(FObjectResource *this,UObject *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (UObject *)0x0) {
    uVar1 = *(undefined4 *)&param_1->field_0x1c;
    (this->ObjectName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
    (this->ObjectName).Number = uVar1;
    (this->OuterIndex).Index = 0;
    return this;
  }
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->OuterIndex).Index = 0;
  return this;
}

// FObjectResource @ 1420e9e90

FObjectResource * __thiscall FObjectResource::FObjectResource(FObjectResource *this)

{
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->OuterIndex).Index = 0;
  return this;
}

