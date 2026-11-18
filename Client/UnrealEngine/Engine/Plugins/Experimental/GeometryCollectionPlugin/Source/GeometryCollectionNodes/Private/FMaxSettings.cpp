// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// StaticStruct @ 14e8d4ff0

UScriptStruct * __cdecl FMaxSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaxSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaxSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaxSettings,(UObject *)pUVar1,L"MaxSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMaxSettings.OuterSingleton;
}

