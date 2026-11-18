// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06c610

UScriptStruct * __cdecl FRigVMChangeTypeOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMChangeTypeOp,(UObject *)pUVar1,
                         L"RigVMChangeTypeOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.OuterSingleton;
}

// Serialize @ 14a0a5de0

void __cdecl FRigVMChangeTypeOp::Serialize(FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6769809472945651550>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                     ,0xa2,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

