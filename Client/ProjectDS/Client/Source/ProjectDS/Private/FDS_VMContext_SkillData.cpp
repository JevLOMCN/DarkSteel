// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b6e1bf0

UScriptStruct * __cdecl FDS_VMContext_SkillData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_VMContext_SkillData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_VMContext_SkillData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_VMContext_SkillData,(UObject *)pUVar1,
                         L"DS_VMContext_SkillData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_VMContext_SkillData.OuterSingleton;
}

// ~FDS_VMContext_SkillData @ 14be0f130

void __thiscall FDS_VMContext_SkillData::~FDS_VMContext_SkillData(FDS_VMContext_SkillData *this)

{
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

