// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// StaticStruct @ 142ab0450

UScriptStruct * __cdecl FTagAndValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTagAndValue.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AssetRegistry();
    Z_Registration_Info_UScriptStruct_FTagAndValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTagAndValue,(UObject *)pUVar1,L"TagAndValue");
  }
  return Z_Registration_Info_UScriptStruct_FTagAndValue.OuterSingleton;
}

