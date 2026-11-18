// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// FRoleTraits @ 1471dc270

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRoleTraits * __thiscall UE::Mass::Relations::FRoleTraits::FRoleTraits(FRoleTraits *this)

{
  this->Element = (UScriptStruct *)0x0;
  this->DestructionPolicy = CleanUp;
  this->bExclusive = true;
  this->RequiresExternalMapping = Default;
  return this;
}

