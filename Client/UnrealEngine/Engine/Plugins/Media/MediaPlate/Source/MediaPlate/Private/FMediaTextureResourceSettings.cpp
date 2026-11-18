// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 1

// StaticStruct @ 14ea87030

UScriptStruct * __cdecl FMediaTextureResourceSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaPlate();
    Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaTextureResourceSettings,(UObject *)pUVar1,
                         L"MediaTextureResourceSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.OuterSingleton;
}

