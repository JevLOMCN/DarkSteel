// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// StaticStruct @ 14a11a300

UScriptStruct * __cdecl FRigVMFunction_StringBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_StringBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_StringBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringBase,(UObject *)pUVar1,
                         L"RigVMFunction_StringBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_StringBase.OuterSingleton;
}

