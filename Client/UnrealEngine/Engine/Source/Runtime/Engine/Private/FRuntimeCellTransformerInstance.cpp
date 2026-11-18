// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 148a73fd0

UScriptStruct * __cdecl FRuntimeCellTransformerInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance,(UObject *)pUVar1
                         ,L"RuntimeCellTransformerInstance");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.OuterSingleton;
}

