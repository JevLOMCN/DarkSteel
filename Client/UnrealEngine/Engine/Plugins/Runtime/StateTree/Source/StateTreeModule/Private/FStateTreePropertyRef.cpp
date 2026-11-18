// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d49dc10

UScriptStruct * __cdecl FStateTreePropertyRef::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyRef,(UObject *)pUVar1,
                         L"StateTreePropertyRef");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton;
}

