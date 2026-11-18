// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1488764e0

UScriptStruct * __cdecl FTextureSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTextureSource.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTextureSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextureSource,(UObject *)pUVar1,L"TextureSource"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FTextureSource.OuterSingleton;
}

// FTextureSource @ 14887d430

FTextureSource * __thiscall FTextureSource::FTextureSource(FTextureSource *this)

{
  FEditorBulkData *pFVar1;
  
  (this->BulkData).BulkDataId.A = 0;
  (this->BulkData).BulkDataId.B = 0;
  (this->BulkData).BulkDataId.C = 0;
  (this->BulkData).BulkDataId.D = 0;
  (this->BulkData).PayloadContentId.Hash[0] = '\0';
  (this->BulkData).PayloadContentId.Hash[1] = '\0';
  (this->BulkData).PayloadContentId.Hash[2] = '\0';
  (this->BulkData).PayloadContentId.Hash[3] = '\0';
  (this->BulkData).PayloadContentId.Hash[4] = '\0';
  (this->BulkData).PayloadContentId.Hash[5] = '\0';
  (this->BulkData).PayloadContentId.Hash[6] = '\0';
  (this->BulkData).PayloadContentId.Hash[7] = '\0';
  pFVar1 = &this->BulkData;
  (pFVar1->PayloadContentId).Hash[8] = '\0';
  (pFVar1->PayloadContentId).Hash[9] = '\0';
  (pFVar1->PayloadContentId).Hash[10] = '\0';
  (pFVar1->PayloadContentId).Hash[0xb] = '\0';
  (pFVar1->PayloadContentId).Hash[0xc] = '\0';
  (pFVar1->PayloadContentId).Hash[0xd] = '\0';
  (pFVar1->PayloadContentId).Hash[0xe] = '\0';
  (pFVar1->PayloadContentId).Hash[0xf] = '\0';
  pFVar1 = &this->BulkData;
  (pFVar1->PayloadContentId).Hash[0x10] = '\0';
  (pFVar1->PayloadContentId).Hash[0x11] = '\0';
  (pFVar1->PayloadContentId).Hash[0x12] = '\0';
  (pFVar1->PayloadContentId).Hash[0x13] = '\0';
  (this->BulkData).Payload.Owner.Owner = (FBufferOwner *)0x0;
  (this->BulkData).PayloadSize = 0;
  (this->BulkData).AttachedAr = (FArchive *)0x0;
  (this->BulkData).OffsetInFile = -1;
  (this->BulkData).PackagePath.PackageName.ComparisonIndex = 0;
  (this->BulkData).PackagePath.PackageName.Number = 0;
  (this->BulkData).PackagePath.HeaderExtension = Unspecified;
  (this->BulkData).Flags = None;
  (this->BulkData).Mutex.State = (atomic<unsigned_int>)0x0;
  (this->BulkData).Mutex.ThreadId = (atomic<unsigned_int>)0x0;
  (this->BulkData).bSkipVirtualization = false;
  UE::Serialization::Private::FCompressionSettings::FCompressionSettings
            (&(this->BulkData).CompressionSettings);
  this->NumLockedMips = 0;
  this->LockState = None;
  return this;
}

// GetBytesPerPixel @ 14888d3a0

long64 __cdecl FTextureSource::GetBytesPerPixel(ETextureSourceFormat param_1)

{
  Type TVar1;
  long64 lVar2;
  
  TVar1 = FImageCoreUtils::ConvertToRawImageFormat(param_1);
  lVar2 = ERawImageFormat::GetBytesPerPixel(TVar1);
  return lVar2;
}

