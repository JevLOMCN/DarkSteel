// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FScopedAllowAbstractClassAllocation @ 142258670

FScopedAllowAbstractClassAllocation * __thiscall
FScopedAllowAbstractClassAllocation::FScopedAllowAbstractClassAllocation
          (FScopedAllowAbstractClassAllocation *this)

{
  AllowAbstractCount = AllowAbstractCount + 1;
  return this;
}

// ~FScopedAllowAbstractClassAllocation @ 142259930

void __thiscall
FScopedAllowAbstractClassAllocation::~FScopedAllowAbstractClassAllocation
          (FScopedAllowAbstractClassAllocation *this)

{
  AllowAbstractCount = AllowAbstractCount + -1;
  return;
}

// IsDisallowedAbstractClass @ 142274960

bool __cdecl
FScopedAllowAbstractClassAllocation::IsDisallowedAbstractClass(UClass *param_1,EObjectFlags param_2)

{
  if (((param_2 & RF_ClassDefaultObject) == RF_NoFlags) &&
     ((param_1->ClassFlags & CLASS_Abstract) != CLASS_None)) {
    return AllowAbstractCount == 0;
  }
  return false;
}

