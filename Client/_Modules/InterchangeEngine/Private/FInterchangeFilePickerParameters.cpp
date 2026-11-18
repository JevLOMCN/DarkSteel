// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// StaticStruct @ 14e4cc060

UScriptStruct * __cdecl FInterchangeFilePickerParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeFilePickerParameters,
                         (UObject *)pUVar1,L"InterchangeFilePickerParameters");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.OuterSingleton;
}

