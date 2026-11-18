// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// ~FHarvestedRealm @ 1421b5fc0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FHarvestedRealm::~FHarvestedRealm(FHarvestedRealm *this)

{
  code *pcVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  FStructuredArchive *pFVar5;
  FBinaryArchiveFormatter *this_00;
  FArchive *pFVar6;
  FLinkerSave *pFVar7;
  bool bVar8;
  IFileManager *pIVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  
  CloseLinkerArchives(this);
  pwVar11 = L"";
  if (*(int *)((longlong)&(this->TempFilename).field0_0x0 + 0xc) != -1) {
    pIVar9 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar9 + 0x38);
    if (*(int *)((longlong)&(this->TempFilename).field0_0x0 + 0xc) == -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)((longlong)&(this->TempFilename).field0_0x0 + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->TempFilename).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar9,pwVar10,0,0,0);
  }
  if (*(int *)((longlong)&(this->TextFormatTempFilename).field0_0x0 + 0xc) != -1) {
    pIVar9 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar9 + 0x38);
    if (*(int *)((longlong)&(this->TextFormatTempFilename).field0_0x0 + 0xc) == -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)((longlong)&(this->TextFormatTempFilename).field0_0x0 + 8) != 0) {
      pwVar11 = (wchar_t *)
                (this->TextFormatTempFilename).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar9,pwVar11,0,0,0);
  }
  *(undefined4 *)&(this->CellExportCellDependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CellExportCellDependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CellExportCellDependencies);
  *(undefined4 *)&(this->CellExportObjectDependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CellExportObjectDependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CellExportObjectDependencies);
  *(undefined4 *)&(this->ExportCellDependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExportCellDependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExportCellDependencies);
  *(undefined4 *)&(this->ExportNativeObjectDependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExportNativeObjectDependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExportNativeObjectDependencies);
  *(undefined4 *)&(this->ExportObjectDependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExportObjectDependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExportObjectDependencies);
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SearchableNamesObjectMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchableNamesObjectMap);
  (this->UntrackedSoftPackageReferenceList).HashSize = 0;
  FVar3 = (this->UntrackedSoftPackageReferenceList).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UntrackedSoftPackageReferenceList).Elements);
  (this->SoftPackageReferenceList).HashSize = 0;
  FVar3 = (this->SoftPackageReferenceList).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SoftPackageReferenceList).Elements);
  (this->SoftObjectPathList).HashSize = 0;
  FVar3 = (this->SoftObjectPathList).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SoftObjectPathList).Elements);
  (this->NamesReferencedFromPackageHeader).HashSize = 0;
  FVar3 = (this->NamesReferencedFromPackageHeader).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NamesReferencedFromPackageHeader).Elements);
  (this->NamesReferencedFromExportData).HashSize = 0;
  FVar3 = (this->NamesReferencedFromExportData).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NamesReferencedFromExportData).Elements);
  (this->CellImports).HashSize = 0;
  FVar3 = (this->CellImports).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CellImports).Elements);
  (this->CellExports).HashSize = 0;
  FVar3 = (this->CellExports).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CellExports).Elements);
  (this->DirectImports).HashSize = 0;
  FVar3 = (this->DirectImports).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DirectImports).Elements);
  pFVar4 = (this->PreloadDependencies).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->Imports).HashSize = 0;
  FVar3 = (this->Imports).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Imports).Elements);
  (this->Exports).HashSize = 0;
  FVar3 = (this->Exports).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Exports).Elements);
  (this->NotExcluded).HashSize = 0;
  FVar3 = (this->NotExcluded).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NotExcluded).Elements);
  (this->Excluded).HashSize = 0;
  FVar3 = (this->Excluded).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Excluded).Elements);
  if ((*(int *)((longlong)&(this->TextFormatTempFilename).field0_0x0 + 0xc) != -1) &&
     (pFVar4 = (this->TextFormatTempFilename).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar4 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar4);
  }
  if ((*(int *)((longlong)&(this->TempFilename).field0_0x0 + 0xc) != -1) &&
     (pFVar4 = (this->TempFilename).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar4 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar4);
  }
  pFVar5 = (this->StructuredArchive).Ptr;
  if (pFVar5 != (FStructuredArchive *)0x0) {
    ::operator_delete(pFVar5,8);
  }
  this_00 = (this->Formatter).Ptr;
  if (this_00 != (FBinaryArchiveFormatter *)0x0) {
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(this_00);
    ::operator_delete(this_00,0x10);
  }
  pFVar6 = (this->TextFormatArchive).Ptr;
  if (pFVar6 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
  }
  pFVar7 = (this->Linker).Ptr;
  if (pFVar7 != (FLinkerSave *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421b63bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pFVar7[-1].MemoryMappingAlignment)(&pFVar7[-1].MemoryMappingAlignment);
    return;
  }
  return;
}

