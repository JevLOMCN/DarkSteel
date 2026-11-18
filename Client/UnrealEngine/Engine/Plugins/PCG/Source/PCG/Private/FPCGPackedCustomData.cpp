// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149ce5a20

UScriptStruct * __cdecl FPCGPackedCustomData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPackedCustomData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPackedCustomData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPackedCustomData,(UObject *)pUVar1,
                         L"PCGPackedCustomData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPackedCustomData.OuterSingleton;
}

