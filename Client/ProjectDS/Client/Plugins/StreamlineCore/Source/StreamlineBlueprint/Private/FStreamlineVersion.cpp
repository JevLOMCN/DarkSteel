// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineBlueprint
// Functions: 1

// StaticStruct @ 14de859f0

UScriptStruct * __cdecl FStreamlineVersion::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamlineVersion.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UScriptStruct_FStreamlineVersion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamlineVersion,(UObject *)pUVar1,
                         L"StreamlineVersion");
  }
  return Z_Registration_Info_UScriptStruct_FStreamlineVersion.OuterSingleton;
}

