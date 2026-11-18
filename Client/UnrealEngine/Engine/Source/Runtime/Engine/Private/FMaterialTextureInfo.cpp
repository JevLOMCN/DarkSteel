// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f0bbd0

UScriptStruct * __cdecl FMaterialTextureInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialTextureInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialTextureInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialTextureInfo,(UObject *)pUVar1,
                         L"MaterialTextureInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialTextureInfo.OuterSingleton;
}

// IsValid @ 147f4b7d0

bool __thiscall FMaterialTextureInfo::IsValid(FMaterialTextureInfo *this,bool param_1)

{
  if (((this->TextureName != (FName)0x0) && (__real_322bcc77 < this->SamplingScale)) &&
     ((uint)this->UVChannelIndex < 4)) {
    return true;
  }
  return false;
}

