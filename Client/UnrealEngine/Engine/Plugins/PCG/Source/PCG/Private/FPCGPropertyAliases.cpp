// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149f1bbe0

UScriptStruct * __cdecl FPCGPropertyAliases::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPropertyAliases,(UObject *)pUVar1,
                         L"PCGPropertyAliases");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.OuterSingleton;
}

