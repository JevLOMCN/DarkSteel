// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// SerializeForCache<FAssetRegistryReader_&> @ 142ad27c0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDiskCachedAssetData::SerializeForCache<FAssetRegistryReader_&>
          (FDiskCachedAssetData *this,FAssetRegistryReader *param_1)

{
  FDateTime *pFVar1;
  byte *pbVar2;
  long64 *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  plVar3 = *(long64 **)param_1->_padding_;
  if ((long64 *)((longlong *)param_1->_padding_)[1] < plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)this);
    }
  }
  else {
    (this->ModificationTime).Ticks = *plVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 8;
  }
  pFVar1 = &this->LastGatheredTime;
  pbVar2 = (byte *)((longlong)&param_1->_padding_ + 2);
  plVar3 = *(long64 **)param_1->_padding_;
  if ((long64 *)((longlong *)param_1->_padding_)[1] < plVar3 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)pFVar1);
    }
  }
  else {
    pFVar1->Ticks = *plVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 8;
  }
  (**(code **)(param_1->_padding_ + 0x178))(param_1,&this->Extension);
  ::operator<<((FArchive *)param_1,&this->HasMarkOfTheWeb);
  plVar4 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->AssetDataList).ArrayNum;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->_padding_ & 1) != 0) {
    TArray<FAssetData,TSizedDefaultAllocator<32>_>::SetNum
              (&this->AssetDataList,local_res8[0],Default);
  }
  uVar8 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->AssetDataList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FAssetData::SerializeForCacheWithTagsAndBundles
                ((FAssetData *)
                 ((this->AssetDataList).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x68),
                 (FArchive *)param_1,
                 `FAssetData::SerializeForCache<FAssetRegistryReader_&>'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_res8[0]);
  }
  (**(code **)(param_1->_padding_ + 0x178))(param_1,&this->DependencyData);
  FAssetPackageData::SerializeForCache(&(this->DependencyData).PackageData,(FArchive *)param_1);
  TArrayPrivateFriend::
  Serialize<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&(this->DependencyData).PackageDependencies);
  TArrayPrivateFriend::
  Serialize<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&(this->DependencyData).SearchableNameDependencies);
  ::operator<<((FArchive *)param_1,&(this->DependencyData).DependsNodeReservations);
  return;
}

// SerializeForCache<FAssetRegistryWriter_&> @ 142ad29d0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDiskCachedAssetData::SerializeForCache<FAssetRegistryWriter_&>
          (FDiskCachedAssetData *this,FAssetRegistryWriter *param_1)

{
  FDateTime *pFVar1;
  byte *pbVar2;
  long64 *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  plVar3 = *(long64 **)param_1->_padding_;
  if ((long64 *)((longlong *)param_1->_padding_)[1] < plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)this);
    }
  }
  else {
    (this->ModificationTime).Ticks = *plVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 8;
  }
  pFVar1 = &this->LastGatheredTime;
  pbVar2 = (byte *)((longlong)&param_1->_padding_ + 2);
  plVar3 = *(long64 **)param_1->_padding_;
  if ((long64 *)((longlong *)param_1->_padding_)[1] < plVar3 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)pFVar1);
    }
  }
  else {
    pFVar1->Ticks = *plVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 8;
  }
  (**(code **)(param_1->_padding_ + 0x178))(param_1,&this->Extension);
  ::operator<<((FArchive *)param_1,&this->HasMarkOfTheWeb);
  plVar4 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->AssetDataList).ArrayNum;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->_padding_ & 1) != 0) {
    TArray<FAssetData,TSizedDefaultAllocator<32>_>::SetNum
              (&this->AssetDataList,local_res8[0],Default);
  }
  uVar8 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->AssetDataList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FAssetData::SerializeForCacheWithTagsAndBundles
                ((FAssetData *)
                 ((this->AssetDataList).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x68),
                 (FArchive *)param_1,
                 `FAssetData::SerializeForCache<FAssetRegistryWriter_&>'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_res8[0]);
  }
  (**(code **)(param_1->_padding_ + 0x178))(param_1,&this->DependencyData);
  FAssetPackageData::SerializeForCache(&(this->DependencyData).PackageData,(FArchive *)param_1);
  TArrayPrivateFriend::
  Serialize<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&(this->DependencyData).PackageDependencies);
  TArrayPrivateFriend::
  Serialize<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&(this->DependencyData).SearchableNameDependencies);
  ::operator<<((FArchive *)param_1,&(this->DependencyData).DependsNodeReservations);
  return;
}

