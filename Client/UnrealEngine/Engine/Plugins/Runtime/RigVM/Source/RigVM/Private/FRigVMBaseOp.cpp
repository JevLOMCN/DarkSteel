// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// StaticStruct @ 14a06b830

UScriptStruct * __cdecl FRigVMBaseOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMBaseOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMBaseOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBaseOp,(UObject *)pUVar1,L"RigVMBaseOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMBaseOp.OuterSingleton;
}

