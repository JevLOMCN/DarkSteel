// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 79

// FBuildPatchAppManifest @ 1431b8140

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
FBuildPatchAppManifest::FBuildPatchAppManifest
          (FBuildPatchAppManifest *this,uint *param_1,FString *param_2)

{
  FBuildPatchAppManifest(this);
  this->_padding_ = (longlong)&___7FBuildPatchAppManifest__6B_;
  (this->ManifestMeta).AppID = *param_1;
  ::FString::operator=(&(this->ManifestMeta).AppName,param_2);
  return this;
}

// FBuildPatchAppManifest @ 1431b81a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
FBuildPatchAppManifest::FBuildPatchAppManifest
          (FBuildPatchAppManifest *this,FBuildPatchAppManifest *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  int *piVar1;
  FChunkDataList *pFVar2;
  FFileManifestList *pFVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FFileManifest *pFVar5;
  
  this->_padding_ = (longlong)&___7FBuildPatchAppManifest__6B_;
  (this->ManifestMeta).FeatureLevel = (param_1->ManifestMeta).FeatureLevel;
  (this->ManifestMeta).bIsFileData = (param_1->ManifestMeta).bIsFileData;
  (this->ManifestMeta).AppID = (param_1->ManifestMeta).AppID;
  ::FString::FString(&(this->ManifestMeta).AppName,&(param_1->ManifestMeta).AppName);
  ::FString::FString(&(this->ManifestMeta).BuildVersion,&(param_1->ManifestMeta).BuildVersion);
  ::FString::FString(&(this->ManifestMeta).LaunchExe,&(param_1->ManifestMeta).LaunchExe);
  ::FString::FString(&(this->ManifestMeta).LaunchCommand,&(param_1->ManifestMeta).LaunchCommand);
  this_00 = &(this->ManifestMeta).PrereqIds;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->ManifestMeta).PrereqIds.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ManifestMeta).PrereqIds.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ManifestMeta).PrereqIds.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ManifestMeta).PrereqIds.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ManifestMeta).PrereqIds.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManifestMeta).PrereqIds.Elements.field_0x34 = 0;
  (this->ManifestMeta).PrereqIds.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ManifestMeta).PrereqIds.HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (this_00,&(param_1->ManifestMeta).PrereqIds);
  ::FString::FString(&(this->ManifestMeta).PrereqName,&(param_1->ManifestMeta).PrereqName);
  ::FString::FString(&(this->ManifestMeta).PrereqPath,&(param_1->ManifestMeta).PrereqPath);
  ::FString::FString(&(this->ManifestMeta).PrereqArgs,&(param_1->ManifestMeta).PrereqArgs);
  ::FString::FString(&(this->ManifestMeta).BuildId,&(param_1->ManifestMeta).BuildId);
  pFVar2 = &this->ChunkDataList;
  (pFVar2->ChunkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ChunkDataList).ChunkList.ArrayMax;
  iVar4 = (param_1->ChunkDataList).ChunkList.ArrayNum;
  _Src = (param_1->ChunkDataList).ChunkList.AllocatorInstance.Data;
  (this->ChunkDataList).ChunkList.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar4,0,(ForAnyElementType *)pFVar2,iVar4,piVar1);
    memcpy((pFVar2->ChunkList).AllocatorInstance.Data,_Src,(longlong)iVar4 << 6);
  }
  pFVar3 = &this->FileManifestList;
  (pFVar3->FileList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FileManifestList).FileList.ArrayMax;
  iVar4 = (param_1->FileManifestList).FileList.ArrayNum;
  pFVar5 = (FFileManifest *)(param_1->FileManifestList).FileList.AllocatorInstance.Data;
  (this->FileManifestList).FileList.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar4,0,(ForAnyElementType *)pFVar3,iVar4,piVar1);
    ConstructItems<BuildPatchServices::FFileManifest,BuildPatchServices::FFileManifest,int>
              ((pFVar3->FileList).AllocatorInstance.Data,pFVar5,iVar4);
  }
  *(undefined8 *)&(this->CustomFields).Fields = 0;
  *(undefined8 *)&(this->CustomFields).Fields.field_0x8 = 0;
  *(undefined8 *)&(this->CustomFields).Fields.field_0x20 = 0;
  *(undefined4 *)&(this->CustomFields).Fields.field_0x28 = 0;
  *(undefined4 *)&(this->CustomFields).Fields.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomFields).Fields.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomFields).Fields.field_0x34 = 0;
  *(undefined8 *)&(this->CustomFields).Fields.field_0x40 = 0;
  *(undefined4 *)&(this->CustomFields).Fields.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->CustomFields,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->CustomFields);
  (this->OnPreExitHandle).ID = 0;
  *(undefined8 *)&this->FileNameLookup = 0;
  *(undefined8 *)&(this->FileNameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameLookup).field_0x34 = 0;
  *(undefined8 *)&(this->FileNameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x48 = 0;
  *(undefined8 *)&this->FileManifestLookup = 0;
  *(undefined8 *)&(this->FileManifestLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileManifestLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileManifestLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileManifestLookup).field_0x34 = 0;
  *(undefined8 *)&(this->FileManifestLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x48 = 0;
  *(undefined8 *)&this->TaggedFilesLookup = 0;
  *(undefined8 *)&(this->TaggedFilesLookup).field_0x8 = 0;
  *(undefined8 *)&(this->TaggedFilesLookup).field_0x20 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x28 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x34 = 0;
  *(undefined8 *)&(this->TaggedFilesLookup).field_0x40 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x48 = 0;
  *(undefined8 *)&this->ChunkInfoLookup = 0;
  *(undefined8 *)&(this->ChunkInfoLookup).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInfoLookup).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkInfoLookup).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x48 = 0;
  this->TotalBuildSize = param_1->TotalBuildSize;
  this->TotalDownloadSize = param_1->TotalDownloadSize;
  this->bNeedsResaving = param_1->bNeedsResaving;
  InitLookups(this);
  return this;
}

// FBuildPatchAppManifest @ 1431b8500

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
FBuildPatchAppManifest::FBuildPatchAppManifest(FBuildPatchAppManifest *this)

{
  this->_padding_ = (longlong)&___7FBuildPatchAppManifest__6B_;
  BuildPatchServices::FManifestMeta::FManifestMeta(&this->ManifestMeta);
  BuildPatchServices::FChunkDataList::FChunkDataList(&this->ChunkDataList);
  BuildPatchServices::FFileManifestList::FFileManifestList(&this->FileManifestList);
  BuildPatchServices::FCustomFields::FCustomFields(&this->CustomFields);
  (this->OnPreExitHandle).ID = 0;
  *(undefined8 *)&this->FileNameLookup = 0;
  *(undefined8 *)&(this->FileNameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameLookup).field_0x34 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileNameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameLookup).field_0x48 = 0;
  *(undefined8 *)&this->FileManifestLookup = 0;
  *(undefined8 *)&(this->FileManifestLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileManifestLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileManifestLookup).field_0x34 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileManifestLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileManifestLookup).field_0x48 = 0;
  *(undefined8 *)&this->TaggedFilesLookup = 0;
  *(undefined8 *)&(this->TaggedFilesLookup).field_0x8 = 0;
  *(undefined8 *)&(this->TaggedFilesLookup).field_0x20 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x28 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x34 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TaggedFilesLookup).field_0x40 = 0;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x48 = 0;
  *(undefined8 *)&this->ChunkInfoLookup = 0;
  *(undefined8 *)&(this->ChunkInfoLookup).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInfoLookup).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x34 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkInfoLookup).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x48 = 0;
  this->bNeedsResaving = false;
  this->TotalBuildSize = -1;
  this->TotalDownloadSize = -1;
  return this;
}

// ~FBuildPatchAppManifest @ 1431be900

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FBuildPatchAppManifest::~FBuildPatchAppManifest(FBuildPatchAppManifest *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FBuildPatchAppManifest__6B_;
  DestroyData(this);
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkInfoLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkInfoLookup);
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TaggedFilesLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaggedFilesLookup);
  *(undefined4 *)&(this->FileManifestLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileManifestLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileManifestLookup);
  *(undefined4 *)&(this->FileNameLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileNameLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FString_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FString_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FString_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileNameLookup);
  *(undefined4 *)&(this->CustomFields).Fields.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CustomFields).Fields.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomFields);
  DestructItems<BuildPatchServices::FFileManifest,int>
            ((FFileManifest *)(this->FileManifestList).FileList.AllocatorInstance.Data,
             (this->FileManifestList).FileList.ArrayNum);
  pFVar2 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BuildPatchServices::FManifestMeta::~FManifestMeta(&this->ManifestMeta);
  this->_padding_ = (longlong)&___7IBuildManifest__6B_;
  return;
}

// CopyCustomFields @ 1431d3540

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::CopyCustomFields
          (FBuildPatchAppManifest *this,TSharedRef<IBuildManifest,1> *param_1,bool param_2)

