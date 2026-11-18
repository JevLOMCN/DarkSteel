// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 148fe5080

UScriptStruct * __cdecl FVMFunctionSpecifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVMFunctionSpecifier.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FVMFunctionSpecifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVMFunctionSpecifier,(UObject *)pUVar1,
                         L"VMFunctionSpecifier");
  }
  return Z_Registration_Info_UScriptStruct_FVMFunctionSpecifier.OuterSingleton;
}

