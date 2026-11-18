// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// StaticStruct @ 14caaee90

UScriptStruct * __cdecl FCreateComponentParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateComponentParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UScriptStruct_FCreateComponentParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateComponentParams,(UObject *)pUVar1,
                         L"CreateComponentParams");
  }
  return Z_Registration_Info_UScriptStruct_FCreateComponentParams.OuterSingleton;
}

