// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 51

// FLinkerSave @ 1420e9190

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FLinkerSave * __thiscall FLinkerSave::FLinkerSave(FLinkerSave *this,UPackage *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinkerSave *pFVar3;
  
  FLinker::FLinker((FLinker *)this,Save,param_1);
  FArchiveState::FArchiveState((FArchiveState *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  (this->CurrentlySavingExport).Index = 0;
  (this->DepListForErrorChecking).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DepListForErrorChecking).ArrayNum = 0;
  (this->DepListForErrorChecking).ArrayMax = 0;
  *(undefined8 *)&this->ObjectIndicesMap = 0;
  *(undefined8 *)&(this->ObjectIndicesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectIndicesMap).field_0x20 = 0;
  this->Saver = (FArchive *)0x0;
  this->CurrentlySavingExportObject = (UObject *)0x0;
  *(undefined4 *)&(this->ObjectIndicesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectIndicesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectIndicesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectIndicesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectIndicesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectIndicesMap).field_0x48 = 0;
  *(undefined8 *)&this->CellIndicesMap = 0;
  *(undefined8 *)&(this->CellIndicesMap).field_0x8 = 0;
  *(undefined8 *)&(this->CellIndicesMap).field_0x20 = 0;
  *(undefined4 *)&(this->CellIndicesMap).field_0x28 = 0;
  *(undefined4 *)&(this->CellIndicesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellIndicesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellIndicesMap).field_0x34 = 0;
  *(undefined8 *)&(this->CellIndicesMap).field_0x40 = 0;
  *(undefined4 *)&(this->CellIndicesMap).field_0x48 = 0;
  *(undefined8 *)&this->SearchableNamesObjectMap = 0;
  *(undefined8 *)&(this->SearchableNamesObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->SearchableNamesObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->SearchableNamesObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x48 = 0;
  *(undefined8 *)&this->NameIndices = 0;
  *(undefined8 *)&(this->NameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameIndices).field_0x34 = 0;
  *(undefined8 *)&(this->NameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x48 = 0;
  *(undefined8 *)&this->SoftObjectPathIndices = 0;
  *(undefined8 *)&(this->SoftObjectPathIndices).field_0x8 = 0;
  *(undefined8 *)&(this->SoftObjectPathIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SoftObjectPathIndices).field_0x28 = 0;
  *(undefined4 *)&(this->SoftObjectPathIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftObjectPathIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftObjectPathIndices).field_0x34 = 0;
  *(undefined8 *)&(this->SoftObjectPathIndices).field_0x40 = 0;
  *(undefined4 *)&(this->SoftObjectPathIndices).field_0x48 = 0;
  this->bIsWritingHeaderSoftObjectPaths = false;
  (this->FileRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileRegions).ArrayNum = 0;
  (this->FileRegions).ArrayMax = 0;
  (this->AdditionalDataToAppend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDataToAppend).ArrayNum = 0;
  (this->AdditionalDataToAppend).ArrayMax = 0;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  this->bRehydratePayloads = false;
  (this->SidecarDataToAppend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SidecarDataToAppend).ArrayNum = 0;
  (this->SidecarDataToAppend).ArrayMax = 0;
  (this->PackageTrailerBuilder).Ptr = (FPackageTrailerBuilder *)0x0;
  (this->PostSaveCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostSaveCallbacks).ArrayNum = 0;
  (this->PostSaveCallbacks).ArrayMax = 0;
  this->SaveContext = (FSaveContext *)0x0;
  this->LogOutput = (FOutputDevice *)0x0;
  *(undefined8 *)&this->BulkDataAr = 0;
  *(undefined8 *)&(this->BulkDataAr).field_0x8 = 0;
  *(undefined8 *)&(this->BulkDataAr).field_0x20 = 0;
  *(undefined4 *)&(this->BulkDataAr).field_0x28 = 0;
  *(undefined4 *)&(this->BulkDataAr).field_0x2c = 0x80;
  *(undefined4 *)&(this->BulkDataAr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BulkDataAr).field_0x34 = 0;
  *(undefined8 *)&(this->BulkDataAr).field_0x40 = 0;
  *(undefined4 *)&(this->BulkDataAr).field_0x48 = 0;
  *(undefined8 *)&this->OptionalBulkDataAr = 0;
  *(undefined8 *)&(this->OptionalBulkDataAr).field_0x8 = 0;
  *(undefined8 *)&(this->OptionalBulkDataAr).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalBulkDataAr).field_0x28 = 0;
  *(undefined4 *)&(this->OptionalBulkDataAr).field_0x2c = 0x80;
  *(undefined4 *)&(this->OptionalBulkDataAr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OptionalBulkDataAr).field_0x34 = 0;
  *(undefined8 *)&(this->OptionalBulkDataAr).field_0x40 = 0;
  *(undefined4 *)&(this->OptionalBulkDataAr).field_0x48 = 0;
  *(undefined8 *)&this->MemoryMappedBulkDataAr = 0;
  *(undefined8 *)&(this->MemoryMappedBulkDataAr).field_0x8 = 0;
  *(undefined8 *)&(this->MemoryMappedBulkDataAr).field_0x20 = 0;
  *(undefined4 *)&(this->MemoryMappedBulkDataAr).field_0x28 = 0;
  *(undefined4 *)&(this->MemoryMappedBulkDataAr).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemoryMappedBulkDataAr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemoryMappedBulkDataAr).field_0x34 = 0;
  *(undefined8 *)&(this->MemoryMappedBulkDataAr).field_0x40 = 0;
  *(undefined4 *)&(this->MemoryMappedBulkDataAr).field_0x48 = 0;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  this->TransientPropertyOverrides =
       (TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
        *)0x0;
  this->MemoryMappingAlignment = -1;
  this->bFileRegionsEnabled = false;
  this->bDeclareRegionForEachAdditionalFile = false;
  this->bSaveBulkDataByReference = false;
  this->bSaveBulkDataToSeparateFiles = false;
  if (param_1 == (UPackage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinkerSave *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FLinkerSave @ 1420e94e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FLinkerSave * __thiscall
FLinkerSave::FLinkerSave
          (FLinkerSave *this,UPackage *param_1,FArchive *param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FString local_38;
  FString local_28;
  
  FLinkerSave(this,param_1);
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  pFVar2 = ::FString::ConstructFromPtrSize(&local_38,L"$$Memory$$",10);
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  iVar5 = iVar4;
  if (&local_28 != pFVar2) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    iVar5 = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = &this->Filename;
  if (pFVar2 == &local_28) {
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = pFVar3;
    (this->Filename).Data.ArrayNum = iVar4;
    (this->Filename).Data.ArrayMax = iVar5;
  }
  AssignSaverInternal(this,param_2,param_3,param_4);
  return this;
}

// FLinkerSave @ 1420e95f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FLinkerSave * __thiscall
FLinkerSave::FLinkerSave
          (FLinkerSave *this,UPackage *param_1,wchar_t *param_2,bool param_3,bool param_4)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  FLinkerSave(this,param_1);
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  local_18.Size = 0;
  local_18.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    local_18.Size = (int)sVar1;
  }
  TryAssignFileSaver(this,&local_18,param_3,param_4);
  return this;
}

// FLinkerSave @ 1420e9680

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FLinkerSave * __thiscall
FLinkerSave::FLinkerSave(FLinkerSave *this,UPackage *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLinkerSave *pFVar4;
  FString *pFVar5;
  FLargeMemoryWriter *this_00;
  FPackagePath *this_01;
  FLargeMemoryWriter *pFVar6;
  int iVar7;
  FLargeMemoryWriter *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar8 = (FLargeMemoryWriter *)0x0;
  iVar7 = 0;
  FLinkerSave(this,param_1);
  pwVar10 = L"";
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkerRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                         ,0x44,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLinkerSave *)(*pcVar2)();
    return pFVar4;
  }
  pFVar5 = ::FString::ConstructFromPtrSize(&local_68,L"$$Memory$$",10);
  iVar9 = 0;
  pFVar6 = pFVar8;
  if (&local_58 != pFVar5) {
    pFVar6 = (FLargeMemoryWriter *)(pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = (pFVar5->Data).ArrayNum;
    iVar9 = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar5 = &this->Filename;
  if (pFVar5 == &local_58) {
    if (pFVar6 != (FLargeMemoryWriter *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar6;
    (this->Filename).Data.ArrayNum = iVar7;
    (this->Filename).Data.ArrayMax = iVar9;
  }
  this_00 = ::operator_new(0xc0);
  pFVar6 = pFVar8;
  if (this_00 != (FLargeMemoryWriter *)0x0) {
    this_01 = UPackage::GetLoadedPath((UPackage *)this->_padding_);
    pFVar5 = FPackagePath::GetDebugName(this_01,&local_48);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar6 = FLargeMemoryWriter::FLargeMemoryWriter(this_00,0,false,pwVar10);
    pFVar8 = (FLargeMemoryWriter *)&DAT_00000001;
  }
  if ((pFVar8 != (FLargeMemoryWriter *)0x0) &&
     (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  AssignSaverInternal(this,(FArchive *)pFVar6,param_2,param_3);
  return this;
}

// ~FLinkerSave @ 1420ec140

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::~FLinkerSave(FLinkerSave *this)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  pFVar1 = this->Saver;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->Saver = (FArchive *)0x0;
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->MemoryMappedBulkDataAr).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MemoryMappedBulkDataAr).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemoryMappedBulkDataAr);
  *(undefined4 *)&(this->OptionalBulkDataAr).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OptionalBulkDataAr).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OptionalBulkDataAr);
  *(undefined4 *)&(this->BulkDataAr).field_0x48 = 0;
  pvVar3 = *(void **)&(this->BulkDataAr).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BulkDataAr);
  DestructItems<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,int>
            ((TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)> *)
             (this->PostSaveCallbacks).AllocatorInstance.Data,(this->PostSaveCallbacks).ArrayNum);
  pFVar2 = (this->PostSaveCallbacks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
            ((TDefaultDelete<UE::FPackageTrailerBuilder> *)&this->PackageTrailerBuilder,
             (this->PackageTrailerBuilder).Ptr);
  DestructItems<FLinkerSave::FSidecarStorageInfo,int>
            ((FSidecarStorageInfo *)(this->SidecarDataToAppend).AllocatorInstance.Data,
             (this->SidecarDataToAppend).ArrayNum);
  pFVar2 = (this->SidecarDataToAppend).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniqueFunction<void___cdecl(FLinkerSave_&,FArchive_&,__int64)>,int>
            ((TUniqueFunction<void___cdecl(FLinkerSave_&,FArchive_&,__int64)> *)
             (this->AdditionalDataToAppend).AllocatorInstance.Data,
             (this->AdditionalDataToAppend).ArrayNum);
  pFVar2 = (this->AdditionalDataToAppend).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FileRegions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->SoftObjectPathIndices).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SoftObjectPathIndices).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoftObjectPathIndices);
  *(undefined4 *)&(this->NameIndices).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameIndices).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameIndices);
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SearchableNamesObjectMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchableNamesObjectMap);
  *(undefined4 *)&(this->CellIndicesMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CellIndicesMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CellIndicesMap);
  *(undefined4 *)&(this->ObjectIndicesMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ObjectIndicesMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectIndicesMap);
  pFVar2 = (this->DepListForErrorChecking).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)&this->_padding_);
  FLinker::~FLinker((FLinker *)this);
  return;
}

