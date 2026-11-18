// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14deee130

UScriptStruct * __cdecl FIKRigGoalSettingsBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigGoalSettingsBase,(UObject *)pUVar1,
                         L"IKRigGoalSettingsBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.OuterSingleton;
}

// ~FIKRigGoalSettingsBase @ 14df1be30

void __thiscall FIKRigGoalSettingsBase::~FIKRigGoalSettingsBase(FIKRigGoalSettingsBase *this)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

