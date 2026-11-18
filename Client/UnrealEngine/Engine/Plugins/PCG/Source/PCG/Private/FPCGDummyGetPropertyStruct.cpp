// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149fc55f0

UScriptStruct * __cdecl FPCGDummyGetPropertyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDummyGetPropertyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDummyGetPropertyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDummyGetPropertyStruct,(UObject *)pUVar1,
                         L"PCGDummyGetPropertyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDummyGetPropertyStruct.OuterSingleton;
}