// CloseLinkerArchives @ 1421c1fc0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FHarvestedRealm::CloseLinkerArchives(FHarvestedRealm *this)

{
  FLinkerSave *this_00;
  FStructuredArchive *pFVar1;
  FBinaryArchiveFormatter *this_01;
  FArchive *pFVar2;
  bool bVar3;
  
  bVar3 = true;
  this_00 = (this->Linker).Ptr;
  if (this_00 != (FLinkerSave *)0x0) {
    bVar3 = FLinkerSave::CloseAndDestroySaver(this_00);
  }
  pFVar1 = (this->StructuredArchive).Ptr;
  if (pFVar1 != (FStructuredArchive *)0x0) {
    (this->StructuredArchive).Ptr = (FStructuredArchive *)0x0;
    ::operator_delete(pFVar1,8);
  }
  this_01 = (this->Formatter).Ptr;
  if (this_01 != (FBinaryArchiveFormatter *)0x0) {
    (this->Formatter).Ptr = (FBinaryArchiveFormatter *)0x0;
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(this_01);
    ::operator_delete(this_01,0x10);
  }
  pFVar2 = (this->TextFormatArchive).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (this->TextFormatArchive).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  return bVar3;
}

// IsImport @ 1421d35e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FHarvestedRealm::IsImport(FHarvestedRealm *this,TObjectPtr<UObject> param_1)

