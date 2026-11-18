// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FAssetRegistryTagsContextData @ 141f65980

FAssetRegistryTagsContextData * __thiscall
FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
          (FAssetRegistryTagsContextData *this,UObject *param_1,EAssetRegistryTagsCaller param_2)

{
  *(undefined8 *)&this->Tags = 0;
  *(undefined8 *)&(this->Tags).field_0x8 = 0;
  *(undefined8 *)&(this->Tags).field_0x20 = 0;
  *(undefined4 *)&(this->Tags).field_0x28 = 0;
  *(undefined4 *)&(this->Tags).field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).field_0x34 = 0;
  *(undefined4 *)&(this->Tags).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Tags).field_0x40 = 0;
  *(undefined4 *)&(this->Tags).field_0x48 = 0;
  this->TargetPlatform = (ITargetPlatform *)0x0;
  this->BundleResult = (FAssetBundleData *)0x0;
  this->CookType = Unknown;
  this->CookingDLC = Unknown;
  this->bProceduralSave = false;
  this->bWantsBundleResult = false;
  this->bWantsCookTags = false;
  this->bFullUpdateRequested = false;
  this->Object = param_1;
  this->Caller = param_2;
  return this;
}

