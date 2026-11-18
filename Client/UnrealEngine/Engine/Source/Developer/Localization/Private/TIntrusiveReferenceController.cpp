// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 13

// DestroyObject @ 146b56c70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocTextConflicts::FConflict,1>::DestroyObject
          (TIntrusiveReferenceController<FLocTextConflicts::FConflict,1> *this)

{
  FLocTextConflicts::FConflict::~FConflict((FConflict *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56c80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>
::DestroyObject(TIntrusiveReferenceController<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FArchiveEntry,1>,int>
            (*(TSharedPtr<FArchiveEntry,1> **)((this->ObjectStorage).Pad + 0x60),
             *(int *)((this->ObjectStorage).Pad + 0x68));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 146b56cf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>::
DestroyObject(TIntrusiveReferenceController<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FManifestEntry,1>,int>
            (*(TSharedPtr<FManifestEntry,1> **)((this->ObjectStorage).Pad + 0x60),
             *(int *)((this->ObjectStorage).Pad + 0x68));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 146b56d60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInternationalizationArchive,1>::DestroyObject
          (TIntrusiveReferenceController<FInternationalizationArchive,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0xa0] = '\0';
  (this->ObjectStorage).Pad[0xa1] = '\0';
  (this->ObjectStorage).Pad[0xa2] = '\0';
  (this->ObjectStorage).Pad[0xa3] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x98);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x58));
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 146b56dc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInternationalizationManifest,1>::
DestroyObject(TIntrusiveReferenceController<FInternationalizationManifest,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0xa0] = '\0';
  (this->ObjectStorage).Pad[0xa1] = '\0';
  (this->ObjectStorage).Pad[0xa2] = '\0';
  (this->ObjectStorage).Pad[0xa3] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x98);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x58));
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 146b56e20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocMetadataObject,1>::DestroyObject
          (TIntrusiveReferenceController<FLocMetadataObject,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56e60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocMetadataValueArray,1>::DestroyObject
          (TIntrusiveReferenceController<FLocMetadataValueArray,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
            (*(TSharedPtr<FLocMetadataValue,1> **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FLocMetadataValue::~FLocMetadataValue((FLocMetadataValue *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56ea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocMetadataValueBoolean,1>::DestroyObject
          (TIntrusiveReferenceController<FLocMetadataValueBoolean,1> *this)

{
  FLocMetadataValue::~FLocMetadataValue((FLocMetadataValue *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56eb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocMetadataValueObject,1>::DestroyObject
          (TIntrusiveReferenceController<FLocMetadataValueObject,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  FLocMetadataValue::~FLocMetadataValue((FLocMetadataValue *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56ee0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocMetadataValueString,1>::DestroyObject
          (TIntrusiveReferenceController<FLocMetadataValueString,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FLocMetadataValue::~FLocMetadataValue((FLocMetadataValue *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56f10

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocTextHelper,1>::DestroyObject
          (TIntrusiveReferenceController<FLocTextHelper,1> *this)

{
  FLocTextHelper::~FLocTextHelper((FLocTextHelper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56f20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPortableObjectEntry,1>::DestroyObject
          (TIntrusiveReferenceController<FPortableObjectEntry,1> *this)

{
  FPortableObjectEntry::~FPortableObjectEntry((FPortableObjectEntry *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b56f30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextLocalizationResource,1>::DestroyObject
          (TIntrusiveReferenceController<FTextLocalizationResource,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

