// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// StaticStruct @ 1431ff4d0

UScriptStruct * __cdecl FFileManifestData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFileManifestData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BuildPatchServices();
    Z_Registration_Info_UScriptStruct_FFileManifestData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFileManifestData,(UObject *)pUVar1,
                         L"FileManifestData");
  }
  return Z_Registration_Info_UScriptStruct_FFileManifestData.OuterSingleton;
}

// FFileManifestData @ 1432232c0

FFileManifestData * __thiscall FFileManifestData::FFileManifestData(FFileManifestData *this)

{
  ::FString::FString(&this->Filename,L"");
  (this->FileHash).Hash[0] = '\0';
  (this->FileHash).Hash[1] = '\0';
  (this->FileHash).Hash[2] = '\0';
  (this->FileHash).Hash[3] = '\0';
  (this->FileHash).Hash[4] = '\0';
  (this->FileHash).Hash[5] = '\0';
  (this->FileHash).Hash[6] = '\0';
  (this->FileHash).Hash[7] = '\0';
  (this->FileHash).Hash[8] = '\0';
  (this->FileHash).Hash[9] = '\0';
  (this->FileHash).Hash[10] = '\0';
  (this->FileHash).Hash[0xb] = '\0';
  (this->FileHash).Hash[0xc] = '\0';
  (this->FileHash).Hash[0xd] = '\0';
  (this->FileHash).Hash[0xe] = '\0';
  (this->FileHash).Hash[0xf] = '\0';
  (this->FileHash).Hash[0x10] = '\0';
  (this->FileHash).Hash[0x11] = '\0';
  (this->FileHash).Hash[0x12] = '\0';
  (this->FileHash).Hash[0x13] = '\0';
  (this->FileChunkParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileChunkParts).ArrayNum = 0;
  (this->FileChunkParts).ArrayMax = 0;
  (this->InstallTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallTags).ArrayNum = 0;
  (this->InstallTags).ArrayMax = 0;
  this->bIsUnixExecutable = false;
  ::FString::FString(&this->SymlinkTarget,L"");
  this->bIsReadOnly = false;
  this->bIsCompressed = false;
  return this;
}

