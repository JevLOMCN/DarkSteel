// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// StaticStruct @ 1431ff490

UScriptStruct * __cdecl FChunkPartData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChunkPartData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BuildPatchServices();
    Z_Registration_Info_UScriptStruct_FChunkPartData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChunkPartData,(UObject *)pUVar1,L"ChunkPartData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FChunkPartData.OuterSingleton;
}

// FChunkPartData @ 143220ae0

FChunkPartData * __thiscall FChunkPartData::FChunkPartData(FChunkPartData *this)

{
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->Offset = 0;
  this->Size = 0;
  return this;
}