{
  IBuildManifest IVar1;
  IBuildManifest *pIVar2;
  FString *pFVar3;
  ulonglong uVar4;
  IBuildManifest *pIVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  IBuildManifest IVar17;
  int iVar18;
  undefined1 local_res10 [8];
  char local_res18;
  int local_res20;
  undefined4 uStack_9c;
  TPairInitializer<FString_const_&,FString_const_&> local_98;
  IBuildManifest *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  FString *local_50;
  
  local_98.Value = (FString *)(param_1->SharedReferenceCount).ReferenceController;
  pIVar5 = param_1->Object;
  if ((TReferenceControllerBase<1> *)local_98.Value != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_98.Value)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_98.Value)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IVar1 = (IBuildManifest)(pIVar5 + 0x23);
  iVar11 = *(int *)(pIVar5 + 0x26);
  pIVar2 = pIVar5 + 0x21;
  iVar16 = 0;
  uVar9 = 1;
  iVar18 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    IVar17 = pIVar5[0x25];
    if (pIVar5[0x25] == (IBuildManifest)0x0) {
      IVar17 = IVar1;
    }
    uVar15 = *(uint *)IVar17;
    iVar18 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1431d35fd;
      uVar15 = ((uint *)((longlong)IVar17 + 4))[lVar12];
    }
    uVar9 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar10 = local_res20 + -1 + iVar18;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_1431d35fd:
  uVar15 = *(uint *)(pIVar5 + 0x26);
  uVar14 = uVar15 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar9,iVar16);
  TStack_80.CurrentBitIndex = iVar10;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_80._28_4_ = iVar10;
  TStack_80.BaseBitIndex = iVar18;
  uStack_60 = CONCAT44(uStack_9c,*(int *)(pIVar5 + 0x22) - *(int *)&pIVar5[0x27].field_0x4);
  local_res18 = param_2;
  local_88 = pIVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)IVar1;
  if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar7 = local_res18;
  uVar9 = *(uint *)(pIVar5 + 0x26);
  if (uVar15 != uVar9) {
    IVar17 = pIVar5[0x25];
    if (pIVar5[0x25] == (IBuildManifest)0x0) {
      IVar17 = IVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)IVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1431d3701;
      uVar15 = ((uint *)((longlong)IVar17 + 4))[lVar12];
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_1431d3701:
  do {
    pIVar5 = local_88;
    if (*(int *)(local_88 + 1) - *(int *)&local_88[6].field_0x4 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar15) && ((IBuildManifest)TStack_80.Array == IVar1)) &&
       (pIVar5 == pIVar2)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_98.Value);
      return;
    }
    pFVar3 = (FString *)((longlong)*pIVar5 + (longlong)TStack_80.CurrentBitIndex * 0x28);
    if (cVar7 == '\0') {
      iVar16 = (pFVar3->Data).ArrayNum;
      iVar11 = iVar16 + -1;
      if (iVar16 == 0) {
        pwVar13 = L"";
        iVar11 = 0;
      }
      else {
        pwVar13 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar13);
      iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                           *)&this->CustomFields,uVar9,pFVar3);
      if (iVar11 == -1) goto LAB_1431d377d;
    }
    else {
LAB_1431d377d:
      local_50 = pFVar3 + 1;
      local_58 = pFVar3;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&this->CustomFields,&local_98,(bool *)&local_58);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// DeserializeFromData @ 1431d49d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::DeserializeFromData
          (FBuildPatchAppManifest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar7;
  FString local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  ulonglong uVar6;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar6 = 0;
    uVar7 = uVar6;
    do {
      if (iVar1 <= (int)uVar6) break;
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (pFVar2[uVar7] == (FScriptContainerElement)0x7b) {
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        FFileHelper::BufferToString(&local_c8,(uchar *)pFVar2,iVar1);
        uVar4 = (**(code **)(this->_padding_ + 0x168))(this,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return (bool)uVar4;
        }
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        return (bool)uVar4;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 1;
    } while ((int)uVar5 < 4);
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_28 = 0;
    local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_18 = 0x7fffffffffffffff;
    local_20 = param_1;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
    bVar3 = BuildPatchServices::FManifestData::Serialize((FArchive *)&local_b8,this,Latest);
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  return bVar3;
}

// DeserializeFromJSON @ 1431d4b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::DeserializeFromJSON(FBuildPatchAppManifest *this,FString *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  FChunkDataList *pFVar3;
  ulonglong uVar4;
  atomic<int> aVar5;
  TJsonStringReader<wchar_t> *pTVar6;
  FFileManifest *pFVar7;
  longlong lVar8;
  FChunkInfo *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  long64 lVar12;
  undefined8 uVar13;
  bool bVar14;
  int *piVar15;
  undefined1 *puVar16;
  FJsonValue *pFVar17;
  FJsonValue *pFVar18;
  FJsonValue *pFVar19;
  FJsonValue *pFVar20;
  FJsonValue *pFVar21;
  bool bVar22;
  undefined1 uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar32;
  TTuple<FString,TSharedPtr<FJsonValue,1>_> *pTVar33;
  FJsonValue *pFVar34;
  FString *pFVar35;
  FJsonValue *pFVar36;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined8 *puVar38;
  FFileManifest *pFVar39;
  FJsonObject *pFVar40;
  FChunkPart *pFVar41;
  TSharedPtr<FJsonValue,1> *pTVar42;
  TReferenceControllerBase<1> *pTVar43;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar44;
  FChunkInfo *pFVar45;
  longlong *plVar46;
  ulong64 uVar47;
  FChunkInfo **ppFVar48;
  FString *pFVar49;
  byte bVar50;
  byte bVar51;
  longlong *plVar52;
  uint *puVar53;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FScriptContainerElement *pFVar54;
  ForAnyElementType FVar55;
  uint uVar56;
  longlong lVar57;
  TReferenceControllerBase<1> *pTVar58;
  TReferenceControllerBase<1> *pTVar59;
  FScriptContainerElement *pFVar60;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *pTVar61;
  ForElementType<FSetElementId> FVar62;
  int iVar63;
  TBitArray<FDefaultBitArrayAllocator> *pTVar64;
  byte bVar65;
  Type TVar66;
  FBuildPatchAppManifest *pFVar67;
  uint *puVar68;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *pTVar69;
  FGuid *pFVar70;
  FFileManifestList *pFVar71;
  FBuildPatchAppManifest *this_01;
  undefined1 auStackY_be8 [32];
  bool local_b98;
  TReferenceControllerBase<1> *local_b90;
  uchar local_b88 [8];
  FBuildPatchAppManifest *local_b80;
  undefined1 local_b78;
  undefined1 local_b77;
  undefined1 local_b76;
  undefined1 local_b75;
  undefined1 local_b74;
  undefined1 local_b73 [3];
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *local_b70;
  TReferenceControllerBase<1> *local_b68;
  TSharedPtr<FJsonObject,1> local_b60;
  ulonglong local_b50;
  longlong *local_b48;
  undefined8 uStack_b40;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  int local_b20;
  undefined4 uStack_b1c;
  TReferenceControllerBase<1> *local_b18;
  FGuid local_b10;
  EFeatureLevel local_b00 [2];
  TReferenceControllerBase<1> *local_af8;
  ForAnyElementType local_af0;
  int local_ae8;
  int local_ae4;
  TReferenceControllerBase<1> *local_ae0;
  FGuid local_ad8;
  FGuid local_ac8;
  FGuid local_ab8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_aa8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_a98;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_a88;
  FString local_a78;
  TSharedPtr<FJsonObject,1> local_a68;
  ulong64 local_a58;
  undefined8 local_a50;
  TReferenceControllerBase<1> *local_a48;
  TReferenceControllerBase<1> *local_a40;
  TReferenceControllerBase<1> *local_a38;
  TReferenceControllerBase<1> *local_a30;
  TReferenceControllerBase<1> *local_a28;
  StackState local_a20;
  TSharedPtr<FJsonValue,1> local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  TSharedPtr<FJsonValue,1> local_9a8;
  TSharedPtr<FJsonValue,1> local_998;
  TSharedPtr<FJsonValue,1> local_988;
  TSharedPtr<FJsonValue,1> local_978;
  TSharedPtr<FJsonValue,1> local_968;
  TSharedPtr<FJsonValue,1> local_958;
  FString local_948;
  longlong *local_938;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_930;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_910;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8b0;
  longlong *local_890;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_888;
  longlong *local_868;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_860;
  longlong *local_840;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_838;
  undefined1 local_818 [8];
  undefined1 local_810 [8];
  TReferenceControllerBase<1> *local_808;
  FScriptContainerElement *local_800;
  TPairInitializer<FGuid_const_&,FString_const_*_&&> local_7f8;
  FScriptContainerElement *local_7e8;
  int local_7e0;
  int local_7dc;
  longlong *local_7d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7d0;
  undefined1 local_7b0 [8];
  undefined1 local_7a8 [12];
  uint uStack_79c;
  TBitArray<FDefaultBitArrayAllocator> *local_798;
  undefined8 uStack_790;
  longlong local_788;
  undefined8 uStack_780;
  wchar_t *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  wchar_t *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  wchar_t *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  wchar_t *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  wchar_t *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  wchar_t *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  wchar_t *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  wchar_t *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  wchar_t *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  wchar_t *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  wchar_t *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  wchar_t *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  FString *local_698;
  int local_690;
  FString **local_688;
  FString ***local_680;
  FScriptContainerElement *local_678;
  FScriptContainerElement **local_670;
  FString local_668;
  FString local_658;
  FString local_648;
  TStringView<wchar_t> local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  longlong local_5e8;
  FString *local_5e0;
  FGuid *local_5d8;
  FScriptContainerElement **local_5d0;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  wchar_t *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  wchar_t *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  TStringView<wchar_t> local_508;
  FString local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  FString local_4c8;
  TStringView<wchar_t> local_4b8;
  FString local_4a8;
  TStringView<wchar_t> local_498;
  FString local_488;
  TStringView<wchar_t> local_478;
  TStringView<wchar_t> local_468;
  FString local_458;
  TStringView<wchar_t> local_448;
  TStringView<wchar_t> local_438;
  TStringView<wchar_t> local_428;
  TStringView<wchar_t> local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  TStringView<wchar_t> local_298;
  FString local_288;
  TRangedForIterator local_278;
  FChunkPart local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  undefined4 local_1f4;
  undefined4 local_1d4;
  TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
  local_1c8;
  undefined1 local_178 [32];
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  FFileManifest local_f8;
  FChunkInfo local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  pFVar36 = (FJsonValue *)0x0;
  bVar51 = 0;
  local_a68.Object = (FJsonObject *)0x0;
  local_a68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b80 = this;
  pTVar32 = TJsonStringReader<wchar_t>::Create(&local_338,param_1);
  pTVar6 = pTVar32->Object;
  local_808 = (pTVar32->SharedReferenceCount).ReferenceController;
  if (local_808 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_808->SharedReferenceCount = (atomic<int>)((int)local_808->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_338.SharedReferenceCount.ReferenceController);
  DestroyData(this);
  local_a20.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a20.Identifier.Data.ArrayNum = 0;
  local_a20.Identifier.Data.ArrayMax = 0;
  local_a20.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a20.Array.ArrayNum = 0;
  local_a20.Array.ArrayMax = 0;
  local_a20.Object.Object = (FJsonObject *)0x0;
  local_a20.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar22 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     ((TJsonReader<wchar_t> *)pTVar6,&local_a20,None);
  if (bVar22) {
    bVar22 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_a20,&local_a68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a20.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a20.Array.AllocatorInstance.Data,
               local_a20.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a20.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a20.Array.AllocatorInstance.Data);
    }
    if (local_a20.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a20.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar22) {
      local_b70 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                   *)local_a68.Object;
      if ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
           *)local_a68.Object !=
          (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
           *)0x0) {
        local_178._0_8_ = 0;
        local_178._8_8_ = 0;
        local_158 = 0;
        local_150 = 0;
        local_14c = 0x80;
        local_148 = 0xffffffff;
        local_144 = 0;
        local_138 = (ForElementType<FSetElementId>)0x0;
        local_130 = 0;
        if (((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)local_a68.Object ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
        pFVar40 = local_a68.Object;
        local_b00[0] = Original;
        local_b70 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                     *)local_a68.Object;
        ::FString::FString(&local_5c8,L"ManifestFileVersion");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_5c8);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_988.Object = (FJsonValue *)0x0;
          local_988.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_988.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_988.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_988.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_988.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_988.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar34 = local_988.Object;
        if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
        }
        local_b50 = 1;
        bVar22 = false;
        if (pFVar34 == (FJsonValue *)0x0) {
LAB_1431d4e1b:
          bVar25 = bVar22;
          bVar22 = false;
        }
        else {
          pFVar34 = TSharedPtr<FJsonValue,1>::operator->(&local_988);
          pFVar35 = FJsonValue::AsString(pFVar34,&local_328);
          bVar51 = 1;
          bVar25 = true;
          bVar24 = ::FString::ToBlob(pFVar35,(uchar *)local_b00,4);
          bVar22 = true;
          if (!bVar24) goto LAB_1431d4e1b;
          bVar22 = true;
          bVar51 = 1;
        }
        if ((bVar25) &&
           (bVar51 = 0, local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (bVar22) {
          (this->ManifestMeta).FeatureLevel = local_b00[0];
          if (local_b00[0] == BrokenJsonVersion) {
            (this->ManifestMeta).FeatureLevel = LatestNoChunks;
          }
        }
        else {
          (this->ManifestMeta).FeatureLevel = CustomFields;
        }
        ::FString::FString(&local_5b8,L"AppID");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_5b8);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_b68 = (TReferenceControllerBase<1> *)0x0;
          local_a30 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_b68 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x10;
          local_a30 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_a30 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a30->SharedReferenceCount =
                 (atomic<int>)((int)local_a30->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_5a8,L"AppNameString");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_5a8);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          pFVar34 = (FJsonValue *)0x0;
          local_a38 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pFVar34 = *(FJsonValue **)&pTVar33->field_0x10;
          local_a38 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_a38 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a38->SharedReferenceCount =
                 (atomic<int>)((int)local_a38->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_598,L"BuildVersionString");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_598);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_a40 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pFVar36 = *(FJsonValue **)&pTVar33->field_0x10;
          local_a40 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_a40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a40->SharedReferenceCount =
                 (atomic<int>)((int)local_a40->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_598.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_588,L"LaunchExeString");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_588);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_978.Object = (FJsonValue *)0x0;
          local_978.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_978.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_978.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_978.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar19 = local_978.Object;
        if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_578,L"LaunchCommand");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_578);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_968.Object = (FJsonValue *)0x0;
          local_968.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_968.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_968.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_968.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_968.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_968.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar20 = local_968.Object;
        if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_568,L"PrereqName");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_568);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_958.Object = (FJsonValue *)0x0;
          local_958.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_958.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_958.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_958.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_958.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_958.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar21 = local_958.Object;
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_558,L"PrereqPath");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_558);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_998.Object = (FJsonValue *)0x0;
          local_998.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_998.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_998.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_998.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_998.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_998.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar18 = local_998.Object;
        if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_558.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_548,L"PrereqArgs");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                          *)pFVar40,&local_548);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_9e8.Object = (FJsonValue *)0x0;
          local_9e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_9e8.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_9e8.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_9e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_9e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_9e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar17 = local_9e8.Object;
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
        pFVar67 = local_b80;
        if (local_b68 == (TReferenceControllerBase<1> *)0x0) {
LAB_1431d52cd:
          bVar22 = false;
        }
        else {
          pFVar35 = FJsonValue::AsString((FJsonValue *)local_b68,&local_318);
          bVar22 = ::FString::ToBlob(pFVar35,(uchar *)&(local_b80->ManifestMeta).AppID,4);
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
          pFVar67 = local_b80;
          if ((!bVar22) || (pFVar34 == (FJsonValue *)0x0)) goto LAB_1431d52cd;
          pFVar35 = FJsonValue::AsString(pFVar34,&local_308);
          pFVar67 = local_b80;
          ::FString::operator=(&(local_b80->ManifestMeta).AppName,pFVar35);
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          if (pFVar36 == (FJsonValue *)0x0) goto LAB_1431d52cd;
          pFVar35 = FJsonValue::AsString(pFVar36,&local_2f8);
          ::FString::operator=(&(pFVar67->ManifestMeta).BuildVersion,pFVar35);
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          if (pFVar19 == (FJsonValue *)0x0) goto LAB_1431d52cd;
          pFVar36 = TSharedPtr<FJsonValue,1>::operator->(&local_978);
          pFVar35 = FJsonValue::AsString(pFVar36,&local_2e8);
          ::FString::operator=(&(pFVar67->ManifestMeta).LaunchExe,pFVar35);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          if (pFVar20 == (FJsonValue *)0x0) goto LAB_1431d52cd;
          bVar22 = true;
          pFVar36 = TSharedPtr<FJsonValue,1>::operator->(&local_968);
          pFVar35 = FJsonValue::AsString(pFVar36,&local_2d8);
          ::FString::operator=(&(pFVar67->ManifestMeta).LaunchCommand,pFVar35);
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
        }
        if (pFVar21 == (FJsonValue *)0x0) {
          pFVar35 = &local_948;
          bVar51 = bVar51 | 8;
          local_948.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_948.Data.ArrayNum = 0;
          local_948.Data.ArrayMax = 0;
        }
        else {
          pFVar36 = TSharedPtr<FJsonValue,1>::operator->(&local_958);
          bVar51 = bVar51 | 4;
          pFVar35 = FJsonValue::AsString(pFVar36,&local_2c8);
        }
        uVar27 = 0;
        ::FString::operator=(&(pFVar67->ManifestMeta).PrereqName,pFVar35);
        if (((bVar51 & 8) != 0) &&
           (bVar51 = bVar51 & 0xf7,
           local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_948.Data.AllocatorInstance.Data);
        }
        if (((bVar51 & 4) != 0) &&
           (bVar51 = bVar51 & 0xfb,
           local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        if (pFVar18 == (FJsonValue *)0x0) {
          local_9d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar35 = &local_9d8;
          local_9d8.Data.ArrayNum = 0;
          local_9d8.Data.ArrayMax = 0;
          bVar50 = 0x20;
        }
        else {
          pFVar36 = TSharedPtr<FJsonValue,1>::operator->(&local_998);
          pFVar35 = FJsonValue::AsString(pFVar36,&local_2b8);
          bVar50 = 0x10;
        }
        bVar65 = bVar51 | bVar50;
        ::FString::operator=(&(pFVar67->ManifestMeta).PrereqPath,pFVar35);
        if (((bVar50 & 0x20) != 0) &&
           (bVar65 = bVar51 | bVar50 & 0xdf,
           local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
        }
        if (((bVar65 & 0x10) != 0) &&
           (bVar65 = bVar65 & 0xef,
           local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (pFVar17 == (FJsonValue *)0x0) {
          local_9c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar35 = &local_9c8;
          local_9c8.Data.ArrayNum = 0;
          local_9c8.Data.ArrayMax = 0;
          bVar51 = 0x80;
        }
        else {
          pFVar36 = TSharedPtr<FJsonValue,1>::operator->(&local_9e8);
          pFVar35 = FJsonValue::AsString(pFVar36,&local_2a8);
          bVar51 = 0x40;
        }
        pFVar67 = local_b80;
        bVar65 = bVar65 | bVar51;
        ::FString::operator=(&(local_b80->ManifestMeta).PrereqArgs,pFVar35);
        if (((char)bVar65 < '\0') &&
           (bVar65 = bVar51 & 0x7f,
           local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
        }
        if (((bVar65 & 0x40) != 0) &&
           (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        bVar14 = false;
        bVar26 = false;
        bVar24 = false;
        bVar25 = false;
        ::FString::FString(&local_538,L"FileManifestList");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(local_b70,&local_538);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          local_9a8.Object = (FJsonValue *)0x0;
          local_9a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_9a8.Object = *(FJsonValue **)&pTVar33->field_0x10;
          local_9a8.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_9a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_9a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_9a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        pFVar36 = local_9a8.Object;
        if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_538.Data.AllocatorInstance.Data);
        }
        if ((bVar22) && (pFVar36 != (FJsonValue *)0x0)) {
          local_b98 = true;
          pFVar36 = TSharedPtr<FJsonValue,1>::operator->(&local_9a8);
          pTVar37 = FJsonValue::AsArray(pFVar36);
          local_a88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
          CopyToEmpty<TSharedPtr<FJsonValue,1>,int>
                    (&local_a88,(TSharedPtr<FJsonValue,1> *)(pTVar37->AllocatorInstance).Data,
                     pTVar37->ArrayNum,0);
          local_b68 = (TReferenceControllerBase<1> *)&pFVar67->FileManifestList;
          local_ae0 = local_b68;
          while( true ) {
            pTVar58 = local_ae0;
            local_af8 = (TReferenceControllerBase<1> *)CONCAT44(local_af8._4_4_,uVar27);
            iVar29 = local_a88.ArrayNum;
            if ((((int)uVar27 < 0) || (local_b68 = local_ae0, iVar29 <= (int)uVar27)) ||
               (local_b98 == false)) break;
            uVar56 = 0;
            if ((int)uVar27 < iVar29) {
              uVar56 = ~uVar27 >> 0x1f;
            }
            if ((uVar56 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            pFVar36 = TSharedPtr<FJsonValue,1>::operator->
                                ((TSharedPtr<FJsonValue,1> *)
                                 (local_a88.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10));
            puVar38 = (undefined8 *)(**(code **)pFVar36->_padding_)(pFVar36);
            local_b60.Object = (FJsonObject *)*puVar38;
            local_b60.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar38[1];
            if (local_b60.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_b60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_b60.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pFVar71 = &pFVar67->FileManifestList;
            local_b68 = (TReferenceControllerBase<1> *)pFVar71;
            pFVar39 = BuildPatchServices::FFileManifest::FFileManifest(&local_f8);
            pFVar7 = (FFileManifest *)(pFVar71->FileList).AllocatorInstance.Data;
            if (((pFVar7 <= pFVar39) &&
                (pFVar39 < pFVar7 + (pFVar67->FileManifestList).FileList.ArrayMax)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uVar27 = (pFVar67->FileManifestList).FileList.ArrayNum;
            piVar15 = &(pFVar67->FileManifestList).FileList.ArrayMax;
            if (uVar27 == *piVar15) {
              uVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x860,(ForAnyElementType *)pFVar71,piVar15);
            }
            (pFVar67->FileManifestList).FileList.ArrayNum = uVar27 + 1;
            BuildPatchServices::FFileManifest::FFileManifest
                      ((FFileManifest *)
                       ((pFVar71->FileList).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x60),
                       pFVar39);
            BuildPatchServices::FFileManifest::~FFileManifest(&local_f8);
            uVar56 = 0;
            if ((int)uVar27 < (pFVar67->FileManifestList).FileList.ArrayNum) {
              uVar56 = ~uVar27 >> 0x1f;
            }
            if ((uVar56 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            pTVar58 = (TReferenceControllerBase<1> *)
                      ((pFVar71->FileList).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x60);
            local_b18 = pTVar58;
            pFVar40 = TSharedPtr<FJsonObject,1>::operator->(&local_b60);
            uStack_520 = 8;
            local_528 = L"Filename";
            local_298._12_4_ = uStack_51c;
            local_298.Size = 8;
            local_298.DataPtr = L"Filename";
            pFVar35 = FJsonObject::GetStringField(pFVar40,&local_288,&local_298);
            ::FString::operator=((FString *)pTVar58,pFVar35);
            if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.Data.AllocatorInstance.Data);
            }
            pFVar40 = TSharedPtr<FJsonObject,1>::operator->(&local_b60);
            uStack_510 = 8;
            local_518 = L"FileHash";
            local_508._12_4_ = uStack_50c;
            local_508.Size = 8;
            local_508.DataPtr = L"FileHash";
            pFVar35 = FJsonObject::GetStringField(pFVar40,&local_4f8,&local_508);
            local_b98 = ::FString::ToBlob(pFVar35,(uchar *)(pTVar58 + 2),0x14);
            if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
            }
            pFVar40 = TSharedPtr<FJsonObject,1>::operator->(&local_b60);
            uStack_770 = 0xe;
            local_778 = L"FileChunkParts";
            local_4e8._12_4_ = uStack_76c;
            local_4e8.Size = 0xe;
            local_4e8.DataPtr = L"FileChunkParts";
            pTVar37 = FJsonObject::GetArrayField(pFVar40,&local_4e8);
            uVar27 = 0;
            local_aa8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
            CopyToEmpty<TSharedPtr<FJsonValue,1>,int>
                      (&local_aa8,(TSharedPtr<FJsonValue,1> *)(pTVar37->AllocatorInstance).Data,
                       pTVar37->ArrayNum,0);
            while (((this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                *)local_b60.Object, uVar56 = 0, -1 < (int)uVar27 &&
                    ((int)uVar27 < local_aa8.ArrayNum)) && (local_b98 != false))) {
              paVar1 = &pTVar58[4].SharedReferenceCount;
              pFVar41 = BuildPatchServices::FChunkPart::FChunkPart(&local_248);
              if (((*(FChunkPart **)paVar1 <= pFVar41) &&
                  (pFVar41 < *(FChunkPart **)paVar1 + *(int *)((longlong)&pTVar58[5]._padding_ + 4))
                  ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              uVar28 = (uint)pTVar58[5]._padding_;
              piVar15 = (int *)((longlong)&pTVar58[5]._padding_ + 4);
              if (uVar28 == *piVar15) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x418,(ForAnyElementType *)paVar1,piVar15);
              }
              *(uint *)&pTVar58[5]._padding_ = uVar28 + 1;
              uVar11 = *(undefined8 *)&(pFVar41->Guid).C;
              lVar57 = (longlong)(int)uVar28 * 0x18;
              lVar8 = *(longlong *)paVar1;
              puVar38 = (undefined8 *)(lVar8 + lVar57);
              *puVar38 = *(undefined8 *)&pFVar41->Guid;
              puVar38[1] = uVar11;
              *(undefined8 *)(lVar8 + lVar57 + 0x10) = *(undefined8 *)&pFVar41->Offset;
              if ((int)uVar28 < (int)pTVar58[5]._padding_) {
                uVar56 = ~uVar28 >> 0x1f;
              }
              if ((uVar56 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              pFVar70 = (FGuid *)(*(longlong *)paVar1 + lVar57);
              uVar56 = 0;
              if ((int)uVar27 < local_aa8.ArrayNum) {
                uVar56 = ~uVar27 >> 0x1f;
              }
              if ((uVar56 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              pFVar36 = TSharedPtr<FJsonValue,1>::operator->
                                  ((TSharedPtr<FJsonValue,1> *)
                                   (local_aa8.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10)
                                  );
              puVar38 = (undefined8 *)(**(code **)pFVar36->_padding_)(pFVar36);
              pTVar58 = (TReferenceControllerBase<1> *)puVar38[1];
              pFVar40 = (FJsonObject *)*puVar38;
              if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar58->SharedReferenceCount =
                     (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar40 == (FJsonObject *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              uStack_760 = 4;
              local_768 = L"Guid";
              local_4d8._12_4_ = uStack_75c;
              local_4d8.Size = 4;
              local_4d8.DataPtr = L"Guid";
              pFVar35 = FJsonObject::GetStringField(pFVar40,&local_4c8,&local_4d8);
              bVar22 = FGuid::Parse(pFVar35,pFVar70);
              if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
              }
              if (bVar22) {
                if ((pFVar40 == (FJsonObject *)0x0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                uStack_750 = 6;
                local_758 = L"Offset";
                local_4b8._12_4_ = uStack_74c;
                local_4b8.Size = 6;
                local_4b8.DataPtr = L"Offset";
                bVar25 = true;
                pFVar35 = FJsonObject::GetStringField(pFVar40,&local_4a8,&local_4b8);
                bVar22 = ::FString::ToBlob(pFVar35,(uchar *)(pFVar70 + 1),4);
                if (!bVar22) goto LAB_1431d5afb;
                bVar22 = true;
              }
              else {
LAB_1431d5afb:
                bVar22 = false;
              }
              if ((bVar25) &&
                 (bVar25 = false,
                 local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
              }
              if (bVar22) {
                if ((pFVar40 == (FJsonObject *)0x0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                uStack_740 = 4;
                local_748 = L"Size";
                local_498._12_4_ = uStack_73c;
                local_498.Size = 4;
                local_498.DataPtr = L"Size";
                bVar24 = true;
                pFVar35 = FJsonObject::GetStringField(pFVar40,&local_488,&local_498);
                bVar22 = ::FString::ToBlob(pFVar35,(uchar *)&pFVar70[1].B,4);
                if (!bVar22) goto LAB_1431d5baa;
                local_b98 = true;
              }
              else {
LAB_1431d5baa:
                local_b98 = false;
              }
              if ((bVar24) &&
                 (bVar24 = false,
                 local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_488.Data.AllocatorInstance.Data);
              }
              TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                        ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_178,
                         (FGuid *)(local_7b0 + 4),(bool *)pFVar70);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar58);
              uVar27 = uVar27 + 1;
              pTVar58 = local_b18;
            }
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_b60.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uStack_730 = 0xb;
            local_738 = L"InstallTags";
            local_478._12_4_ = uStack_72c;
            local_478.Size = 0xb;
            local_478.DataPtr = L"InstallTags";
            uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"InstallTags");
            pTVar42 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this_00,uVar27,&local_478);
            if (((pTVar42 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar42->Object != (FJsonValue *)0x0)) &&
               (pFVar36 = TSharedPtr<FJsonValue,1>::operator->(pTVar42), pFVar36->Type == Array)) {
              if ((this_00 ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              local_728 = L"InstallTags";
              uStack_720 = 0xb;
              local_468._12_4_ = uStack_71c;
              local_468.Size = 0xb;
              local_468.DataPtr = L"InstallTags";
              pTVar37 = FJsonObject::GetArrayField((FJsonObject *)this_00,&local_468);
              local_a98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
              CopyToEmpty<TSharedPtr<FJsonValue,1>,int>
                        (&local_a98,(TSharedPtr<FJsonValue,1> *)(pTVar37->AllocatorInstance).Data,
                         pTVar37->ArrayNum,0);
              while (((iVar29 = local_a98.ArrayNum, -1 < (int)uVar56 && ((int)uVar56 < iVar29)) &&
                     (local_b98 != false))) {
                uVar27 = 0;
                if ((int)uVar56 < iVar29) {
                  uVar27 = ~uVar56 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                FVar55.Data = local_a98.AllocatorInstance.Data;
                if ((*(longlong *)
                      &local_a98.AllocatorInstance.Data[(longlong)(int)uVar56 * 0x10].field_0x0 == 0
                    ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                pFVar35 = FJsonValue::AsString
                                    (*(FJsonValue **)
                                      &FVar55.Data[(longlong)(int)uVar56 * 0x10].field_0x0,
                                     &local_458);
                if (((*(FString **)&pTVar58[3].SharedReferenceCount <= pFVar35) &&
                    (pFVar35 < *(FString **)&pTVar58[3].SharedReferenceCount +
                               *(int *)((longlong)&pTVar58[4]._padding_ + 4))) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                iVar29 = (int)pTVar58[4]._padding_;
                piVar15 = (int *)((longlong)&pTVar58[4]._padding_ + 4);
                if (iVar29 == *piVar15) {
                  iVar29 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,(ForAnyElementType *)&pTVar58[3].SharedReferenceCount,
                                      piVar15);
                }
                *(int *)&pTVar58[4]._padding_ = iVar29 + 1;
                puVar38 = (undefined8 *)
                          ((longlong)iVar29 * 0x10 + *(longlong *)&pTVar58[3].SharedReferenceCount);
                *puVar38 = 0;
                *puVar38 = (pFVar35->Data).AllocatorInstance.Data;
                (pFVar35->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(puVar38 + 1) = (pFVar35->Data).ArrayNum;
                *(int *)((longlong)puVar38 + 0xc) = (pFVar35->Data).ArrayMax;
                (pFVar35->Data).ArrayNum = 0;
                (pFVar35->Data).ArrayMax = 0;
                if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_458.Data.AllocatorInstance.Data);
                }
                uVar56 = uVar56 + 1;
                pTVar58 = local_b18;
              }
              DestructItems<TSharedPtr<FJsonValue,1>,int>
                        ((TSharedPtr<FJsonValue,1> *)local_a98.AllocatorInstance.Data,iVar29);
              this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                         *)local_b60.Object;
              if ((TSharedPtr<FJsonValue,1> *)local_a98.AllocatorInstance.Data !=
                  (TSharedPtr<FJsonValue,1> *)0x0) {
                FMemory::Free(local_a98.AllocatorInstance.Data);
                this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                           *)local_b60.Object;
              }
            }
            if ((this_00 ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uStack_710 = 0x11;
            local_718 = L"bIsUnixExecutable";
            local_448._12_4_ = uStack_70c;
            local_448.Size = 0x11;
            local_448.DataPtr = L"bIsUnixExecutable";
            uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"bIsUnixExecutable");
            pTVar42 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this_00,uVar27,&local_448);
            if ((pTVar42 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar42->Object != (FJsonValue *)0x0)) {
              if ((this_00 ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              local_708 = L"bIsUnixExecutable";
              uStack_700 = 0x11;
              local_438._12_4_ = uStack_6fc;
              local_438.Size = 0x11;
              local_438.DataPtr = L"bIsUnixExecutable";
              bVar22 = FJsonObject::GetBoolField((FJsonObject *)this_00,&local_438);
              if (bVar22) {
                puVar16 = (undefined1 *)((longlong)&pTVar58[3]._padding_ + 4);
                *puVar16 = *puVar16 | 4;
              }
            }
            if ((this_00 ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uStack_6f0 = 0xb;
            local_6f8 = L"bIsReadOnly";
            local_428._12_4_ = uStack_6ec;
            local_428.Size = 0xb;
            local_428.DataPtr = L"bIsReadOnly";
            uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"bIsReadOnly");
            pTVar42 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this_00,uVar27,&local_428);
            if ((pTVar42 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar42->Object != (FJsonValue *)0x0)) {
              if ((this_00 ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              local_6e8 = L"bIsReadOnly";
              uStack_6e0 = 0xb;
              local_418._12_4_ = uStack_6dc;
              local_418.Size = 0xb;
              local_418.DataPtr = L"bIsReadOnly";
              bVar22 = FJsonObject::GetBoolField((FJsonObject *)this_00,&local_418);
              if (bVar22) {
                puVar16 = (undefined1 *)((longlong)&pTVar58[3]._padding_ + 4);
                *puVar16 = *puVar16 | 1;
              }
            }
            if ((this_00 ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uStack_6d0 = 0xd;
            local_6d8 = L"bIsCompressed";
            local_408._12_4_ = uStack_6cc;
            local_408.Size = 0xd;
            local_408.DataPtr = L"bIsCompressed";
            uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"bIsCompressed");
            pTVar42 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this_00,uVar27,&local_408);
            if ((pTVar42 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar42->Object != (FJsonValue *)0x0)) {
              if ((this_00 ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              local_6c8 = L"bIsCompressed";
              uStack_6c0 = 0xd;
              local_3f8._12_4_ = uStack_6bc;
              local_3f8.Size = 0xd;
              local_3f8.DataPtr = L"bIsCompressed";
              bVar22 = FJsonObject::GetBoolField((FJsonObject *)this_00,&local_3f8);
              if (bVar22) {
                puVar16 = (undefined1 *)((longlong)&pTVar58[3]._padding_ + 4);
                *puVar16 = *puVar16 | 2;
              }
            }
            if ((this_00 ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uStack_6b0 = 0xd;
            local_6b8 = L"SymlinkTarget";
            local_3e8._12_4_ = uStack_6ac;
            local_3e8.Size = 0xd;
            local_3e8.DataPtr = L"SymlinkTarget";
            uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"SymlinkTarget");
            pTVar42 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this_00,uVar27,&local_3e8);
            if ((pTVar42 == (TSharedPtr<FJsonValue,1> *)0x0) ||
               (pTVar42->Object == (FJsonValue *)0x0)) {
              bVar26 = true;
              pTVar43 = (TReferenceControllerBase<1> *)::FString::FString(&local_3c8,L"");
            }
            else {
              if ((this_00 ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              local_6a8 = L"SymlinkTarget";
              uStack_6a0 = 0xd;
              local_3d8._12_4_ = uStack_69c;
              local_3d8.Size = 0xd;
              bVar14 = true;
              local_3d8.DataPtr = L"SymlinkTarget";
              pTVar43 = (TReferenceControllerBase<1> *)
                        FJsonObject::GetStringField((FJsonObject *)this_00,&local_3b8,&local_3d8);
            }
            pTVar59 = pTVar58 + 1;
            if (pTVar59 != pTVar43) {
              pFVar54 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar59->_padding_)->
                        AllocatorInstance).Data;
              if (pFVar54 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar54);
              }
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar59->_padding_)->
              AllocatorInstance).Data =
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar43->_padding_)->
                   AllocatorInstance).Data;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar43->_padding_)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              pTVar58[1].SharedReferenceCount = pTVar43->SharedReferenceCount;
              pTVar58[1].WeakReferenceCount = pTVar43->WeakReferenceCount;
              pTVar43->SharedReferenceCount = (atomic<int>)0x0;
              pTVar43->WeakReferenceCount = (atomic<int>)0x0;
            }
            if ((bVar26) &&
               (bVar26 = false,
               local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
            }
            if ((bVar14) &&
               (bVar14 = false,
               local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
            }
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_aa8.AllocatorInstance.Data,
                       local_aa8.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_aa8.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_aa8.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b60.SharedReferenceCount.ReferenceController);
            uVar27 = (int)local_af8 + 1;
            pFVar67 = local_b80;
          }
          DestructItems<TSharedPtr<FJsonValue,1>,int>
                    ((TSharedPtr<FJsonValue,1> *)local_a88.AllocatorInstance.Data,iVar29);
          if ((TSharedPtr<FJsonValue,1> *)local_a88.AllocatorInstance.Data !=
              (TSharedPtr<FJsonValue,1> *)0x0) {
            FMemory::Free(local_a88.AllocatorInstance.Data);
            local_b68 = pTVar58;
          }
        }
        else {
          local_b68 = (TReferenceControllerBase<1> *)&pFVar67->FileManifestList;
          local_b98 = false;
        }
        pTVar58 = local_b68;
        bVar22 = false;
        aVar5 = local_b68->SharedReferenceCount;
        pFVar54 = (((TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *)
                   &local_b68->_padding_)->AllocatorInstance).Data;
        pFVar60 = pFVar54 + (longlong)(int)aVar5 * 0x60;
        while( true ) {
          if (pTVar58->SharedReferenceCount != aVar5) {
            local_b78 = 0;
            `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_b78);
          }
          if (pFVar54 == pFVar60) break;
          local_698 = *(FString **)pFVar54;
          local_690 = *(int *)(pFVar54 + 8) + -1;
          if (*(int *)(pFVar54 + 8) == 0) {
            local_690 = 0;
          }
          local_688 = &local_698;
          local_680 = &local_7f8.Value;
          local_7f8.Value = (FString **)pFVar54;
          TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<TStringView<wchar_t>_&&,BuildPatchServices::FFileManifest_const_*_&&>_>
                    ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                      *)&pFVar67->FileManifestLookup,
                     (TPairInitializer<TStringView<wchar_t>_&&,BuildPatchServices::FFileManifest_const_*_&&>
                      *)local_818,(bool *)&local_688);
          pFVar54 = pFVar54 + 0x60;
        }
        local_8f0._padding_._4_4_ = (undefined4)local_b50;
        local_8f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
        local_8f0._padding_._0_4_ = 0;
        local_8f0.UnvisitedBitMask = 0xffffffff;
        local_8f0.CurrentBitIndex = 0;
        local_8f0.BaseBitIndex = 0;
        if (local_150 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8f0);
        }
        uStack_b40 = CONCAT44(local_8f0._padding_._4_4_,(undefined4)local_8f0._padding_);
        local_b48 = (longlong *)local_178;
        uStack_b30 = CONCAT44(local_8f0.CurrentBitIndex,local_8f0.UnvisitedBitMask);
        uStack_b28 = CONCAT44(local_8f0._28_4_,local_8f0.BaseBitIndex);
        local_b20 = local_178._8_4_ - local_144;
        pTStack_b38 = local_8f0.Array;
        uStack_780._4_4_ = uStack_b1c;
        uStack_780._0_4_ = local_b20;
        local_798 = local_8f0.Array;
        local_7a8._0_8_ = local_b48;
        unique0x1000562f = uStack_b40;
        uStack_790 = uStack_b30;
        local_788 = uStack_b28;
        pTVar44 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_230,(TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),
                             local_150);
        local_b48 = (longlong *)local_178;
        uStack_b40 = pTVar44->_padding_;
        pTStack_b38 = pTVar44->Array;
        uStack_b30._0_4_ = pTVar44->UnvisitedBitMask;
        uStack_b30._4_4_ = pTVar44->CurrentBitIndex;
        uStack_b28 = *(longlong *)&pTVar44->BaseBitIndex;
        local_b20 = local_178._8_4_ - local_144;
        local_278._44_4_ = uStack_b1c;
        local_278.InitialNum = local_b20;
        local_278._padding_ = (longlong)local_b48;
        local_278._padding_ = uStack_b40;
        local_278._padding_ = (longlong)pTStack_b38;
        local_278._padding_ = uStack_b30;
        local_278._padding_ = uStack_b28;
        bVar25 = TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_7a8,&local_278);
        this_01 = pFVar67;
        if (bVar25) {
          pFVar3 = &pFVar67->ChunkDataList;
          do {
            puVar38 = (undefined8 *)
                      (*(longlong *)local_7a8._0_8_ + (longlong)uStack_790._4_4_ * 0x18);
            pFVar45 = BuildPatchServices::FChunkInfo::FChunkInfo(&local_98);
            pFVar9 = (FChunkInfo *)(pFVar3->ChunkList).AllocatorInstance.Data;
            if (((pFVar9 <= pFVar45) &&
                (pFVar45 < pFVar9 + (pFVar67->ChunkDataList).ChunkList.ArrayMax)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            uVar27 = (pFVar67->ChunkDataList).ChunkList.ArrayNum;
            if (uVar27 == (pFVar67->ChunkDataList).ChunkList.ArrayMax) {
              uVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,(ForAnyElementType *)pFVar3,
                                  &(pFVar67->ChunkDataList).ChunkList.ArrayMax);
            }
            (pFVar67->ChunkDataList).ChunkList.ArrayNum = uVar27 + 1;
            pFVar54 = (pFVar3->ChunkList).AllocatorInstance.Data;
            uVar11 = *(undefined8 *)&(pFVar45->Guid).C;
            lVar57 = (longlong)(int)uVar27 * 0x40;
            *(undefined8 *)(pFVar54 + lVar57) = *(undefined8 *)&pFVar45->Guid;
            *(undefined8 *)(pFVar54 + lVar57 + 8) = uVar11;
            uVar47 = *(ulong64 *)(pFVar45->ShaHash).Hash;
            *(ulong64 *)(pFVar54 + lVar57 + 0x10) = pFVar45->Hash;
            *(ulong64 *)(pFVar54 + lVar57 + 0x10 + 8) = uVar47;
            uVar11 = *(undefined8 *)((pFVar45->ShaHash).Hash + 0x10);
            *(undefined8 *)(pFVar54 + lVar57 + 0x20) = *(undefined8 *)((pFVar45->ShaHash).Hash + 8);
            *(undefined8 *)(pFVar54 + lVar57 + 0x20 + 8) = uVar11;
            lVar12 = pFVar45->FileSize;
            *(undefined8 *)(pFVar54 + lVar57 + 0x30) = *(undefined8 *)&pFVar45->WindowSize;
            *(long64 *)(pFVar54 + lVar57 + 0x30 + 8) = lVar12;
            uVar11 = *puVar38;
            uVar13 = puVar38[1];
            uVar56 = 0;
            if ((int)uVar27 < (pFVar67->ChunkDataList).ChunkList.ArrayNum) {
              uVar56 = ~uVar27 >> 0x1f;
            }
            if ((uVar56 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            pFVar54 = (pFVar3->ChunkList).AllocatorInstance.Data + lVar57;
            *(undefined8 *)pFVar54 = uVar11;
            *(undefined8 *)(pFVar54 + 8) = uVar13;
            uStack_790 = CONCAT44(uStack_790._4_4_,(uint)uStack_790 & ~uStack_79c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_7a8 + 8));
            bVar25 = TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_7a8,&local_278);
            this_01 = local_b80;
          } while (bVar25);
        }
        iVar29 = (this_01->ChunkDataList).ChunkList.ArrayNum;
        pFVar54 = (this_01->ChunkDataList).ChunkList.AllocatorInstance.Data;
        pFVar60 = pFVar54 + (longlong)iVar29 * 0x40;
        local_1c8.Elements._0_8_ = 0;
        local_1c8.Elements._8_8_ = 0;
        local_1c8.Elements._32_8_ = 0;
        local_1c8.Elements._40_4_ = 0;
        local_1c8.Elements._44_4_ = 0x80;
        local_1c8.Elements._48_4_ = 0xffffffff;
        local_1c8.Elements._52_4_ = 0;
        local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1c8.HashSize = 0;
        while( true ) {
          if ((this_01->ChunkDataList).ChunkList.ArrayNum != iVar29) {
            local_b77 = 0;
            `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_b77);
          }
          if (pFVar54 == pFVar60) break;
          local_670 = &local_7e8;
          local_7e8 = pFVar54;
          local_678 = pFVar54;
          TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkInfo_*_&&>_>
                    (&local_1c8,
                     (TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkInfo_*_&&> *)
                     (local_818 + 4),(bool *)&local_678);
          pFVar54 = pFVar54 + 0x40;
        }
        bVar25 = false;
        ::FString::FString(&local_668,L"ChunkHashList");
        pTVar61 = local_b70;
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(local_b70,&local_668);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          puVar38 = (undefined8 *)0x0;
          local_ae0 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          puVar38 = *(undefined8 **)&pTVar33->field_0x10;
          local_ae0 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_ae0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_ae0->SharedReferenceCount =
                 (atomic<int>)((int)local_ae0->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_668.Data.AllocatorInstance.Data);
        }
        if ((local_b98 == false) || (puVar38 == (undefined8 *)0x0)) {
          TVar66 = (Type)local_b50;
          bVar24 = false;
        }
        else {
          bVar24 = true;
          plVar46 = (longlong *)(**(code **)*puVar38)();
          pTVar58 = (TReferenceControllerBase<1> *)plVar46[1];
          plVar46 = (longlong *)*plVar46;
          if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((plVar46 == (longlong *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          local_8d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar46 + 2);
          TVar66 = (Type)local_b50;
          local_8d0._padding_._0_4_ = 0;
          local_8d0.UnvisitedBitMask = 0xffffffff;
          local_8d0.CurrentBitIndex = 0;
          local_8d0.BaseBitIndex = 0;
          local_8d0._padding_._4_4_ = TVar66;
          if ((int)plVar46[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8d0);
          }
          uStack_b40 = CONCAT44(local_8d0._padding_._4_4_,(undefined4)local_8d0._padding_);
          uStack_b30 = CONCAT44(local_8d0.CurrentBitIndex,local_8d0.UnvisitedBitMask);
          uStack_b28 = CONCAT44(local_8d0._28_4_,local_8d0.BaseBitIndex);
          pTStack_b38 = local_8d0.Array;
          TStack_888.Array = local_8d0.Array;
          TStack_888.UnvisitedBitMask = local_8d0.UnvisitedBitMask;
          TStack_888.CurrentBitIndex = local_8d0.CurrentBitIndex;
          TStack_888.BaseBitIndex = local_8d0.BaseBitIndex;
          TStack_888._28_4_ = local_8d0._28_4_;
          iVar29 = local_8d0.CurrentBitIndex;
          local_b48 = plVar46;
          local_890 = plVar46;
          TStack_888._padding_ = uStack_b40;
          if (local_8d0.CurrentBitIndex < (local_8d0.Array)->NumBits) {
            do {
              plVar46 = local_890;
              bVar26 = bVar24 == false;
              bVar24 = false;
              pTVar61 = local_b70;
              this_01 = local_b80;
              if (bVar26) break;
              local_ab8.A = 0;
              local_ab8.B = 0;
              local_ab8.C = 0;
              local_ab8.D = 0;
              local_a58 = 0;
              bVar24 = FGuid::Parse((FString *)(*local_890 + (longlong)iVar29 * 0x28),&local_ab8);
              if (bVar24) {
                lVar57 = *plVar46;
                if ((*(longlong *)(lVar57 + 0x10 + (longlong)iVar29 * 0x28) == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                bVar22 = true;
                pFVar35 = FJsonValue::AsString
                                    (*(FJsonValue **)(lVar57 + 0x10 + (longlong)iVar29 * 0x28),
                                     &local_3a8);
                bVar24 = ::FString::ToBlob(pFVar35,(uchar *)&local_a58,8);
                if (!bVar24) goto LAB_1431d6950;
                bVar24 = true;
              }
              else {
LAB_1431d6950:
                bVar24 = false;
              }
              if ((bVar22) &&
                 (bVar22 = false,
                 local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
              }
              if (bVar24 != false) {
                uVar47 = CityHash64((char *)&local_ab8,0x10);
                iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FGuid>(&local_1c8,(uint)uVar47,&local_ab8);
                if (iVar29 != -1) {
                  ppFVar48 = TMapBase<FGuid,BuildPatchServices::FChunkInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>_>
                             ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>_>
                                            *)&local_1c8,&local_ab8);
                  bVar25 = true;
                  (*ppFVar48)->Hash = local_a58;
                }
              }
              TStack_888.UnvisitedBitMask =
                   TStack_888.UnvisitedBitMask & ~TStack_888._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_888);
              pTVar61 = local_b70;
              this_01 = local_b80;
              iVar29 = TStack_888.CurrentBitIndex;
            } while (TStack_888.CurrentBitIndex < (TStack_888.Array)->NumBits);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar58);
        }
        bVar22 = false;
        ::FString::FString(&local_658,L"ChunkShaList");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(pTVar61,&local_658);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          puVar38 = (undefined8 *)0x0;
          local_a48 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          puVar38 = *(undefined8 **)&pTVar33->field_0x10;
          local_a48 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_a48 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a48->SharedReferenceCount =
                 (atomic<int>)((int)local_a48->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.Data.AllocatorInstance.Data);
        }
        if (puVar38 != (undefined8 *)0x0) {
          puVar38 = (undefined8 *)(**(code **)*puVar38)();
          pTVar58 = (TReferenceControllerBase<1> *)puVar38[1];
          plVar46 = (longlong *)*puVar38;
          if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((plVar46 == (longlong *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          local_8b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar46 + 2);
          local_8b0._padding_._0_4_ = 0;
          local_8b0.UnvisitedBitMask = 0xffffffff;
          local_8b0.CurrentBitIndex = 0;
          local_8b0.BaseBitIndex = 0;
          local_8b0._padding_._4_4_ = TVar66;
          if ((int)plVar46[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8b0);
          }
          uStack_b40 = CONCAT44(local_8b0._padding_._4_4_,(undefined4)local_8b0._padding_);
          uStack_b30 = CONCAT44(local_8b0.CurrentBitIndex,local_8b0.UnvisitedBitMask);
          uStack_b28 = CONCAT44(local_8b0._28_4_,local_8b0.BaseBitIndex);
          pTStack_b38 = local_8b0.Array;
          TStack_860.Array = local_8b0.Array;
          TStack_860.UnvisitedBitMask = local_8b0.UnvisitedBitMask;
          TStack_860.CurrentBitIndex = local_8b0.CurrentBitIndex;
          TStack_860.BaseBitIndex = local_8b0.BaseBitIndex;
          TStack_860._28_4_ = local_8b0._28_4_;
          iVar29 = local_8b0.CurrentBitIndex;
          local_b48 = plVar46;
          local_868 = plVar46;
          TStack_860._padding_ = uStack_b40;
          if (local_8b0.CurrentBitIndex < (local_8b0.Array)->NumBits) {
            do {
              plVar46 = local_868;
              bVar26 = bVar24 == false;
              bVar24 = false;
              pTVar61 = local_b70;
              this_01 = local_b80;
              if (bVar26) break;
              local_ac8.A = 0;
              local_ac8.B = 0;
              local_118 = 0;
              local_ac8.C = 0;
              local_ac8.D = 0;
              local_128 = 0;
              uStack_120 = 0;
              bVar24 = FGuid::Parse((FString *)(*local_868 + (longlong)iVar29 * 0x28),&local_ac8);
              if (bVar24) {
                lVar57 = *plVar46;
                if ((*(longlong *)(lVar57 + 0x10 + (longlong)iVar29 * 0x28) == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                bVar22 = true;
                pFVar35 = FJsonValue::AsString
                                    (*(FJsonValue **)(lVar57 + 0x10 + (longlong)iVar29 * 0x28),
                                     &local_398);
                iVar31 = (pFVar35->Data).ArrayNum;
                iVar29 = iVar31 + -1;
                if (iVar31 == 0) {
                  iVar29 = 0;
                }
                if (iVar29 != 0x28) goto LAB_1431d6c1e;
                HexToBytes(pFVar35,(uchar *)&local_128);
                bVar24 = true;
              }
              else {
LAB_1431d6c1e:
                bVar24 = false;
              }
              if ((bVar22) &&
                 (bVar22 = false,
                 local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_398.Data.AllocatorInstance.Data);
              }
              if (bVar24 != false) {
                uVar47 = CityHash64((char *)&local_ac8,0x10);
                iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FGuid>(&local_1c8,(uint)uVar47,&local_ac8);
                if (iVar29 != -1) {
                  ppFVar48 = TMapBase<FGuid,BuildPatchServices::FChunkInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>_>
                             ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>_>
                                            *)&local_1c8,&local_ac8);
                  pFVar9 = *ppFVar48;
                  *(undefined8 *)(pFVar9->ShaHash).Hash = local_128;
                  *(undefined8 *)((pFVar9->ShaHash).Hash + 8) = uStack_120;
                  *(undefined4 *)((pFVar9->ShaHash).Hash + 0x10) = local_118;
                }
              }
              TStack_860.UnvisitedBitMask =
                   TStack_860.UnvisitedBitMask & ~TStack_860._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_860);
              pTVar61 = local_b70;
              this_01 = local_b80;
              iVar29 = TStack_860.CurrentBitIndex;
            } while (TStack_860.CurrentBitIndex < (TStack_860.Array)->NumBits);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar58);
        }
        bVar22 = false;
        ::FString::FString(&local_648,L"PrereqIds");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(pTVar61,&local_648);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          pFVar36 = (FJsonValue *)0x0;
          local_a28 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pFVar36 = *(FJsonValue **)&pTVar33->field_0x10;
          local_a28 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_a28 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a28->SharedReferenceCount =
                 (atomic<int>)((int)local_a28->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_648.Data.AllocatorInstance.Data);
        }
        if ((bVar24 == false) || (pFVar36 == (FJsonValue *)0x0)) {
          ::FString::FString(&local_9b8,&(this_01->ManifestMeta).PrereqPath);
          ::FString::ReplaceInline(&local_9b8,L"\\",L"/",TVar66);
          local_638.DataPtr = (wchar_t *)local_9b8.Data.AllocatorInstance.Data;
          local_638.Size = local_9b8.Data.ArrayNum + -1;
          if (local_9b8.Data.ArrayNum == 0) {
            local_638.Size = 0;
          }
          uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>
                             (local_638.Size,(wchar_t *)local_9b8.Data.AllocatorInstance.Data);
          iVar29 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TStringView<wchar_t>_>
                             ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                               *)&this_01->FileManifestLookup,uVar27,&local_638);
          plVar46 = (longlong *)0x0;
          if (iVar29 != -1) {
            plVar46 = (longlong *)
                      ((longlong)iVar29 * 0x20 + *(longlong *)&this_01->FileManifestLookup);
          }
          plVar52 = plVar46 + 2;
          if (plVar46 == (longlong *)0x0) {
            plVar52 = (longlong *)0x0;
          }
          if (plVar52 != (longlong *)0x0) {
            local_a78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            lVar57 = *plVar52;
            local_a78.Data.ArrayNum = 0;
            local_a78.Data.ArrayMax = 0;
            local_114 = *(undefined8 *)(lVar57 + 0x20);
            uStack_10c = *(undefined8 *)(lVar57 + 0x28);
            local_104 = *(undefined4 *)(lVar57 + 0x30);
            BytesToHex((uchar *)&local_114,0x14,&local_a78);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (&(this_01->ManifestMeta).PrereqIds,(FString *)local_7b0,(bool *)&local_a78);
            if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a78.Data.AllocatorInstance.Data);
            }
          }
          if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
          }
        }
        else {
          pTVar37 = FJsonValue::AsArray(pFVar36);
          local_af0.Data = (FScriptContainerElement *)0x0;
          iVar29 = pTVar37->ArrayNum;
          pTVar42 = (TSharedPtr<FJsonValue,1> *)(pTVar37->AllocatorInstance).Data;
          local_ae8 = iVar29;
          if (iVar29 == 0) {
            local_ae4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar29,0,&local_af0,iVar29,&local_ae4);
            ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                      (local_af0.Data,pTVar42,iVar29);
          }
          iVar29 = local_ae8;
          pTVar42 = (TSharedPtr<FJsonValue,1> *)(local_af0.Data + (longlong)local_ae8 * 0x10);
          FVar55.Data = local_af0.Data;
          while( true ) {
            if (local_ae8 != iVar29) {
              local_b76 = 0;
              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_b76);
            }
            if ((TSharedPtr<FJsonValue,1> *)FVar55.Data == pTVar42) break;
            pTVar58 = (((TSharedPtr<FJsonValue,1> *)FVar55.Data)->SharedReferenceCount).
                      ReferenceController;
            pFVar36 = ((TSharedPtr<FJsonValue,1> *)FVar55.Data)->Object;
            if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar36 == (FJsonValue *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar10 = (code *)swi(3);
              uVar23 = (*pcVar10)();
              return (bool)uVar23;
            }
            pFVar35 = FJsonValue::AsString(pFVar36,&local_388);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (&(this_01->ManifestMeta).PrereqIds,(FString *)local_810,(bool *)pFVar35);
            if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_388.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar58);
            FVar55.Data = FVar55.Data + 0x10;
            this_01 = local_b80;
          }
          DestructItems<TSharedPtr<FJsonValue,1>,int>
                    ((TSharedPtr<FJsonValue,1> *)local_af0.Data,local_ae8);
          if ((TSharedPtr<FJsonValue,1> *)local_af0.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
            FMemory::Free(local_af0.Data);
          }
          TVar66 = (Type)local_b50;
          pTVar61 = local_b70;
        }
        ::FString::FString(&local_628,L"DataGroupList");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(pTVar61,&local_628);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          puVar38 = (undefined8 *)0x0;
          local_b90 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          puVar38 = *(undefined8 **)&pTVar33->field_0x10;
          local_b90 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_b90 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_b90->SharedReferenceCount =
                 (atomic<int>)((int)local_b90->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_628.Data.AllocatorInstance.Data);
        }
        if (puVar38 == (undefined8 *)0x0) {
          if (bVar24 != false) {
            iVar29 = (this_01->ChunkDataList).ChunkList.ArrayNum;
            pFVar54 = (this_01->ChunkDataList).ChunkList.AllocatorInstance.Data;
            pFVar60 = pFVar54 + (longlong)iVar29 * 0x40;
            while( true ) {
              if ((this_01->ChunkDataList).ChunkList.ArrayNum != iVar29) {
                local_b75 = 0;
                `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_b75);
              }
              if (pFVar54 == pFVar60) break;
              uVar27 = FCrc::MemCrc_DEPRECATED(pFVar54,0x10,0);
              pFVar54[0x2c] = (FScriptContainerElement)((char)uVar27 + (char)(uVar27 / 100) * -100);
              pFVar54 = pFVar54 + 0x40;
            }
          }
        }
        else {
          puVar38 = (undefined8 *)(**(code **)*puVar38)();
          pTVar58 = (TReferenceControllerBase<1> *)puVar38[1];
          plVar46 = (longlong *)*puVar38;
          if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((plVar46 == (longlong *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          local_910.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar46 + 2);
          local_910._padding_._0_4_ = 0;
          local_910.UnvisitedBitMask = 0xffffffff;
          local_910.CurrentBitIndex = 0;
          local_910.BaseBitIndex = 0;
          local_910._padding_._4_4_ = TVar66;
          if ((int)plVar46[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_910);
          }
          uStack_b40 = CONCAT44(local_910._padding_._4_4_,(undefined4)local_910._padding_);
          uStack_b30 = CONCAT44(local_910.CurrentBitIndex,local_910.UnvisitedBitMask);
          uStack_b28 = CONCAT44(local_910._28_4_,local_910.BaseBitIndex);
          pTStack_b38 = local_910.Array;
          TStack_838.Array = local_910.Array;
          TStack_838.UnvisitedBitMask = local_910.UnvisitedBitMask;
          TStack_838.CurrentBitIndex = local_910.CurrentBitIndex;
          TStack_838.BaseBitIndex = local_910.BaseBitIndex;
          TStack_838._28_4_ = local_910._28_4_;
          local_b48 = plVar46;
          local_840 = plVar46;
          TStack_838._padding_ = uStack_b40;
          if (local_910.CurrentBitIndex < (local_910.Array)->NumBits) {
            iVar29 = local_910.CurrentBitIndex;
            do {
              plVar46 = local_840;
              bVar26 = bVar24 == false;
              bVar24 = false;
              this_01 = local_b80;
              if (bVar26) break;
              local_ad8.A = 0;
              local_ad8.B = 0;
              local_ad8.C = 0;
              local_ad8.D = 0;
              local_b88[0] = 0xff;
              bVar24 = FGuid::Parse((FString *)(*local_840 + (longlong)iVar29 * 0x28),&local_ad8);
              if (bVar24) {
                lVar57 = *plVar46;
                if ((*(longlong *)(lVar57 + 0x10 + (longlong)iVar29 * 0x28) == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  uVar23 = (*pcVar10)();
                  return (bool)uVar23;
                }
                bVar22 = true;
                pFVar35 = FJsonValue::AsString
                                    (*(FJsonValue **)(lVar57 + 0x10 + (longlong)iVar29 * 0x28),
                                     &local_378);
                bVar24 = ::FString::ToBlob(pFVar35,local_b88,TVar66);
                if (!bVar24) goto LAB_1431d71a5;
                bVar24 = true;
              }
              else {
LAB_1431d71a5:
                bVar24 = false;
              }
              if ((bVar22) &&
                 (bVar22 = false,
                 local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_378.Data.AllocatorInstance.Data);
              }
              if (bVar24 != false) {
                uVar47 = CityHash64((char *)&local_ad8,0x10);
                iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FGuid>(&local_1c8,(uint)uVar47,&local_ad8);
                if (iVar29 != -1) {
                  uVar47 = CityHash64((char *)&local_ad8,0x10);
                  iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<FGuid>(&local_1c8,(uint)uVar47,&local_ad8);
                  lVar57 = 0;
                  if (((iVar29 == -1) ||
                      (lVar57 = (longlong)iVar29 * 0x20 + local_1c8.Elements._0_8_, lVar57 == 0)) &&
                     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar26)) {
                    pcVar10 = (code *)swi(3);
                    uVar23 = (*pcVar10)();
                    return (bool)uVar23;
                  }
                  *(uchar *)(*(longlong *)(lVar57 + 0x10) + 0x2c) = local_b88[0];
                }
              }
              TStack_838.UnvisitedBitMask =
                   TStack_838.UnvisitedBitMask & ~TStack_838._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_838);
              this_01 = local_b80;
              iVar29 = TStack_838.CurrentBitIndex;
            } while (TStack_838.CurrentBitIndex < (TStack_838.Array)->NumBits);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar58);
        }
        bVar22 = false;
        ::FString::FString(&local_618,L"ChunkFilesizeList");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(local_b70,&local_618);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          puVar38 = (undefined8 *)0x0;
          local_af8 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          puVar38 = *(undefined8 **)&pTVar33->field_0x10;
          local_af8 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          if (local_af8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_af8->SharedReferenceCount =
                 (atomic<int>)((int)local_af8->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        iVar29 = 0;
        if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.Data.AllocatorInstance.Data);
        }
        if (puVar38 == (undefined8 *)0x0) {
LAB_1431d7708:
          iVar29 = (this_01->ChunkDataList).ChunkList.ArrayNum;
          pFVar54 = (this_01->ChunkDataList).ChunkList.AllocatorInstance.Data;
          pFVar60 = pFVar54 + (longlong)iVar29 * 0x40;
          while( true ) {
            if ((this_01->ChunkDataList).ChunkList.ArrayNum != iVar29) {
              local_b74 = 0;
              `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_b74);
            }
            if (pFVar54 == pFVar60) break;
            *(undefined8 *)(pFVar54 + 0x38) = 0x100000;
            pFVar54 = pFVar54 + 0x40;
          }
        }
        else {
          puVar38 = (undefined8 *)(**(code **)*puVar38)(puVar38);
          pTVar58 = (TReferenceControllerBase<1> *)puVar38[1];
          local_7d8 = (longlong *)*puVar38;
          if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b18 = pTVar58;
          if ((local_7d8 == (longlong *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          uVar27 = (uint)local_b50;
          pTStack_b38 = (TBitArray<FDefaultBitArrayAllocator> *)(local_7d8 + 2);
          iVar31 = (int)local_7d8[5];
          iVar63 = iVar29;
          TStack_7d0.CurrentBitIndex = 0;
          if (iVar31 != 0) {
            pTVar64 = (TBitArray<FDefaultBitArrayAllocator> *)local_7d8[4];
            if ((TBitArray<FDefaultBitArrayAllocator> *)local_7d8[4] ==
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar64 = pTStack_b38;
            }
            uVar56 = *(uint *)(pTVar64->AllocatorInstance).InlineData;
            while (uVar56 == 0) {
              lVar57 = (longlong)iVar29;
              iVar63 = iVar63 + 0x20;
              iVar29 = iVar29 + 1;
              TStack_7d0.CurrentBitIndex = iVar31;
              if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29)
              goto LAB_1431d73c1;
              uVar56 = *(uint *)((pTVar64->AllocatorInstance).InlineData + lVar57 * 4 + 4);
            }
            uVar27 = -uVar56 & uVar56;
            uVar4 = (ulonglong)uVar27 * 2 + 1;
            lVar57 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            local_7e0 = (int)lVar57;
            TStack_7d0.CurrentBitIndex = local_7e0 + -1 + iVar63;
            if (iVar31 < TStack_7d0.CurrentBitIndex) {
              TStack_7d0.CurrentBitIndex = iVar31;
            }
          }
LAB_1431d73c1:
          uStack_b40 = CONCAT44(uVar27,iVar29);
          uStack_b30 = CONCAT44(TStack_7d0.CurrentBitIndex,0xffffffff);
          uStack_b28 = CONCAT44(local_1f4,iVar63);
          TStack_7d0._padding_ = uStack_b40;
          TStack_7d0._24_8_ = uStack_b28;
          TStack_7d0.UnvisitedBitMask = 0xffffffff;
          local_b48 = local_7d8;
          TStack_7d0.Array = pTStack_b38;
          if (TStack_7d0.CurrentBitIndex < iVar31) {
            puVar68 = (uint *)0x0;
            iVar29 = TStack_7d0.CurrentBitIndex;
            bVar22 = false;
LAB_1431d7420:
            plVar46 = local_7d8;
            local_b10.A = 0;
            local_b10.B = 0;
            local_b10.C = 0;
            local_b10.D = 0;
            local_a50 = 0;
            bVar26 = FGuid::Parse((FString *)(*local_7d8 + (longlong)iVar29 * 0x28),&local_b10);
            if (bVar26) {
              lVar57 = (longlong)iVar29 * 0x28 + *plVar46;
              if ((*(longlong *)(lVar57 + 0x10) == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar26)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              pFVar35 = FJsonValue::AsString(*(FJsonValue **)(lVar57 + 0x10),&local_368);
              ::FString::ToBlob(pFVar35,(uchar *)&local_a50,8);
              if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.Data.AllocatorInstance.Data);
              }
              uVar47 = CityHash64((char *)&local_b10,0x10);
              if (local_1c8.Elements._8_4_ != local_1c8.Elements._52_4_) {
                FVar62 = (ForElementType<FSetElementId>)&local_1c8.Hash;
                if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar62 = local_1c8.Hash.SecondaryData;
                }
                uVar27 = *(uint *)((longlong)FVar62 +
                                  ((ulonglong)(local_1c8.HashSize - 1) & uVar47 & 0xffffffff) * 4);
                if (uVar27 != 0xffffffff) {
                  do {
                    puVar53 = (uint *)((longlong)(int)uVar27 * 0x20 + local_1c8.Elements._0_8_);
                    if (((local_b10.D == puVar53[3] && local_b10.C == puVar53[2]) &&
                        local_b10.B == puVar53[1]) && local_b10.A == *puVar53) {
                      uVar47 = CityHash64((char *)&local_b10,0x10);
                      puVar53 = puVar68;
                      if (local_1c8.Elements._8_4_ == local_1c8.Elements._52_4_) goto LAB_1431d7688;
                      FVar62 = (ForElementType<FSetElementId>)&local_1c8.Hash;
                      if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar62 = local_1c8.Hash.SecondaryData;
                      }
                      uVar27 = *(uint *)((longlong)FVar62 +
                                        ((ulonglong)(local_1c8.HashSize - 1) & uVar47 & 0xffffffff)
                                        * 4);
                      if (uVar27 == 0xffffffff) goto LAB_1431d7688;
                      goto LAB_1431d7650;
                    }
                    uVar27 = puVar53[6];
                  } while (uVar27 != 0xffffffff);
                }
              }
            }
            goto LAB_1431d76c0;
          }
LAB_1431d76f6:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar58);
          this_01 = local_b80;
          if (!bVar22) goto LAB_1431d7708;
        }
        ::FString::FString(&local_608,L"bIsFileData");
        pTVar61 = local_b70;
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(local_b70,&local_608);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          pFVar36 = (FJsonValue *)0x0;
          local_b70 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                       *)0x0;
        }
        else {
          local_b70 = *(TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                        **)&pTVar33->field_0x18;
          pFVar36 = *(FJsonValue **)&pTVar33->field_0x10;
          if (local_b70 !=
              (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
               *)0x0) {
            LOCK();
            paVar1 = (atomic<int> *)&(local_b70->Elements).field_0x8;
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
          }
        }
        pTVar69 = local_b70;
        if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_608.Data.AllocatorInstance.Data);
        }
        if ((pFVar36 == (FJsonValue *)0x0) || (pFVar36->Type != Boolean)) {
          bVar25 = !bVar25;
        }
        else {
          bVar25 = FJsonValue::AsBool(pFVar36);
        }
        (this_01->ManifestMeta).bIsFileData = bVar25;
        ::FString::FString(&local_5f8,L"CustomFields");
        pTVar33 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::Find(pTVar61,&local_5f8);
        if (pTVar33 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
          puVar38 = (undefined8 *)0x0;
          local_b18 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_b18 = *(TReferenceControllerBase<1> **)&pTVar33->field_0x18;
          puVar38 = *(undefined8 **)&pTVar33->field_0x10;
          if (local_b18 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_b18->SharedReferenceCount =
                 (atomic<int>)((int)local_b18->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        pTVar58 = local_b18;
        iVar29 = 0;
        if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
        }
        if (puVar38 != (undefined8 *)0x0) {
          puVar38 = (undefined8 *)(**(code **)*puVar38)(puVar38);
          pTVar43 = (TReferenceControllerBase<1> *)puVar38[1];
          local_938 = (longlong *)*puVar38;
          if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_938 == (longlong *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          pFVar67 = local_b80;
          pTStack_b38 = (TBitArray<FDefaultBitArrayAllocator> *)(local_938 + 2);
          iVar31 = (int)local_938[5];
          iVar63 = iVar29;
          iVar30 = 0;
          if (iVar31 != 0) {
            pTVar64 = (TBitArray<FDefaultBitArrayAllocator> *)local_938[4];
            if ((TBitArray<FDefaultBitArrayAllocator> *)local_938[4] ==
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar64 = pTStack_b38;
            }
            uVar27 = *(uint *)(pTVar64->AllocatorInstance).InlineData;
            while (uVar27 == 0) {
              lVar57 = (longlong)iVar29;
              iVar63 = iVar63 + 0x20;
              iVar29 = iVar29 + 1;
              iVar30 = iVar31;
              if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29)
              goto LAB_1431d7902;
              uVar27 = *(uint *)((pTVar64->AllocatorInstance).InlineData + lVar57 * 4 + 4);
            }
            local_b50 = (ulonglong)(-uVar27 & uVar27);
            uVar4 = local_b50 * 2 + 1;
            lVar57 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            local_7dc = (int)lVar57;
            iVar30 = iVar63 + -1 + local_7dc;
            if (iVar31 < iVar30) {
              iVar30 = iVar31;
            }
          }
LAB_1431d7902:
          uStack_b40 = CONCAT44((int)local_b50,iVar29);
          uStack_b30 = CONCAT44(iVar30,0xffffffff);
          uStack_b28 = CONCAT44(local_1d4,iVar63);
          TStack_930._24_8_ = uStack_b28;
          TStack_930.UnvisitedBitMask = 0xffffffff;
          TStack_930.CurrentBitIndex = iVar30;
          local_b48 = local_938;
          TStack_930._padding_ = uStack_b40;
          TStack_930.Array = pTStack_b38;
          if ((iVar30 < iVar31) && (bVar24 != false)) {
            do {
              plVar46 = local_938;
              lVar57 = *local_938;
              if ((*(longlong *)(lVar57 + 0x10 + (longlong)iVar30 * 0x28) == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              local_5e0 = FJsonValue::AsString
                                    (*(FJsonValue **)(lVar57 + (longlong)iVar30 * 0x28 + 0x10),
                                     &local_358);
              local_5e8 = *plVar46 + (longlong)TStack_930.CurrentBitIndex * 0x28;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)&pFVar67->CustomFields,
                         (TPairInitializer<FString_const_&,FString_&&> *)(local_810 + 4),
                         (bool *)&local_5e8);
              if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_358.Data.AllocatorInstance.Data);
              }
              TStack_930.UnvisitedBitMask =
                   TStack_930.UnvisitedBitMask & ~TStack_930._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_930);
              pTVar69 = local_b70;
              iVar30 = TStack_930.CurrentBitIndex;
            } while (TStack_930.CurrentBitIndex < (TStack_930.Array)->NumBits);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar43);
          this_01 = local_b80;
        }
        pFVar67 = local_b80;
        if ((this_01->ManifestMeta).bIsFileData != false) {
          pFVar54 = (this_01->FileManifestList).FileList.AllocatorInstance.Data;
          iVar29 = (this_01->FileManifestList).FileList.ArrayNum;
          pFVar60 = pFVar54 + (longlong)iVar29 * 0x60;
          while( true ) {
            if ((pFVar67->FileManifestList).FileList.ArrayNum != iVar29) {
              local_b73[0] = 0;
              `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_b73);
            }
            pTVar58 = local_b18;
            pTVar69 = local_b70;
            this_01 = local_b80;
            if (pFVar54 == pFVar60) break;
            if (*(int *)(pFVar54 + 0x50) == 1) {
              pFVar70 = *(FGuid **)(pFVar54 + 0x48);
              local_5d0 = &local_800;
              local_800 = pFVar54;
              local_5d8 = pFVar70;
              TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FGuid_const_&,FString_const_*_&&>_>
                        ((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
                          *)&pFVar67->FileNameLookup,&local_7f8,(bool *)&local_5d8);
              uVar47 = CityHash64((char *)pFVar70,0x10);
              iVar31 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FGuid>(&local_1c8,(uint)uVar47,pFVar70);
              if (iVar31 == -1) goto LAB_1431d7bb5;
              uVar47 = CityHash64((char *)pFVar70,0x10);
              iVar31 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FGuid>(&local_1c8,(uint)uVar47,pFVar70);
              lVar57 = 0;
              if (((iVar31 == -1) ||
                  (lVar57 = (longlong)iVar31 * 0x20 + local_1c8.Elements._0_8_, lVar57 == 0)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                uVar23 = (*pcVar10)();
                return (bool)uVar23;
              }
              lVar57 = *(longlong *)(lVar57 + 0x10);
              *(undefined8 *)(lVar57 + 0x38) = *(undefined8 *)(pFVar54 + 0x58);
              uVar11 = *(undefined8 *)(pFVar54 + 0x28);
              *(undefined8 *)(lVar57 + 0x18) = *(undefined8 *)(pFVar54 + 0x20);
              *(undefined8 *)(lVar57 + 0x20) = uVar11;
              pFVar2 = pFVar54 + 0x30;
              pFVar54 = pFVar54 + 0x60;
              *(undefined4 *)(lVar57 + 0x28) = *(undefined4 *)pFVar2;
            }
            else {
              bVar24 = false;
LAB_1431d7bb5:
              pFVar54 = pFVar54 + 0x60;
            }
          }
        }
        pFVar49 = FBuildPatchUtils::GetBackwardsCompatibleBuildId(&local_348,&this_01->ManifestMeta)
        ;
        pFVar35 = &(this_01->ManifestMeta).BuildId;
        if (pFVar35 != pFVar49) {
          pFVar54 = (pFVar35->Data).AllocatorInstance.Data;
          if (pFVar54 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar54);
          }
          (pFVar35->Data).AllocatorInstance.Data = (pFVar49->Data).AllocatorInstance.Data;
          (pFVar49->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_01->ManifestMeta).BuildId.Data.ArrayNum = (pFVar49->Data).ArrayNum;
          (this_01->ManifestMeta).BuildId.Data.ArrayMax = (pFVar49->Data).ArrayMax;
          (pFVar49->Data).ArrayNum = 0;
          (pFVar49->Data).ArrayMax = 0;
        }
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        BuildPatchServices::FFileManifestList::OnPostLoad((FFileManifestList *)local_b68);
        this_01->bNeedsResaving = true;
        InitLookups(this_01);
        if (bVar24 == false) {
          DestroyData(this_01);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar58)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar69);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_af8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ae0);
        local_1c8.HashSize = 0;
        if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1c8.Elements);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_998.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_958.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_968.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_978.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a30);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_988.SharedReferenceCount.ReferenceController);
        local_130 = 0;
        if (local_138 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_138);
        }
        TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_178);
        goto LAB_1431d4c18;
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a20.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a20.Array.AllocatorInstance.Data,
               local_a20.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a20.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a20.Array.AllocatorInstance.Data);
    }
    if (local_a20.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a20.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = false;
LAB_1431d4c18:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_808);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a68.SharedReferenceCount.ReferenceController);
  return bVar24;
  while (uVar27 = puVar53[6], puVar53 = puVar68, uVar27 != 0xffffffff) {
LAB_1431d7650:
    puVar53 = (uint *)((longlong)(int)uVar27 * 0x20 + local_1c8.Elements._0_8_);
    if (((local_b10.D == puVar53[3] && local_b10.C == puVar53[2]) && local_b10.B == puVar53[1]) &&
        local_b10.A == *puVar53) {
      if (puVar53 != (uint *)0x0) goto LAB_1431d76ae;
      break;
    }
  }
LAB_1431d7688:
  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar22) {
    pcVar10 = (code *)swi(3);
    uVar23 = (*pcVar10)();
    return (bool)uVar23;
  }
LAB_1431d76ae:
  bVar22 = true;
  *(undefined8 *)(*(longlong *)(puVar53 + 4) + 0x38) = local_a50;
LAB_1431d76c0:
  TStack_7d0.UnvisitedBitMask = TStack_7d0.UnvisitedBitMask & ~TStack_7d0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7d0);
  pTVar58 = local_b18;
  iVar29 = TStack_7d0.CurrentBitIndex;
  if ((TStack_7d0.Array)->NumBits <= TStack_7d0.CurrentBitIndex) goto LAB_1431d76f6;
  goto LAB_1431d7420;
}

// DestroyData @ 1431d7f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FBuildPatchAppManifest::DestroyData(FBuildPatchAppManifest *this)

{
  undefined1 *puVar1;
  FChunkDataList *pFVar2;
  FFileManifestList *pFVar3;
  TMap<FGuid,FString_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>_>
  *this_00;
  TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
  *this_01;
  TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  TMap<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
  *this_03;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  FManifestMeta *pFVar7;
  FChunkDataList *pFVar8;
  FFileManifestList *pFVar9;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar10;
  undefined1 auStackY_188 [32];
  FChunkDataList local_158;
  undefined1 local_148 [72];
  undefined4 local_100;
  FManifestMeta local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar7 = BuildPatchServices::FManifestMeta::FManifestMeta(&local_f8);
  BuildPatchServices::FManifestMeta::operator=(&this->ManifestMeta,pFVar7);
  BuildPatchServices::FManifestMeta::~FManifestMeta(&local_f8);
  pFVar8 = BuildPatchServices::FChunkDataList::FChunkDataList(&local_158);
  pFVar2 = &this->ChunkDataList;
  if (pFVar2 != pFVar8) {
    pFVar5 = (pFVar2->ChunkList).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->ChunkList).AllocatorInstance.Data = (pFVar8->ChunkList).AllocatorInstance.Data;
    (pFVar8->ChunkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ChunkDataList).ChunkList.ArrayNum = (pFVar8->ChunkList).ArrayNum;
    (this->ChunkDataList).ChunkList.ArrayMax = (pFVar8->ChunkList).ArrayMax;
    (pFVar8->ChunkList).ArrayNum = 0;
    (pFVar8->ChunkList).ArrayMax = 0;
  }
  if ((FFileManifest *)local_158.ChunkList.AllocatorInstance.Data != (FFileManifest *)0x0) {
    FMemory::Free(local_158.ChunkList.AllocatorInstance.Data);
  }
  pFVar9 = BuildPatchServices::FFileManifestList::FFileManifestList((FFileManifestList *)&local_158)
  ;
  pFVar3 = &this->FileManifestList;
  if (pFVar3 != pFVar9) {
    DestructItems<BuildPatchServices::FFileManifest,int>
              ((FFileManifest *)(pFVar3->FileList).AllocatorInstance.Data,
               (this->FileManifestList).FileList.ArrayNum);
    pFVar5 = (pFVar3->FileList).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar3->FileList).AllocatorInstance.Data = (pFVar9->FileList).AllocatorInstance.Data;
    (pFVar9->FileList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FileManifestList).FileList.ArrayNum = (pFVar9->FileList).ArrayNum;
    (this->FileManifestList).FileList.ArrayMax = (pFVar9->FileList).ArrayMax;
    (pFVar9->FileList).ArrayNum = 0;
    (pFVar9->FileList).ArrayMax = 0;
  }
  DestructItems<BuildPatchServices::FFileManifest,int>
            ((FFileManifest *)local_158.ChunkList.AllocatorInstance.Data,
             local_158.ChunkList.ArrayNum);
  if ((FFileManifest *)local_158.ChunkList.AllocatorInstance.Data != (FFileManifest *)0x0) {
    FMemory::Free(local_158.ChunkList.AllocatorInstance.Data);
  }
  pTVar10 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)BuildPatchServices::FCustomFields::FCustomFields((FCustomFields *)local_148);
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)&this->CustomFields != pTVar10) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->CustomFields,pTVar10);
  }
  local_100 = 0;
  if ((void *)local_148._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  this_00 = &this->FileNameLookup;
  bVar6 = 1 < *(int *)&(this->FileNameLookup).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->FileNameLookup).field_0xc;
  *(undefined4 *)&(this->FileNameLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FileNameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameLookup).field_0x34 = 0;
  iVar4 = *(int *)&(this->FileNameLookup).field_0x2c;
  *(undefined4 *)&(this->FileNameLookup).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->FileNameLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FileNameLookup).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->FileNameLookup).field_0x48 = 1;
    TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->FileManifestLookup;
  bVar6 = 1 < *(int *)&(this->FileManifestLookup).field_0x48;
  if (!bVar6) {
    TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->FileManifestLookup).field_0xc;
  *(undefined4 *)&(this->FileManifestLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FileManifestLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileManifestLookup).field_0x34 = 0;
  iVar4 = *(int *)&(this->FileManifestLookup).field_0x2c;
  *(undefined4 *)&(this->FileManifestLookup).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->FileManifestLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FileManifestLookup).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->FileManifestLookup).field_0x48 = 1;
    TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->TaggedFilesLookup;
  bVar6 = 1 < *(int *)&(this->TaggedFilesLookup).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->TaggedFilesLookup).field_0x8);
  puVar1 = &(this->TaggedFilesLookup).field_0xc;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x34 = 0;
  iVar4 = *(int *)&(this->TaggedFilesLookup).field_0x2c;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->TaggedFilesLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TaggedFilesLookup).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->TaggedFilesLookup).field_0x48 = 1;
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  this_03 = &this->ChunkInfoLookup;
  bVar6 = 1 < *(int *)&(this->ChunkInfoLookup).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  puVar1 = &(this->ChunkInfoLookup).field_0xc;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x34 = 0;
  iVar4 = *(int *)&(this->ChunkInfoLookup).field_0x2c;
  *(undefined4 *)&(this->ChunkInfoLookup).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ChunkInfoLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkInfoLookup).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->ChunkInfoLookup).field_0x48 = 1;
    TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
              *)this_03);
  }
  this->TotalBuildSize = -1;
  this->TotalDownloadSize = -1;
  this->bNeedsResaving = false;
  return;
}

// Duplicate @ 1431d9bf0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<IBuildManifest,1> * __thiscall
FBuildPatchAppManifest::Duplicate
          (FBuildPatchAppManifest *this,TSharedRef<IBuildManifest,1> *__return_storage_ptr__)

{
  FBuildPatchAppManifest *this_00;
  TRawPtrProxy<FBuildPatchAppManifest> local_res10 [3];
  
  this_00 = ::operator_new(0x2b8);
  local_res10[0].Object = (FBuildPatchAppManifest *)0x0;
  if (this_00 != (FBuildPatchAppManifest *)0x0) {
    local_res10[0].Object = FBuildPatchAppManifest(this_00,this);
  }
  TSharedRef<IBuildManifest,1>::TSharedRef<IBuildManifest,1><FBuildPatchAppManifest>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// EnumerateProducibleChunks @ 1431da300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall
FBuildPatchAppManifest::EnumerateProducibleChunks
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  code *local_68 [2];
  undefined **local_58;
  undefined1 *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  (**(code **)(this->_padding_ + 0x1d0))(this,param_1,local_b8);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FBuildPatchAppManifest::EnumerateProducibleChunks'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = local_b8;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FBuildPatchAppManifest::EnumerateProducibleChunks'::__l2::<lambda_1>,bool,FString_const_&>
                ::Call;
  iVar2 = EnumerateProducibleChunks_Internal
                    (this,(TFunction<bool___cdecl(FString_const_&)> *)local_68,param_2,param_3);
  if (local_68[0] != (code *)0x0) {
    pppuVar3 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar3 = local_40;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return iVar2;
}

// EnumerateProducibleChunks_Internal @ 1431da470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall
FBuildPatchAppManifest::EnumerateProducibleChunks_Internal
          (FBuildPatchAppManifest *this,TFunction<bool___cdecl(FString_const_&)> *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3)

{
  char *pcVar1;
  FGuid *pFVar2;
  code *pcVar3;
  FChunkInfo *pFVar4;
  FBuildPatchAppManifest *pFVar5;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  FChunkInfo **ppFVar14;
  FBlockEntry *pFVar15;
  FBlockEntry *pFVar16;
  byte bVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  FGuid *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  undefined1 local_1a0 [4];
  uint local_19c;
  FGuid local_198;
  uint local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  FBuildPatchAppManifest *local_168;
  longlong *local_160;
  int iStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  int local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  int local_12c;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_128;
  FGuid *local_120;
  FScriptContainerElement *local_118;
  TFunction<bool___cdecl(FString_const_&)> *local_110;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uVar19 = 0;
  uVar28._0_4_ = 1;
  uVar28._4_4_ = 0;
  local_1a4 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_198.A = 1;
  local_198.B = 0;
  uVar22 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  local_168 = this;
  local_128 = param_2;
  local_110 = param_1;
  local_108 = param_3;
  if (uVar22 == 0) goto LAB_1431da716;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar22);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar22);
  uVar23 = 1;
  if (3 < uVar22) {
    uVar29 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_130 = (undefined4)lVar13;
    uVar23 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar23 <= (int)local_60)) goto LAB_1431da716;
  local_60 = uVar23;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar23 != 0) {
    uVar22 = uVar23;
    if (uVar23 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar22 = 0;
        goto LAB_1431da579;
      }
    }
    else {
LAB_1431da579:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar22,4);
    }
    if (0 < (int)uVar23) {
      uVar30 = (ulonglong)uVar23;
      uVar29 = uVar19;
      do {
        FVar18.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_68.Data;
        }
        uVar10 = uVar29 & (longlong)(int)uVar23 - 1U;
        uVar29 = uVar29 + 1;
        *(undefined4 *)(FVar18.Data + uVar10 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uStack_184 = 1;
    local_188 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    if (local_80 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_88;
      }
      uVar22 = *(uint *)FVar21;
      uVar29 = uVar19;
      while (uVar22 == 0) {
        uStack_170 = (int)uVar29 + 0x20;
        uVar29 = (ulonglong)uStack_170;
        iVar24 = (int)uVar19;
        local_188 = iVar24 + 1;
        uVar19 = (ulonglong)local_188;
        if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < (int)local_188)
        goto LAB_1431da66e;
        uVar22 = ((uint *)((longlong)FVar21 + 4))[iVar24];
      }
      uStack_184 = -uVar22 & uVar22;
      uVar19 = (ulonglong)uStack_184 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_12c = (int)lVar13;
      uStack_174 = local_12c + -1 + (int)uVar29;
      uVar19 = (ulonglong)uStack_174;
      if ((int)local_80 < (int)uStack_174) {
LAB_1431da66e:
        uVar19 = (ulonglong)local_80;
        uStack_174 = local_80;
      }
    }
    local_178 = 0xffffffff;
    local_100 = (longlong *)local_a8;
    local_f8._padding_ = CONCAT44(uStack_184,local_188);
    local_f8.CurrentBitIndex = uStack_174;
    local_f8.UnvisitedBitMask = 0xffffffff;
    local_f8._28_4_ = uStack_16c;
    local_f8.BaseBitIndex = uStack_170;
    uVar28 = local_198._0_8_;
    local_f8.Array = pTStack_180;
    if ((int)uVar19 < (int)local_80) {
      do {
        pcVar1 = (char *)(*local_100 + (longlong)(int)uVar19 * 0x28);
        uVar11 = CityHash64(pcVar1,0x10);
        uVar22 = local_60 - 1 & (uint)uVar11;
        *(uint *)(pcVar1 + 0x24) = uVar22;
        FVar18.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_68.Data;
        }
        uVar29 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar22;
        *(undefined4 *)(pcVar1 + 0x20) = *(undefined4 *)(FVar18.Data + uVar29 * 4);
        *(int *)(FVar18.Data + uVar29 * 4) = (int)uVar19;
        local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
        uVar19 = (ulonglong)(uint)local_f8.CurrentBitIndex;
        uVar28 = local_198._0_8_;
      } while (local_f8.CurrentBitIndex < (local_f8.Array)->NumBits);
    }
  }
LAB_1431da716:
  local_19c = (this->FileManifestList).FileList.ArrayNum;
  uVar19 = (ulonglong)(int)local_19c;
  pFVar32 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar31 = pFVar32 + uVar19 * 0x60;
  pFVar26 = pFVar32 + 0x50;
  local_118 = pFVar31;
  while( true ) {
    uVar22 = (uint)uVar28;
    if ((this->FileManifestList).FileList.ArrayNum != (int)uVar19) {
      local_1a8 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1a8);
    }
    uVar23 = local_80;
    if (pFVar32 == pFVar31) break;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar20 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar20 = (longlong *)&param_1->field_0x10;
    }
    uVar12 = (**(code **)(*plVar20 + 8))();
    cVar7 = (*pcVar3)(uVar12,pFVar32);
    pTVar6 = local_128;
    if (cVar7 != '\0') {
      iVar24 = *(int *)pFVar26;
      pFVar25 = *(FGuid **)(pFVar26 + -8);
      pFVar2 = (FGuid *)((longlong)pFVar25 + (longlong)iVar24 * 0x18);
      while( true ) {
        if (*(int *)pFVar26 != iVar24) {
          local_1a7[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1a7);
        }
        pFVar31 = local_118;
        this = local_168;
        param_1 = local_110;
        if (pFVar25 == pFVar2) break;
        uVar11 = CityHash64((char *)pFVar25,0x10);
        iVar9 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                          (pTVar6,(uint)uVar11,pFVar25);
        if (iVar9 != -1) {
          uVar11 = CityHash64((char *)pFVar25,0x10);
          iVar9 = TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGuid>
                            ((TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                              *)local_a8,(uint)uVar11,pFVar25);
          if ((iVar9 == -1) ||
             (pFVar31 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar9 * 0x28),
             pFVar31 == (FScriptContainerElement *)0x0)) {
            local_1b8 = 0;
            local_120 = pFVar25;
            TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                      ((TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                        *)local_a8,(int)&local_198 + 8,
                       (TKeyInitializer<FGuid_const_&> *)(uVar11 & 0xffffffff),(bool *)&local_120);
            pFVar31 = (FScriptContainerElement *)
                      (local_a8._0_8_ + (longlong)(int)local_198.C * 0x28);
          }
          uVar28 = local_198._0_8_;
          BuildPatchServices::FBlockStructure::Add
                    ((FBlockStructure *)(pFVar31 + 0x10),(ulonglong)pFVar25[1].A,
                     (ulonglong)pFVar25[1].B,local_198.A);
        }
        pFVar25 = (FGuid *)&pFVar25[1].C;
      }
    }
    uVar19 = (ulonglong)local_19c;
    pFVar32 = pFVar32 + 0x60;
    pFVar26 = pFVar26 + 0x60;
  }
  iStack_158 = 0;
  local_140 = 0;
  uStack_144 = 0;
  if (local_80 != 0) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_88;
    }
    uVar27 = *(uint *)FVar21;
    while (uVar27 == 0) {
      lVar13 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_144 = local_80;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iStack_158)
      goto LAB_1431da911;
      uVar27 = ((uint *)((longlong)FVar21 + 4))[lVar13];
    }
    uVar22 = -uVar27 & uVar27;
    uVar19 = (ulonglong)uVar22 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_19c = (uint)lVar13;
    uStack_144 = local_140 + -1 + local_19c;
    if ((int)local_80 < (int)uStack_144) {
      uStack_144 = local_80;
    }
  }
LAB_1431da911:
  local_160 = (longlong *)local_a8;
  local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  iStack_138 = local_a8._8_4_ - local_74;
  uVar27 = local_80 & 0xffffffe0;
  uStack_148 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_144;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uVar22,iStack_158);
  iVar24 = (int)local_80 >> 5;
  TStack_d0._28_4_ = uStack_144;
  TStack_d0.BaseBitIndex = local_140;
  uStack_b0 = CONCAT44(uStack_134,iStack_138);
  bVar17 = (byte)local_80;
  uStack_154 = uVar22;
  uStack_13c = uStack_144;
  local_d8 = local_160;
  TStack_d0.Array = local_150;
  if (((int)local_80 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    iVar24 = (*pcVar3)();
    return iVar24;
  }
  pTVar6 = local_108;
  pFVar5 = local_168;
  iVar9 = local_1a4;
  if (uVar23 != local_80) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_88;
    }
    uVar22 = -1 << (bVar17 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar24 * 4);
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar24;
      uVar27 = uVar27 + 0x20;
      iVar24 = iVar24 + 1;
      uVar23 = local_80;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar24)
      goto LAB_1431daa20;
      uVar22 = ((uint *)((longlong)FVar21 + 4))[lVar13];
    }
    uVar19 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar23 = (int)lVar13 + -1 + uVar27;
    if ((int)local_80 < (int)uVar23) {
      uVar23 = local_80;
    }
  }
LAB_1431daa20:
  while( true ) {
    plVar20 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a0);
    }
    if (((TStack_d0.CurrentBitIndex == uVar23) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar20 == (longlong *)local_a8)) break;
    pFVar2 = (FGuid *)(*plVar20 + (longlong)TStack_d0.CurrentBitIndex * 0x28);
    ppFVar14 = TMapBase<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
               ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
                              *)&pFVar5->ChunkInfoLookup,pFVar2);
    pFVar4 = *ppFVar14;
    pFVar15 = BuildPatchServices::FBlockStructure::GetHead((FBlockStructure *)(pFVar2 + 1));
    pFVar16 = BuildPatchServices::FBlockStructure::GetTail((FBlockStructure *)(pFVar2 + 1));
    if ((pFVar15 == pFVar16) &&
       (pFVar15 = BuildPatchServices::FBlockStructure::GetHead((FBlockStructure *)(pFVar2 + 1)),
       pFVar15 != (FBlockEntry *)0x0)) {
      uVar22 = pFVar4->WindowSize;
      pFVar15 = BuildPatchServices::FBlockStructure::GetHead((FBlockStructure *)(pFVar2 + 1));
      uVar11 = BuildPatchServices::FBlockEntry::GetSize(pFVar15);
      if (uVar11 == uVar22) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (pTVar6,&local_198,(bool *)pFVar2);
        local_1a4 = local_1a4 + 1;
      }
    }
    iVar9 = local_1a4;
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return iVar9;
}

// GetAppID @ 1431dd0b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

uint __thiscall FBuildPatchAppManifest::GetAppID(FBuildPatchAppManifest *this)

{
  return (this->ManifestMeta).AppID;
}

// GetAppName @ 1431dd0c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetAppName(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).AppName;
}

// GetBuildFileList @ 1431dd140

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FBuildPatchAppManifest::GetBuildFileList
          (FBuildPatchAppManifest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1e0))(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBuildFileList @ 1431dd180

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FBuildPatchAppManifest::GetBuildFileList
          (FBuildPatchAppManifest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1c8))();
  return __return_storage_ptr__;
}

// GetBuildFileListView @ 1431dd1b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
FBuildPatchAppManifest::GetBuildFileListView
          (FBuildPatchAppManifest *this,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1d8))(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBuildFileListView @ 1431dd1f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
FBuildPatchAppManifest::GetBuildFileListView
          (FBuildPatchAppManifest *this,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1c0))();
  return __return_storage_ptr__;
}

// GetBuildId @ 1431dd220

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetBuildId(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).BuildId;
}

// GetBuildSize @ 1431dd230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetBuildSize
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  long64 lVar7;
  longlong lVar8;
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 auStackY_198 [32];
  bool local_168;
  undefined1 local_167;
  undefined1 local_166 [2];
  uint local_164;
  int local_160;
  uint local_15c;
  uint local_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_150;
  undefined4 local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  int iStack_110;
  undefined4 uStack_10c;
  FBuildPatchAppManifest *local_108;
  FScriptContainerElement *local_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_f0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FSparseArrayAllocationInfo local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar24 = 0;
  local_5c = 0x80;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  TStack_130._padding_._0_4_ = 0;
  uVar23 = 0;
  local_60 = 0;
  local_54 = 0;
  TStack_130._padding_._4_4_ = 1;
  local_48.Data = (FScriptContainerElement *)0x0;
  TStack_130.BaseBitIndex = 0;
  local_40 = 0;
  local_58 = -1;
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_130.CurrentBitIndex = TStack_130.BaseBitIndex;
  if (uVar12 != 0) {
    puVar22 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar26;
    }
    uVar18 = *puVar22;
    uVar20 = uVar24;
    uVar14 = uVar24;
    TStack_130.BaseBitIndex = 0;
    TStack_130._padding_._0_4_ = 0;
    while (uVar18 == 0) {
      iVar16 = (int)uVar20;
      TStack_130.BaseBitIndex = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)(uint)TStack_130.BaseBitIndex;
      TStack_130._padding_._0_4_ = iVar16 + 1;
      uVar20 = (ulonglong)(uint)TStack_130._padding_;
      TStack_130.CurrentBitIndex = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 <
          (int)(uint)TStack_130._padding_) goto LAB_1431dd31e;
      uVar18 = puVar22[(longlong)iVar16 + 1];
    }
    TStack_130._padding_._4_4_ = -uVar18 & uVar18;
    uVar20 = (ulonglong)TStack_130._padding_._4_4_ * 2 + 1;
    lVar8 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_15c = (uint)lVar8;
    TStack_130.CurrentBitIndex = (local_15c - 1) + TStack_130.BaseBitIndex;
    if ((int)uVar12 < TStack_130.CurrentBitIndex) {
      TStack_130.CurrentBitIndex = uVar12;
    }
  }
LAB_1431dd31e:
  uVar18 = *(uint *)&(param_1->Elements).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_110 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._28_4_ = local_8c;
  iVar16 = (int)uVar18 >> 5;
  uStack_c0 = CONCAT44(uStack_10c,iStack_110);
  TStack_e0.BaseBitIndex = TStack_130.BaseBitIndex;
  TStack_e0._28_4_ = local_8c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  local_164 = uVar18;
  local_138 = param_1;
  TStack_130.Array = pTVar26;
  local_108 = this;
  local_f8 = pTVar26;
  local_f0 = param_1;
  local_e8 = param_1;
  TStack_e0.Array = pTVar26;
  TStack_e0._padding_._0_4_ = (uint)TStack_130._padding_;
  TStack_e0._padding_._4_4_ = TStack_130._padding_._4_4_;
  TStack_e0.CurrentBitIndex = TStack_130.CurrentBitIndex;
  if ((((int)uVar18 < 0) || ((int)uVar12 < (int)uVar18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    lVar7 = (*pcVar1)();
    return lVar7;
  }
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar18 != uVar12) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar26;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
    while (uVar24 = uVar23, uVar18 == 0) {
      lVar8 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar12;
      local_164 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar16)
      goto LAB_1431dd430;
      uVar18 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar18 = (int)lVar8 + -1 + uVar17;
    local_164 = uVar18;
    if ((int)uVar12 < (int)uVar18) {
      uVar18 = uVar12;
      local_164 = uVar12;
    }
  }
LAB_1431dd430:
  do {
    pTVar3 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_167);
    }
    if (((TStack_e0.CurrentBitIndex == uVar18) && (TStack_e0.Array == pTVar26)) &&
       (pTVar3 == param_1)) {
      local_40 = 0;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_48.Data);
      }
      iVar16 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = -1;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return uVar24;
    }
    pTVar9 = TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&local_108->TaggedFilesLookup,
                    (FString *)
                    (*(longlong *)&pTVar3->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x18));
    if (pTVar9 != (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)
                  0x0) {
      local_15c = pTVar9->ArrayNum;
      uVar23 = (ulonglong)(int)local_15c;
      pFVar25 = (pTVar9->AllocatorInstance).Data;
      local_100 = pFVar25 + uVar23 * 8;
      while( true ) {
        pFVar2 = local_100;
        if (pTVar9->ArrayNum != (int)uVar23) {
          `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_166);
        }
        pTVar26 = local_f8;
        uVar18 = local_164;
        if (pFVar25 == pFVar2) break;
        lVar8 = *(longlong *)pFVar25;
        if (local_54 == 0) {
          iVar16 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                              (int *)(local_88 + 0xc));
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
          FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_68;
          }
          bVar11 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar11 = bVar11 - 0x20;
          }
          puVar22 = (uint *)((longlong)FVar19 + (longlong)(iVar6 >> 5) * 4);
          *puVar22 = *puVar22 & ~(1 << (bVar11 & 0x1f));
          iVar6 = local_58;
        }
        else {
          iVar6 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
          local_54 = local_54 + -1;
          iVar16 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar6 * 0x10) = 0xffffffff;
          }
        }
        local_58 = iVar6;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,local_b8,iVar16);
        pvVar4 = local_b8[0].Pointer;
        if (local_b8[0].Pointer !=
            (TSparseSetElement<BuildPatchServices::FFileManifest_const_*> *)0x0) {
          *(longlong *)local_b8[0].Pointer = lVar8;
          *(undefined4 *)((longlong)local_b8[0].Pointer + 8) = 0xffffffff;
        }
        local_160 = local_b8[0].Index;
        uVar12 = ((uint)(*(ulonglong *)local_b8[0].Pointer >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)local_b8[0].Pointer >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = uVar12 >> 0x10 ^ uVar12;
        bVar5 = TSet<BuildPatchServices::FFileManifest_const_*,DefaultKeyFuncs<BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                ::TryReplaceExisting
                          ((TSet<BuildPatchServices::FFileManifest_const_*,DefaultKeyFuncs<BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                            *)local_88,uVar12,local_b8[0].Pointer,&local_160,&local_168);
        if (!bVar5) {
          uVar17 = 1;
          uVar18 = local_88._8_4_ - local_54;
          if (3 < uVar18) {
            uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar10 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            uVar17 = 1 << ((byte)lVar10 & 0x1f);
          }
          if (((int)uVar18 < 1) || ((int)uVar17 <= (int)local_40)) {
            uVar12 = local_40 - 1 & uVar12;
            *(uint *)((longlong)pvVar4 + 0xc) = uVar12;
            FVar15.Data = (FScriptContainerElement *)local_50;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar15.Data = local_48.Data;
            }
            uVar23 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
            *(undefined4 *)((longlong)pvVar4 + 8) =
                 *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4);
            *(int *)((longlong)FVar15.Data + uVar23 * 4) = local_160;
          }
          else {
            local_40 = uVar17;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
            }
            if (uVar17 != 0) {
              uVar12 = uVar17;
              if (uVar17 < 2) {
                if ((ForElementType<FSetElementId>)local_48.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar12 = 0;
                  goto LAB_1431dd64d;
                }
              }
              else {
LAB_1431dd64d:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,uVar12,4);
              }
              if (0 < (int)uVar17) {
                uVar20 = (ulonglong)uVar17;
                uVar23 = 0;
                do {
                  FVar15.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar15.Data = local_48.Data;
                  }
                  uVar14 = uVar23 & (longlong)(int)uVar17 - 1U;
                  uVar23 = uVar23 + 1;
                  *(undefined4 *)((longlong)FVar15.Data + uVar14 * 4) = 0xffffffff;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
            }
            if (local_40 != 0) {
              pTStack_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
              uStack_154 = 1;
              local_158 = 0;
              uStack_144 = 0;
              iStack_140 = 0;
              if (local_60 != 0) {
                FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                if (local_68 != (ForElementType<unsigned_int>)0x0) {
                  FVar19 = local_68;
                }
                uVar12 = *(uint *)FVar19;
                local_158 = 0;
                while (uVar12 == 0) {
                  iStack_140 = iStack_140 + 0x20;
                  lVar10 = (longlong)(int)local_158;
                  local_158 = local_158 + 1;
                  if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 <
                      (int)local_158) goto LAB_1431dd74f;
                  uVar12 = ((uint *)((longlong)FVar19 + 4))[lVar10];
                }
                uStack_154 = -uVar12 & uVar12;
                uVar23 = (ulonglong)uStack_154 * 2 + 1;
                lVar10 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                uStack_144 = (int)lVar10 + -1 + iStack_140;
                if ((int)local_60 < (int)uStack_144) {
LAB_1431dd74f:
                  uStack_144 = local_60;
                }
              }
              local_148 = 0xffffffff;
              local_138 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88;
              TStack_130._padding_._0_4_ = local_158;
              TStack_130._padding_._4_4_ = uStack_154;
              TStack_130.UnvisitedBitMask = 0xffffffff;
              TStack_130.CurrentBitIndex = uStack_144;
              TStack_130._28_4_ = uStack_13c;
              TStack_130.BaseBitIndex = iStack_140;
              TStack_130.Array = pTStack_150;
              if ((int)uStack_144 < (int)local_60) {
                do {
                  puVar21 = (ulonglong *)
                            ((longlong)TStack_130.CurrentBitIndex * 0x10 +
                            *(longlong *)&local_138->Elements);
                  uVar12 = ((uint)(*puVar21 >> 0x14) & 0xffff ^ (uint)(*puVar21 >> 4)) * -0x7a143595
                  ;
                  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
                  uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_40 - 1;
                  *(uint *)((longlong)puVar21 + 0xc) = uVar12;
                  FVar15.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar15.Data = local_48.Data;
                  }
                  uVar23 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
                  *(undefined4 *)(puVar21 + 1) = *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4)
                  ;
                  *(int *)((longlong)FVar15.Data + uVar23 * 4) = TStack_130.CurrentBitIndex;
                  TStack_130.UnvisitedBitMask =
                       TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
                } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
              }
            }
          }
        }
        if (local_168 == false) {
          uVar24 = uVar24 + *(longlong *)(lVar8 + 0x58);
        }
        uVar23 = (ulonglong)local_15c;
        pFVar25 = pFVar25 + 8;
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    param_1 = local_f0;
  } while( true );
}

