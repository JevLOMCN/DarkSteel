// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// TStaticArray<int,4,4294967295><int,int,int,int> @ 1470cf830

TStaticArray<int,4,4294967295> * __thiscall
TStaticArray<int,4,4294967295>::TStaticArray<int,4,4294967295><int,int,int,int>
          (TStaticArray<int,4,4294967295> *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  this->Elements[0] = *param_1;
  this->Elements[1] = *param_2;
  this->Elements[2] = *param_3;
  this->Elements[3] = *param_4;
  return this;
}

// operator[] @ 1470f9be0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRoleTraits * __thiscall
TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
          (TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295> *this,uint param_1)

{
  return this->Elements + param_1;
}

