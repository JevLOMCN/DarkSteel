// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// StaticStruct @ 14a736ba0

UScriptStruct * __cdecl FMVVMEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMEventField.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMEventField,(UObject *)pUVar1,
                         L"MVVMEventField");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMEventField.OuterSingleton;
}