// GetBuildSize @ 1431dd940

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall FBuildPatchAppManifest::GetBuildSize(FBuildPatchAppManifest *this)

{
  return this->TotalBuildSize;
}

// GetChunkHash @ 1431dda40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::GetChunkHash(FBuildPatchAppManifest *this,FGuid *param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfoLookup,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->ChunkInfoLookup).field_0x0;
    plVar4 = (longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      *param_2 = *(ulong64 *)(*plVar4 + 0x10);
      return true;
    }
  }
  return false;
}

// GetChunkInfo @ 1431ddad0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FChunkInfo * __thiscall
FBuildPatchAppManifest::GetChunkInfo(FBuildPatchAppManifest *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfoLookup,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->ChunkInfoLookup).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FChunkInfo *)*puVar4;
    }
  }
  return (FChunkInfo *)0x0;
}

// GetChunkShaHash @ 1431ddbb0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::GetChunkShaHash
          (FBuildPatchAppManifest *this,FGuid *param_1,FSHAHash *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfoLookup,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->ChunkInfoLookup).field_0x0;
    plVar6 = (longlong *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      lVar5 = *plVar6;
      uVar2 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)param_2->Hash = *(undefined8 *)(lVar5 + 0x18);
      *(undefined8 *)(param_2->Hash + 8) = uVar2;
      uVar1 = *(uint *)(lVar5 + 0x28);
      *(uint *)(param_2->Hash + 0x10) = uVar1;
      lVar5 = *(longlong *)param_2->Hash - ::Zero._0_8_;
      if ((lVar5 == 0) && (lVar5 = *(longlong *)(param_2->Hash + 8) - ::Zero._8_8_, lVar5 == 0)) {
        lVar5 = (ulonglong)uVar1 - (ulonglong)(uint)::Zero._16_4_;
      }
      return lVar5 != 0;
    }
  }
  return false;
}