// FDiskCachedAssetData @ 142ad63e0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

FDiskCachedAssetData * __thiscall
FDiskCachedAssetData::FDiskCachedAssetData(FDiskCachedAssetData *this)

{
  (this->ModificationTime).Ticks = 0;
  (this->LastGatheredTime).Ticks = 0;
  (this->Extension).ComparisonIndex = 0;
  (this->Extension).Number = 0;
  this->HasMarkOfTheWeb = Unset;
  (this->AssetDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDataList).ArrayNum = 0;
  (this->AssetDataList).ArrayMax = 0;
  (this->DependencyData).PackageName.ComparisonIndex = 0;
  (this->DependencyData).PackageName.Number = 0;
  (this->DependencyData).PackageData.CookedHash.bIsValid = false;
  *(undefined8 *)&(this->DependencyData).PackageData.ChunkHashes = 0;
  *(undefined8 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x8 = 0;
  *(undefined8 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x20 = 0;
  (this->DependencyData).PackageData.Extension = Unspecified;
  (this->DependencyData).PackageData.Flags = 0;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x28 = 0;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x2c = 0x80;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x34 = 0;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x40 = 0;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x48 = 0;
  (this->DependencyData).PackageData.ImportedClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DependencyData).PackageData.ImportedClasses.ArrayNum = 0;
  (this->DependencyData).PackageData.ImportedClasses.ArrayMax = 0;
  (this->DependencyData).PackageData.DiskSize = 0;
  (this->DependencyData).PackageData.FileVersionUE.FileVersionUE4 = 0;
  (this->DependencyData).PackageData.FileVersionUE.FileVersionUE5 = 0;
  (this->DependencyData).PackageData.CustomVersions.Ptr.DataPtr = (FPackageCustomVersion *)0x0;
  (this->DependencyData).PackageData.CustomVersions.Ptr.ArrayNum = 0;
  (this->DependencyData).PackageData.FileVersionLicenseeUE = -1;
  (this->DependencyData).PackageDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DependencyData).PackageDependencies.ArrayNum = 0;
  (this->DependencyData).PackageDependencies.ArrayMax = 0;
  (this->DependencyData).SearchableNameDependencies.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DependencyData).SearchableNameDependencies.ArrayNum = 0;
  (this->DependencyData).SearchableNameDependencies.ArrayMax = 0;
  (this->DependencyData).DependsNodeReservations.PackageDependenciesSize = 0;
  (this->DependencyData).DependsNodeReservations.NameDependenciesSize = 0;
  (this->DependencyData).DependsNodeReservations.ManageDependenciesSize = 0;
  (this->DependencyData).DependsNodeReservations.ReferencersSize = 0;
  (this->DependencyData).bHasPackageData = false;
  (this->DependencyData).bHasDependencyData = false;
  return this;
}

// ~FDiskCachedAssetData @ 142ada9d0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall FDiskCachedAssetData::~FDiskCachedAssetData(FDiskCachedAssetData *this)

{
  FScriptContainerElement *pFVar1;
  
  FPackageDependencyData::~FPackageDependencyData(&this->DependencyData);
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->AssetDataList).AllocatorInstance.Data,
             (this->AssetDataList).ArrayNum);
  pFVar1 = (this->AssetDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

