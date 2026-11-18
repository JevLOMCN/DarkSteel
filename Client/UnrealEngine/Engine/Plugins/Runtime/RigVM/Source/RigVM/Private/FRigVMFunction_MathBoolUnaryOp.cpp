// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// StaticStruct @ 14a169a80

UScriptStruct * __cdecl FRigVMFunction_MathBoolUnaryOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolUnaryOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolUnaryOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp,(UObject *)pUVar1,
                         L"RigVMFunction_MathBoolUnaryOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolUnaryOp.OuterSingleton;
}

