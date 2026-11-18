// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// StaticStruct @ 14269bdd0

UScriptStruct * __cdecl FCustomizedToolMenuEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry,(UObject *)pUVar1,
                         L"CustomizedToolMenuEntry");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.OuterSingleton;
}

