// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Identical @ 1421d2c50

bool __thiscall
FPropertyVisitorInfo::Identical(FPropertyVisitorInfo *this,FPropertyVisitorInfo *param_1)

{
  if ((((this->Property == param_1->Property) &&
       (this->ParentStructType == param_1->ParentStructType)) && (this->Index == param_1->Index)) &&
     ((this->PropertyInfo == param_1->PropertyInfo &&
      (this->bContainsInnerProperties == param_1->bContainsInnerProperties)))) {
    return true;
  }
  return false;
}

