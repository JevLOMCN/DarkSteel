// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 1

// StaticStruct @ 14e2eaec0

UScriptStruct * __cdecl FDatasmithRetessellationOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithRetessellationOptions,(UObject *)pUVar1
                         ,L"DatasmithRetessellationOptions");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.OuterSingleton;
}

