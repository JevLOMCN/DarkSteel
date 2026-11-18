// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 8

// FCachedVolumeInfo @ 142ad5d00

FCachedVolumeInfo * __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::FCachedVolumeInfo
          (FCachedVolumeInfo *this,FCachedVolumeInfo *param_1)

{
  ulong64 uVar1;
  
  TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                      *)param_1);
  (this->VolumeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeName).Data.AllocatorInstance.Data = (param_1->VolumeName).Data.AllocatorInstance.Data
  ;
  (param_1->VolumeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeName).Data.ArrayNum = (param_1->VolumeName).Data.ArrayNum;
  (this->VolumeName).Data.ArrayMax = (param_1->VolumeName).Data.ArrayMax;
  (param_1->VolumeName).Data.ArrayNum = 0;
  (param_1->VolumeName).Data.ArrayMax = 0;
  this->JournalId = param_1->JournalId;
  uVar1 = param_1->NextJournalEntryToScan;
  (this->DirsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NextJournalEntryToScan = uVar1;
  (this->DirsToRemove).AllocatorInstance.Data = (param_1->DirsToRemove).AllocatorInstance.Data;
  (param_1->DirsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirsToRemove).ArrayNum = (param_1->DirsToRemove).ArrayNum;
  (this->DirsToRemove).ArrayMax = (param_1->DirsToRemove).ArrayMax;
  (param_1->DirsToRemove).ArrayNum = 0;
  (param_1->DirsToRemove).ArrayMax = 0;
  (this->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastError).Data.AllocatorInstance.Data = (param_1->LastError).Data.AllocatorInstance.Data;
  (param_1->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastError).Data.ArrayNum = (param_1->LastError).Data.ArrayNum;
  (this->LastError).Data.ArrayMax = (param_1->LastError).Data.ArrayMax;
  (param_1->LastError).Data.ArrayNum = 0;
  (param_1->LastError).Data.ArrayMax = 0;
  this->JournalIdOnDisk = param_1->JournalIdOnDisk;
  this->NextJournalEntryOnDisk = param_1->NextJournalEntryOnDisk;
  this->JournalMaximumSize = param_1->JournalMaximumSize;
  this->bJournalAvailable = param_1->bJournalAvailable;
  return this;
}

// ~FCachedVolumeInfo @ 142ada810

void __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::~FCachedVolumeInfo(FCachedVolumeInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->LastError).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DirsToRemove).AllocatorInstance.Data,(this->DirsToRemove).ArrayNum);
  pFVar1 = (this->DirsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VolumeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Dirs).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Dirs).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ConditionalConstruct @ 142aedb60

void __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::ConditionalConstruct
          (FCachedVolumeInfo *this,FString *param_1)

{
  if ((this->VolumeName).Data.ArrayNum < 2) {
    ::FString::operator=(&this->VolumeName,param_1);
    InitializePlatformData(this);
    return;
  }
  return;
}

// FindDir @ 142af6770

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::FindDir
          (FCachedVolumeInfo *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  FCachedDirScanDir *pFVar2;
  
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pFVar2 = TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
                       *)this,uVar1,param_1);
  return pFVar2;
}

// FindOrAddDir @ 142af74a0

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::FindOrAddDir
          (FCachedVolumeInfo *this,TStringView<wchar_t> *param_1)

{
  FCachedDirScanDir *pFVar1;
  bool local_res10 [24];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10[0] = false;
  pFVar1 = FindOrAddDir(this,&local_18,local_res10);
  return pFVar1;
}

// FindOrAddDir @ 142af74d0

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::FindOrAddDir
          (FCachedVolumeInfo *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  longlong lVar1;
  uint uVar2;
  FCachedDirScanDir *pFVar3;
  FString *pFVar4;
  int local_res8 [2];
  FString *local_res10;
  FString local_38;
  FString local_28;
  
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pFVar3 = TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
                       *)this,uVar2,param_1);
  *param_2 = pFVar3 == (FCachedDirScanDir *)0x0;
  if (pFVar3 == (FCachedDirScanDir *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar4 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    if (&local_38 != pFVar4) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res10 = &local_38;
    TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                *)this,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)uVar2,
               (bool *)&local_res10);
    lVar1 = *(longlong *)&this->Dirs;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FCachedDirScanDir *)((longlong)local_res8[0] * 0x58 + lVar1 + 0x10);
  }
  return pFVar3;
}

// InitializePlatformData @ 142b03600

void __thiscall
UE::AssetDataGather::Private::FCachedVolumeInfo::InitializePlatformData(FCachedVolumeInfo *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPlatformFileManager *pFVar4;
  IPlatformFile *pIVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  
  if (1 < (this->VolumeName).Data.ArrayNum) {
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->VolumeName).Data.AllocatorInstance.Data,L"<EmptyVolume>");
    if (iVar3 != 0) {
      pFVar4 = FPlatformFileManager::Get();
      pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4);
      if ((this->VolumeName).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->VolumeName).Data.AllocatorInstance.Data;
      }
      iVar3 = (**(code **)((longlong)*pIVar5 + 0x168))
                        (pIVar5,pwVar7,&this->JournalIdOnDisk,&this->NextJournalEntryOnDisk,
                         &this->LastError);
      this->bJournalAvailable = iVar3 == 0;
      if (iVar3 == 0) {
        pFVar4 = FPlatformFileManager::Get();
        pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4);
        if ((this->VolumeName).Data.ArrayNum == 0) {
          uVar6 = (**(code **)((longlong)*pIVar5 + 0x160))(pIVar5,L"",0,0);
        }
        else {
          uVar6 = (**(code **)((longlong)*pIVar5 + 0x160))
                            (pIVar5,(this->VolumeName).Data.AllocatorInstance.Data,0,0);
        }
      }
      else {
        uVar6 = 0;
      }
      this->JournalMaximumSize = uVar6;
      if (this->NextJournalEntryToScan == 0xffffffffffffffff) {
        this->JournalId = this->JournalIdOnDisk;
        if ((this->bJournalAvailable != false) &&
           (this->NextJournalEntryOnDisk == 0xffffffffffffffff)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bJournalAvailable || NextJournalEntryOnDisk != FileJournalEntryHandleInvalid"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererDiscoveryCache.cpp"
                             ,0x26a,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        this->NextJournalEntryToScan = this->NextJournalEntryOnDisk;
      }
      return;
    }
  }
  this->bJournalAvailable = false;
  this->JournalMaximumSize = 0;
  this->JournalIdOnDisk = 0xffffffffffffffff;
  this->NextJournalEntryOnDisk = 0xffffffffffffffff;
  this->JournalId = 0xffffffffffffffff;
  this->NextJournalEntryToScan = 0xffffffffffffffff;
  return;
}

// PreSave @ 142b0bdd0

void __thiscall UE::AssetDataGather::Private::FCachedVolumeInfo::PreSave(FCachedVolumeInfo *this)

{
  RemoveDirs(this,&this->DirsToRemove);
  return;
}

