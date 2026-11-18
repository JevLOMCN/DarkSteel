// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149902820

UScriptStruct * __cdecl FPCGSubdivisionModuleAttributeNames::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSubdivisionModuleAttributeNames.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSubdivisionModuleAttributeNames.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSubdivisionModuleAttributeNames,
                         (UObject *)pUVar1,L"PCGSubdivisionModuleAttributeNames");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSubdivisionModuleAttributeNames.OuterSingleton;
}