// GetChunksRequiredForFiles @ 1431ddd40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetChunksRequiredForFiles
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  bool *pbVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  bool *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_6c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1431ddded;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_80 + -1 + local_70;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_1431ddded:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_6c._4_8_ = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1431ddef0;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1431ddef0:
  while( true ) {
    uVar7 = local_6c._4_8_;
    if (*(int *)&((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_6c._4_8_)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_6c._4_8_)->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)uVar7 == param_1)) break;
    lVar9 = (**(code **)(this->_padding_ + 0x1f8))
                      (this,*(longlong *)
                             (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)uVar7 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar9 != 0) {
      iVar4 = *(int *)(lVar9 + 0x50);
      pbVar11 = *(bool **)(lVar9 + 0x48);
      pbVar2 = pbVar11 + (longlong)iVar4 * 0x18;
      while( true ) {
        if (*(int *)(lVar9 + 0x50) != iVar4) {
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_a8);
        }
        if (pbVar11 == pbVar2) break;
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (param_2,(FGuid *)local_6c,pbVar11);
        pbVar11 = pbVar11 + 0x18;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetCustomField @ 1431de370

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
FBuildPatchAppManifest::GetCustomField
          (FBuildPatchAppManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FBuildPatchCustomField *pFVar6;
  TTuple<FString,FString> *pTVar7;
  TSharedPtr<IManifestField,1> *pTVar8;
  wchar_t *pwVar9;
  FBuildPatchCustomField *pFVar10;
  TRawPtrProxy<FBuildPatchCustomField> local_res8;
  
  pFVar10 = (FBuildPatchCustomField *)0x0;
  __return_storage_ptr__->Object = (IManifestField *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->CustomFields,uVar4,param_1);
  if (iVar5 != -1) {
    pFVar6 = ::operator_new(0x18);
    if (pFVar6 != (FBuildPatchCustomField *)0x0) {
      pTVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)&this->CustomFields,param_1);
      if ((pTVar7 == (TTuple<FString,FString> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedPtr<IManifestField,1> *)(*pcVar2)();
        return pTVar8;
      }
      pFVar6->_padding_ = (longlong)&___7FBuildPatchCustomField__6B_;
      ::FString::FString(&pFVar6->CustomValue,(FString *)&pTVar7->field_0x10);
      pFVar10 = pFVar6;
    }
    local_res8.Object = pFVar10;
    TSharedPtr<IManifestField,1>::operator=<FBuildPatchCustomField>
              (__return_storage_ptr__,&local_res8);
  }
  return __return_storage_ptr__;
}

