// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14aba8500

UScriptStruct * __cdecl FFParameterOptionsTags::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFParameterOptionsTags.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FFParameterOptionsTags.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFParameterOptionsTags,(UObject *)pUVar1,
                         L"FParameterOptionsTags");
  }
  return Z_Registration_Info_UScriptStruct_FFParameterOptionsTags.OuterSingleton;
}

