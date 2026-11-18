// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// StaticStruct @ 14269be50

UScriptStruct * __cdecl FCustomizedToolMenuNameArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray,(UObject *)pUVar1,
                         L"CustomizedToolMenuNameArray");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.OuterSingleton;
}

