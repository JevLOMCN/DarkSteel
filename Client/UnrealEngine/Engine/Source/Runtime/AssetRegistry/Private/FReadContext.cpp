// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FReadContext @ 142ad7110

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

FReadContext * __thiscall
UE::AssetDataGather::Private::FReadContext::FReadContext
          (FReadContext *this,FName param_1,FName param_2,FGatheredPathData *param_3,
          TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FReadContext *pFVar5;
  
  this->PackageName = param_1;
  this->Extension = param_2;
  (this->AssetFileData).LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetFileData).LocalAbsPath.Data.AllocatorInstance.Data =
       (param_3->LocalAbsPath).Data.AllocatorInstance.Data;
  (param_3->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetFileData).LocalAbsPath.Data.ArrayNum = (param_3->LocalAbsPath).Data.ArrayNum;
  (this->AssetFileData).LocalAbsPath.Data.ArrayMax = (param_3->LocalAbsPath).Data.ArrayMax;
  (param_3->LocalAbsPath).Data.ArrayNum = 0;
  (param_3->LocalAbsPath).Data.ArrayMax = 0;
  (this->AssetFileData).LongPackageName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AssetFileData).LongPackageName.Data.AllocatorInstance.Data =
       (param_3->LongPackageName).Data.AllocatorInstance.Data;
  (param_3->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetFileData).LongPackageName.Data.ArrayNum = (param_3->LongPackageName).Data.ArrayNum;
  (this->AssetFileData).LongPackageName.Data.ArrayMax = (param_3->LongPackageName).Data.ArrayMax;
  (param_3->LongPackageName).Data.ArrayNum = 0;
  (param_3->LongPackageName).Data.ArrayMax = 0;
  (this->AssetFileData).PackageTimestamp.Ticks = (param_3->PackageTimestamp).Ticks;
  (this->AssetFileData).bIsReadOnly = param_3->bIsReadOnly;
  (this->AssetFileData).Type = param_3->Type;
  (this->AssetDataFromFile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDataFromFile).ArrayNum = 0;
  (this->AssetDataFromFile).ArrayMax = 0;
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
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x34 = 0;
  *(undefined8 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x40 = 0;
  *(undefined4 *)&(this->DependencyData).PackageData.ChunkHashes.field_0x48 = 0;
  (this->DependencyData).PackageData.ImportedClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DependencyData).PackageData.ImportedClasses.ArrayNum = 0;
  (this->DependencyData).PackageData.ImportedClasses.ArrayMax = 0;
  (this->DependencyData).PackageData.DiskSize = 0;
  (this->DependencyData).PackageData.FileVersionUE.FileVersionUE4 = 0;
  (this->DependencyData).PackageData.FileVersionUE.FileVersionUE5 = 0;
  (this->DependencyData).PackageData.FileVersionLicenseeUE = -1;
  (this->DependencyData).PackageData.CustomVersions.Ptr.DataPtr = (FPackageCustomVersion *)0x0;
  (this->DependencyData).PackageData.CustomVersions.Ptr.ArrayNum = 0;
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
  (this->CookedPackageNamesWithoutAssetData).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CookedPackageNamesWithoutAssetData).ArrayNum = 0;
  (this->CookedPackageNamesWithoutAssetData).ArrayMax = 0;
  (this->DirectoryReadTaskData).Object = param_4->Object;
  (this->DirectoryReadTaskData).SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (FDirectoryReadTaskData *)0x0;
  iVar2 = (this->AssetFileData).LocalAbsPath.Data.ArrayNum;
  this->HasMarkOfTheWeb = Unset;
  this->bCanAttemptAssetRetry = false;
  this->bResult = false;
  this->bCanceled = false;
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AssetFileData.LocalAbsPath.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                       ,0xb7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReadContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((this->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirectoryReadTaskData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                       ,0xb8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReadContext *)(*pcVar3)();
      return pFVar5;
    }
    if ((this->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FReadContext *)(*pcVar3)();
        return pFVar5;
      }
    }
  }
  if (((this->DirectoryReadTaskData).Object)->OutstandingReads < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirectoryReadTaskData->OutstandingReads >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReadContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((this->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReadContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  piVar1 = &((this->DirectoryReadTaskData).Object)->OutstandingReads;
  *piVar1 = *piVar1 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

