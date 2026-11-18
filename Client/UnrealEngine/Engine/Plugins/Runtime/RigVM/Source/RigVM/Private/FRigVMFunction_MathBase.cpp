// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06cc40

UScriptStruct * __cdecl FRigVMFunction_MathBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBase,(UObject *)pUVar1,
                         L"RigVMFunction_MathBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.OuterSingleton;
}

// Execute @ 14a06cc80

void __thiscall FRigVMFunction_MathBase::Execute(FRigVMFunction_MathBase *this)

{
  return;
}

