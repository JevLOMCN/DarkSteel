// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// StaticStruct @ 1462c0370

UScriptStruct * __cdecl FStringValuePair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringValuePair.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FStringValuePair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringValuePair,(UObject *)pUVar1,
                         L"StringValuePair");
  }
  return Z_Registration_Info_UScriptStruct_FStringValuePair.OuterSingleton;
}

