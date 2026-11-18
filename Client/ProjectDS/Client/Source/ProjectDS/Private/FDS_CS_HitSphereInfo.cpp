// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b4fe140

UScriptStruct * __cdecl FDS_CS_HitSphereInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CS_HitSphereInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CS_HitSphereInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CS_HitSphereInfo,(UObject *)pUVar1,
                         L"DS_CS_HitSphereInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CS_HitSphereInfo.OuterSingleton;
}

// InitDefaultVariables @ 14bc48050

void __thiscall FDS_CS_HitSphereInfo::InitDefaultVariables(FDS_CS_HitSphereInfo *this)

{
  return;
}

// ResetVariables @ 14bc5b950

void __thiscall FDS_CS_HitSphereInfo::ResetVariables(FDS_CS_HitSphereInfo *this)

{
  return;
}

