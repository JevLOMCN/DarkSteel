// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 1

// StaticStruct @ 14cf2d6c0

UScriptStruct * __cdecl FARVideoFormat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARVideoFormat.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARVideoFormat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARVideoFormat,(UObject *)pUVar1,L"ARVideoFormat"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FARVideoFormat.OuterSingleton;
}

