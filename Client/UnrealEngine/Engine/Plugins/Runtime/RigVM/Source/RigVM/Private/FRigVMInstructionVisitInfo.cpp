// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a0acd40

UScriptStruct * __cdecl FRigVMInstructionVisitInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo,(UObject *)pUVar1,
                         L"RigVMInstructionVisitInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.OuterSingleton;
}

// SetupInstructionTracking @ 14a111560

void __thiscall
FRigVMInstructionVisitInfo::SetupInstructionTracking(FRigVMInstructionVisitInfo *this,int param_1)

{
  return;
}

