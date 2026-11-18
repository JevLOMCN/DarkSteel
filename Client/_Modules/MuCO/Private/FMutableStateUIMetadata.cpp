// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14ac036f0

UScriptStruct * __cdecl FMutableStateUIMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableStateUIMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableStateUIMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableStateUIMetadata,(UObject *)pUVar1,
                         L"MutableStateUIMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FMutableStateUIMetadata.OuterSingleton;
}

