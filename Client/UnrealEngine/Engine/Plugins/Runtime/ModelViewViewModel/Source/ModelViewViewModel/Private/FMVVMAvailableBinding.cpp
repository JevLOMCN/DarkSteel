// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// StaticStruct @ 14a7363c0

UScriptStruct * __cdecl FMVVMAvailableBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMAvailableBinding,(UObject *)pUVar1,
                         L"MVVMAvailableBinding");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.OuterSingleton;
}