// operator<< @ 1420ee0e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FLinkerSave::operator<<(FLinkerSave *this,UObject **param_1)

{
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0].Handle = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0].Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  SerializeObjectPointer((FLinkerSave *)&this[-1].CellIndicesMap,(FObjectPtr *)local_res8);
  return (FArchive *)this;
}

// operator<< @ 1420ee130

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FLinkerSave::operator<<(FLinkerSave *this,FLazyObjectPtr *param_1)

{
  FGuid local_18;
  
  local_18.A = *(uint *)&param_1->field_0x8;
  local_18.B = *(uint *)&param_1->field_0xc;
  local_18.C = *(uint *)&param_1->field_0x10;
  local_18.D = *(uint *)&param_1->field_0x14;
  ::operator<<((FArchive *)this,&local_18);
  return (FArchive *)this;
}

// operator<< @ 1420ee160

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FLinkerSave::operator<<(FLinkerSave *this,FObjectPtr *param_1)

{
  SerializeObjectPointer((FLinkerSave *)&this[-1].CellIndicesMap,param_1);
  return (FArchive *)this;
}

// operator<< @ 1420ee190

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FLinkerSave::operator<<(FLinkerSave *this,FSoftObjectPath *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  FArchive *pFVar4;
  FString *local_res8;
  uint local_res18 [2];
  FString local_88;
  code *local_78;
  FString **local_70;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  
  if (((char)this->_padding_ != '\0') || (*(int *)&this[-1].OptionalBulkDataAr.field_0x40 < 1)) {
    pFVar4 = FArchiveUObject::SerializeSoftObjectPath((FArchive *)this,param_1);
    return pFVar4;
  }
  puVar2 = (uint *)TMapBase<FSoftObjectPath,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>_>
                   ::Find((TMapBase<FSoftObjectPath,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>_>
                           *)&this->_padding_,param_1);
  if (puVar2 == (uint *)0x0) {
    local_res18[0] = 0xffffffff;
  }
  else {
    local_res18[0] = *puVar2;
    if (local_res18[0] != 0xffffffff) goto LAB_1420ee370;
  }
  FArchiveState::SetCriticalError((FArchiveState *)this);
  GetFullNameSafe(&local_38,(FField *)this->_padding_);
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_70 = &local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar2);
  UObjectBaseUtility::GetFullName
            (*(UObjectBaseUtility **)((longlong)pFVar3[0x2f] + 0x30),&local_48,(UObject *)0x0,None);
  (**(code **)(this->_padding_ + 0x18))(this,local_58);
  FSoftObjectPath::ToString(param_1,&local_68);
  ::FString::PrintfImpl
            (&local_88,
             L"SoftObjectPath \"%s\" is not mapped when saving %s (object: %s, property: %s). This can mean that this object serialize function is not deterministic between reference harvesting and serialization."
            );
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_res8 = &local_88;
  `FLinkerSave::operator<<'::__l8::<lambda_1>::operator()(&local_res8);
  if ((FOutputDevice *)this->_padding_ != (FOutputDevice *)0x0) {
    FOutputDevice::LogfImpl((FOutputDevice *)this->_padding_,Error,L"%s");
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_1420ee370:
  plVar1 = (longlong *)this->_padding_;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
  return (FArchive *)this;
}

// operator<< @ 1420ee3f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FLinkerSave::operator<<(FLinkerSave *this,FName *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  FString *local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  FString local_98;
  code *local_88;
  FString **local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res8 = (FString *)CONCAT44(local_res8._4_4_,(param_1->ComparisonIndex).Value);
  puVar2 = (uint *)TMapBase<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
                   ::Find((TMapBase<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
                           *)&this->_padding_,(FNameEntryId *)&local_res8);
  if (puVar2 == (uint *)0x0) {
    local_res10[0] = 0xffffffff;
  }
  else {
    local_res10[0] = *puVar2;
    if (local_res10[0] != 0xffffffff) goto LAB_1420ee597;
  }
  FArchiveState::SetCriticalError((FArchiveState *)this);
  GetFullNameSafe(&local_48,(FField *)this->_padding_);
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_80 = &local_res8;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar2);
  UObjectBaseUtility::GetFullName
            (*(UObjectBaseUtility **)((longlong)pFVar3[0x2f] + 0x30),&local_58,(UObject *)0x0,None);
  (**(code **)(this->_padding_ + 0x18))(this,&local_68);
  ::FName::ToString(param_1,&local_78);
  ::FString::PrintfImpl
            (&local_98,
             L"Name \"%s\" is not mapped when saving %s (object: %s, property: %s). This can mean that this object serialize function is not deterministic between reference harvesting and serialization."
            );
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_res8 = &local_98;
  `FLinkerSave::operator<<'::__l5::<lambda_1>::operator()(&local_res8);
  if ((FOutputDevice *)this->_padding_ != (FOutputDevice *)0x0) {
    FOutputDevice::LogfImpl((FOutputDevice *)this->_padding_,Error,L"%s");
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_1420ee597:
  if (((int)this->_padding_ != 0) &&
     (*(int *)&this[-1].OptionalBulkDataAr.field_0x10 <= (int)local_res10[0])) {
    FArchiveState::SetCriticalError((FArchiveState *)this);
    GetFullNameSafe(&local_78,(FField *)this->_padding_);
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_80 = &local_res8;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar2);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)((longlong)pFVar3[0x2f] + 0x30),&local_68,(UObject *)0x0,None
              );
    (**(code **)(this->_padding_ + 0x18))(this,&local_58);
    ::FName::ToString(param_1,&local_48);
    ::FString::PrintfImpl
              (&local_98,
               L"Name \"%s\" is referenced from an export but not mapped in the export data names region when saving %s (object: %s, property: %s)."
              );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_res8 = &local_98;
    `FLinkerSave::operator<<'::__l14::<lambda_2>::operator()(&local_res8);
    if ((FOutputDevice *)this->_padding_ != (FOutputDevice *)0x0) {
      FOutputDevice::LogfImpl((FOutputDevice *)this->_padding_,Error,L"%s");
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = param_1->Number;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)this->_padding_;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
  return (FArchive *)this;
}

// AssignMemorySaver @ 1420f1e30

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::AssignMemorySaver(FLinkerSave *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FLargeMemoryWriter *this_00;
  FPackagePath *this_01;
  FLargeMemoryWriter *pFVar5;
  int iVar6;
  FLargeMemoryWriter *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar7 = (FLargeMemoryWriter *)0x0;
  pwVar9 = L"";
  iVar6 = 0;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkerRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                         ,0x44,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = ::FString::ConstructFromPtrSize(&local_68,L"$$Memory$$",10);
  iVar8 = 0;
  pFVar5 = pFVar7;
  if (&local_58 != pFVar4) {
    pFVar5 = (FLargeMemoryWriter *)(pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar4->Data).ArrayNum;
    iVar8 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar4 = &this->Filename;
  if (pFVar4 == &local_58) {
    if (pFVar5 != (FLargeMemoryWriter *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  else {
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar5;
    (this->Filename).Data.ArrayNum = iVar6;
    (this->Filename).Data.ArrayMax = iVar8;
  }
  this_00 = ::operator_new(0xc0);
  pFVar5 = pFVar7;
  if (this_00 != (FLargeMemoryWriter *)0x0) {
    this_01 = UPackage::GetLoadedPath((UPackage *)this->_padding_);
    pFVar4 = FPackagePath::GetDebugName(this_01,&local_48);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar5 = FLargeMemoryWriter::FLargeMemoryWriter(this_00,0,false,pwVar9);
    pFVar7 = (FLargeMemoryWriter *)&DAT_00000001;
  }
  if ((pFVar7 != (FLargeMemoryWriter *)0x0) &&
     (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  AssignSaverInternal(this,(FArchive *)pFVar5,param_1,param_2);
  return;
}

// AssignSaver @ 1420f1fb0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::AssignSaver(FLinkerSave *this,FArchive *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FString local_48;
  FString local_38;
  
  pFVar2 = ::FString::ConstructFromPtrSize(&local_48,L"$$Memory$$",10);
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  iVar5 = iVar4;
  if (&local_38 != pFVar2) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    iVar5 = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar2 = &this->Filename;
  if (pFVar2 == &local_38) {
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = pFVar3;
    (this->Filename).Data.ArrayNum = iVar4;
    (this->Filename).Data.ArrayMax = iVar5;
  }
  AssignSaverInternal(this,param_1,param_2,param_3);
  return;
}

// AssignSaverInternal @ 1420f20a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::AssignSaverInternal(FLinkerSave *this,FArchive *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  void *_Src;
  int iVar6;
  bool bVar7;
  FEngineVersion *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  if (param_1 == (FArchive *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSaver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x66,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LinkerRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x67,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->Saver = param_1;
  lVar10 = this->_padding_;
  *(undefined4 *)&this->_padding_ = 0x9e2a83c1;
  *(FPackageFileVersion *)((longlong)&this->_padding_ + 4) = GPackageFileUEVersion;
  *(int *)((longlong)&this->_padding_ + 4) = GPackageFileLicenseeUEVersion;
  *(bool *)&this->_padding_ = param_3;
  pFVar8 = FEngineVersion::Current();
  this->_padding_ = pFVar8->_padding_;
  *(int *)&this->_padding_ = (int)pFVar8->_padding_;
  ::FString::operator=((FString *)&this->_padding_,&pFVar8->Branch);
  pFVar8 = FEngineVersion::CompatibleWith();
  this->_padding_ = pFVar8->_padding_;
  *(int *)&this->_padding_ = (int)pFVar8->_padding_;
  ::FString::operator=((FString *)&this->_padding_,&pFVar8->Branch);
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar10 + 0x2c);
  }
  FPackageFileSummary::SetPackageFlags((FPackageFileSummary *)&this->_padding_,uVar9);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UPackage::GetChunkIDs'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar6 = DAT_155015f08;
  _Src = _Dummy;
  plVar2 = &this->_padding_;
  if ((TArray<int,class_TSizedDefaultAllocator<32>_> *)plVar2 !=
      &`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
       ::__l2::Dummy) {
    lVar10 = (longlong)DAT_155015f08;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar4 = *piVar1;
    *(int *)&this->_padding_ = DAT_155015f08;
    if ((iVar6 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,iVar4,(ForAnyElementType *)plVar2,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((void *)*plVar2,_Src,lVar10 << 2);
      }
    }
  }
  (**(code **)(this->_padding_ + 0xd8))(&this->_padding_,1);
  (**(code **)(this->_padding_ + 0x108))(&this->_padding_,1);
  pbVar3 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar3 = *pbVar3 & 0xfe;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar3 = *pbVar3 | param_2;
  return;
}

