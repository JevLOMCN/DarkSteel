// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// StaticStruct @ 14a0ace90

UScriptStruct * __cdecl FRigVMProfilingInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMProfilingInfo,(UObject *)pUVar1,
                         L"RigVMProfilingInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.OuterSingleton;
}

// SetupInstructionTracking @ 14a111570

void __thiscall
FRigVMProfilingInfo::SetupInstructionTracking(FRigVMProfilingInfo *this,int param_1,bool param_2)

{
  return;
}

// StartProfiling @ 14a111580

void __thiscall FRigVMProfilingInfo::StartProfiling(FRigVMProfilingInfo *this,bool param_1)

{
  return;
}

// StopProfiling @ 14a1119d0

void __thiscall FRigVMProfilingInfo::StopProfiling(FRigVMProfilingInfo *this)

{
  return;
}

