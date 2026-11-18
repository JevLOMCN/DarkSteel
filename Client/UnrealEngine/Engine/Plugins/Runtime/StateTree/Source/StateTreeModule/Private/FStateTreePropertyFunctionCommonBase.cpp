// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d52a0d0

UScriptStruct * __cdecl FStateTreePropertyFunctionCommonBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
                         (UObject *)pUVar1,L"StateTreePropertyFunctionCommonBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.OuterSingleton;
}

