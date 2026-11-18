// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a17d240

UScriptStruct * __cdecl FRigVMFunction_NameBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_NameBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_NameBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NameBase,(UObject *)pUVar1,
                         L"RigVMFunction_NameBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_NameBase.OuterSingleton;
}

// Execute @ 14a17d280

void __thiscall FRigVMFunction_NameBase::Execute(FRigVMFunction_NameBase *this)

{
  return;
}

