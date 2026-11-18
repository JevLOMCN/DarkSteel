// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 1

// operator== @ 14e252810

bool __thiscall
FOptimusDataTypeRef::operator==(FOptimusDataTypeRef *this,FOptimusDataTypeRef *param_1)

{
  bool bVar1;
  
  if (this->TypeName == param_1->TypeName) {
    bVar1 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->TypeObject).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

