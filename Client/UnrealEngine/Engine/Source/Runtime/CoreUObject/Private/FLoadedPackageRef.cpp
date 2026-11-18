// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// operator= @ 14230abd0

FLoadedPackageRef * __thiscall
FLoadedPackageRef::operator=(FLoadedPackageRef *this,FLoadedPackageRef *param_1)

{
  if (1 < (this->PublicExportMap).Capacity) {
    FMemory::Free((this->PublicExportMap).field0_0x0.Allocation);
  }
  (this->PublicExportMap).field0_0x0 = (param_1->PublicExportMap).field0_0x0;
  (this->PublicExportMap).Capacity = (param_1->PublicExportMap).Capacity;
  (this->PublicExportMap).Count = (param_1->PublicExportMap).Count;
  (this->PublicExportMap).SingleItemValue = (param_1->PublicExportMap).SingleItemValue;
  (param_1->PublicExportMap).field0_0x0.Allocation = (uchar *)0x0;
  (param_1->PublicExportMap).Count = 0;
  (param_1->PublicExportMap).Capacity = 0;
  this->OriginalPackageName = param_1->OriginalPackageName;
  this->PackageObjectIndex = param_1->PackageObjectIndex;
  this->RefCount = param_1->RefCount;
  this->ExportCount = param_1->ExportCount;
  this->PackageHeaderExtension = param_1->PackageHeaderExtension;
  this->PackageLoader = param_1->PackageLoader;
  this->bAreAllPublicExportsLoaded = param_1->bAreAllPublicExportsLoaded;
  this->bIsMissing = param_1->bIsMissing;
  this->bHasFailed = param_1->bHasFailed;
  this->bHasBeenLoadedDebug = param_1->bHasBeenLoadedDebug;
  return this;
}

// GetPackage @ 142327020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UPackage * __thiscall FLoadedPackageRef::GetPackage(FLoadedPackageRef *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FUObjectItem *pFVar5;
  
  iVar1 = this->PackageObjectIndex;
  if (iVar1 < 0) {
    return (UPackage *)0x0;
  }
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPackage *)(*pcVar2)();
      return pUVar4;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    return (UPackage *)(pFVar5->field1_0x8).Object;
  }
  return _DAT_00000008;
}

// PinPublicExportsForGC @ 14232e7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FLoadedPackageRef::PinPublicExportsForGC
          (FLoadedPackageRef *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *this_00;
  FUObjectItem *pFVar5;
  ForElementType<FSetElementId> FVar6;
  FString local_28;
  FString local_18;
  
  pFVar5 = (FUObjectItem *)0x0;
  this_00 = GetPackage(this);
  uVar2 = (this_00->PackageId).Id;
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar6 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar6 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar6 +
                         ((ulonglong)(GAsyncLoading2_DebugPackageIds.HashSize - 1) &
                         uVar2 & 0xffffffff) * 4); iVar1 != -1;
        iVar1 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)
        ) {
      if (*(ulonglong *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar1 * 0x10) ==
          uVar2) {
        bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
  }
  if (GUObjectArray.ObjLastNonGCIndex < *(int *)((longlong)&this_00->_padding_ + 4)) {
    bVar4 = FPublicExportMap::PinForGC(&this->PublicExportMap,param_1);
    if (!bVar4) {
      this->bAreAllPublicExportsLoaded = false;
    }
    iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x34) & 1) != 0) {
      iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
        FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
      }
      ::LexToString(&local_18,(EObjectFlags)this_00->_padding_);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Package->HasAnyInternalFlags(EInternalObjectFlags::LoaderImport)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x5f0,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UObjectBaseUtility::SetInternalFlags((UObjectBaseUtility *)this_00,LoaderImport);
  }
  return;
}

// RemovePublicExport @ 142339f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLoadedPackageRef::RemovePublicExport(FLoadedPackageRef *this,ulong64 param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UPackage *this_00;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  local_res18 = param_2;
  if ((this->bIsMissing != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsMissing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x5c4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->PackageObjectIndex < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasPackage()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x5c5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FPublicExportMap::Remove(&this->PublicExportMap,param_1);
  if (bVar2) {
    if (6 < (byte)LogStreaming._0_1_) {
      ::FName::ToString(&local_res18,&local_18);
      this_00 = GetPackage(this);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<7>
                (&`public:_void___cdecl_FLoadedPackageRef::RemovePublicExport(unsigned___int64,FName)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->bAreAllPublicExportsLoaded = false;
  }
  return;
}

// UnpinPublicExportsForGC @ 142340f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FLoadedPackageRef::UnpinPublicExportsForGC(FLoadedPackageRef *this)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *this_00;
  FUObjectItem *pFVar5;
  ForElementType<FSetElementId> FVar6;
  FString local_28;
  FString local_18;
  
  pFVar5 = (FUObjectItem *)0x0;
  this_00 = GetPackage(this);
  uVar2 = (this_00->PackageId).Id;
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar6 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar6 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar6 +
                         ((ulonglong)(GAsyncLoading2_DebugPackageIds.HashSize - 1) &
                         uVar2 & 0xffffffff) * 4); iVar1 != -1;
        iVar1 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)
        ) {
      if (*(ulonglong *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar1 * 0x10) ==
          uVar2) {
        bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
  }
  if (GUObjectArray.ObjLastNonGCIndex < *(int *)((longlong)&this_00->_padding_ + 4)) {
    FPublicExportMap::UnpinForGC(&this->PublicExportMap);
    iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x34) & 1) == 0) {
      iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
        FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
      }
      ::LexToString(&local_18,(EObjectFlags)this_00->_padding_);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->HasAnyInternalFlags(EInternalObjectFlags::LoaderImport)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x5fe,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)this_00,LoaderImport);
  }
  return;
}

