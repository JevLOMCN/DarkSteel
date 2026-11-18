// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// StaticStruct @ 14f0a1ac0

UScriptStruct * __cdecl FDynamicsBandSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicsBandSettings,(UObject *)pUVar1,
                         L"DynamicsBandSettings");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicsBandSettings.OuterSingleton;
}

