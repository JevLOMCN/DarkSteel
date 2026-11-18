// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FIgnoreDependenciesScope @ 1421fed20

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FIgnoreDependenciesScope * __thiscall
FPackageHarvester::FIgnoreDependenciesScope::FIgnoreDependenciesScope
          (FIgnoreDependenciesScope *this,FPackageHarvester *param_1)

{
  this->Harvester = param_1;
  this->bPreviousValue = (param_1->CurrentExportDependencies).bIgnoreDependencies;
  (param_1->CurrentExportDependencies).bIgnoreDependencies = true;
  return this;
}

// ~FIgnoreDependenciesScope @ 142200fb0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::FIgnoreDependenciesScope::~FIgnoreDependenciesScope
          (FIgnoreDependenciesScope *this)

{
  (this->Harvester->CurrentExportDependencies).bIgnoreDependencies = this->bPreviousValue;
  return;
}

