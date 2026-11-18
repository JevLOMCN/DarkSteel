// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FScopedEntityBuilder<FMassEntityManager_&> @ 1470cf380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FScopedEntityBuilder * __thiscall
UE::Mass::FScopedEntityBuilder::FScopedEntityBuilder<FMassEntityManager_&>
          (FScopedEntityBuilder *this,FMassEntityManager *param_1)

{
  FEntityBuilder::FEntityBuilder((FEntityBuilder *)this,param_1);
  return this;
}

// ~FScopedEntityBuilder @ 1470f89f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FScopedEntityBuilder::~FScopedEntityBuilder(FScopedEntityBuilder *this)

{
  FEntityBuilder::Commit((FEntityBuilder *)this);
  FEntityBuilder::~FEntityBuilder((FEntityBuilder *)this);
  return;
}

