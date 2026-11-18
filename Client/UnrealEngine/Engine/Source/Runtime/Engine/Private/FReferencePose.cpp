// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147588f80

UScriptStruct * __cdecl FReferencePose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReferencePose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FReferencePose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReferencePose,(UObject *)pUVar1,L"ReferencePose"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FReferencePose.OuterSingleton;
}

