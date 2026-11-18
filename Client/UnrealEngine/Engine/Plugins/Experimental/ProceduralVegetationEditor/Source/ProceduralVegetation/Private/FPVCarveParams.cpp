// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// StaticStruct @ 14da585f0

UScriptStruct * __cdecl FPVCarveParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVCarveParams.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVCarveParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVCarveParams,(UObject *)pUVar1,L"PVCarveParams"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FPVCarveParams.OuterSingleton;
}

