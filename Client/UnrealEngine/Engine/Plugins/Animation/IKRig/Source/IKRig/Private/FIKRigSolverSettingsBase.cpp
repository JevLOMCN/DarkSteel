// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14deee1f0

UScriptStruct * __cdecl FIKRigSolverSettingsBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverSettingsBase,(UObject *)pUVar1,
                         L"IKRigSolverSettingsBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.OuterSingleton;
}

// ~FIKRigSolverSettingsBase @ 14df1c000

void __thiscall FIKRigSolverSettingsBase::~FIKRigSolverSettingsBase(FIKRigSolverSettingsBase *this)

{
  *this = (FIKRigSolverSettingsBase)&___7FIKRigSettingsBase__6B_;
  return;
}

