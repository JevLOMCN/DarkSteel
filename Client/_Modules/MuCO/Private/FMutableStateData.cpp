// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab9c0a0

UScriptStruct * __cdecl FMutableStateData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableStateData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableStateData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableStateData,(UObject *)pUVar1,
                         L"MutableStateData");
  }
  return Z_Registration_Info_UScriptStruct_FMutableStateData.OuterSingleton;
}

// FMutableStateData @ 14ab9f980

FMutableStateData * __thiscall FMutableStateData::FMutableStateData(FMutableStateData *this)

{
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)this);
  this->bLiveUpdateMode = false;
  this->bDisableMeshStreaming = false;
  this->bDisableTextureStreaming = false;
  this->bReuseInstanceTextures = false;
  *(undefined8 *)&this->ForcedParameterValues = 0;
  *(undefined8 *)&(this->ForcedParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->ForcedParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->ForcedParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->ForcedParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ForcedParameterValues).field_0x34 = 0;
  *(undefined4 *)&(this->ForcedParameterValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ForcedParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->ForcedParameterValues).field_0x48 = 0;
  return this;
}

