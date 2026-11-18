// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14deee170

UScriptStruct * __cdecl FIKRigBoneSettingsBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigBoneSettingsBase,(UObject *)pUVar1,
                         L"IKRigBoneSettingsBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.OuterSingleton;
}

// ~FIKRigBoneSettingsBase @ 14df1bda0

void __thiscall FIKRigBoneSettingsBase::~FIKRigBoneSettingsBase(FIKRigBoneSettingsBase *this)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

