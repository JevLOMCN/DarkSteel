// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149f1ba10

UScriptStruct * __cdecl FPCGVirtualTexturePrimingInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo,(UObject *)pUVar1,
                         L"PCGVirtualTexturePrimingInfo");
  }
  return Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton;
}

