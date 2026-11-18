// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14deee010

UScriptStruct * __cdecl FIKRigSettingsBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSettingsBase,(UObject *)pUVar1,
                         L"IKRigSettingsBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton;
}

// ~FIKRigSettingsBase @ 14df1bf40

void __thiscall FIKRigSettingsBase::~FIKRigSettingsBase(FIKRigSettingsBase *this)

{
  *this = (FIKRigSettingsBase)&___7FIKRigSettingsBase__6B_;
  return;
}