{
  TObjectPtr<UObject_const_>_u_0 TVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  uVar3 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          FindIndexByHash<TObjectPtr<UObject_const_>_>
                    (&this->Imports,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  return iVar2 != -1;
}

// FHarvestedRealm @ 1421fe840

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestedRealm * __thiscall FHarvestedRealm::FHarvestedRealm(FHarvestedRealm *this)

{
  *(undefined4 *)((longlong)&(this->TempFilename).field0_0x0 + 0xc) = 0xffffffff;
  (this->Linker).Ptr = (FLinkerSave *)0x0;
  (this->TextFormatArchive).Ptr = (FArchive *)0x0;
  (this->Formatter).Ptr = (FBinaryArchiveFormatter *)0x0;
  (this->StructuredArchive).Ptr = (FStructuredArchive *)0x0;
  (this->TempFilename).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->TempFilename).field0_0x0 + 8) = 0;
  (this->TextFormatTempFilename).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->TextFormatTempFilename).field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Excluded).Elements = 0;
  *(undefined8 *)&(this->Excluded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Excluded).Elements.field_0x20 = 0;
  *(undefined4 *)((longlong)&(this->TextFormatTempFilename).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined4 *)&(this->Excluded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Excluded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Excluded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Excluded).Elements.field_0x34 = 0;
  (this->Excluded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Excluded).HashSize = 0;
  *(undefined8 *)&(this->NotExcluded).Elements = 0;
  *(undefined8 *)&(this->NotExcluded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NotExcluded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NotExcluded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NotExcluded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NotExcluded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotExcluded).Elements.field_0x34 = 0;
  (this->NotExcluded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NotExcluded).HashSize = 0;
  *(undefined8 *)&(this->Exports).Elements = 0;
  *(undefined8 *)&(this->Exports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Exports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Exports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Exports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Exports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Exports).Elements.field_0x34 = 0;
  (this->Exports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Exports).HashSize = 0;
  *(undefined8 *)&(this->Imports).Elements = 0;
  *(undefined8 *)&(this->Imports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Imports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Imports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Imports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Imports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Imports).Elements.field_0x34 = 0;
  (this->Imports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Imports).HashSize = 0;
  (this->PreloadDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreloadDependencies).ArrayNum = 0;
  (this->PreloadDependencies).ArrayMax = 0;
  *(undefined8 *)&(this->DirectImports).Elements = 0;
  *(undefined8 *)&(this->DirectImports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DirectImports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DirectImports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DirectImports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirectImports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirectImports).Elements.field_0x34 = 0;
  (this->DirectImports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DirectImports).HashSize = 0;
  *(undefined8 *)&(this->CellExports).Elements = 0;
  *(undefined8 *)&(this->CellExports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CellExports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CellExports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CellExports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CellExports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellExports).Elements.field_0x34 = 0;
  (this->CellExports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CellExports).HashSize = 0;
  *(undefined8 *)&(this->CellImports).Elements = 0;
  *(undefined8 *)&(this->CellImports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CellImports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CellImports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CellImports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CellImports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellImports).Elements.field_0x34 = 0;
  (this->CellImports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CellImports).HashSize = 0;
  *(undefined8 *)&(this->NamesReferencedFromExportData).Elements = 0;
  *(undefined8 *)&(this->NamesReferencedFromExportData).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NamesReferencedFromExportData).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NamesReferencedFromExportData).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NamesReferencedFromExportData).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NamesReferencedFromExportData).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamesReferencedFromExportData).Elements.field_0x34 = 0;
  (this->NamesReferencedFromExportData).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NamesReferencedFromExportData).HashSize = 0;
  *(undefined8 *)&(this->NamesReferencedFromPackageHeader).Elements = 0;
  *(undefined8 *)&(this->NamesReferencedFromPackageHeader).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NamesReferencedFromPackageHeader).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NamesReferencedFromPackageHeader).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NamesReferencedFromPackageHeader).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NamesReferencedFromPackageHeader).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamesReferencedFromPackageHeader).Elements.field_0x34 = 0;
  (this->NamesReferencedFromPackageHeader).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NamesReferencedFromPackageHeader).HashSize = 0;
  *(undefined8 *)&(this->SoftObjectPathList).Elements = 0;
  *(undefined8 *)&(this->SoftObjectPathList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SoftObjectPathList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SoftObjectPathList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SoftObjectPathList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftObjectPathList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftObjectPathList).Elements.field_0x34 = 0;
  (this->SoftObjectPathList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SoftObjectPathList).HashSize = 0;
  *(undefined8 *)&(this->SoftPackageReferenceList).Elements = 0;
  *(undefined8 *)&(this->SoftPackageReferenceList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SoftPackageReferenceList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SoftPackageReferenceList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SoftPackageReferenceList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftPackageReferenceList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftPackageReferenceList).Elements.field_0x34 = 0;
  (this->SoftPackageReferenceList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SoftPackageReferenceList).HashSize = 0;
  *(undefined8 *)&(this->UntrackedSoftPackageReferenceList).Elements = 0;
  *(undefined8 *)&(this->UntrackedSoftPackageReferenceList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UntrackedSoftPackageReferenceList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UntrackedSoftPackageReferenceList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UntrackedSoftPackageReferenceList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UntrackedSoftPackageReferenceList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UntrackedSoftPackageReferenceList).Elements.field_0x34 = 0;
  (this->UntrackedSoftPackageReferenceList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UntrackedSoftPackageReferenceList).HashSize = 0;
  *(undefined8 *)&this->SearchableNamesObjectMap = 0;
  *(undefined8 *)&(this->SearchableNamesObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->SearchableNamesObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->SearchableNamesObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->SearchableNamesObjectMap).field_0x48 = 0;
  *(undefined8 *)&this->ExportObjectDependencies = 0;
  *(undefined8 *)&(this->ExportObjectDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->ExportObjectDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->ExportObjectDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->ExportObjectDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportObjectDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportObjectDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->ExportObjectDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->ExportObjectDependencies).field_0x48 = 0;
  *(undefined8 *)&this->ExportNativeObjectDependencies = 0;
  *(undefined8 *)&(this->ExportNativeObjectDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->ExportNativeObjectDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->ExportNativeObjectDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->ExportNativeObjectDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportNativeObjectDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportNativeObjectDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->ExportNativeObjectDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->ExportNativeObjectDependencies).field_0x48 = 0;
  *(undefined8 *)&this->ExportCellDependencies = 0;
  *(undefined8 *)&(this->ExportCellDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->ExportCellDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->ExportCellDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->ExportCellDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportCellDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportCellDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->ExportCellDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->ExportCellDependencies).field_0x48 = 0;
  *(undefined8 *)&this->CellExportObjectDependencies = 0;
  *(undefined8 *)&(this->CellExportObjectDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->CellExportObjectDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->CellExportObjectDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->CellExportObjectDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellExportObjectDependencies).field_0x34 = 0;
  *(undefined4 *)&(this->CellExportObjectDependencies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CellExportObjectDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->CellExportObjectDependencies).field_0x48 = 0;
  *(undefined8 *)&this->CellExportCellDependencies = 0;
  *(undefined8 *)&(this->CellExportCellDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->CellExportCellDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->CellExportCellDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->CellExportCellDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellExportCellDependencies).field_0x34 = 0;
  *(undefined4 *)&(this->CellExportCellDependencies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CellExportCellDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->CellExportCellDependencies).field_0x48 = 0;
  return this;
}

