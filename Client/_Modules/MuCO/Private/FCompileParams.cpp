// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14aba9160

UScriptStruct * __cdecl FCompileParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompileParams.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCompileParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompileParams,(UObject *)pUVar1,L"CompileParams"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FCompileParams.OuterSingleton;
}