// GetDataList @ 1431de540

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetDataList
          (FBuildPatchAppManifest *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChunkDataList).ChunkList.ArrayNum;
  pFVar8 = (this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->ChunkDataList).ChunkList.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar7;
    }
    param_1->ArrayNum = iVar7 + 1;
    uVar4 = *(undefined8 *)pFVar8;
    uVar5 = *(undefined8 *)(pFVar8 + 8);
    pFVar8 = pFVar8 + 0x40;
    pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar2 = uVar4;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
  }
  return;
}

// GetDataList @ 1431de660

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetDataList
          (FBuildPatchAppManifest *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChunkDataList).ChunkList.ArrayNum;
  pFVar2 = (this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->ChunkDataList).ChunkList.ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (param_1,(FGuid *)&stack0x00000018,(bool *)pFVar2);
    pFVar2 = pFVar2 + 0x40;
  }
  return;
}

// GetDataSize @ 1431de6e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall FBuildPatchAppManifest::GetDataSize(FBuildPatchAppManifest *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  FChunkInfo **ppFVar6;
  long64 lVar7;
  FString **ppFVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfoLookup,(uint)uVar5,param_1);
  if (iVar4 != -1) {
    ppFVar6 = TMapBase<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
              ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
                             *)&this->ChunkInfoLookup,param_1);
    return (*ppFVar6)->FileSize;
  }
  if ((this->ManifestMeta).bIsFileData != false) {
    uVar5 = CityHash64((char *)param_1,0x10);
    iVar4 = TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
                        *)&this->FileNameLookup,(uint)uVar5,param_1);
    if (iVar4 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileNameLookup.Contains(DataGuid)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchManifest.cpp"
                         ,0x3a0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
    }
    pcVar2 = *(code **)(this->_padding_ + 0xb0);
    ppFVar8 = TMapBase<FGuid,FString_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>_>
              ::FindChecked((TMapBase<FGuid,FString_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>_>
                             *)&this->FileNameLookup,param_1);
    pFVar1 = ((*ppFVar8)->Data).AllocatorInstance.Data;
    iVar4 = ((*ppFVar8)->Data).ArrayNum;
    iStack_10 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_10 = 0;
    }
    local_28 = SUB84(pFVar1,0);
    uStack_24 = (undefined4)((ulonglong)pFVar1 >> 0x20);
    local_18 = local_28;
    uStack_14 = uStack_24;
    lVar7 = (*pcVar2)(this,&local_18);
    return lVar7;
  }
  return 0x100000;
}

// GetDataSize @ 1431de810

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetDataSize
          (FBuildPatchAppManifest *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  lVar4 = 0;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = (**(code **)(this->_padding_ + 0x1a8))(this,pFVar3);
    lVar4 = lVar4 + lVar2;
    pFVar3 = pFVar3 + 0x10;
  }
  return lVar4;
}

// GetDataSize @ 1431de890

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetDataSize
          (FBuildPatchAppManifest *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  long64 lVar1;
  
  lVar1 = Algo::
          Accumulate<__int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,_FBuildPatchAppManifest::GetDataSize_::__l2::<lambda_1>_>
                    (param_1,0,(<lambda_1>)this);
  return lVar1;
}

// GetDeltaDownloadSize @ 1431deac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetDeltaDownloadSize
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSharedRef<IBuildManifest,1> *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IBuildManifest *pIVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar7;
  long64 lVar8;
  atomic<int> *paVar9;
  undefined1 auStackY_368 [32];
  void *local_338;
  undefined8 local_330;
  IBuildManifest *local_328;
  TReferenceControllerBase<1> *local_320;
  undefined1 local_318 [32];
  void *local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  ForElementType<FSetElementId> local_2d8;
  int local_2d0;
  undefined1 local_2c8 [32];
  void *local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  ForElementType<FSetElementId> local_288;
  int local_280;
  undefined1 local_278 [32];
  void *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  int local_244;
  ForElementType<FSetElementId> local_238;
  int local_230;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  undefined1 local_188 [32];
  void *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  void *local_148;
  undefined4 local_140;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_24c = 0x80;
  local_278._0_8_ = (FScriptContainerElement *)0x0;
  local_278._8_8_ = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_244 = 0;
  local_238 = (ForElementType<FSetElementId>)0x0;
  local_230 = 0;
  local_248 = 0xffffffff;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_278,param_1);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar9 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_318._0_8_ = (FScriptContainerElement *)0x0;
  local_318._8_8_ = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2ec = 0x80;
  local_2e8 = 0xffffffff;
  local_2e4 = 0;
  local_2d8 = (ForElementType<FSetElementId>)0x0;
  local_2d0 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_318,param_3);
  if (local_278._8_4_ == local_244) {
    (**(code **)(this->_padding_ + 0xc0))(this,local_278);
  }
  if (local_318._8_4_ == local_2e4) {
    (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,local_318);
  }
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  local_d8.MaxBits = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  (**(code **)((longlong)*pIVar2 + 0x1d0))(pIVar2,local_318,local_188);
  (**(code **)((longlong)*pIVar2 + 0x188))(pIVar2,local_188,&local_e8);
  (**(code **)((longlong)*pIVar2 + 0x228))(pIVar2,local_318,&local_e8,local_138);
  lVar3 = this->_padding_;
  local_338 = (void *)0x0;
  local_330 = 0;
  local_1d8._0_8_ = (FScriptContainerElement *)0x0;
  local_1d8._8_8_ = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1ac = 0x80;
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_198 = (ForElementType<FSetElementId>)0x0;
  local_190 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_328 = pIVar2;
  local_320 = pTVar1;
  (**(code **)(lVar3 + 0x140))(this,&local_328,&local_338,local_1d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_320);
  local_2c8._0_8_ = (FScriptContainerElement *)0x0;
  local_2c8._8_8_ = 0;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  local_29c = 0x80;
  local_298 = 0xffffffff;
  local_294 = 0;
  local_288 = (ForElementType<FSetElementId>)0x0;
  local_280 = 0;
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8 = (ForElementType<FSetElementId>)0x0;
  local_1e0 = 0;
  (**(code **)(this->_padding_ + 0x1d0))(this,local_278,local_2c8);
  pTVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
                     ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_1d8,
                      &local_98,
                      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2c8);
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2c8 != pTVar6) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2c8,pTVar6);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  (**(code **)(this->_padding_ + 0x188))(this,local_2c8,local_228);
  pTVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                     ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_228,
                      (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&local_98,
                      (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_138);
  if ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_228 != pTVar7) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
    Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
              ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_228,pTVar7);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  lVar8 = (**(code **)(this->_padding_ + 0x198))(this);
  local_1e0 = 0;
  if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1e8);
  }
  iVar4 = SUB84(local_228._8_8_,4);
  local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
  }
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_200 = 0;
  if (0x80 < local_1fc) {
    local_1fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._0_8_);
  }
  local_280 = 0;
  if (local_288 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_288);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2c8,0,local_2c8._8_4_);
  iVar4 = SUB84(local_2c8._8_8_,4);
  local_2c8._8_8_ = local_2c8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_2c8,0,(int *)(local_2c8 + 0xc));
  }
  local_298 = 0xffffffff;
  local_294 = 0;
  local_2a0 = 0;
  if (0x80 < local_29c) {
    local_29c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),0);
  }
  if (local_2a8 != (void *)0x0) {
    FMemory::Free(local_2a8);
  }
  if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._0_8_);
  }
  local_190 = 0;
  if (local_198 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1d8,0,local_1d8._8_4_);
  iVar4 = SUB84(local_1d8._8_8_,4);
  local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
  }
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_1b0 = 0;
  if (0x80 < local_1ac) {
    local_1ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  if (local_338 != (void *)0x0) {
    FMemory::Free(local_338);
  }
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  iVar4 = SUB84(local_138._8_8_,4);
  local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
  }
  local_108 = 0xffffffff;
  local_104 = 0;
  local_110 = 0;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  uVar5 = local_e0 >> 0x20;
  local_e0 = local_e0 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_d8.NumBits = 0;
  if (0x80 < (uint)local_d8.MaxBits) {
    local_d8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  local_140 = 0;
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_188,0,local_188._8_4_);
  iVar4 = SUB84(local_188._8_8_,4);
  local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
  }
  local_158 = 0xffffffff;
  local_154 = 0;
  local_160 = 0;
  if (0x80 < local_15c) {
    local_15c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  local_2d0 = 0;
  if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2d8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_318,0,local_318._8_4_);
  iVar4 = SUB84(local_318._8_8_,4);
  local_318._8_8_ = local_318._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_318,0,(int *)(local_318 + 0xc));
  }
  local_2e8 = 0xffffffff;
  local_2e4 = 0;
  local_2f0 = 0;
  if (0x80 < local_2ec) {
    local_2ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10),0);
  }
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  if ((FScriptContainerElement *)local_318._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_318._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_230 = 0;
  if (local_238 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_278,0,local_278._8_4_);
  iVar4 = SUB84(local_278._8_8_,4);
  local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_278,0,(int *)(local_278 + 0xc));
  }
  local_248 = 0xffffffff;
  local_244 = 0;
  local_250 = 0;
  if (0x80 < local_24c) {
    local_24c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),0);
  }
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
  }
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  return lVar8;
}

