// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// GetRelationEntityHandle @ 1472257b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassRelationRoleInstanceHandle::GetRelationEntityHandle
          (FMassRelationRoleInstanceHandle *this,FMassEntityManager *param_1)

{
  FMassEntityManager *in_R8;
  
  FMassEntityManager::CreateEntityIndexHandle(in_R8,(int)param_1);
  return (FMassEntityHandle)param_1;
}

// GetRoleEntityHandle @ 147226e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassRelationRoleInstanceHandle::GetRoleEntityHandle
          (FMassRelationRoleInstanceHandle *this,FMassEntityManager *param_1)

{
  FMassEntityManager *in_R8;
  
  FMassEntityManager::CreateEntityIndexHandle(in_R8,(int)param_1);
  return (FMassEntityHandle)param_1;
}

