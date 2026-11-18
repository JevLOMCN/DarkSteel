// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// StaticStruct @ 14a73a630

UScriptStruct * __cdecl FMVVMVCompiledBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledBinding,(UObject *)pUVar1,
                         L"MVVMVCompiledBinding");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.OuterSingleton;
}

