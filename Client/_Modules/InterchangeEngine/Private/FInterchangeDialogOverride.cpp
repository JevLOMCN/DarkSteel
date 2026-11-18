// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// StaticStruct @ 14e4cc490

UScriptStruct * __cdecl FInterchangeDialogOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeDialogOverride,(UObject *)pUVar1,
                         L"InterchangeDialogOverride");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.OuterSingleton;
}