// CloseAndDestroySaver @ 1420f4630

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FLinkerSave::CloseAndDestroySaver(FLinkerSave *this)

{
  FArchive *pFVar1;
  
  pFVar1 = this->Saver;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->Saver = (FArchive *)0x0;
  return true;
}

// ForEachBulkDataCookedIndex @ 1420f78c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::ForEachBulkDataCookedIndex
          (FLinkerSave *this,
          TUniqueFunction<void___cdecl(FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&)>
          *param_1,EBulkDataPayloadType param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<unsigned_int> *pFVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  int iVar18;
  int *piVar19;
  TMap<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
  *pTVar20;
  uint *puVar21;
  ForElementType<unsigned_int> FVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if ((param_2 != Inline) && (param_2 != AppendToExports)) {
    if (param_2 == BulkSegment) {
      pTVar20 = &this->BulkDataAr;
      piVar19 = (int *)&(this->BulkDataAr).field_0x8;
      piVar13 = (int *)&(this->BulkDataAr).field_0x34;
      FVar22 = (ForElementType<unsigned_int>)&(this->BulkDataAr).field_0x10;
      puVar21 = (uint *)&(this->BulkDataAr).field_0x28;
      pFVar8 = (ForElementType<unsigned_int> *)&(this->BulkDataAr).field_0x20;
      goto LAB_1420f7a14;
    }
    if (param_2 == Optional) {
      pTVar20 = &this->OptionalBulkDataAr;
      piVar19 = (int *)&(this->OptionalBulkDataAr).field_0x8;
      piVar13 = (int *)&(this->OptionalBulkDataAr).field_0x34;
      FVar22 = (ForElementType<unsigned_int>)&(this->OptionalBulkDataAr).field_0x10;
      puVar21 = (uint *)&(this->OptionalBulkDataAr).field_0x28;
      pFVar8 = (ForElementType<unsigned_int> *)&(this->OptionalBulkDataAr).field_0x20;
      goto LAB_1420f7a14;
    }
    if (param_2 != MemoryMapped) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                         ,0x341,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FLinkerSave::GetArchives'::__l2::_dynamic_atexit_destructor_for__NoData__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar20 = &NoData;
      piVar19 = (int *)&NoData.field_0x8;
      piVar13 = (int *)&NoData.field_0x34;
      FVar22 = (ForElementType<unsigned_int>)0x154b8ee60;
      puVar21 = (uint *)&NoData.field_0x28;
      pFVar8 = (ForElementType<unsigned_int> *)&NoData.field_0x20;
      goto LAB_1420f7a14;
    }
  }
  pTVar20 = &this->MemoryMappedBulkDataAr;
  piVar19 = (int *)&(this->MemoryMappedBulkDataAr).field_0x8;
  piVar13 = (int *)&(this->MemoryMappedBulkDataAr).field_0x34;
  FVar22 = (ForElementType<unsigned_int>)&(this->MemoryMappedBulkDataAr).field_0x10;
  puVar21 = (uint *)&(this->MemoryMappedBulkDataAr).field_0x28;
  pFVar8 = (ForElementType<unsigned_int> *)&(this->MemoryMappedBulkDataAr).field_0x20;
LAB_1420f7a14:
  uVar15 = *(int *)((longlong)FVar22 + 0x18);
  iVar16 = 0;
  uVar6 = 1;
  iVar18 = 0;
  uVar12 = 0;
  uVar7 = 0;
  if (uVar15 != 0) {
    FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar22;
    }
    uVar7 = *(uint *)FVar17;
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) {
        uVar12 = *(uint *)((longlong)FVar22 + 0x18);
        uVar7 = uVar15;
        goto LAB_1420f7a94;
      }
      uVar7 = ((uint *)((longlong)FVar17 + 4))[lVar10];
    }
    uVar12 = *(uint *)((longlong)FVar22 + 0x18);
    uVar6 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar7 = (int)lVar10 + -1 + iVar18;
    if ((int)uVar12 < (int)uVar7) {
      uVar7 = uVar15;
    }
  }
