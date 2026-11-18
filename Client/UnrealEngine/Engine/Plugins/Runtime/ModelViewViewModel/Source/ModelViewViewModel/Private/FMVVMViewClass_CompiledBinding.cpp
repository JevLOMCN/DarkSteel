// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// StaticStruct @ 14a739840

UScriptStruct * __cdecl FMVVMViewClass_CompiledBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding,(UObject *)pUVar1,
                         L"MVVMViewClass_CompiledBinding");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.OuterSingleton;
}