// GetDeltaDownloadSize @ 1431df420

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetDeltaDownloadSize
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSharedRef<IBuildManifest,1> *param_2)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431df426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(this->_padding_ + 0x60))();
  return lVar1;
}

// GetDownloadSize @ 1431df480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetDownloadSize
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  FGuid *pFVar1;
  uint uVar2;
  code *pcVar3;
  FBuildPatchAppManifest *pFVar4;
  FScriptContainerElement *pFVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  long64 lVar9;
  longlong lVar10;
  ulong64 uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  FGuid *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  uint uVar25;
  undefined1 auStack_158 [32];
  char local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  uint local_134;
  uint local_130;
  FScriptContainerElement *local_128;
  FBuildPatchAppManifest *local_120;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *local_d8;
  FScriptContainerElement *local_d0;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar18 = 0;
  local_88.Elements._44_4_ = 0x80;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  uStack_110 = 0;
  local_88.Elements._40_4_ = 0;
  uVar17 = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_10c = 1;
  local_88.HashSize = 0;
  local_f8 = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  uVar2 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_fc = local_f8;
  if (uVar2 != 0) {
    puVar22 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar24;
    }
    uVar19 = *puVar22;
    uVar20 = uVar18;
    uVar21 = uVar18;
    local_f8 = 0;
    uStack_110 = 0;
    while (uVar19 == 0) {
      iVar15 = (int)uVar20;
      local_f8 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)local_f8;
      uStack_110 = iVar15 + 1;
      uVar20 = (ulonglong)uStack_110;
      uStack_fc = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)uStack_110)
      goto LAB_1431df56e;
      uVar19 = puVar22[(longlong)iVar15 + 1];
    }
    uStack_10c = -uVar19 & uVar19;
    uVar20 = (ulonglong)uStack_10c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_130 = (uint)lVar10;
    uStack_fc = (local_f8 - 1) + local_130;
    if ((int)uVar2 < (int)uStack_fc) {
      uStack_fc = uVar2;
    }
  }
LAB_1431df56e:
  uVar19 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_f0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar25 = uVar19 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_10c,uStack_110);
  uStack_100 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_fc;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_b8._28_4_ = uStack_fc;
  TStack_b8.BaseBitIndex = local_f8;
  uStack_98 = CONCAT44(uStack_ec,iStack_f0);
  local_134 = uVar19;
  local_120 = this;
  local_118 = param_1;
  local_108 = (undefined1 *)pTVar24;
  uStack_f4 = uStack_fc;
  local_e8._8_8_ = param_1;
  local_c8 = pTVar24;
  local_c0 = param_1;
  TStack_b8.Array = pTVar24;
  if ((((int)uVar19 < 0) || ((int)uVar2 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    lVar9 = (*pcVar3)();
    return lVar9;
  }
  uVar2 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar19 != uVar2) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)pTVar24;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar15 * 4);
    while (uVar18 = uVar17, uVar19 == 0) {
      lVar10 = (longlong)iVar15;
      uVar25 = uVar25 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar2;
      local_134 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar15) goto LAB_1431df680;
      uVar19 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar19 = (int)lVar10 + -1 + uVar25;
    local_134 = uVar19;
    if ((int)uVar2 < (int)uVar19) {
      uVar19 = uVar2;
      local_134 = uVar2;
    }
  }
LAB_1431df680:
  while( true ) {
    pTVar6 = local_c0;
    if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
        (int)uStack_98) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_137);
    }
    if (((TStack_b8.CurrentBitIndex == uVar19) && (TStack_b8.Array == pTVar24)) &&
       (pTVar6 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8._8_8_))
    break;
    local_d8 = TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->TaggedFilesLookup,
                      (FString *)
                      (*(longlong *)&pTVar6->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x18))
    ;
    if (local_d8 !=
        (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      local_130 = local_d8->ArrayNum;
      uVar17 = (ulonglong)(int)local_130;
      pFVar23 = (local_d8->AllocatorInstance).Data;
      local_d0 = pFVar23 + uVar17 * 8;
      while( true ) {
        pFVar5 = local_d0;
        local_128 = pFVar23;
        if (local_d8->ArrayNum != (int)uVar17) {
          `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_136);
        }
        pFVar4 = local_120;
        pTVar24 = local_c8;
        this = local_120;
        uVar19 = local_134;
        if (pFVar23 == pFVar5) break;
        lVar10 = *(longlong *)pFVar23;
        iVar15 = *(int *)(lVar10 + 0x50);
        pFVar16 = *(FGuid **)(lVar10 + 0x48);
        pFVar1 = (FGuid *)((longlong)pFVar16 + (longlong)iVar15 * 0x18);
        while( true ) {
          if (*(int *)(lVar10 + 0x50) != iVar15) {
            `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_135);
          }
          if (pFVar16 == pFVar1) break;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (&local_88,(FGuid *)local_e8,(bool *)pFVar16);
          if (local_138 == '\0') {
            uVar11 = CityHash64((char *)pFVar16,0x10);
            iVar8 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                                *)&pFVar4->ChunkInfoLookup,(uint)uVar11,pFVar16);
            if (iVar8 != -1) {
              lVar13 = (longlong)iVar8 * 0x20 + *(longlong *)&pFVar4->ChunkInfoLookup;
              plVar14 = (longlong *)(lVar13 + 0x10);
              if (lVar13 == 0) {
                plVar14 = (longlong *)0x0;
              }
              if (plVar14 != (longlong *)0x0) {
                uVar18 = uVar18 + *(longlong *)(*plVar14 + 0x38);
              }
            }
          }
          pFVar16 = (FGuid *)&pFVar16[1].C;
        }
        pFVar23 = local_128 + 8;
        uVar17 = (ulonglong)local_130;
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return uVar18;
}

// GetDownloadSize @ 1431df850

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall FBuildPatchAppManifest::GetDownloadSize(FBuildPatchAppManifest *this)

{
  return this->TotalDownloadSize;
}

// GetFeatureLevel @ 1431e01d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EFeatureLevel __thiscall FBuildPatchAppManifest::GetFeatureLevel(FBuildPatchAppManifest *this)

{
  return (this->ManifestMeta).FeatureLevel;
}

// GetFileHash @ 1431e01f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::GetFileHash(FBuildPatchAppManifest *this,FGuid *param_1,FSHAHash *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
                      *)&this->FileNameLookup,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this->FileNameLookup;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      uVar1 = (**(code **)(this->_padding_ + 0xb8))(this,*puVar5,param_2);
      return (bool)uVar1;
    }
  }
  return false;
}

// GetFileHash @ 1431e0280

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::GetFileHash(FBuildPatchAppManifest *this,FString *param_1,FSHAHash *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  TStringView<wchar_t> local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  local_18.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_18.Size = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  iVar3 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                      *)&this->FileManifestLookup,uVar2,&local_18);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->FileManifestLookup).field_0x0;
    plVar5 = (longlong *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      lVar4 = *plVar5;
      uVar1 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)param_2->Hash = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(param_2->Hash + 8) = uVar1;
      *(undefined4 *)(param_2->Hash + 0x10) = *(undefined4 *)(lVar4 + 0x30);
      return true;
    }
  }
  return false;
}

// GetFileList @ 1431e0320

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetFileList
          (FBuildPatchAppManifest *this,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar1 = (this->FileManifestList).FileList.ArrayNum;
  pFVar6 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->FileManifestList).FileList.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    local_38 = *(undefined8 *)pFVar6;
    iStack_30 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iStack_30 = 0;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    pFVar6 = pFVar6 + 0x60;
    pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar2 = local_38;
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,iStack_30);
  }
  return;
}

// GetFileList @ 1431e0470

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetFileList
          (FBuildPatchAppManifest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FileManifestList).FileList.ArrayNum;
  pFVar6 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->FileManifestList).FileList.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar6);
    pFVar6 = pFVar6 + 0x60;
  }
  return;
}

// GetFileList @ 1431e0590

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetFileList
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FileManifestList).FileList.ArrayNum;
  pFVar2 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->FileManifestList).FileList.ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_1,(FString *)&stack0x00000018,(bool *)pFVar2);
    pFVar2 = pFVar2 + 0x60;
  }
  return;
}

// GetFileManifest @ 1431e0620

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FFileManifest * __thiscall
FBuildPatchAppManifest::GetFileManifest(FBuildPatchAppManifest *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  TStringView<wchar_t> local_18;
  
  iVar2 = (param_1->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  local_18.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_18.Size = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  iVar2 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                      *)&this->FileManifestLookup,uVar1,&local_18);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->FileManifestLookup).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FFileManifest *)*puVar4;
    }
  }
  return (FFileManifest *)0x0;
}

// GetFilePartHash @ 1431e06b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::GetFilePartHash
          (FBuildPatchAppManifest *this,FGuid *param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfoLookup,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->ChunkInfoLookup).field_0x0;
    plVar4 = (longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      *param_2 = *(ulong64 *)(*plVar4 + 0x10);
      return true;
    }
  }
  return false;
}

// GetFileSize @ 1431e0740

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetFileSize
          (FBuildPatchAppManifest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  lVar5 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iStack_30 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iStack_30 = 0;
    }
    local_48 = (undefined4)*(undefined8 *)pFVar3;
    uStack_44 = (undefined4)((ulonglong)*(undefined8 *)pFVar3 >> 0x20);
    local_38 = local_48;
    uStack_34 = uStack_44;
    lVar2 = (**(code **)(this->_padding_ + 0xb0))(this,&local_38);
    lVar5 = lVar5 + lVar2;
    pFVar3 = pFVar3 + 0x10;
  }
  return lVar5;
}

// GetFileSize @ 1431e07f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetFileSize
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  long64 lVar1;
  
  lVar1 = Algo::
          Accumulate<__int64,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FBuildPatchAppManifest::GetFileSize_::__l2::<lambda_1>_>
                    (param_1,0,(<lambda_1>)this);
  return lVar1;
}

// GetFileSize @ 1431e0810

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
FBuildPatchAppManifest::GetFileSize(FBuildPatchAppManifest *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  iVar2 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                      *)&this->FileManifestLookup,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->FileManifestLookup).field_0x0;
    plVar4 = (longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      return *(long64 *)(*plVar4 + 0x58);
    }
  }
  return 0;
}

// GetFileTagList @ 1431e0880

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FBuildPatchAppManifest::GetFileTagList
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  (**(code **)(this->_padding_ + 0xc0))();
  return __return_storage_ptr__;
}

// GetFileTagList @ 1431e08d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetFileTagList
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  Algo::
  Transform<TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::*>
            (&this->TaggedFilesLookup,param_1,(pdm_493efb4e)0x0);
  return;
}

// GetLaunchCommand @ 1431e0fc0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetLaunchCommand(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).LaunchCommand;
}

// GetLaunchExe @ 1431e0fd0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetLaunchExe(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).LaunchExe;
}

// GetNumFiles @ 1431e15e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

uint __thiscall FBuildPatchAppManifest::GetNumFiles(FBuildPatchAppManifest *this)

{
  return (this->FileManifestList).FileList.ArrayNum;
}

// GetNumberOfChunkReferences @ 1431e15f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

uint __thiscall
FBuildPatchAppManifest::GetNumberOfChunkReferences(FBuildPatchAppManifest *this,FGuid *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  
  uVar4 = (this->FileManifestList).FileList.ArrayNum;
  uVar9 = (ulonglong)(int)uVar4;
  pFVar12 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  local_res20 = 0;
  pFVar14 = pFVar12 + 0x50;
  pFVar13 = pFVar12 + uVar9 * 0x60;
  while( true ) {
    if ((this->FileManifestList).FileList.ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar13) break;
    iVar5 = *(int *)pFVar14;
    puVar7 = *(uint **)(pFVar14 + -8);
    puVar10 = puVar7;
    uVar8 = local_res20;
    while( true ) {
      local_res20 = uVar8;
      if (*(int *)pFVar14 != iVar5) {
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (puVar10 == puVar7 + (longlong)iVar5 * 6) break;
      puVar11 = puVar10 + 6;
      puVar1 = puVar10 + 1;
      puVar2 = puVar10 + 3;
      puVar3 = puVar10 + 2;
      uVar6 = *puVar10;
      puVar10 = puVar11;
      uVar8 = local_res20 + 1;
      if (((*puVar1 != param_1->B || *puVar2 != param_1->D) || *puVar3 != param_1->C) ||
          uVar6 != param_1->A) {
        uVar8 = local_res20;
      }
    }
    pFVar12 = pFVar12 + 0x60;
    pFVar14 = pFVar14 + 0x60;
    uVar9 = (ulonglong)uVar4;
  }
  return local_res20;
}

// GetOutdatedFiles @ 1431e1770

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetOutdatedFiles
          (FBuildPatchAppManifest *this,TSharedPtr<FBuildPatchAppManifest,1> *param_1,
          FString *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001431e1776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x138))(this,param_1->Object);
  return;
}

// GetOutdatedFiles @ 1431e1790

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetOutdatedFiles
          (FBuildPatchAppManifest *this,TSharedRef<IBuildManifest,1> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  IBuildManifest *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x140);
  ::FString::FString(&local_18,L"");
  local_28 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = pTVar2;
  (*pcVar1)(this,&local_28,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetOutdatedFiles @ 1431e1840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetOutdatedFiles
          (FBuildPatchAppManifest *this,FBuildPatchAppManifest *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  (**(code **)(this->_padding_ + 0x1b8))(this,local_98);
  (**(code **)(this->_padding_ + 0x130))(this,param_1,param_2,local_98);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// GetOutdatedFiles @ 1431e1980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetOutdatedFiles
          (FBuildPatchAppManifest *this,FBuildPatchAppManifest *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  FString *pFVar10;
  IFileManager *pIVar11;
  FString *pFVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  int local_194;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  undefined1 local_15c [12];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_150;
  FBuildPatchAppManifest *local_148;
  FString *local_140;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FString local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iStack_188 = 0;
  local_194 = (param_2->Data).ArrayNum;
  local_150 = param_3;
  local_148 = param_1;
  local_140 = param_2;
  if (param_1 == (FBuildPatchAppManifest *)0x0) {
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    (**(code **)(this->_padding_ + 0x1b8))(this,local_f8);
    pTVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,
                        &local_a8,param_3);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (param_4,pTVar9);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f8,0,local_f8._8_4_);
    iVar3 = SUB84(local_f8._8_8_,4);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    return;
  }
  iVar3 = *(int *)&(param_3->Elements).field_0x28;
  uStack_184 = 1;
  puVar1 = &(param_3->Elements).field_0x10;
  local_170 = 0;
  iStack_174 = iStack_188;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(param_3->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_170 = 0;
    iStack_188 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_1431e1b6e;
      uVar16 = puVar18[lVar13 + 1];
    }
    uStack_184 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_160 = (int)lVar13;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar3 < iStack_174) {
      iStack_174 = iVar3;
    }
  }
LAB_1431e1b6e:
  uVar16 = *(uint *)&(param_3->Elements).field_0x28;
  TStack_130._padding_ = CONCAT44(uStack_184,iStack_188);
  iStack_168 = *(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34;
  uStack_178 = 0xffffffff;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_130.CurrentBitIndex = iStack_174;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_130._28_4_ = iStack_174;
  TStack_130.BaseBitIndex = local_170;
  uStack_110 = CONCAT44(uStack_164,iStack_168);
  local_190 = param_3;
  local_180 = puVar1;
  iStack_16c = iStack_174;
  local_138 = param_3;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_3->Elements).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(param_3->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1431e1c80;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_1431e1c80:
  do {
    pTVar9 = local_138;
    if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34 !=
        (int)uStack_110) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar9 == local_150)) {
      return;
    }
    pFVar10 = (FString *)
              (**(code **)(this->_padding_ + 0x1f8))
                        (this,*(longlong *)&pTVar9->Elements +
                              (longlong)TStack_130.CurrentBitIndex * 0x18);
    if (pFVar10 != (FString *)0x0) {
      cVar8 = (**(code **)(this->_padding_ + 0x230))(this,local_148,pFVar10);
      if (cVar8 == '\0') {
        if (1 < local_194) {
          pIVar11 = IFileManager::Get();
          pcVar6 = *(code **)((longlong)*pIVar11 + 0x110);
          pFVar12 = ::operator/(&local_108,local_140,pFVar10);
          if ((pFVar12->Data).ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
          lVar13 = (*pcVar6)(pIVar11,pwVar14);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if ((lVar13 < 0) ||
             (lVar5._0_4_ = pFVar10[5].Data.ArrayNum, lVar5._4_4_ = pFVar10[5].Data.ArrayMax,
             lVar13 != lVar5)) {
            pFVar12 = (FString *)(local_15c + 4);
            goto LAB_1431e1d5a;
          }
        }
      }
      else {
        pFVar12 = (FString *)local_15c;
LAB_1431e1d5a:
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_4,pFVar12,(bool *)pFVar10);
      }
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
}

// GetPrereqArgs @ 1431e2760

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetPrereqArgs(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).PrereqArgs;
}

// GetPrereqIds @ 1431e2770

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FBuildPatchAppManifest::GetPrereqIds(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).PrereqIds;
}

// GetPrereqName @ 1431e2780

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetPrereqName(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).PrereqName;
}

// GetPrereqPath @ 1431e2790

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetPrereqPath(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).PrereqPath;
}

// GetRemovableFiles @ 1431e2a70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetRemovableFiles
          (FBuildPatchAppManifest *this,FBuildPatchAppManifest *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TStringView<wchar_t> local_38;
  
  iVar1 = (param_1->FileManifestList).FileList.ArrayNum;
  pFVar7 = (param_1->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((param_1->FileManifestList).FileList.ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    local_38.DataPtr = *(wchar_t **)&pFVar7->field_0x0;
    local_38.Size = *(int *)&pFVar7[8].field_0x0 + -1;
    if (*(int *)&pFVar7[8].field_0x0 == 0) {
      local_38.Size = 0;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(local_38.Size,local_38.DataPtr);
    iVar6 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TStringView<wchar_t>_>
                      ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                        *)&this->FileManifestLookup,uVar5,&local_38);
    if (iVar6 == -1) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)param_2->ArrayMax * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                         (FString *)pFVar7);
    }
    pFVar7 = pFVar7 + 0x60;
  }
  return;
}

