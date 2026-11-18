// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 1

// StaticStruct @ 14de3b310

UScriptStruct * __cdecl FPlanarLimit::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlanarLimit.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FPlanarLimit.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimit,(UObject *)pUVar1,L"PlanarLimit");
  }
  return Z_Registration_Info_UScriptStruct_FPlanarLimit.OuterSingleton;
}

