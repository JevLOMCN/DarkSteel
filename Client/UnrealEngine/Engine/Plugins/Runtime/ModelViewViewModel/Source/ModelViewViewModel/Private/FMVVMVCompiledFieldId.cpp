// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// StaticStruct @ 14a7393c0

UScriptStruct * __cdecl FMVVMVCompiledFieldId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId,(UObject *)pUVar1,
                         L"MVVMVCompiledFieldId");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.OuterSingleton;
}

