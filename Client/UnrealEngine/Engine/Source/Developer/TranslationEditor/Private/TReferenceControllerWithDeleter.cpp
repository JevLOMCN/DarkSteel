// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 6

// DestroyObject @ 146ba8e30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 146ba8e70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternationalizationArchive,SharedPointerInternals::DefaultDeleter<FInternationalizationArchive>,1>
::DestroyObject(TReferenceControllerWithDeleter<FInternationalizationArchive,SharedPointerInternals::DefaultDeleter<FInternationalizationArchive>,1>
                *this)

{
  FInternationalizationArchive *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FInternationalizationArchive *)0x0) {
    *(undefined4 *)&(pFVar1->EntriesByKey).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->EntriesByKey).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->EntriesByKey);
    *(undefined4 *)&(pFVar1->EntriesBySourceText).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->EntriesBySourceText).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->EntriesBySourceText);
    ::operator_delete(pFVar1,0xa8);
  }
  return;
}

// DestroyObject @ 146ba8ef0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternationalizationManifest,SharedPointerInternals::DefaultDeleter<FInternationalizationManifest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FInternationalizationManifest,SharedPointerInternals::DefaultDeleter<FInternationalizationManifest>,1>
                *this)

{
  FInternationalizationManifest *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FInternationalizationManifest *)0x0) {
    *(undefined4 *)&(pFVar1->EntriesByKey).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->EntriesByKey).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->EntriesByKey);
    *(undefined4 *)&(pFVar1->EntriesBySourceText).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->EntriesBySourceText).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->EntriesBySourceText);
    ::operator_delete(pFVar1,0xa8);
  }
  return;
}

// DestroyObject @ 146ba8f70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTranslationDataManager,SharedPointerInternals::DefaultDeleter<FTranslationDataManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTranslationDataManager,SharedPointerInternals::DefaultDeleter<FTranslationDataManager>,1>
                *this)

{
  FTranslationDataManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTranslationDataManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ba8f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146ba8f90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTranslationPickerSettingsManager,SharedPointerInternals::DefaultDeleter<FTranslationPickerSettingsManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTranslationPickerSettingsManager,SharedPointerInternals::DefaultDeleter<FTranslationPickerSettingsManager>,1>
                *this)

{
  ::operator_delete(this->Object,8);
  return;
}

// DestroyObject @ 146ba8fb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUploadLocalizationTargetFile,SharedPointerInternals::DefaultDeleter<FUploadLocalizationTargetFile>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUploadLocalizationTargetFile,SharedPointerInternals::DefaultDeleter<FUploadLocalizationTargetFile>,1>
                *this)

{
  FUploadLocalizationTargetFile *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUploadLocalizationTargetFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ba8fc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

