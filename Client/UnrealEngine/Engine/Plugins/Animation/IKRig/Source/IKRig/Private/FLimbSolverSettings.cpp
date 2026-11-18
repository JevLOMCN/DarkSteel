// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14defecd0

UScriptStruct * __cdecl FLimbSolverSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLimbSolverSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FLimbSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLimbSolverSettings,(UObject *)pUVar1,
                         L"LimbSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLimbSolverSettings.OuterSingleton;
}

// ~FLimbSolverSettings @ 14df1c0c0

void __thiscall FLimbSolverSettings::~FLimbSolverSettings(FLimbSolverSettings *this)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

