// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// StaticStruct @ 14e032160

UScriptStruct * __cdecl FFollicleMaskOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFollicleMaskOptions.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FFollicleMaskOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFollicleMaskOptions,(UObject *)pUVar1,
                         L"FollicleMaskOptions");
  }
  return Z_Registration_Info_UScriptStruct_FFollicleMaskOptions.OuterSingleton;
}

