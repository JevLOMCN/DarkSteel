// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149edcb80

UScriptStruct * __cdecl FPCGBlueprintContextHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGBlueprintContextHandle,(UObject *)pUVar1,
                         L"PCGBlueprintContextHandle");
  }
  return Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.OuterSingleton;
}

