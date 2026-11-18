// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06ccd0

UScriptStruct * __cdecl FRigVMFunction_MathMutableBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase,(UObject *)pUVar1,
                         L"RigVMFunction_MathMutableBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.OuterSingleton;
}

// Execute @ 14a06cd10

void __thiscall FRigVMFunction_MathMutableBase::Execute(FRigVMFunction_MathMutableBase *this)

{
  return;
}

