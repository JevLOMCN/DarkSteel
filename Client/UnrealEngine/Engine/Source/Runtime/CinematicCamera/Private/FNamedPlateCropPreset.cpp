// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 1

// StaticStruct @ 146ab1a00

UScriptStruct * __cdecl FNamedPlateCropPreset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamedPlateCropPreset,(UObject *)pUVar1,
                         L"NamedPlateCropPreset");
  }
  return Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.OuterSingleton;
}

