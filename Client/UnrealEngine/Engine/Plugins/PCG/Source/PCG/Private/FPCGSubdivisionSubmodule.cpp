// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 1499027e0

UScriptStruct * __cdecl FPCGSubdivisionSubmodule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSubdivisionSubmodule,(UObject *)pUVar1,
                         L"PCGSubdivisionSubmodule");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton;
}