// IsCellIncluded @ 142212070

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FHarvestedRealm::IsCellIncluded(FHarvestedRealm *this,VCell *param_1)

{
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (*(int *)&(this->CellImports).Elements.field_0x8 !=
      *(int *)&(this->CellImports).Elements.field_0x34) {
    FVar2 = (this->CellImports).Hash.SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&(this->CellImports).Hash;
    }
    iVar4 = *(int *)((longlong)FVar2 + (ulonglong)((this->CellImports).HashSize - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->CellImports).Elements;
      do {
        if (*(VCell **)(lVar1 + (longlong)iVar4 * 0x10) == param_1) {
          if (iVar4 != -1) {
            return true;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)&(this->CellExports).Elements.field_0x8 !=
      *(int *)&(this->CellExports).Elements.field_0x34) {
    FVar2 = (this->CellExports).Hash.SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&(this->CellExports).Hash;
    }
    iVar4 = *(int *)((longlong)FVar2 + (ulonglong)((this->CellExports).HashSize - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->CellExports).Elements;
      do {
        if (*(VCell **)(lVar1 + (longlong)iVar4 * 0x10) == param_1) {
          return true;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  return false;
}

// IsExcluded @ 142212250

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FHarvestedRealm::IsExcluded(FHarvestedRealm *this,TObjectPtr<UObject> param_1)

{
  TObjectPtr<UObject_const_>_u_0 TVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  uVar3 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          FindIndexByHash<TObjectPtr<UObject_const_>_>
                    (&this->Excluded,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  return iVar2 != -1;
}

// IsExport @ 1422122e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FHarvestedRealm::IsExport(FHarvestedRealm *this,TObjectPtr<UObject> param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  uVar4 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Exports).Elements.field_0x8 != *(int *)&(this->Exports).Elements.field_0x34) {
    FVar5 = (this->Exports).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Exports).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Exports).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Exports).Elements;
      do {
        if (*(UObject **)(lVar2 + (longlong)iVar3 * 0x18) == pUVar1) goto LAB_1422123ac;
        iVar3 = *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1422123ac:
  return iVar3 != -1;
}

// IsIncluded @ 142212470

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FHarvestedRealm::IsIncluded(FHarvestedRealm *this,TObjectPtr<UObject> param_1)

{
  TObjectPtr<UObject_const_>_u_0 TVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar3 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          FindIndexByHash<TObjectPtr<UObject_const_>_>
                    (&this->Imports,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  if (iVar3 == -1) {
    local_res8 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8.DebugPtr);
    }
    bVar2 = IsExport(this,(TObjectPtr<UObject>)&local_res8);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