// GetRemovableFiles @ 1431e2bd0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetRemovableFiles
          (FBuildPatchAppManifest *this,TSharedRef<IBuildManifest,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IBuildManifest *pIVar2;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(this->_padding_ + 0x148))(this,pIVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetRemovableFiles @ 1431e2c10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetRemovableFiles
          (FBuildPatchAppManifest *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  IFileManager *pIVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  ulonglong in_stack_ffffffffffffff70;
  FString *local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  ::FString::FString(&local_58,param_1);
  FPaths::NormalizeDirectoryName(&local_58);
  ::FString::AppendChars(&local_58,L"/",1);
  FPaths::CollapseRelativeDirectories(&local_58,false);
  uVar8 = 0;
  local_68 = (FString *)0x0;
  local_60 = 0;
  pIVar6 = IFileManager::Get();
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x88))
            (pIVar6,&local_68,FVar9.Data,L"*",1,in_stack_ffffffffffffff70 & 0xffffffffffffff00,1);
  if (0 < (int)local_60) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < (int)local_60) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0) {
        uVar4 = 0;
      }
      ::FString::RightChop(local_68 + (int)uVar8,&local_48,uVar4);
      local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      local_38.Size = local_48.Data.ArrayNum - 1;
      if (local_48.Data.ArrayNum == 0) {
        local_38.Size = 0;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>
                        (local_38.Size,(wchar_t *)local_48.Data.AllocatorInstance.Data);
      iVar5 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TStringView<wchar_t>_>
                        ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                          *)&this->FileManifestLookup,uVar4,&local_38);
      if (iVar5 == -1) {
        uVar4 = 0;
        if ((int)uVar8 < (int)local_60) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)(local_68 + (int)uVar8);
        if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                           (FString *)pFVar7);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_60);
  }
  DestructItems<FString,int>(local_68,(int)local_60);
  if (local_68 != (FString *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetTaggedFileList @ 1431e3460

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetTaggedFileList
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_6c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1431e350d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_70 = (int)lVar10;
    iStack_84 = local_80 + -1 + local_70;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_1431e350d:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_6c._4_8_ = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1431e3610;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_1431e3610:
  while( true ) {
    uVar7 = local_6c._4_8_;
    if (*(int *)&((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_6c._4_8_)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_6c._4_8_)->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)uVar7 == param_1)) break;
    pTVar9 = TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->TaggedFilesLookup,
                    (FString *)
                    (*(longlong *)
                      (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)uVar7 + (longlong)TStack_60.CurrentBitIndex * 0x18));
    if (pTVar9 != (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)
                  0x0) {
      pFVar12 = (pTVar9->AllocatorInstance).Data;
      iVar4 = pTVar9->ArrayNum;
      pFVar2 = pFVar12 + (longlong)iVar4 * 8;
      while( true ) {
        if (pTVar9->ArrayNum != iVar4) {
          `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_a8);
        }
        if (pFVar12 == pFVar2) break;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_2,(FString *)local_6c,*(bool **)pFVar12);
        pFVar12 = pFVar12 + 8;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTaggedFileList @ 1431e36e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetTaggedFileList
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res20 [8];
  undefined1 local_c8 [4];
  uint local_c4;
  undefined8 local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar17;
    }
    uVar11 = *puVar15;
    local_90 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1431e378e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_80 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_1431e378e:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_c4 = uVar11;
  local_b0 = param_1;
  local_a0 = (undefined1 *)pTVar17;
  iStack_8c = iStack_94;
  local_78 = pTVar17;
  local_70 = param_1;
  TStack_68.Array = pTVar17;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar17;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      local_c4 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1431e38b0;
      uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_7c = (int)lVar10;
    uVar11 = local_7c + -1 + uVar16;
    local_c4 = uVar11;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
      local_c4 = uVar4;
    }
  }
LAB_1431e38b0:
  do {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) && (TStack_68.Array == pTVar17)) &&
       (pTVar7 == param_1)) {
      return;
    }
    pTVar9 = TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->TaggedFilesLookup,
                    (FString *)
                    (*(longlong *)&pTVar7->Elements + (longlong)TStack_68.CurrentBitIndex * 0x18));
    if (pTVar9 != (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)
                  0x0) {
      pFVar13 = (pTVar9->AllocatorInstance).Data;
      iVar3 = pTVar9->ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar3 * 8;
      while( true ) {
        if (pTVar9->ArrayNum != iVar3) {
          local_c8[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_c8);
        }
        pTVar17 = local_78;
        uVar11 = local_c4;
        if (pFVar13 == pFVar1) break;
        local_c0 = **(undefined8 **)pFVar13;
        iVar12 = *(int *)(*(undefined8 **)pFVar13 + 1);
        iStack_b8 = iVar12 + -1;
        if (iVar12 == 0) {
          iStack_b8 = 0;
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_c0) &&
            ((FScriptContainerElement *)&local_c0 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = param_2->ArrayNum;
        if (iVar12 == param_2->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          param_2->ArrayNum = iVar12;
        }
        param_2->ArrayNum = iVar12 + 1;
        pFVar13 = pFVar13 + 8;
        pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(undefined8 *)pFVar5 = local_c0;
        *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_b4,iStack_b8);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetTaggedFileList @ 1431e3a50

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::GetTaggedFileList
          (FBuildPatchAppManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [4];
  uint local_b4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)pTVar17;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1431e3afe;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_1431e3afe:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar18 = uVar12 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_b4 = uVar12;
  local_b0 = param_1;
  local_a0 = (undefined1 *)pTVar17;
  iStack_8c = iStack_94;
  local_78 = pTVar17;
  local_70 = param_1;
  TStack_68.Array = pTVar17;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)pTVar17;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar4;
      local_b4 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1431e3c20;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar12 = local_7c + -1 + uVar18;
    local_b4 = uVar12;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
      local_b4 = uVar4;
    }
  }
LAB_1431e3c20:
  while( true ) {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_68.CurrentBitIndex == uVar12) && (TStack_68.Array == pTVar17)) &&
       (pTVar8 == param_1)) break;
    pTVar10 = TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->TaggedFilesLookup,
                     (FString *)
                     (*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0x18));
    if (pTVar10 !=
        (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar13 = (pTVar10->AllocatorInstance).Data;
      iVar3 = pTVar10->ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar3 * 8;
      while( true ) {
        if (pTVar10->ArrayNum != iVar3) {
          local_b8[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_b8);
        }
        pTVar17 = local_78;
        if (pFVar13 == pFVar1) break;
        pFVar5 = *(FScriptContainerElement **)pFVar13;
        pFVar6 = (param_2->AllocatorInstance).Data;
        if (((pFVar6 <= pFVar5) && (pFVar5 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = param_2->ArrayNum;
        if (iVar14 == param_2->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          param_2->ArrayNum = iVar14;
        }
        param_2->ArrayNum = iVar14 + 1;
        ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar14 * 0x10),
                           (FString *)pFVar5);
        pFVar13 = pFVar13 + 8;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    uVar12 = local_b4;
  }
  return;
}

// GetVersionString @ 1431e3f50

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall FBuildPatchAppManifest::GetVersionString(FBuildPatchAppManifest *this)

{
  return &(this->ManifestMeta).BuildVersion;
}

// HasFileAttributes @ 1431e5220

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall FBuildPatchAppManifest::HasFileAttributes(FBuildPatchAppManifest *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FileManifestList).FileList.ArrayNum;
  pFVar2 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->FileManifestList).FileList.ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x34] != (FScriptContainerElement)0x0) {
      return true;
    }
    pFVar2 = pFVar2 + 0x60;
  }
  return false;
}

// InitLookups @ 1431e56e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FBuildPatchAppManifest::InitLookups(FBuildPatchAppManifest *this)

{
  undefined1 *puVar1;
  TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  FString *pFVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7 [7];
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  int local_e0;
  uint local_dc;
  FScriptContainerElement *local_d8;
  FString local_d0;
  undefined1 local_c0 [8];
  TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkInfo_const_*_&&> local_b8;
  FScriptContainerElement *local_a8;
  FString *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FChunkInfo *local_88;
  int local_80;
  FChunkInfo **local_78;
  FChunkInfo ***local_70;
  FChunkInfo *local_68;
  FScriptContainerElement **local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement **local_50;
  
  iVar8 = (this->FileManifestList).FileList.ArrayNum;
  iVar9 = 0;
  if ((this->ManifestMeta).bIsFileData != false) {
    iVar9 = iVar8;
  }
  TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
           *)&this->FileNameLookup,iVar9);
  TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
           *)&this->FileManifestLookup,iVar8);
  this_00 = &this->TaggedFilesLookup;
  bVar6 = 1 < *(int *)&(this->TaggedFilesLookup).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->TaggedFilesLookup).field_0x8);
  puVar1 = &(this->TaggedFilesLookup).field_0xc;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x34 = 0;
  iVar8 = *(int *)&(this->TaggedFilesLookup).field_0x2c;
  *(undefined4 *)&(this->TaggedFilesLookup).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->TaggedFilesLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TaggedFilesLookup).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->TaggedFilesLookup).field_0x48 = 1;
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_dc = (this->FileManifestList).FileList.ArrayNum;
  uVar11 = (ulonglong)(int)local_dc;
  pFVar16 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  pFVar14 = pFVar16 + 0x40;
  local_98 = pFVar16 + uVar11 * 0x60;
  do {
    pFVar5 = local_98;
    local_d8 = pFVar16;
    if ((this->FileManifestList).FileList.ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar16 == pFVar5) {
      TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
               *)&this->ChunkInfoLookup,(this->ChunkDataList).ChunkList.ArrayNum);
      iVar8 = (this->ChunkDataList).ChunkList.ArrayNum;
      pFVar14 = (this->ChunkDataList).ChunkList.AllocatorInstance.Data;
      pFVar16 = pFVar14 + (longlong)iVar8 * 0x40;
      while( true ) {
        if ((this->ChunkDataList).ChunkList.ArrayNum != iVar8) {
          `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar14 == pFVar16) break;
        local_50 = &local_90;
        local_90 = pFVar14;
        local_58 = pFVar14;
        TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkInfo_const_*_&&>_>
                  ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
                    *)&this->ChunkInfoLookup,&local_b8,(bool *)&local_58);
        pFVar14 = pFVar14 + 0x40;
      }
      this->TotalBuildSize = 0;
      this->TotalDownloadSize = 0;
      iVar8 = (this->FileManifestList).FileList.ArrayNum;
      pFVar14 = (this->FileManifestList).FileList.AllocatorInstance.Data;
      pFVar16 = pFVar14 + (longlong)iVar8 * 0x60;
      while( true ) {
        if ((this->FileManifestList).FileList.ArrayNum != iVar8) {
          `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_f8);
        }
        if (pFVar14 == pFVar16) break;
        this->TotalBuildSize = this->TotalBuildSize + *(longlong *)(pFVar14 + 0x58);
        pFVar14 = pFVar14 + 0x60;
      }
      iVar8 = (this->ChunkDataList).ChunkList.ArrayNum;
      pFVar14 = (this->ChunkDataList).ChunkList.AllocatorInstance.Data;
      pFVar16 = pFVar14 + (longlong)iVar8 * 0x40;
      while( true ) {
        if ((this->ChunkDataList).ChunkList.ArrayNum != iVar8) {
          `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_f7);
        }
        if (pFVar14 == pFVar16) break;
        this->TotalDownloadSize = this->TotalDownloadSize + *(longlong *)(pFVar14 + 0x38);
        pFVar14 = pFVar14 + 0x40;
      }
      return;
    }
    local_88 = *(FChunkInfo **)pFVar16;
    local_80 = *(int *)(pFVar14 + -0x38) + -1;
    if (*(int *)(pFVar14 + -0x38) == 0) {
      local_80 = 0;
    }
    local_78 = &local_88;
    local_70 = &local_b8.Value;
    local_b8.Value = (FChunkInfo **)pFVar16;
    TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TStringView<wchar_t>_&&,BuildPatchServices::FFileManifest_const_*_&&>_>
              ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                *)&this->FileManifestLookup,
               (TPairInitializer<TStringView<wchar_t>_&&,BuildPatchServices::FFileManifest_const_*_&&>
                *)local_c0,(bool *)&local_78);
    if ((this->ManifestMeta).bIsFileData != false) {
      local_a8 = pFVar16;
      if ((*(int *)(pFVar14 + 0x10) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_68 = *(FChunkInfo **)(pFVar14 + 8);
      local_60 = &local_a8;
      TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FString_const_*_&&>_>
                ((TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
                  *)&this->FileNameLookup,
                 (TPairInitializer<FGuid_const_&,FString_const_*_&&> *)(local_c0 + 4),
                 (bool *)&local_68);
    }
    pFVar5 = local_d8;
    iVar8 = *(int *)pFVar14;
    if (iVar8 == 0) {
      ::FString::FString(&local_d0,L"");
      iVar8 = local_d0.Data.ArrayNum + -1;
      FVar4.Data = local_d0.Data.AllocatorInstance.Data;
      if (local_d0.Data.ArrayNum == 0) {
        iVar8 = 0;
        FVar4.Data = (FScriptContainerElement *)L"";
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
      iVar8 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00,uVar7,&local_d0);
      if ((iVar8 == -1) ||
         (lVar13 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x28, lVar13 == 0)) {
        local_a0 = &local_d0;
        TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                  ((TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)&local_e0,(TKeyInitializer<FString_&&> *)(ulonglong)uVar7,
                   (bool *)&local_a0);
        lVar13 = *(longlong *)&this_00->field_0x0 + (longlong)local_e0 * 0x28;
      }
      local_f0 = pFVar16;
      if (((*(FScriptContainerElement ***)(lVar13 + 0x10) <= &local_f0) &&
          (&local_f0 < *(FScriptContainerElement ***)(lVar13 + 0x10) + *(int *)(lVar13 + 0x1c))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = *(int *)(lVar13 + 0x18);
      if (iVar8 == *(int *)(lVar13 + 0x1c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar13 + 0x10),(int *)(lVar13 + 0x1c));
      }
      *(int *)(lVar13 + 0x18) = iVar8 + 1;
      *(FScriptContainerElement **)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar8 * 8) = local_f0;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar15 = *(FString **)(pFVar14 + -8);
      pFVar17 = pFVar15 + iVar8;
      while( true ) {
        if (*(int *)pFVar14 != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        pFVar16 = local_d8;
        if (pFVar15 == pFVar17) break;
        iVar2 = (pFVar15->Data).ArrayNum;
        iVar9 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar12 = L"";
          iVar9 = 0;
        }
        else {
          pwVar12 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar12);
        pTVar10 = TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
                              *)this_00,uVar7,pFVar15);
        local_e8 = pFVar5;
        pFVar16 = (pTVar10->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < pFVar16 + (longlong)pTVar10->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = pTVar10->ArrayNum;
        if (iVar9 == pTVar10->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
        }
        pTVar10->ArrayNum = iVar9 + 1;
        pFVar15 = pFVar15 + 1;
        *(FScriptContainerElement **)((pTVar10->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             local_e8;
      }
    }
    uVar11 = (ulonglong)local_dc;
    pFVar16 = pFVar16 + 0x60;
    pFVar14 = pFVar14 + 0x60;
  } while( true );
}

// IsFileDataManifest @ 1431e7ba0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall FBuildPatchAppManifest::IsFileDataManifest(FBuildPatchAppManifest *this)

{
  return (this->ManifestMeta).bIsFileData;
}

// IsFileOutdated @ 1431e7bb0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::IsFileOutdated
          (FBuildPatchAppManifest *this,FBuildPatchAppManifest *param_1,FString *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == this) {
    return false;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x1f8))(param_1,param_2);
  lVar2 = (**(code **)(this->_padding_ + 0x1f8))(this,param_2);
  if ((((lVar1 != 0) && (lVar2 != 0)) &&
      (*(longlong *)(lVar1 + 0x20) == *(longlong *)(lVar2 + 0x20))) &&
     ((*(longlong *)(lVar1 + 0x28) == *(longlong *)(lVar2 + 0x28) &&
      (*(int *)(lVar1 + 0x30) == *(int *)(lVar2 + 0x30))))) {
    return false;
  }
  return true;
}

// IsFileOutdated @ 1431e7c60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::IsFileOutdated
          (FBuildPatchAppManifest *this,TSharedRef<FBuildPatchAppManifest,1> *param_1,
          FString *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431e7c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x230))(this,param_1->Object);
  return (bool)uVar1;
}

// LoadFromFile @ 1431e7f20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall FBuildPatchAppManifest::LoadFromFile(FBuildPatchAppManifest *this,FString *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  wchar_t *pwVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToArray(&local_18,pwVar3,0);
  if (bVar1) {
    uVar2 = (**(code **)(this->_padding_ + 0x160))(this,&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// NeedsResaving @ 1431eb540

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall FBuildPatchAppManifest::NeedsResaving(FBuildPatchAppManifest *this)

{
  return this->bNeedsResaving;
}

// RemoveCustomField @ 1431f02d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::RemoveCustomField(FBuildPatchAppManifest *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->CustomFields).Fields.field_0x8 !=
      *(int *)&(this->CustomFields).Fields.field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->CustomFields,uVar2,param_1);
  }
  return;
}

// SaveToFile @ 1431f8040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchAppManifest::SaveToFile
          (FBuildPatchAppManifest *this,FString *param_1,EFeatureLevel param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar3 = (**(code **)(this->_padding_ + 0x180))();
  if ((int)param_2 < iVar3) {
    return iVar3 <= (int)param_2;
  }
  pIVar4 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,pwVar7,0);
  bVar9 = pFVar5 != (FArchive *)0x0;
  if (pFVar5 == (FArchive *)0x0) {
    return false;
  }
  if (0xd < (int)param_2) {
    bVar9 = BuildPatchServices::FManifestData::Serialize(pFVar5,this,param_2);
    goto LAB_1431f81f7;
  }
  local_e8 = (wchar_t *)0x0;
  local_e0 = 0;
  (**(code **)(this->_padding_ + 0x178))(this,&local_e8);
  local_58.Data = (FScriptContainerElement *)0x0;
  pwVar7 = L"";
  if (((int)local_e0 == 0) || (pwVar7 = local_e8, local_e8 != (wchar_t *)0x0)) {
    sVar6 = wcslen(pwVar7);
    local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar7,(int)sVar6);
    uVar1 = local_48 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_1431f816d;
      }
    }
    else {
LAB_1431f816d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,1);
    }
    local_50 = local_d8;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((uchar *)local_50,uVar1,pwVar7,(int)sVar6 + 1);
  }
  else {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
  }
  (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_50,(longlong)local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free(local_e8);
  }
LAB_1431f81f7:
  cVar2 = (**(code **)(*(longlong *)pFVar5 + 0x210))();
  if ((cVar2 == '\0') || (bVar9 == false)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  return bVar9;
}

