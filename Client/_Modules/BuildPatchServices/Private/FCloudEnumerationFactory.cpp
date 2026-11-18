// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247b80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

ICloudEnumeration * __cdecl
BuildPatchServices::FCloudEnumerationFactory::Create
          (FString *param_1,FDateTime *param_2,EFeatureLevel *param_3,FStatsCollector *param_4)

{
  FCloudEnumeration *this;
  FCloudEnumeration *pFVar1;
  
  this = ::operator_new(0x340);
  pFVar1 = (FCloudEnumeration *)0x0;
  if (this != (FCloudEnumeration *)0x0) {
    pFVar1 = FCloudEnumeration::FCloudEnumeration(this,param_1,param_2,param_3,param_4);
  }
  return (ICloudEnumeration *)pFVar1;
}

