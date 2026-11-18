// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 14978d130

UScriptStruct * __cdecl FPCGPointInputRange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPointInputRange.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPointInputRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPointInputRange,(UObject *)pUVar1,
                         L"PCGPointInputRange");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPointInputRange.OuterSingleton;
}

