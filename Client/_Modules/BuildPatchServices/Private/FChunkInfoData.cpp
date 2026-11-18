// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// StaticStruct @ 1431ff450

UScriptStruct * __cdecl FChunkInfoData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChunkInfoData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BuildPatchServices();
    Z_Registration_Info_UScriptStruct_FChunkInfoData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfoData,(UObject *)pUVar1,L"ChunkInfoData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FChunkInfoData.OuterSingleton;
}

// FChunkInfoData @ 143220a70

FChunkInfoData * __thiscall FChunkInfoData::FChunkInfoData(FChunkInfoData *this)

{
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->Hash = 0;
  (this->ShaHash).Hash[0] = '\0';
  (this->ShaHash).Hash[1] = '\0';
  (this->ShaHash).Hash[2] = '\0';
  (this->ShaHash).Hash[3] = '\0';
  (this->ShaHash).Hash[4] = '\0';
  (this->ShaHash).Hash[5] = '\0';
  (this->ShaHash).Hash[6] = '\0';
  (this->ShaHash).Hash[7] = '\0';
  (this->ShaHash).Hash[8] = '\0';
  (this->ShaHash).Hash[9] = '\0';
  (this->ShaHash).Hash[10] = '\0';
  (this->ShaHash).Hash[0xb] = '\0';
  (this->ShaHash).Hash[0xc] = '\0';
  (this->ShaHash).Hash[0xd] = '\0';
  (this->ShaHash).Hash[0xe] = '\0';
  (this->ShaHash).Hash[0xf] = '\0';
  (this->ShaHash).Hash[0x10] = '\0';
  (this->ShaHash).Hash[0x11] = '\0';
  (this->ShaHash).Hash[0x12] = '\0';
  (this->ShaHash).Hash[0x13] = '\0';
  this->GroupNumber = '\0';
  this->FileSize = 0;
  return this;
}

