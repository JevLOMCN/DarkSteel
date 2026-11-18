// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// StaticStruct @ 1443ec960

UScriptStruct * __cdecl FPinSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPinSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FPinSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPinSettings,(UObject *)pUVar1,L"PinSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPinSettings.OuterSingleton;
}