LAB_1420f7a94:
  uVar15 = *puVar21;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar6,iVar16);
  TStack_80.CurrentBitIndex = uVar7;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = iVar18;
  uStack_60 = CONCAT44(uStack_8c,*piVar19 - *piVar13);
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar22;
  if ((((int)uVar15 < 0) || ((int)uVar12 < (int)uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = *puVar21;
  if (uVar15 != uVar12) {
    FVar17 = *pFVar8;
    if (*pFVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar22;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1420f7b91;
      uVar15 = ((uint *)((longlong)FVar17 + 4))[lVar10];
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar12 < (int)uVar15) {
      uVar15 = uVar12;
    }
  }
LAB_1420f7b91:
  while( true ) {
    if (*(int *)&pTVar20->field_0x8 - *(int *)&pTVar20->field_0x34 != (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_80.CurrentBitIndex == uVar15) &&
       ((ForElementType<unsigned_int>)TStack_80.Array == FVar22)) break;
    puVar1 = (undefined1 *)(*(longlong *)pTVar20 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    if ((*(longlong *)(*(longlong *)pTVar20 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18) == 0)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("It.Value",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                              ,0x304,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20[0] = *puVar1;
    uVar3 = *(undefined8 *)(puVar1 + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar11 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_1->field_0x10;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar4)(uVar9,local_res20,uVar3);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return;
}

// GetArchiveName @ 1420f8680

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FString * __thiscall FLinkerSave::GetArchiveName(FLinkerSave *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  return __return_storage_ptr__;
}

// GetArchives @ 1420f86b0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TMap<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
* __thiscall FLinkerSave::GetArchives(FLinkerSave *this,EBulkDataPayloadType param_1)

{
  code *pcVar1;
  bool bVar2;
  TMap<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
  *pTVar3;
  
  if ((param_1 != Inline) && (param_1 != AppendToExports)) {
    if (param_1 == BulkSegment) {
      return &this->BulkDataAr;
    }
    if (param_1 == Optional) {
      return &this->OptionalBulkDataAr;
    }
    if (param_1 != MemoryMapped) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                         ,0x341,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMap<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          atexit(`FLinkerSave::GetArchives'::__l2::_dynamic_atexit_destructor_for__NoData__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      return &NoData;
    }
  }
  return &this->MemoryMappedBulkDataAr;
}

// GetBulkDataArchive @ 1420f9da0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TFileRegionArchive<FLargeMemoryWriter> * __thiscall
FLinkerSave::GetBulkDataArchive(FLinkerSave *this,FBulkDataCookedIndex param_1)

{
  TFileRegionArchive<FLargeMemoryWriter> *pTVar1;
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  *pTVar2;
  TFileRegionArchive<FLargeMemoryWriter> *this_00;
  FBulkDataCookedIndex local_res10 [24];
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  local_18 [2];
  
  local_res10[0].Value = param_1.Value;
  pTVar2 = TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
           ::FindOrAddImpl<FBulkDataCookedIndex_const_&>
                     ((TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                       *)&this->BulkDataAr,(uint)param_1.Value,local_res10);
  if (pTVar2->Ptr != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
    return pTVar2->Ptr;
  }
  this_00 = ::operator_new(0xe8);
  if (this_00 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
    FLargeMemoryWriter::FLargeMemoryWriter((FLargeMemoryWriter *)this_00,0,false,(wchar_t *)0x0);
    this_00->_padding_ = (longlong)&___7__TFileRegionArchive_VFLargeMemoryWriter____6B_;
    (this_00->FileRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->FileRegions).ArrayNum = 0;
    (this_00->FileRegions).ArrayMax = 0;
    (this_00->CurrentRegion).Offset = 0;
    (this_00->CurrentRegion).Length = 0;
    (this_00->CurrentRegion).Type = None;
  }
  if (pTVar2 == local_18) {
    if (this_00 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
      return pTVar2->Ptr;
    }
  }
  else {
    pTVar1 = pTVar2->Ptr;
    pTVar2->Ptr = this_00;
    if (pTVar1 == (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      return this_00;
    }
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  return pTVar2->Ptr;
}

// GetDebugName @ 1420f9fa0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FString * __thiscall FLinkerSave::GetDebugName(FLinkerSave *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Filename);
  return __return_storage_ptr__;
}

// GetFilename @ 1420fa700

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FString * __thiscall FLinkerSave::GetFilename(FLinkerSave *this)

{
  return &this->Filename;
}

// GetLinker @ 1420faae0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FLinker * __thiscall FLinkerSave::GetLinker(FLinkerSave *this)

{
  return (FLinker *)&this[-1].CellIndicesMap;
}

// GetMemoryMappedBulkDataArchive @ 1420fadd0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TFileRegionArchive<FLargeMemoryWriter> * __thiscall
FLinkerSave::GetMemoryMappedBulkDataArchive(FLinkerSave *this,FBulkDataCookedIndex param_1)

{
  TFileRegionArchive<FLargeMemoryWriter> *pTVar1;
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  *pTVar2;
  TFileRegionArchive<FLargeMemoryWriter> *this_00;
  FBulkDataCookedIndex local_res10 [24];
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  local_18 [2];
  
  local_res10[0].Value = param_1.Value;
  pTVar2 = TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
           ::FindOrAddImpl<FBulkDataCookedIndex_const_&>
                     ((TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                       *)&this->MemoryMappedBulkDataAr,(uint)param_1.Value,local_res10);
  if (pTVar2->Ptr != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
    return pTVar2->Ptr;
  }
  this_00 = ::operator_new(0xe8);
  if (this_00 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
    FLargeMemoryWriter::FLargeMemoryWriter((FLargeMemoryWriter *)this_00,0,false,(wchar_t *)0x0);
    this_00->_padding_ = (longlong)&___7__TFileRegionArchive_VFLargeMemoryWriter____6B_;
    (this_00->FileRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->FileRegions).ArrayNum = 0;
    (this_00->FileRegions).ArrayMax = 0;
    (this_00->CurrentRegion).Offset = 0;
    (this_00->CurrentRegion).Length = 0;
    (this_00->CurrentRegion).Type = None;
  }
  if (pTVar2 == local_18) {
    if (this_00 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
      return pTVar2->Ptr;
    }
  }
  else {
    pTVar1 = pTVar2->Ptr;
    pTVar2->Ptr = this_00;
    if (pTVar1 == (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      return this_00;
    }
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  return pTVar2->Ptr;
}

// GetOptionalBulkDataArchive @ 1420fb0f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TFileRegionArchive<FLargeMemoryWriter> * __thiscall
FLinkerSave::GetOptionalBulkDataArchive(FLinkerSave *this,FBulkDataCookedIndex param_1)

{
  TFileRegionArchive<FLargeMemoryWriter> *pTVar1;
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  *pTVar2;
  TFileRegionArchive<FLargeMemoryWriter> *this_00;
  FBulkDataCookedIndex local_res10 [24];
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  local_18 [2];
  
  local_res10[0].Value = param_1.Value;
  pTVar2 = TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
           ::FindOrAddImpl<FBulkDataCookedIndex_const_&>
                     ((TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                       *)&this->OptionalBulkDataAr,(uint)param_1.Value,local_res10);
  if (pTVar2->Ptr != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
    return pTVar2->Ptr;
  }
  this_00 = ::operator_new(0xe8);
  if (this_00 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
    FLargeMemoryWriter::FLargeMemoryWriter((FLargeMemoryWriter *)this_00,0,false,(wchar_t *)0x0);
    this_00->_padding_ = (longlong)&___7__TFileRegionArchive_VFLargeMemoryWriter____6B_;
    (this_00->FileRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->FileRegions).ArrayNum = 0;
    (this_00->FileRegions).ArrayMax = 0;
    (this_00->CurrentRegion).Offset = 0;
    (this_00->CurrentRegion).Length = 0;
    (this_00->CurrentRegion).Type = None;
  }
  if (pTVar2 == local_18) {
    if (this_00 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
      return pTVar2->Ptr;
    }
  }
  else {
    pTVar1 = pTVar2->Ptr;
    pTVar2->Ptr = this_00;
    if (pTVar1 == (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      return this_00;
    }
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  return pTVar2->Ptr;
}

// GetSerializeContext @ 1420fd650

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FUObjectSerializeContext * __thiscall FLinkerSave::GetSerializeContext(FLinkerSave *this)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  return (FUObjectSerializeContext *)pFVar2[0x2f];
}

// HasCookedIndexBulkData @ 1420fe2e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FLinkerSave::HasCookedIndexBulkData(FLinkerSave *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->BulkDataAr).field_0x10;
  iVar3 = *(int *)&(this->BulkDataAr).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->BulkDataAr).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1420fe38d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1420fe38d:
  uVar11 = *(uint *)&(this->BulkDataAr).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->BulkDataAr).field_0x8 -
                       *(int *)&(this->BulkDataAr).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->BulkDataAr).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->BulkDataAr).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1420fe490;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1420fe490:
  while( true ) {
    if (*(int *)&(this->BulkDataAr).field_0x8 - *(int *)&(this->BulkDataAr).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)(*(longlong *)&this->BulkDataAr + (longlong)TStack_50.CurrentBitIndex * 0x18) !=
        '\0') {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// MapName @ 142102230

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

int __thiscall FLinkerSave::MapName(FLinkerSave *this,FNameEntryId param_1)

{
  int *piVar1;
  FNameEntryId local_res10 [6];
  
  local_res10[0].Value = param_1.Value;
  piVar1 = TMapBase<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
           ::Find((TMapBase<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
                   *)&this->NameIndices,local_res10);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return -1;
}

// MapObject @ 142102270

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPackageIndex __thiscall
FLinkerSave::MapObject(FLinkerSave *this,TObjectPtr<UObject_const_> param_1,bool param_2)

{
  undefined1 *puVar1;
  FPackageIndex FVar2;
  UObject *pUVar3;
  FSaveContext *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<TObjectPtr<UObject>,FPackageIndex> *pTVar9;
  UPackage *pUVar10;
  FObjectExport *pFVar11;
  UClass *pUVar12;
  FObjectExport *this_00;
  TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
  *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined7 in_register_00000081;
  longlong *plVar16;
  char in_R9B;
  int iVar17;
  longlong lVar18;
  FString local_d0;
  UObject *local_c0;
  longlong local_b8;
  UObject *local_b0;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  
  plVar16 = (longlong *)CONCAT71(in_register_00000081,param_2);
  pUVar3 = (UObject *)*plVar16;
  lVar18 = 0;
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable(pUVar3), UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_c0 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pTVar9 = TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                     *)&this->ObjectIndicesMap,(TObjectPtr<UObject_const_>)&local_c0);
    if ((pTVar9 != (TTuple<TObjectPtr<UObject>,FPackageIndex> *)0x0) &&
       (puVar1 = &pTVar9->field_0x8, puVar1 != (undefined1 *)0x0)) {
      if ((this->_padding_ != 0) &&
         ((*(longlong *)(this->_padding_ + 0x10) != 0 && (0 < (this->CurrentlySavingExport).Index)))
         ) {
        if (((UObjectBaseUtility *)*plVar16 != (UObjectBaseUtility *)0x0) &&
           (pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)*plVar16),
           pUVar10 != (UPackage *)0x0)) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (UE::GC::MarkAsReachable((UObject *)pUVar10),
             UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          lVar18 = pUVar10->_padding_;
        }
        FLazyName::Resolve(&GLongCoreUObjectPackageName);
        if ((lVar18 != local_b8) &&
           (FVar2.Index = (this->CurrentlySavingExport).Index, *(int *)puVar1 != FVar2.Index)) {
          pFVar11 = FLinkerTables::Exp((FLinkerTables *)&this->_padding_,FVar2);
          iVar8 = pFVar11->FirstExportDependency;
          uVar15 = (ulonglong)iVar8;
          if ((-1 < iVar8) &&
             (iVar17 = pFVar11->CreateBeforeCreateDependencies +
                       pFVar11->SerializationBeforeCreateDependencies +
                       pFVar11->CreateBeforeSerializationDependencies +
                       pFVar11->SerializationBeforeSerializationDependencies, iVar8 < iVar8 + iVar17
             )) {
            lVar18 = uVar15 * 4;
            do {
              uVar14 = (uint)uVar15;
              uVar7 = 0;
              if ((int)uVar14 < (this->DepListForErrorChecking).ArrayNum) {
                uVar7 = ~uVar14 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return (FPackageIndex)iVar8;
              }
              if (*(int *)((this->DepListForErrorChecking).AllocatorInstance.Data + lVar18) ==
                  *(int *)puVar1) goto LAB_142102630;
              uVar15 = (ulonglong)(uVar14 + 1);
              lVar18 = lVar18 + 4;
            } while ((int)(uVar14 + 1) < pFVar11->FirstExportDependency + iVar17);
          }
          iVar8 = 0;
          pUVar3 = pFVar11->Object;
          if (pUVar3 != (UObject *)0x0) {
            pUVar12 = Z_Construct_UClass_UClass_NoRegister();
            lVar18 = *(longlong *)&pUVar3->field_0x10;
            iVar17 = (int)pUVar12->_padding_;
            if ((iVar17 <= *(int *)(lVar18 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar17 * 8) ==
                &pUVar12->_padding_)) {
              pUVar12 = CastChecked<UClass,UObject>(pFVar11->Object);
              if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar12);
              }
              pUVar3 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
              if ((UObject *)*plVar16 == (UObject *)0x0) {
                bVar6 = pUVar3 == (UObject *)0x0;
              }
              else {
                bVar6 = (UObject *)*plVar16 == pUVar3;
              }
              if (bVar6) goto LAB_142102630;
            }
          }
          FVar2.Index = *(int *)puVar1;
          if (FVar2.Index == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Index.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0x6a,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return (FPackageIndex)iVar8;
            }
LAB_142102517:
            this_00 = FLinkerTables::Exp((FLinkerTables *)&this->_padding_,FVar2);
          }
          else {
            if (-1 < FVar2.Index) goto LAB_142102517;
            this_00 = (FObjectExport *)FLinkerTables::Imp((FLinkerTables *)&this->_padding_,FVar2);
          }
          ::FName::ToString((FName *)this_00,&local_d0);
          local_a8 = local_d0.Data.AllocatorInstance.Data;
          if (local_d0.Data.ArrayNum != 0) {
            iVar8 = local_d0.Data.ArrayNum + -1;
          }
          local_98._12_4_ = uStack_9c;
          local_98.Size = iVar8;
          local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
          iStack_a0 = iVar8;
          bVar6 = FPackageName::IsScriptPackage(&local_98);
          if (!bVar6) {
            (**(code **)(this->_padding_ + 0x18))(&this->_padding_,local_78);
            ::FName::ToString((FName *)pFVar11,&local_88);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78[0] != (void *)0x0) {
              FMemory::Free(local_78[0]);
            }
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            *(undefined4 *)param_1.field0_0x0 = *(undefined4 *)puVar1;
            goto LAB_1421027ab;
          }
        }
      }
LAB_142102630:
      *(undefined4 *)param_1.field0_0x0 = *(undefined4 *)puVar1;
      goto LAB_1421027ab;
    }
    if (((in_R9B != '\0') && (pFVar4 = this->SaveContext, pFVar4 != (FSaveContext *)0x0)) &&
       (1 < (byte)LogLinker._0_1_)) {
      pUVar3 = (UObject *)*plVar16;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      local_b0 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pTVar13 = TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
                ::Find((TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
                        *)&pFVar4->ObjectStatusCache,(TObjectPtr<UObject_const_>)&local_b0);
      if ((pTVar13 ==
           (TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
            *)0x0) || (pTVar13->Ptr == (FObjectStatus *)0x0)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*plVar16,&local_48,(UObject *)0x0);
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this->_padding_,&local_58,(UObject *)0x0);
        bVar6 = 0 < (this->CurrentlySavingExport).Index;
        if (bVar6) {
          pFVar11 = FLinkerTables::Exp((FLinkerTables *)&this->_padding_,
                                       (FPackageIndex)(this->CurrentlySavingExport).Index);
          ::FName::ToString((FName *)pFVar11,&local_68);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  *(undefined4 *)param_1.field0_0x0 = 0;
LAB_1421027ab:
  return (FPackageIndex)param_1.field0_0x0._0_4_;
}

// MapSoftObjectPath @ 1421027d0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

int __thiscall FLinkerSave::MapSoftObjectPath(FLinkerSave *this,FSoftObjectPath *param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FSoftObjectPath,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>_>
           ::Find((TMapBase<FSoftObjectPath,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>_>
                   *)&this->SoftObjectPathIndices,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return -1;
}

// MarkScriptSerializationEnd @ 142102800

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::MarkScriptSerializationEnd(FLinkerSave *this,UObject *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_1 == (UObject *)this->_padding_) {
    if ((int)this->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (int)this->_padding_ - 1;
    uVar4 = 0;
    if ((int)uVar6 < *(int *)&this[-1].CellIndicesMap.field_0x20) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)&this[-1].CellIndicesMap.field_0x18;
    uVar5 = (**(code **)(this->_padding_ + 0x28))(this);
    *(undefined8 *)((longlong)(int)uVar6 * 0x68 + lVar1 + 0x38) = uVar5;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7149856289856683777>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0xff,"Obj == CurrentlySavingExportObject");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// MarkScriptSerializationStart @ 142102900

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::MarkScriptSerializationStart(FLinkerSave *this,UObject *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_1 == (UObject *)this->_padding_) {
    if ((int)this->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (int)this->_padding_ - 1;
    uVar4 = 0;
    if ((int)uVar6 < *(int *)&this[-1].CellIndicesMap.field_0x20) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)&this[-1].CellIndicesMap.field_0x18;
    uVar5 = (**(code **)(this->_padding_ + 0x28))(this);
    *(undefined8 *)((longlong)(int)uVar6 * 0x68 + lVar1 + 0x30) = uVar5;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7149856289856683786>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0xf6,"Obj == CurrentlySavingExportObject");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnPostSave @ 142104a50

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::OnPostSave(FLinkerSave *this,FPackagePath *param_1,FObjectPostSaveContext param_2)

{
  int *piVar1;
  TArray<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *local_res8;
  
  pTVar2 = &this->PostSaveCallbacks;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->PostSaveCallbacks).ArrayNum;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->PostSaveCallbacks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_res8 = ((param_2.Data)->TargetFilename).Data.AllocatorInstance.Data;
    *(int *)(local_res8 + 0x9c) = *(int *)(local_res8 + 0x9c) + 1;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar8);
    pcVar4 = *(code **)pFVar8;
    pFVar6 = pFVar8 + 0x10;
    if (*(FScriptContainerElement **)(pFVar8 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar6 = *(FScriptContainerElement **)(pFVar8 + 0x28);
    }
    uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
    (*pcVar4)(uVar5,param_1);
    pFVar8 = pFVar8 + 0x30;
  }
  DestructItems<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,int>
            ((TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)> *)
             (pTVar2->AllocatorInstance).Data,(this->PostSaveCallbacks).ArrayNum);
  piVar1 = &(this->PostSaveCallbacks).ArrayMax;
  (this->PostSaveCallbacks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

// OnPostSaveBulkData @ 142104b50

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::OnPostSaveBulkData(FLinkerSave *this)

{
  return;
}

// PopSerializedProperty @ 142105e00

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::PopSerializedProperty(FLinkerSave *this,FProperty *param_1,bool param_2)

{
  FArchive::PopSerializedProperty((FArchive *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000142105e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x248))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// PushSerializedProperty @ 142107e10

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::PushSerializedProperty(FLinkerSave *this,FProperty *param_1,bool param_2)

{
  FArchive::PushSerializedProperty((FArchive *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000142107e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x240))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// Seek @ 14210e030

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::Seek(FLinkerSave *this,long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014210e03a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
  return;
}

// Serialize @ 14210e050

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::Serialize(FLinkerSave *this,void *param_1,long64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014210e05a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x188))();
  return;
}

// SerializeBulkData @ 14210f5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLinkerSave::SerializeBulkData
          (FLinkerSave *this,FBulkData *param_1,FBulkDataSerializationParams *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  EBulkDataFlags EVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long64 lVar14;
  TFileRegionArchive<FLargeMemoryWriter> *pTVar15;
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  *pTVar16;
  TFileRegionArchive<FLargeMemoryWriter> *pTVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  TTuple<TObjectPtr<UObject>,FPackageIndex> *pTVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  void *pvVar26;
  FBulkDataCookedIndex local_res20 [8];
  TOptional<EFileRegionType> local_e8 [4];
  FBulkDataCookedIndex local_e0 [8];
  uint local_d8;
  EBulkDataFlags local_d4;
  FBulkMetaResource local_d0;
  ForAnyElementType local_98;
  int local_90 [2];
  FName local_88;
  FName local_80;
  long64 local_78;
  UObject *local_70;
  FString local_68;
  FString local_58;
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  local_48;
  TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
  local_40;
  
  if ((this->_padding_ & 0x8000000) != 0) {
    return false;
  }
  EVar10 = FBulkData::GetBulkDataFlags(param_1);
  local_d8 = *(uint *)&this[-1].MemoryMappedBulkDataAr.field_0x10;
  local_d0.SizeOnDisk = FBulkData::GetBulkDataSize(param_1);
  lVar19 = this->_padding_;
  if (((lVar19 == 0) || (*(longlong *)(lVar19 + 0x10) == 0)) ||
     (*(longlong *)&(this->ObjectIndicesMap).field_0x40 < 0)) {
    bVar9 = false;
    if ((lVar19 == 0) || (*(longlong *)(lVar19 + 0x10) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar9 = true;
    bVar5 = true;
  }
  local_e8[0].bIsSet = false;
  if ((this->ObjectIndicesMap).field_0x48 != '\0') {
    if ((lVar19 == 0) || (*(longlong *)(lVar19 + 0x10) == 0)) {
      if ((this->ObjectIndicesMap).field_0x49 != '\0') {
        local_e8[0].TypedValue = None;
        local_e8[0].bIsSet = true;
      }
    }
    else if ((TOptional<EFileRegionType> *)&param_2->RegionType != local_e8) {
      local_e8[0].bIsSet = true;
      local_e8[0].TypedValue = param_2->RegionType;
    }
  }
  local_d0.ElementCount = local_d0.SizeOnDisk / (longlong)param_2->ElementSize;
  pTVar15 = (TFileRegionArchive<FLargeMemoryWriter> *)0x0;
  local_d0.Offset = -1;
  uVar25 = 0;
  local_d0.DuplicateFlags = BULKDATA_None;
  local_d4 = BULKDATA_WorkspaceDomainPayload|BULKDATA_NoOffsetFixUp|BULKDATA_PayloadInSeparateFile|
             BULKDATA_ForceSingleElementSerialization|BULKDATA_PayloadAtEndOfFile;
  local_d0.DuplicateSizeOnDisk = ___xmm_ffffffffffffffffffffffffffffffff;
  local_d0.DuplicateOffset = _UNK_15060db28;
  local_d0.Flags = EVar10;
  local_78 = local_d0.SizeOnDisk;
  if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0x10) != 0)) {
    FBulkData::SetBulkDataFlagsOn(&local_d4,BULKDATA_SerializeCompressed);
  }
  FBulkData::ClearBulkDataFlagsOn(&local_d0.Flags,local_d4);
  bVar6 = FBulkData::HasFlags(EVar10,BULKDATA_ForceInlinePayload);
  if ((bVar6) ||
     (((this->_padding_ != 0 && (*(longlong *)(this->_padding_ + 0x10) != 0)) &&
      (bVar6 = FBulkData::HasFlags(EVar10,BULKDATA_Force_NOT_InlinePayload), !bVar6)))) {
    uVar21 = (**(code **)(this->_padding_ + 0x28))(this);
    if (bVar5) {
      plVar2 = (longlong *)this->_padding_;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((this->_padding_ & 0x10000) == 0) {
          (**(code **)(this->_padding_ + 0x188))(this,&local_d8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_d8);
        }
      }
      else {
        local_d8 = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
    }
    else {
      UE::BulkData::Private::operator<<((FArchive *)this,&local_d0);
    }
    local_d0.Offset = (**(code **)(this->_padding_ + 0x28))(this);
    local_d0.SizeOnDisk =
         FBulkData::SerializePayload(param_1,(FArchive *)this,local_d0.Flags,local_e8);
    if (!bVar5) {
      uVar22 = (**(code **)(this->_padding_ + 0x28))(this);
      (**(code **)(this->_padding_ + 0x1b8))(this,uVar21);
      UE::BulkData::Private::operator<<((FArchive *)this,&local_d0);
      (**(code **)(this->_padding_ + 0x1b8))(this,uVar22);
    }
    goto LAB_14210fd67;
  }
  FBulkData::SetBulkDataFlagsOn(&local_d0.Flags,BULKDATA_PayloadAtEndOfFile);
  puVar1 = &(this->ObjectIndicesMap).field_0x4a;
  if ((this->ObjectIndicesMap).field_0x4b != '\0') {
    if ((*puVar1 != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSaveBulkDataByReference == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                           ,0x293,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    FBulkData::SetBulkDataFlagsOn
              (&local_d0.Flags,BULKDATA_NoOffsetFixUp|BULKDATA_PayloadInSeparateFile);
  }
  if (((*puVar1 == '\0') || (lVar14 = FBulkData::GetBulkDataOffsetInFile(param_1), lVar14 == -1)) ||
     ((uVar11 = FBulkData::GetBulkDataFlags(param_1), (uVar11 >> 8 & 1) != 0 ||
      ((uVar11 = FBulkData::GetBulkDataFlags(param_1), (uVar11 >> 0xb & 1) != 0 ||
       (uVar11 = FBulkData::GetBulkDataFlags(param_1), (uVar11 >> 0x12 & 1) == 0)))))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    if (((this->_padding_ != 0) && (*(longlong *)(this->_padding_ + 0x10) != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCooking() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                           ,0x29a,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    FBulkData::SetBulkDataFlagsOn
              (&local_d0.Flags,
               BULKDATA_WorkspaceDomainPayload|BULKDATA_NoOffsetFixUp|BULKDATA_PayloadInSeparateFile
              );
  }
  if ((this->ObjectIndicesMap).field_0x4b == '\0') {
LAB_14210fa73:
    if (((this->ObjectIndicesMap).field_0x4b != '\0') &&
       (bVar9 = FBulkData::HasFlags(local_d0.Flags,BULKDATA_DuplicateNonOptionalPayload), bVar9)) {
      if ((2 < (byte)LogLinker._0_1_) && ((param_2->CookedIndex).Value != '\0')) {
        local_80 = *(FName *)(*(longlong *)&this[-1].NameIndices.field_0x20 + 0x18);
        ::FName::ToString(&local_80,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      pTVar17 = GetOptionalBulkDataArchive
                          ((FLinkerSave *)&this[-1].CellIndicesMap,FBulkDataCookedIndex::Default);
      local_d0.DuplicateFlags = local_d0.Flags;
      local_d0.DuplicateOffset = (**(code **)(pTVar17->_padding_ + 0x28))(pTVar17);
      local_d0.DuplicateSizeOnDisk =
           FBulkData::SerializePayload(param_1,(FArchive *)pTVar17,local_d0.Flags,local_e8);
      FBulkData::ClearBulkDataFlagsOn(&local_d0.DuplicateFlags,BULKDATA_DuplicateNonOptionalPayload)
      ;
      FBulkData::SetBulkDataFlagsOn(&local_d0.DuplicateFlags,BULKDATA_OptionalPayload);
    }
    if (bVar6) {
      local_d0.Offset = FBulkData::GetBulkDataOffsetInFile(param_1);
      local_d0.SizeOnDisk = FBulkData::GetBulkDataSizeOnDisk(param_1);
    }
    else {
      local_e0[0].Value = (param_2->CookedIndex).Value;
      pTVar16 = TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                ::FindOrAddImpl<FBulkDataCookedIndex_const_&>
                          ((TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                            *)&this->_padding_,(uint)local_e0[0].Value,local_e0);
      if (pTVar16->Ptr == (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
        pTVar17 = ::operator_new(0xe8);
        if (pTVar17 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
          FLargeMemoryWriter::FLargeMemoryWriter
                    ((FLargeMemoryWriter *)pTVar17,0,false,(wchar_t *)0x0);
          pTVar17->_padding_ = (longlong)&___7__TFileRegionArchive_VFLargeMemoryWriter____6B_;
          (pTVar17->FileRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar17->FileRegions).ArrayNum = 0;
          (pTVar17->FileRegions).ArrayMax = 0;
          (pTVar17->CurrentRegion).Offset = 0;
          (pTVar17->CurrentRegion).Length = 0;
          (pTVar17->CurrentRegion).Type = None;
          pTVar15 = pTVar17;
        }
        if (pTVar16 == &local_40) {
          if (pTVar15 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
            puVar18 = (undefined8 *)pTVar15->_padding_;
            goto LAB_14210fc0e;
          }
        }
        else {
          pTVar17 = pTVar16->Ptr;
          pTVar16->Ptr = pTVar15;
          if (pTVar17 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
            puVar18 = (undefined8 *)pTVar17->_padding_;
            pTVar15 = pTVar17;
LAB_14210fc0e:
            (*(code *)*puVar18)(pTVar15,1);
          }
        }
      }
      pTVar15 = pTVar16->Ptr;
      local_d0.Offset = (**(code **)(pTVar15->_padding_ + 0x28))(pTVar15);
LAB_14210fc21:
      local_d0.SizeOnDisk =
           FBulkData::SerializePayload(param_1,(FArchive *)pTVar15,local_d0.Flags,local_e8);
    }
  }
  else {
    bVar8 = FBulkData::HasFlags(local_d0.Flags,BULKDATA_OptionalPayload);
    if (bVar8) {
      pTVar15 = GetOptionalBulkDataArchive
                          ((FLinkerSave *)&this[-1].CellIndicesMap,
                           (FBulkDataCookedIndex)(param_2->CookedIndex).Value);
      local_d0.Offset = (**(code **)(pTVar15->_padding_ + 0x28))(pTVar15);
      goto LAB_14210fc21;
    }
    if ((((this->ObjectIndicesMap).field_0x4b == '\0') ||
        (bVar8 = FBulkData::HasFlags(local_d0.Flags,BULKDATA_MemoryMappedPayload), !bVar8)) ||
       (!bVar9)) goto LAB_14210fa73;
    if ((2 < (byte)LogLinker._0_1_) && ((param_2->CookedIndex).Value != '\0')) {
      local_88 = *(FName *)(*(longlong *)&this[-1].NameIndices.field_0x20 + 0x18);
      ::FName::ToString(&local_88,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    local_res20[0] = (FBulkDataCookedIndex)FBulkDataCookedIndex::Default.Value;
    pTVar16 = TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
              ::FindOrAddImpl<FBulkDataCookedIndex_const_&>
                        ((TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
                          *)&this->Saver,(uint)FBulkDataCookedIndex::Default.Value,local_res20);
    if (pTVar16->Ptr == (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
      pTVar17 = ::operator_new(0xe8);
      if (pTVar17 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
        FLargeMemoryWriter::FLargeMemoryWriter((FLargeMemoryWriter *)pTVar17,0,false,(wchar_t *)0x0)
        ;
        pTVar17->_padding_ = (longlong)&___7__TFileRegionArchive_VFLargeMemoryWriter____6B_;
        (pTVar17->FileRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar17->FileRegions).ArrayNum = 0;
        (pTVar17->FileRegions).ArrayMax = 0;
        (pTVar17->CurrentRegion).Offset = 0;
        (pTVar17->CurrentRegion).Length = 0;
        (pTVar17->CurrentRegion).Type = None;
        pTVar15 = pTVar17;
      }
      if (pTVar16 == &local_48) {
        if (pTVar15 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
          puVar18 = (undefined8 *)pTVar15->_padding_;
          goto LAB_14210f99a;
        }
      }
      else {
        pTVar17 = pTVar16->Ptr;
        pTVar16->Ptr = pTVar15;
        if (pTVar17 != (TFileRegionArchive<FLargeMemoryWriter> *)0x0) {
          puVar18 = (undefined8 *)pTVar17->_padding_;
          pTVar15 = pTVar17;
LAB_14210f99a:
          (*(code *)*puVar18)(pTVar15,1);
        }
      }
    }
    pTVar15 = pTVar16->Ptr;
    uVar24 = *(longlong *)&(this->ObjectIndicesMap).field_0x40 - 1;
    lVar19 = (**(code **)(pTVar15->_padding_ + 0x28))(pTVar15);
    lVar20 = (**(code **)(pTVar15->_padding_ + 0x28))(pTVar15);
    uVar24 = (uVar24 + lVar19 & ~uVar24) - lVar20;
    if (0 < (longlong)uVar24) {
      local_90[0] = 0;
      local_90[1] = 0;
      local_98.Data = (FScriptContainerElement *)0x0;
      iVar13 = (int)uVar24;
      if (iVar13 < 1) {
        if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar24 & 0xffffffff);
        }
      }
      else {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar13,&local_98,local_90,local_90 + 1);
        memset(local_98.Data + iVar12,0,(longlong)iVar13);
      }
      (**(code **)(pTVar15->_padding_ + 0x188))(pTVar15,local_98.Data,uVar24);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
    local_d0.Offset = (**(code **)(pTVar15->_padding_ + 0x28))(pTVar15);
    local_d0.SizeOnDisk =
         FBulkData::SerializePayload(param_1,(FArchive *)pTVar15,local_d0.Flags,local_e8);
  }
  if (bVar5) {
    plVar2 = (longlong *)this->_padding_;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,&local_d8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_d8);
      }
    }
    else {
      local_d8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
  }
  else {
    UE::BulkData::Private::operator<<((FArchive *)this,&local_d0);
  }
LAB_14210fd67:
  iVar13 = *(int *)&this[-1].MemoryMappedBulkDataAr.field_0x10;
  puVar1 = &this[-1].MemoryMappedBulkDataAr.field_0x14;
  if (iVar13 == *(int *)puVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,(ForAnyElementType *)&this[-1].MemoryMappedBulkDataAr.field_0x8,
                        (int *)puVar1);
  }
  *(int *)&this[-1].MemoryMappedBulkDataAr.field_0x10 = iVar13 + 1;
  pvVar26 = (void *)((longlong)iVar13 * 0x30 +
                    *(longlong *)&this[-1].MemoryMappedBulkDataAr.field_0x8);
  DefaultConstructItems<FObjectDataResource,int>(pvVar26,1);
  *(uchar *)((longlong)pvVar26 + 4) = (param_2->CookedIndex).Value;
  *(long64 *)((longlong)pvVar26 + 0x20) = local_78;
  *(long64 *)((longlong)pvVar26 + 0x18) = local_d0.SizeOnDisk;
  *(long64 *)((longlong)pvVar26 + 8) = local_d0.Offset;
  *(long64 *)((longlong)pvVar26 + 0x10) = local_d0.DuplicateOffset;
  *(EBulkDataFlags *)((longlong)pvVar26 + 0x2c) = local_d0.Flags;
  pUVar3 = param_2->Owner;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  local_70 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pTVar23 = TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TObjectPtr<UObject_const_>)&local_70);
  if (pTVar23 != (TTuple<TObjectPtr<UObject>,FPackageIndex> *)0x0) {
    uVar25 = *(undefined4 *)&pTVar23->field_0x8;
  }
  *(undefined4 *)((longlong)pvVar26 + 0x28) = uVar25;
  return true;
}

// SerializeObjectPointer @ 14210fe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::SerializeObjectPointer(FLinkerSave *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FArchive *this_00;
  uint *puVar2;
  FPackageIndex FVar3;
  undefined4 extraout_var;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1d8 [32];
  uint local_1b8 [2];
  FObjectPtr_u_0 local_1b0;
  undefined1 local_1a8 [8];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FVar1 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  local_1b8[0] = 0;
  if (FVar1.Handle != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(FVar1.Handle);
    }
    local_1b0 = FVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(FVar1.Handle);
    }
    FVar3 = MapObject(this,(TObjectPtr<UObject_const_>)local_1a8,SUB81(&local_1b0,0));
    local_1b8[0] = *(uint *)CONCAT44(extraout_var,FVar3.Index);
  }
  this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                      (&local_1a0,(FArchive *)&this->_padding_);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this_01);
  this_00 = *(FArchive **)(**(longlong **)FVar4 + 8);
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_1b8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_1b8);
    }
  }
  else {
    local_1b8[0] = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// SetDebugSerializationFlags @ 142110220

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::SetDebugSerializationFlags(FLinkerSave *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Saver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x1f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142110275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x78))((longlong *)this->_padding_,param_1);
  return;
}

// SetFilename @ 142110280

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::SetFilename(FLinkerSave *this,TStringView<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  iVar4 = iVar5;
  if (&local_18 != pFVar2) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar2->Data).ArrayNum;
    iVar4 = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = &this->Filename;
  if (pFVar2 == &local_18) {
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = pFVar3;
    (this->Filename).Data.ArrayNum = iVar5;
    (this->Filename).Data.ArrayMax = iVar4;
  }
  return;
}

// SetFilterEditorOnly @ 142110330

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::SetFilterEditorOnly(FLinkerSave *this,bool param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 *this_00;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Saver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x200,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(longlong *)&this[-1].NameIndices.field_0x20 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LinkerRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x201,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | param_1 << 4;
  (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,param_1);
  uVar3 = *(uint *)&this[-1].NameIndices.field_0x48;
  this_00 = &this[-1].NameIndices.field_0x28;
  if (param_1) {
    FPackageFileSummary::SetPackageFlags((FPackageFileSummary *)this_00,uVar3 | 0x80000000);
    lVar4 = *(longlong *)&this[-1].NameIndices.field_0x20;
    uVar3 = *(uint *)(lVar4 + 0x2c);
    if ((uVar3 | 0x80000000) != uVar3) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 0x2c);
      *puVar2 = *puVar2 | 0x80000000;
      UNLOCK();
      return;
    }
  }
  else {
    FPackageFileSummary::SetPackageFlags((FPackageFileSummary *)this_00,uVar3 & 0x7fffffff);
    lVar4 = *(longlong *)&this[-1].NameIndices.field_0x20;
    uVar3 = *(uint *)(lVar4 + 0x2c);
    if ((uVar3 & 0x7fffffff) != uVar3) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 0x2c);
      *puVar2 = *puVar2 & 0x7fffffff;
      UNLOCK();
    }
  }
  return;
}

// SetSerializedProperty @ 142110500

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::SetSerializedProperty(FLinkerSave *this,FProperty *param_1)

{
  this->_padding_ = (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014211050e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0xa0))();
  return;
}

// SetSerializedPropertyChain @ 142110520

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FLinkerSave::SetSerializedPropertyChain
          (FLinkerSave *this,FArchiveSerializedPropertyChain *param_1,FProperty *param_2)

{
  FArchiveState::SetSerializedPropertyChain((FArchiveState *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014211055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0xa8))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// SetUseUnversionedPropertySerialization @ 142110570

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FLinkerSave::SetUseUnversionedPropertySerialization(FLinkerSave *this,bool param_1)

{
  uint *puVar1;
  undefined1 *this_00;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Saver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x1e5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&this[-1].NameIndices.field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LinkerRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerSave.cpp"
                       ,0x1e6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FArchiveState::SetUseUnversionedPropertySerialization((FArchiveState *)this,param_1);
  (**(code **)(*(longlong *)this->_padding_ + 0xf8))((longlong *)this->_padding_,param_1);
  uVar2 = *(uint *)&this[-1].NameIndices.field_0x48;
  this_00 = &this[-1].NameIndices.field_0x28;
  if (param_1) {
    FPackageFileSummary::SetPackageFlags((FPackageFileSummary *)this_00,uVar2 | 0x2000);
    lVar3 = *(longlong *)&this[-1].NameIndices.field_0x20;
    uVar2 = *(uint *)(lVar3 + 0x2c);
    if ((uVar2 | 0x2000) != uVar2) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 0x2c);
      *puVar1 = *puVar1 | 0x2000;
      UNLOCK();
      return;
    }
  }
  else {
    FPackageFileSummary::SetPackageFlags((FPackageFileSummary *)this_00,uVar2 & 0xffffdfff);
    lVar3 = *(longlong *)&this[-1].NameIndices.field_0x20;
    uVar2 = *(uint *)(lVar3 + 0x2c);
    if ((uVar2 & 0xffffdfff) != uVar2) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 0x2c);
      *puVar1 = *puVar1 & 0xffffdfff;
      UNLOCK();
    }
  }
  return;
}

// ShouldSkipProperty @ 142110720

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FLinkerSave::ShouldSkipProperty(FLinkerSave *this,FProperty *param_1)

{
  TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  int iVar1;
  TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  this_00 = *(TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
              **)&(this->ObjectIndicesMap).field_0x38;
  if ((this_00 !=
       (TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
        *)0x0) &&
     (*(int *)&(this_00->Pairs).Elements.field_0x8 != *(int *)&(this_00->Pairs).Elements.field_0x34)
     ) {
    pTVar2 = TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
             ::Find(this_00,(UObject *)this->_padding_);
    if ((pTVar2 != (TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)0x0) &&
       (uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595, uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb,
       *(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34)) {
      FVar4 = (pTVar2->Hash).SecondaryData;
      if (FVar4 == (ForElementType<FSetElementId>)0x0) {
        FVar4 = (ForElementType<FSetElementId>)&pTVar2->Hash;
      }
      iVar1 = *(int *)((longlong)FVar4 +
                      (ulonglong)(pTVar2->HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar1 != -1) {
        do {
          if (*(FProperty **)(*(longlong *)&pTVar2->Elements + (longlong)iVar1 * 0x10) == param_1) {
            return true;
          }
          iVar1 = *(int *)(*(longlong *)&pTVar2->Elements + 8 + (longlong)iVar1 * 0x10);
        } while (iVar1 != -1);
      }
    }
  }
  return false;
}

// Tell @ 142116c10

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

long64 __thiscall FLinkerSave::Tell(FLinkerSave *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142116c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  return lVar1;
}

// TryAssignFileSaver @ 142117210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLinkerSave::TryAssignFileSaver
          (FLinkerSave *this,TStringView<wchar_t> *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  void *pvVar7;
  FArchive *pFVar8;
  FScriptContainerElement *pFVar9;
  ulong64 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_ab8 [32];
  wchar_t *local_a98;
  FString local_a88;
  FString local_a78;
  TStringBuilderBase<wchar_t> local_a68;
  wchar_t local_a48 [256];
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ab8;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_a88,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pFVar9 = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  iVar12 = iVar11;
  if (&local_a78 != pFVar5) {
    pFVar9 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar5->Data).ArrayNum;
    iVar12 = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((void *)CONCAT44(local_a88.Data.AllocatorInstance.Data._4_4_,
                       local_a88.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_a88.Data.AllocatorInstance.Data._4_4_,
                                   local_a88.Data.AllocatorInstance.Data._0_4_));
  }
  pFVar5 = &this->Filename;
  if (pFVar5 == &local_a78) {
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
  }
  else {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = pFVar9;
    (this->Filename).Data.ArrayNum = iVar11;
    (this->Filename).Data.ArrayMax = iVar12;
  }
  pIVar6 = IFileManager::Get();
  local_a88.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_a88.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_a88.Data.ArrayNum = param_1->Size;
  local_a88.Data.ArrayMax = *(int *)&param_1->field_0xc;
  iVar11 = (int)*(undefined8 *)&param_1->Size;
  uVar10 = (ulong64)iVar11;
  local_a68.Base = local_a48;
  local_a68.End = local_848;
  local_a68.bIsDynamic = false;
  local_a68.bIsExternal = false;
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x20);
  local_a68.CurPos = local_a48;
  if (local_848 < local_a48 + uVar10) {
    TStringBuilderBase<wchar_t>::Extend(&local_a68,uVar10);
  }
  if (iVar11 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy
                       (local_a68.CurPos,
                        (void *)CONCAT44(local_a88.Data.AllocatorInstance.Data._4_4_,
                                         local_a88.Data.AllocatorInstance.Data._0_4_),uVar10 * 2);
    local_a68.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
  }
  if (local_a68.End < local_a68.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_a68,1);
  }
  *local_a68.CurPos = L'\0';
  pFVar8 = (FArchive *)(*pcVar2)(pIVar6,local_a68.Base,0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a68);
  if (pFVar8 == (FArchive *)0x0) {
    DVar4 = FWindowsPlatformMisc::GetLastError();
    if (DVar4 == 0) {
      wcscpy(local_848,L"Unknown failure reason.");
    }
    else {
      FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x400,DVar4);
    }
    if (1 < (byte)LogLinker._0_1_) {
      local_a98 = local_848;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    bVar3 = false;
  }
  else {
    AssignSaverInternal(this,pFVar8,param_2,param_3);
    bVar3 = true;
  }
  return bVar3;
}

// UsingCustomVersion @ 142118ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerSave::UsingCustomVersion(FLinkerSave *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCustomVersion *pFVar4;
  TOptional<FCustomVersion> *pTVar5;
  FName this_00;
  size_t sVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStackY_838 [32];
  FString local_808;
  FName local_7f8;
  FString local_7f0;
  FGuid local_7d8;
  FString local_7c8;
  FCustomVersion local_7b8;
  TOptional<FCustomVersion> local_790;
  ulong64 local_758 [100];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_838;
  FArchive::UsingCustomVersion((FArchive *)this,param_1);
  local_7d8.A = param_1->A;
  local_7d8.B = param_1->B;
  local_7d8.C = param_1->C;
  local_7d8.D = param_1->D;
  pFVar4 = FCustomVersionContainer::GetVersion
                     ((FCustomVersionContainer *)&this[-1].NameIndices.field_0x38,&local_7d8);
  if (pFVar4 == (FCustomVersion *)0x0) {
    pTVar5 = FCurrentCustomVersions::Get(&local_790,param_1);
    if ((pTVar5->bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_7b8.Key.A = (pTVar5->TypedValue).Key.A;
    local_7b8.Key.B = (pTVar5->TypedValue).Key.B;
    local_7b8.Key.C = (pTVar5->TypedValue).Key.C;
    local_7b8.Key.D = (pTVar5->TypedValue).Key.D;
    local_7b8.Version = (pTVar5->TypedValue).Version;
    local_7b8.ReferenceCount = (pTVar5->TypedValue).ReferenceCount;
    local_7b8.Validator = (pTVar5->TypedValue).Validator;
    local_7b8.FriendlyName = (pTVar5->TypedValue).FriendlyName;
    local_7f8 = *(FName *)(*(longlong *)&this[-1].NameIndices.field_0x20 + 0x18);
    ::FName::ToString(&local_7f8,&local_7f0);
    this_00 = FCustomVersion::GetFriendlyName(&local_7b8);
    ::FName::ToString((FName *)this_00,&local_7c8);
    ::FString::PrintfImpl
              (&local_808,
               L"Unexpected custom version \"%s\" used after package %s summary has been serialized. Callstack:\n"
              );
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
    if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
    }
    iVar9 = 1;
    uVar3 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_758,100,(void *)0x0);
    if (1 < (longlong)(int)uVar3) {
      lVar8 = 1;
      do {
        local_438[0] = '\0';
        FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                  (iVar9,local_758[lVar8],local_438,0x400,(FGenericCrashContext *)0x0);
        ::FString::AppendChars(&local_808,L"\t",1);
        sVar6 = strlen(local_438);
        ::FString::AppendChars(&local_808,local_438,(int)sVar6);
        ::FString::AppendChars(&local_808,"\n",1);
        pcVar7 = strstr(local_438,"UPackage::Save");
        if (pcVar7 != (char *)0x0) break;
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar3);
    }
    if (2 < (byte)LogLinker._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 150485890

bool __thiscall `FLinkerSave::operator<<'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7149856289856683711>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7149856289856683711>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504858f0

bool __thiscall `FLinkerSave::operator<<'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7149856289856683626>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7149856289856683626>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150485a90

bool __thiscall `FLinkerSave::operator<<'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7149856289856683694>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7149856289856683694>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

