// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149b9dcb0

UScriptStruct * __cdecl FPCGSelfPruningParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSelfPruningParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSelfPruningParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSelfPruningParameters,(UObject *)pUVar1,
                         L"PCGSelfPruningParameters");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSelfPruningParameters.OuterSingleton;
}

// PostLoad @ 149c2f340

void __thiscall FPCGSelfPruningParameters::PostLoad(FPCGSelfPruningParameters *this)

{
  return;
}