// SerializeToJSON @ 1431f8360

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchAppManifest::SerializeToJSON(FBuildPatchAppManifest *this,FString *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  int *piVar2;
  FCustomFields *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FArchive *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FCustomFields *pFVar9;
  bool bVar10;
  EJsonToken EVar11;
  int iVar12;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *pTVar13;
  FMemoryWriter *this_00;
  FMemoryWriter *pFVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  FString *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FGuid *pFVar25;
  undefined8 *puVar26;
  FGuid *pFVar27;
  undefined1 *puVar28;
  int iVar29;
  uint *puVar30;
  undefined8 *puVar31;
  FScriptContainerElement *pFVar32;
  undefined1 *puVar33;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_4d8;
  undefined1 local_4d7;
  undefined1 local_4d6;
  undefined1 local_4d5;
  undefined1 local_4d4;
  undefined1 local_4d3 [3];
  undefined4 local_4d0 [2];
  undefined2 local_4c8 [4];
  undefined2 local_4c0 [4];
  undefined2 local_4b8 [4];
  undefined2 local_4b0 [4];
  undefined2 local_4a8 [4];
  undefined2 local_4a0 [4];
  undefined2 local_498 [4];
  FScriptContainerElement *local_490;
  ulonglong local_488;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_480;
  longlong lStack_478;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  int local_458;
  undefined4 uStack_454;
  EFeatureLevel local_450;
  uint local_44c;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  undefined8 local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_> local_3c0;
  FScriptContainerElement *local_3b8;
  TReferenceControllerBase<1> *local_3b0;
  int local_3a8;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  int local_330;
  undefined1 local_328 [12];
  uint uStack_31c;
  TBitArray<FDefaultBitArrayAllocator> *local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  FCustomFields *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  uint uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  uint uStack_200;
  undefined4 uStack_1fc;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> local_1f8;
  undefined8 local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FString local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  TRangedForIterator local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  undefined4 local_3c;
  
  pTVar13 = ::operator_new(0x40);
  if (pTVar13 == (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
    pTVar13 = (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0;
  }
  else {
    this_00 = ::operator_new(0xa8);
    pFVar14 = (FMemoryWriter *)0x0;
    if (this_00 != (FMemoryWriter *)0x0) {
      local_3e8 = 0;
      pFVar14 = FMemoryWriter::FMemoryWriter(this_00,&pTVar13->Bytes,false,false,(FName)0x0);
    }
    pTVar13->_padding_ = (longlong)pFVar14;
    pTVar13->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
    pTVar13->_padding_ = 0;
    pTVar13->_padding_ = 0;
    pTVar13->_padding_ = 0;
    (pTVar13->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar13->Bytes).ArrayNum = 0;
    (pTVar13->Bytes).ArrayMax = 0;
    pTVar13->OutString = param_1;
  }
  local_3c0.Object = pTVar13;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>
            (&local_1f8,&local_3c0);
  local_3b0 = local_1f8.SharedReferenceCount.ReferenceController;
  if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  local_450 = (this->ManifestMeta).FeatureLevel;
  ::FString::FromBlob(&local_3a0,(uchar *)&local_450,4);
  iVar29 = (int)(local_1f8.Object)->_padding_;
  uVar20 = iVar29 - 1;
  uVar17 = 0;
  if ((int)uVar20 < iVar29) {
    uVar17 = ~uVar20 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) !=
       6) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             L"ManifestFileVersion");
  local_1e8 = local_3a0.Data.AllocatorInstance.Data;
  pFVar32 = local_1e8;
  uVar17 = 0;
  uStack_1e0 = local_3a0.Data.ArrayNum - 1;
  if (local_3a0.Data.ArrayNum == 0) {
    uStack_1e0 = uVar17;
  }
  local_1e8._0_4_ = SUB84(local_3a0.Data.AllocatorInstance.Data,0);
  local_1e8._4_4_ = (undefined4)((ulonglong)local_3a0.Data.AllocatorInstance.Data >> 0x20);
  local_e8 = (undefined4)local_1e8;
  uStack_e4 = local_1e8._4_4_;
  uStack_dc = uStack_1dc;
  local_1e8 = pFVar32;
  uStack_e0 = uStack_1e0;
  (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_e8);
  *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  iVar29 = (int)(local_1f8.Object)->_padding_;
  uVar21 = iVar29 - 1;
  uVar20 = uVar17;
  if ((int)uVar21 < iVar29) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) !=
       6) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             L"bIsFileData");
  EVar11 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                     ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                      (this->ManifestMeta).bIsFileData);
  *(EJsonToken *)&(local_1f8.Object)->_padding_ = EVar11;
  ::FString::FromBlob(&local_390,(uchar *)&(this->ManifestMeta).AppID,4);
  iVar29 = (int)(local_1f8.Object)->_padding_;
  uVar22 = iVar29 - 1;
  uVar21 = 0;
  uVar20 = uVar21;
  if ((int)uVar22 < iVar29) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) !=
       6) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,L"AppID");
  local_1d8 = local_390.Data.AllocatorInstance.Data;
  pFVar32 = local_1d8;
  uStack_1d0 = local_390.Data.ArrayNum - 1;
  if (local_390.Data.ArrayNum == 0) {
    uStack_1d0 = uVar21;
  }
  local_1d8._0_4_ = SUB84(local_390.Data.AllocatorInstance.Data,0);
  local_1d8._4_4_ = (undefined4)((ulonglong)local_390.Data.AllocatorInstance.Data >> 0x20);
  local_d8 = (undefined4)local_1d8;
  uStack_d4 = local_1d8._4_4_;
  uStack_cc = uStack_1cc;
  local_1d8 = pFVar32;
  uStack_d0 = uStack_1d0;
  (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_d8);
  *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,wchar_t_const_(&)[14]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [14])L"AppNameString",&(this->ManifestMeta).AppName);
  iVar29 = (int)(local_1f8.Object)->_padding_;
  uVar22 = iVar29 - 1;
  uVar20 = uVar21;
  if ((int)uVar22 < iVar29) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) !=
       6) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             L"BuildVersionString");
  pFVar32 = (this->ManifestMeta).BuildVersion.Data.AllocatorInstance.Data;
  iVar29 = (this->ManifestMeta).BuildVersion.Data.ArrayNum;
  uStack_1c0 = iVar29 - 1;
  if (iVar29 == 0) {
    uStack_1c0 = uVar21;
  }
  local_1c8._0_4_ = SUB84(pFVar32,0);
  local_1c8._4_4_ = (undefined4)((ulonglong)pFVar32 >> 0x20);
  local_c8 = (undefined4)local_1c8;
  uStack_c4 = local_1c8._4_4_;
  uStack_bc = uStack_1bc;
  local_1c8 = pFVar32;
  uStack_c0 = uStack_1c0;
  (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_c8);
  *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
  iVar29 = (int)(local_1f8.Object)->_padding_;
  uVar22 = iVar29 - 1;
  uVar20 = uVar21;
  if ((int)uVar22 < iVar29) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) !=
       6) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             L"LaunchExeString");
  pFVar32 = (this->ManifestMeta).LaunchExe.Data.AllocatorInstance.Data;
  iVar29 = (this->ManifestMeta).LaunchExe.Data.ArrayNum;
  uStack_2c0 = iVar29 - 1;
  if (iVar29 == 0) {
    uStack_2c0 = uVar21;
  }
  local_2c8._0_4_ = SUB84(pFVar32,0);
  local_2c8._4_4_ = (undefined4)((ulonglong)pFVar32 >> 0x20);
  local_b8 = (undefined4)local_2c8;
  uStack_b4 = local_2c8._4_4_;
  uStack_ac = uStack_2bc;
  local_2c8 = pFVar32;
  uStack_b0 = uStack_2c0;
  (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_b8);
  *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,wchar_t_const_(&)[14]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [14])L"LaunchCommand",&(this->ManifestMeta).LaunchCommand);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[10]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [10])L"PrereqIds");
  puVar33 = &(this->ManifestMeta).PrereqIds.Elements.field_0x10;
  local_3e0._padding_._0_4_ = 0;
  local_488 = 1;
  pTVar1 = &(this->ManifestMeta).PrereqIds;
  local_3e0._padding_._4_4_ = 1;
  local_3e0.UnvisitedBitMask = 0xffffffff;
  local_3e0.CurrentBitIndex = 0;
  local_3e0.BaseBitIndex = 0;
  local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  if (*(int *)&(this->ManifestMeta).PrereqIds.Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
  }
  lStack_478 = CONCAT44(local_3e0._padding_._4_4_,(undefined4)local_3e0._padding_);
  uStack_468 = CONCAT44(local_3e0.CurrentBitIndex,local_3e0.UnvisitedBitMask);
  uStack_460 = CONCAT44(local_3e0._28_4_,local_3e0.BaseBitIndex);
  local_458 = *(int *)&(this->ManifestMeta).PrereqIds.Elements.field_0x8 -
              *(int *)&(this->ManifestMeta).PrereqIds.Elements.field_0x34;
  pTStack_470 = local_3e0.Array;
  uStack_300._4_4_ = uStack_454;
  uStack_300._0_4_ = local_458;
  local_318 = local_3e0.Array;
  local_480 = pTVar1;
  local_328._0_8_ = pTVar1;
  unique0x10003c16 = lStack_478;
  uStack_310 = uStack_468;
  local_308 = uStack_460;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_78,(TBitArray<FDefaultBitArrayAllocator> *)puVar33,
                       *(int *)&(this->ManifestMeta).PrereqIds.Elements.field_0x28);
  lStack_478 = pTVar15->_padding_;
  pTStack_470 = pTVar15->Array;
  uStack_468._0_4_ = pTVar15->UnvisitedBitMask;
  uStack_468._4_4_ = pTVar15->CurrentBitIndex;
  uStack_460 = *(longlong *)&pTVar15->BaseBitIndex;
  local_458 = *(int *)&(this->ManifestMeta).PrereqIds.Elements.field_0x8 -
              *(int *)&(this->ManifestMeta).PrereqIds.Elements.field_0x34;
  local_a8._44_4_ = uStack_454;
  local_a8.InitialNum = local_458;
  local_480 = pTVar1;
  local_a8._padding_ = (longlong)pTVar1;
  local_a8._padding_ = lStack_478;
  local_a8._padding_ = (longlong)pTStack_470;
  local_a8._padding_ = uStack_468;
  local_a8._padding_ = uStack_460;
  bVar10 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_328,&local_a8);
  if (bVar10) {
    do {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 (FString *)
                 (*(longlong *)
                   (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_328._0_8_ + (longlong)uStack_310._4_4_ * 0x18));
      uStack_310 = CONCAT44(uStack_310._4_4_,(uint)uStack_310 & ~uStack_31c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_328 + 8));
      bVar10 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_328,&local_a8);
    } while (bVar10);
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,wchar_t_const_(&)[11]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [11])L"PrereqName",&(this->ManifestMeta).PrereqName);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,wchar_t_const_(&)[11]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [11])L"PrereqPath",&(this->ManifestMeta).PrereqPath);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,wchar_t_const_(&)[11]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [11])L"PrereqArgs",&(this->ManifestMeta).PrereqArgs);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[17]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [17])L"FileManifestList");
  local_44c = (this->FileManifestList).FileList.ArrayNum;
  uVar18 = (ulonglong)(int)local_44c;
  pFVar32 = (this->FileManifestList).FileList.AllocatorInstance.Data;
  local_3b8 = pFVar32 + uVar18 * 0x60;
  while( true ) {
    pFVar5 = local_3b8;
    local_490 = pFVar32;
    if ((this->FileManifestList).FileList.ArrayNum != (int)uVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    uVar20 = 0;
    uVar22 = 0;
    if (pFVar32 == pFVar5) break;
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
    iVar29 = (int)(local_1f8.Object)->_padding_;
    uVar23 = iVar29 - 1;
    uVar24 = uVar21;
    if ((int)uVar23 < iVar29) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
               L"Filename");
    uVar4 = *(undefined8 *)pFVar32;
    uStack_2b0 = *(int *)(pFVar32 + 8) - 1;
    if (*(int *)(pFVar32 + 8) == 0) {
      uStack_2b0 = uVar21;
    }
    local_2b8._0_4_ = (undefined4)uVar4;
    local_2b8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_1b8 = (undefined4)local_2b8;
    uStack_1b4 = local_2b8._4_4_;
    uStack_1ac = uStack_2ac;
    local_2b8 = uVar4;
    uStack_1b0 = uStack_2b0;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_1b8);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    pFVar16 = ::FString::FromBlob(&local_198,(uchar *)(pFVar32 + 0x20),0x14);
    iVar29 = (int)(local_1f8.Object)->_padding_;
    uVar23 = iVar29 - 1;
    uVar24 = uVar20;
    if ((int)uVar23 < iVar29) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
               L"FileHash");
    pFVar5 = (pFVar16->Data).AllocatorInstance.Data;
    iVar29 = (pFVar16->Data).ArrayNum;
    uStack_2a0 = iVar29 - 1;
    if (iVar29 == 0) {
      uStack_2a0 = uVar20;
    }
    local_2a8._0_4_ = SUB84(pFVar5,0);
    local_2a8._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
    local_1a8 = (undefined4)local_2a8;
    uStack_1a4 = local_2a8._4_4_;
    uStack_19c = uStack_29c;
    local_2a8 = pFVar5;
    uStack_1a0 = uStack_2a0;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_1a8);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (((byte)pFVar32[0x34] & 4) != 0) {
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar23 = iVar29 - 1;
      uVar24 = uVar17;
      if ((int)uVar23 < iVar29) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                    AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
           != 6) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 L"bIsUnixExecutable");
      EVar11 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                          local_1f8.Object,true);
      *(EJsonToken *)&(local_1f8.Object)->_padding_ = EVar11;
    }
    if (((byte)pFVar32[0x34] & 1) != 0) {
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar23 = iVar29 - 1;
      uVar24 = uVar17;
      if ((int)uVar23 < iVar29) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                    AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
           != 6) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 L"bIsReadOnly");
      EVar11 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                          local_1f8.Object,true);
      *(EJsonToken *)&(local_1f8.Object)->_padding_ = EVar11;
    }
    if (((byte)pFVar32[0x34] & 2) != 0) {
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar23 = iVar29 - 1;
      uVar24 = uVar20;
      if ((int)uVar23 < iVar29) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                    AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
           != 6) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 L"bIsCompressed");
      EVar11 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                          local_1f8.Object,true);
      *(EJsonToken *)&(local_1f8.Object)->_padding_ = EVar11;
    }
    if (*(int *)(pFVar32 + 0x18) < 2) {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteArrayStart<wchar_t_const_(&)[15]>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 (wchar_t (*) [15])L"FileChunkParts");
      pFVar25 = *(FGuid **)(pFVar32 + 0x48);
      iVar29 = *(int *)(pFVar32 + 0x50);
      pFVar27 = (FGuid *)((longlong)pFVar25 + (longlong)iVar29 * 0x18);
      while( true ) {
        if (*(int *)(local_490 + 0x50) != iVar29) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar25 == pFVar27) break;
        iVar12 = (int)(local_1f8.Object)->_padding_;
        if (0 < iVar12) {
          uVar24 = uVar20;
          if ((int)(iVar12 - 1U) < iVar12) {
            uVar24 = ~(iVar12 - 1U) >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)
                           &(local_1f8.Object)->_padding_)->AllocatorInstance).Data +
                         (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) != 5) &&
               (*(EJsonToken *)&(local_1f8.Object)->_padding_ != Identifier)) &&
              (*(EJsonToken *)&(local_1f8.Object)->_padding_ != Colon)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CanWriteObjectWithoutIdentifier()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x6f,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        EVar11 = *(EJsonToken *)&(local_1f8.Object)->_padding_;
        if ((EVar11 != CurlyOpen) &&
           ((Identifier < EVar11 || ((0x1013U >> (EVar11 & 0x1f) & 1) == 0)))) {
          local_4c8[0] = 0x2c;
          (**(code **)(*(longlong *)(local_1f8.Object)->_padding_ + 0x188))
                    ((FArchive *)(local_1f8.Object)->_padding_,local_4c8,2);
          *(EJsonToken *)&(local_1f8.Object)->_padding_ = (EJsonToken)local_488;
        }
        local_4c0[0] = 0x7b;
        (**(code **)(*(longlong *)(local_1f8.Object)->_padding_ + 0x188))
                  ((FArchive *)(local_1f8.Object)->_padding_,local_4c0,2);
        *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) =
             *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) + 1;
        pFVar32 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data;
        local_4d0[0] = 6;
        if (((pFVar32 <= (FScriptContainerElement *)local_4d0) &&
            ((FScriptContainerElement *)local_4d0 <
             pFVar32 + (longlong)*(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (int)(local_1f8.Object)->_padding_;
        piVar2 = (int *)((longlong)&(local_1f8.Object)->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)&(local_1f8.Object)->_padding_,piVar2);
        }
        *(int *)&(local_1f8.Object)->_padding_ = iVar12 + 1;
        local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_438.Data.ArrayNum = 0;
        local_438.Data.ArrayMax = 0;
        *(undefined4 *)
         ((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
          AllocatorInstance).Data + (longlong)iVar12 * 4) = local_4d0[0];
        *(EJsonToken *)&(local_1f8.Object)->_padding_ = CurlyOpen;
        FGuid::AppendString(pFVar25,&local_438,Digits);
        iVar12 = (int)(local_1f8.Object)->_padding_;
        uVar23 = iVar12 - 1;
        uVar24 = uVar20;
        if ((int)uVar23 < iVar12) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)
                      ->AllocatorInstance).Data +
                     (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                   L"Guid");
        local_288 = local_438.Data.AllocatorInstance.Data;
        pFVar32 = local_288;
        uStack_280 = local_438.Data.ArrayNum - 1;
        if (local_438.Data.ArrayNum == 0) {
          uStack_280 = uVar20;
        }
        local_288._0_4_ = SUB84(local_438.Data.AllocatorInstance.Data,0);
        local_288._4_4_ = (undefined4)((ulonglong)local_438.Data.AllocatorInstance.Data >> 0x20);
        local_178 = (undefined4)local_288;
        uStack_174 = local_288._4_4_;
        uStack_16c = uStack_27c;
        local_288 = pFVar32;
        uStack_170 = uStack_280;
        (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_178);
        *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
        if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.Data.AllocatorInstance.Data);
        }
        ::FString::FromBlob(&local_380,(uchar *)(pFVar25 + 1),4);
        iVar12 = (int)(local_1f8.Object)->_padding_;
        uVar23 = iVar12 - 1;
        uVar24 = uVar20;
        if ((int)uVar23 < iVar12) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)
                      ->AllocatorInstance).Data +
                     (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                   L"Offset");
        local_278 = local_380.Data.AllocatorInstance.Data;
        pFVar32 = local_278;
        uStack_270 = local_380.Data.ArrayNum - 1;
        if (local_380.Data.ArrayNum == 0) {
          uStack_270 = uVar20;
        }
        local_278._0_4_ = SUB84(local_380.Data.AllocatorInstance.Data,0);
        local_278._4_4_ = (undefined4)((ulonglong)local_380.Data.AllocatorInstance.Data >> 0x20);
        local_168 = (undefined4)local_278;
        uStack_164 = local_278._4_4_;
        uStack_15c = uStack_26c;
        local_278 = pFVar32;
        uStack_160 = uStack_270;
        (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_168);
        *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
        ::FString::FromBlob(&local_370,(uchar *)&pFVar25[1].B,4);
        iVar12 = (int)(local_1f8.Object)->_padding_;
        uVar23 = iVar12 - 1;
        uVar24 = uVar20;
        if ((int)uVar23 < iVar12) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)
                      ->AllocatorInstance).Data +
                     (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                   L"Size");
        local_268 = local_370.Data.AllocatorInstance.Data;
        pFVar32 = local_268;
        uStack_260 = local_370.Data.ArrayNum - 1;
        if (local_370.Data.ArrayNum == 0) {
          uStack_260 = uVar20;
        }
        local_268._0_4_ = SUB84(local_370.Data.AllocatorInstance.Data,0);
        local_268._4_4_ = (undefined4)((ulonglong)local_370.Data.AllocatorInstance.Data >> 0x20);
        local_158 = (undefined4)local_268;
        uStack_154 = local_268._4_4_;
        uStack_14c = uStack_25c;
        local_268 = pFVar32;
        uStack_150 = uStack_260;
        (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_158);
        *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
        iVar12 = (int)(local_1f8.Object)->_padding_;
        uVar23 = iVar12 - 1;
        uVar24 = uVar22;
        if ((int)uVar23 < iVar12) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)
                      ->AllocatorInstance).Data +
                     (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x8e,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (FArchive *)(local_1f8.Object)->_padding_;
        *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) =
             *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) + -1;
        local_4b8[0] = 0x7d;
        (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_4b8,2);
        if (((int)(local_1f8.Object)->_padding_ < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (int)(local_1f8.Object)->_padding_;
        uVar24 = iVar12 - 1;
        pFVar32 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)uVar24 * 4;
        iVar12 = ~uVar24 + iVar12;
        if (iVar12 != 0) {
          memmove(pFVar32,pFVar32 + 4,(longlong)iVar12 << 2);
        }
        iVar12 = (int)(local_1f8.Object)->_padding_ + -1;
        *(int *)&(local_1f8.Object)->_padding_ = iVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)&(local_1f8.Object)->_padding_,iVar12,
                   (int *)((longlong)&(local_1f8.Object)->_padding_ + 4));
        pFVar25 = (FGuid *)&pFVar25[1].C;
        *(EJsonToken *)&(local_1f8.Object)->_padding_ = CurlyClose;
      }
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar23 = iVar29 - 1;
      uVar24 = uVar22;
      if ((int)uVar23 < iVar29) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                    AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
           != 5) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Array",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0xb9,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (FArchive *)(local_1f8.Object)->_padding_;
      *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) =
           *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) + -1;
      local_4b0[0] = 0x5d;
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_4b0,2);
      if (((int)(local_1f8.Object)->_padding_ < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar24 = iVar29 - 1;
      pFVar32 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)uVar24 * 4;
      iVar29 = ~uVar24 + iVar29;
      if (iVar29 != 0) {
        memmove(pFVar32,pFVar32 + 4,(longlong)iVar29 << 2);
      }
      iVar29 = (int)(local_1f8.Object)->_padding_ + -1;
      *(int *)&(local_1f8.Object)->_padding_ = iVar29;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)&(local_1f8.Object)->_padding_,iVar29,
                 (int *)((longlong)&(local_1f8.Object)->_padding_ + 4));
      EVar11 = SquareClose;
      pFVar32 = local_490;
    }
    else {
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar23 = iVar29 - 1;
      uVar24 = uVar20;
      if ((int)uVar23 < iVar29) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                    AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
           != 6) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 L"SymlinkTarget");
      uVar4 = *(undefined8 *)(pFVar32 + 0x10);
      uStack_290 = *(int *)(pFVar32 + 0x18) - 1;
      if (*(int *)(pFVar32 + 0x18) == 0) {
        uStack_290 = uVar20;
      }
      local_298._0_4_ = (undefined4)uVar4;
      local_298._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_188 = (undefined4)local_298;
      uStack_184 = local_298._4_4_;
      uStack_17c = uStack_28c;
      local_298 = uVar4;
      uStack_180 = uStack_290;
      (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_188);
      EVar11 = String;
    }
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = EVar11;
    if (0 < *(int *)(pFVar32 + 0x40)) {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteArrayStart<wchar_t_const_(&)[12]>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
                 (wchar_t (*) [12])L"InstallTags");
      iVar29 = *(int *)(pFVar32 + 0x40);
      puVar26 = *(undefined8 **)(pFVar32 + 0x38);
      puVar31 = puVar26 + (longlong)iVar29 * 2;
      while( true ) {
        if (*(int *)(local_490 + 0x40) != iVar29) {
          local_4d8 = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_4d8);
        }
        if (puVar26 == puVar31) break;
        iVar12 = (int)(local_1f8.Object)->_padding_;
        if (0 < iVar12) {
          uVar24 = uVar22;
          if ((int)(iVar12 - 1U) < iVar12) {
            uVar24 = ~(iVar12 - 1U) >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)
                          &(local_1f8.Object)->_padding_)->AllocatorInstance).Data +
                        (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4) != 5) &&
              (*(EJsonToken *)&(local_1f8.Object)->_padding_ != Identifier)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CanWriteValueWithoutIdentifier()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0xfa,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        EVar11 = *(EJsonToken *)&(local_1f8.Object)->_padding_;
        if ((EVar11 != CurlyOpen) &&
           ((Identifier < EVar11 || ((0x1013U >> (EVar11 & 0x1f) & 1) == 0)))) {
          local_4a8[0] = 0x2c;
          (**(code **)(*(longlong *)(local_1f8.Object)->_padding_ + 0x188))
                    ((FArchive *)(local_1f8.Object)->_padding_,local_4a8,2);
          *(EJsonToken *)&(local_1f8.Object)->_padding_ = (EJsonToken)local_488;
        }
        uVar4 = *puVar26;
        uStack_250 = *(int *)(puVar26 + 1) - 1;
        if (*(int *)(puVar26 + 1) == 0) {
          uStack_250 = uVar22;
        }
        local_258._0_4_ = (undefined4)uVar4;
        local_258._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_148 = (undefined4)local_258;
        uStack_144 = local_258._4_4_;
        uStack_13c = uStack_24c;
        local_258 = uVar4;
        uStack_140 = uStack_250;
        (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_148);
        puVar26 = puVar26 + 2;
        *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
      }
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar24 = iVar29 - 1;
      uVar22 = uVar20;
      if ((int)uVar24 < iVar29) {
        uVar22 = ~uVar24 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                    AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
           != 5) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Array",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0xb9,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (FArchive *)(local_1f8.Object)->_padding_;
      *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) =
           *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) + -1;
      local_4a0[0] = 0x5d;
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_4a0,2);
      if (((int)(local_1f8.Object)->_padding_ < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar29 = (int)(local_1f8.Object)->_padding_;
      uVar22 = iVar29 - 1;
      pFVar32 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                AllocatorInstance).Data + (longlong)(int)uVar22 * 4;
      iVar29 = ~uVar22 + iVar29;
      if (iVar29 != 0) {
        memmove(pFVar32,pFVar32 + 4,(longlong)iVar29 << 2);
      }
      iVar29 = (int)(local_1f8.Object)->_padding_ + -1;
      *(int *)&(local_1f8.Object)->_padding_ = iVar29;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)&(local_1f8.Object)->_padding_,iVar29,
                 (int *)((longlong)&(local_1f8.Object)->_padding_ + 4));
      *(EJsonToken *)&(local_1f8.Object)->_padding_ = SquareClose;
      pFVar32 = local_490;
    }
    iVar29 = (int)(local_1f8.Object)->_padding_;
    uVar22 = iVar29 - 1;
    if ((int)uVar22 < iVar29) {
      uVar20 = ~uVar22 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x8e,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (FArchive *)(local_1f8.Object)->_padding_;
    *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) =
         *(int *)((longlong)&(local_1f8.Object)->_padding_ + 4) + -1;
    local_498[0] = 0x7d;
    (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_498,2);
    if (((int)(local_1f8.Object)->_padding_ < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar29 = (int)(local_1f8.Object)->_padding_;
    uVar20 = iVar29 - 1;
    pFVar5 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
             AllocatorInstance).Data + (longlong)(int)uVar20 * 4;
    iVar29 = ~uVar20 + iVar29;
    if (iVar29 != 0) {
      memmove(pFVar5,pFVar5 + 4,(longlong)iVar29 << 2);
    }
    iVar29 = (int)(local_1f8.Object)->_padding_ + -1;
    *(int *)&(local_1f8.Object)->_padding_ = iVar29;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)&(local_1f8.Object)->_padding_,iVar29,
               (int *)((longlong)&(local_1f8.Object)->_padding_ + 4));
    uVar18 = (ulonglong)local_44c;
    pFVar32 = pFVar32 + 0x60;
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = CurlyClose;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[14]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [14])L"ChunkHashList");
  pFVar27 = (FGuid *)(this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  iVar29 = (this->ChunkDataList).ChunkList.ArrayNum;
  pFVar25 = pFVar27 + (longlong)iVar29 * 4;
  while( true ) {
    if ((this->ChunkDataList).ChunkList.ArrayNum != iVar29) {
      local_4d7 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_4d7);
    }
    if (pFVar27 == pFVar25) break;
    ::FString::FromBlob(&local_360,(uchar *)(pFVar27 + 1),8);
    local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.Data.ArrayNum = 0;
    local_428.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar27,&local_428,Digits);
    iVar12 = (int)(local_1f8.Object)->_padding_;
    uVar24 = iVar12 - 1;
    uVar21 = uVar20;
    if ((int)uVar24 < iVar12) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
               &local_428);
    local_248 = local_360.Data.AllocatorInstance.Data;
    pFVar32 = local_248;
    uStack_240 = local_360.Data.ArrayNum - 1;
    if (local_360.Data.ArrayNum == 0) {
      uStack_240 = uVar20;
    }
    local_248._0_4_ = SUB84(local_360.Data.AllocatorInstance.Data,0);
    local_248._4_4_ = (undefined4)((ulonglong)local_360.Data.AllocatorInstance.Data >> 0x20);
    local_138 = (undefined4)local_248;
    uStack_134 = local_248._4_4_;
    uStack_12c = uStack_23c;
    local_248 = pFVar32;
    uStack_130 = uStack_240;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_138);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    pFVar27 = pFVar27 + 4;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[13]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [13])L"ChunkShaList");
  iVar29 = (this->ChunkDataList).ChunkList.ArrayNum;
  pFVar27 = (FGuid *)(this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  pFVar25 = pFVar27 + (longlong)iVar29 * 4;
  while( true ) {
    if ((this->ChunkDataList).ChunkList.ArrayNum != iVar29) {
      local_4d6 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_4d6);
    }
    if (pFVar27 == pFVar25) break;
    local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_448.Data.ArrayNum = 0;
    local_448.Data.ArrayMax = 0;
    BytesToHex((uchar *)&pFVar27[1].C,0x14,&local_448);
    local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_418.Data.ArrayNum = 0;
    local_418.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar27,&local_418,Digits);
    iVar12 = (int)(local_1f8.Object)->_padding_;
    uVar24 = iVar12 - 1;
    uVar21 = uVar20;
    if ((int)uVar24 < iVar12) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
               &local_418);
    local_238 = local_448.Data.AllocatorInstance.Data;
    pFVar32 = local_238;
    uStack_230 = local_448.Data.ArrayNum - 1;
    if (local_448.Data.ArrayNum == 0) {
      uStack_230 = uVar20;
    }
    local_238._0_4_ = SUB84(local_448.Data.AllocatorInstance.Data,0);
    local_238._4_4_ = (undefined4)((ulonglong)local_448.Data.AllocatorInstance.Data >> 0x20);
    local_128 = (undefined4)local_238;
    uStack_124 = local_238._4_4_;
    uStack_11c = uStack_22c;
    local_238 = pFVar32;
    uStack_120 = uStack_230;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_128);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    pFVar27 = pFVar27 + 4;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[14]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [14])L"DataGroupList");
  iVar29 = (this->ChunkDataList).ChunkList.ArrayNum;
  pFVar27 = (FGuid *)(this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  pFVar25 = pFVar27 + (longlong)iVar29 * 4;
  while( true ) {
    if ((this->ChunkDataList).ChunkList.ArrayNum != iVar29) {
      local_4d5 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_4d5);
    }
    if (pFVar27 == pFVar25) break;
    ::FString::FromBlob(&local_350,(uchar *)&pFVar27[2].D,(uint)local_488);
    local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.Data.ArrayNum = 0;
    local_408.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar27,&local_408,Digits);
    iVar12 = (int)(local_1f8.Object)->_padding_;
    uVar24 = iVar12 - 1;
    uVar21 = uVar22;
    if ((int)uVar24 < iVar12) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
               &local_408);
    local_228 = local_350.Data.AllocatorInstance.Data;
    pFVar32 = local_228;
    uStack_220 = local_350.Data.ArrayNum - 1;
    if (local_350.Data.ArrayNum == 0) {
      uStack_220 = uVar22;
    }
    local_228._0_4_ = SUB84(local_350.Data.AllocatorInstance.Data,0);
    local_228._4_4_ = (undefined4)((ulonglong)local_350.Data.AllocatorInstance.Data >> 0x20);
    local_118 = (undefined4)local_228;
    uStack_114 = local_228._4_4_;
    uStack_10c = uStack_21c;
    local_228 = pFVar32;
    uStack_110 = uStack_220;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_118);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    pFVar27 = pFVar27 + 4;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[18]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [18])L"ChunkFilesizeList");
  iVar29 = (this->ChunkDataList).ChunkList.ArrayNum;
  pFVar27 = (FGuid *)(this->ChunkDataList).ChunkList.AllocatorInstance.Data;
  pFVar25 = pFVar27 + (longlong)iVar29 * 4;
  while( true ) {
    if ((this->ChunkDataList).ChunkList.ArrayNum != iVar29) {
      local_4d4 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_4d4);
    }
    if (pFVar27 == pFVar25) break;
    ::FString::FromBlob(&local_340,(uchar *)&pFVar27[3].C,8);
    local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f8.Data.ArrayNum = 0;
    local_3f8.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar27,&local_3f8,Digits);
    iVar12 = (int)(local_1f8.Object)->_padding_;
    uVar24 = iVar12 - 1;
    uVar21 = uVar22;
    if ((int)uVar24 < iVar12) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
               &local_3f8);
    local_218 = local_340.Data.AllocatorInstance.Data;
    pFVar32 = local_218;
    uStack_210 = local_340.Data.ArrayNum - 1;
    if (local_340.Data.ArrayNum == 0) {
      uStack_210 = uVar22;
    }
    local_218._0_4_ = SUB84(local_340.Data.AllocatorInstance.Data,0);
    local_218._4_4_ = (undefined4)((ulonglong)local_340.Data.AllocatorInstance.Data >> 0x20);
    local_108 = (undefined4)local_218;
    uStack_104 = local_218._4_4_;
    uStack_fc = uStack_20c;
    local_218 = pFVar32;
    uStack_100 = uStack_210;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_108);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    pFVar27 = pFVar27 + 4;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[13]>
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,
             (wchar_t (*) [13])L"CustomFields");
  pTStack_470 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CustomFields).Fields.field_0x10;
  uVar21 = *(uint *)&(this->CustomFields).Fields.field_0x28;
  pFVar3 = &this->CustomFields;
  uStack_468._4_4_ = uVar20;
  uVar22 = uVar20;
  uStack_460._0_4_ = uVar20;
  if (uVar21 != 0) {
    puVar30 = *(uint **)&(this->CustomFields).Fields.field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)pTStack_470;
    }
    uVar24 = *puVar30;
    uStack_460._0_4_ = 0;
    uVar22 = 0;
    while (uVar24 == 0) {
      lVar19 = (longlong)(int)uVar22;
      uStack_460._0_4_ = (uint)uStack_460 + 0x20;
      uVar22 = uVar22 + 1;
      uStack_468._4_4_ = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
      goto LAB_1431fa1b3;
      uVar24 = puVar30[lVar19 + 1];
    }
    local_488 = (ulonglong)(-uVar24 & uVar24);
    uVar18 = local_488 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_330 = (int)lVar19;
    uStack_468._4_4_ = ((uint)uStack_460 - 1) + local_330;
    if ((int)uVar21 < (int)uStack_468._4_4_) {
      uStack_468._4_4_ = uVar21;
    }
  }
LAB_1431fa1b3:
  uVar24 = *(uint *)&(this->CustomFields).Fields.field_0x28;
  local_458 = *(int *)&(this->CustomFields).Fields.field_0x8 -
              *(int *)&(this->CustomFields).Fields.field_0x34;
  puVar33 = &(this->CustomFields).Fields.field_0x10;
  uStack_468._0_4_ = 0xffffffff;
  uVar23 = uVar24 & 0xffffffe0;
  lStack_478 = CONCAT44((int)local_488,uVar22);
  uStack_460._4_4_ = local_3c;
  iVar29 = (int)uVar24 >> 5;
  uStack_2d0 = CONCAT44(uStack_454,local_458);
  TStack_2f0.UnvisitedBitMask = 0xffffffff;
  TStack_2f0.CurrentBitIndex = uStack_468._4_4_;
  TStack_2f0.BaseBitIndex = (uint)uStack_460;
  TStack_2f0._28_4_ = local_3c;
  local_480 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)pFVar3;
  local_2f8 = pFVar3;
  TStack_2f0._padding_ = lStack_478;
  TStack_2f0.Array = pTStack_470;
  if ((((int)uVar24 < 0) || ((int)uVar21 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar21 = *(uint *)&(this->CustomFields).Fields.field_0x28;
  if (uVar24 != uVar21) {
    puVar7 = *(undefined1 **)&(this->CustomFields).Fields.field_0x20;
    puVar28 = puVar33;
    if (puVar7 != (undefined1 *)0x0) {
      puVar28 = puVar7;
    }
    uVar22 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar29 * 4);
    while (uVar22 == 0) {
      lVar19 = (longlong)iVar29;
      uVar23 = uVar23 + 0x20;
      iVar29 = iVar29 + 1;
      uVar24 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_1431fa2e3;
      uVar22 = *(uint *)(puVar28 + lVar19 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_3a8 = (int)lVar19;
    uVar24 = (uVar23 - 1) + local_3a8;
    if ((int)uVar21 < (int)uVar24) {
      uVar24 = uVar21;
    }
  }
LAB_1431fa2e3:
  while( true ) {
    pFVar9 = local_2f8;
    if (*(int *)&(local_2f8->Fields).field_0x8 - *(int *)&(local_2f8->Fields).field_0x34 !=
        (int)uStack_2d0) {
      local_4d3[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4d3);
    }
    if (((TStack_2f0.CurrentBitIndex == uVar24) &&
        (TStack_2f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar33)) && (pFVar9 == pFVar3)
       ) break;
    iVar29 = (int)(local_1f8.Object)->_padding_;
    uVar22 = iVar29 - 1;
    pFVar16 = (FString *)
              (*(longlong *)&pFVar9->Fields + (longlong)TStack_2f0.CurrentBitIndex * 0x28);
    uVar21 = uVar20;
    if ((int)uVar22 < iVar29) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_1f8.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)(local_1f8.Object)->_padding_ * 4 + -4)
         != 6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object,pFVar16)
    ;
    pFVar32 = pFVar16[1].Data.AllocatorInstance.Data;
    iVar29 = pFVar16[1].Data.ArrayNum;
    uStack_200 = iVar29 - 1;
    if (iVar29 == 0) {
      uStack_200 = uVar17;
    }
    local_208._0_4_ = SUB84(pFVar32,0);
    local_208._4_4_ = (undefined4)((ulonglong)pFVar32 >> 0x20);
    local_f8 = (undefined4)local_208;
    uStack_f4 = local_208._4_4_;
    uStack_ec = uStack_1fc;
    local_208 = pFVar32;
    uStack_f0 = uStack_200;
    (**(code **)((local_1f8.Object)->_padding_ + 0x28))(local_1f8.Object,&local_f8);
    *(EJsonToken *)&(local_1f8.Object)->_padding_ = String;
    TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8.Object);
  (**(code **)((local_1f8.Object)->_padding_ + 8))(local_1f8.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b0);
  return;
}

// SetCustomField @ 1431fa680

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
FBuildPatchAppManifest::SetCustomField
          (FBuildPatchAppManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,
          FString *param_1,FString *param_2)

{
  FString *local_18;
  FString *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->CustomFields,
             (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000008,(bool *)&local_18
            );
  (**(code **)(this->_padding_ + 0xf8))(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SetCustomField @ 1431fa6f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
FBuildPatchAppManifest::SetCustomField
          (FBuildPatchAppManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,
          FString *param_1,double *param_2)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x110);
  ::FString::FromBlob(&local_18,(uchar *)param_2,8);
  (*pcVar1)(this,__return_storage_ptr__,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetCustomField @ 1431fa770

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
FBuildPatchAppManifest::SetCustomField
          (FBuildPatchAppManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,
          FString *param_1,long64 *param_2)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x110);
  ::FString::FromBlob(&local_18,(uchar *)param_2,8);
  (*pcVar1)(this,__return_storage_ptr__,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

