// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14ab97040

UScriptStruct * __cdecl FMutableRefSkeletalMeshSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableRefSkeletalMeshSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableRefSkeletalMeshSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings,(UObject *)pUVar1
                         ,L"MutableRefSkeletalMeshSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMutableRefSkeletalMeshSettings.OuterSingleton;
}

