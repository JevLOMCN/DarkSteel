// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocationServicesBPLibrary
// Functions: 1

// StaticStruct @ 14f03a6c0

UScriptStruct * __cdecl FLocationServicesData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocationServicesData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_LocationServicesBPLibrary();
    Z_Registration_Info_UScriptStruct_FLocationServicesData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocationServicesData,(UObject *)pUVar1,
                         L"LocationServicesData");
  }
  return Z_Registration_Info_UScriptStruct_FLocationServicesData.OuterSingleton;
}

