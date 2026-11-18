// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// IsA @ 14da2d620

bool __thiscall FFastGeoElementType::IsA(FFastGeoElementType *this,FFastGeoElementType *param_1)

{
  bool bVar1;
  
  if (this->ID == param_1->ID) {
    return true;
  }
  if ((this->ParentType != (FFastGeoElementType *)0x0) &&
     (bVar1 = IsA(this->ParentType,param_1), bVar1)) {
    return true;
  }
  return false;
}

