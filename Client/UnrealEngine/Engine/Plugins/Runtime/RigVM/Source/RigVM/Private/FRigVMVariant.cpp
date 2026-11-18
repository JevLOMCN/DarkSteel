// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// StaticStruct @ 14a12b620

UScriptStruct * __cdecl FRigVMVariant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMVariant.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMVariant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMVariant,(UObject *)pUVar1,L"RigVMVariant");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMVariant.OuterSingleton;
}

