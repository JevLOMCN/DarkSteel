// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 23

// FExportArchive @ 142308970

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FExportArchive * __thiscall FExportArchive::FExportArchive(FExportArchive *this,FIoBuffer *param_1)

{
  BufCore *pBVar1;
  FIoDispatcher *pFVar2;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FExportArchive__6B_;
  pFVar2 = FIoDispatcher::Get();
  this->IoDispatcher = pFVar2;
  this->TemplateForGetArchetypeFromLoader = (UObject *)0x0;
  this->PackageDesc = (FAsyncPackageDesc2 *)0x0;
  this->ImportStore = (FPackageImportStore *)0x0;
  this->HeaderData = (FAsyncPackageHeaderData *)0x0;
  this->InstanceContext = (FLinkerInstancingContext *)0x0;
  this->CurrentExport = (UObject *)0x0;
  this->ExportSerialOffset = 0;
  this->ExportSerialSize = 0;
  this->bIsOptionalSegment = false;
  *(uchar **)(this->_padding_ + 0x10) = ((param_1->CorePtr).Reference)->DataPtr;
  *(undefined8 *)this->_padding_ = ((undefined8 *)this->_padding_)[2];
  pBVar1 = (param_1->CorePtr).Reference;
  *(uchar **)(this->_padding_ + 8) =
       pBVar1->DataPtr + CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow);
  return this;
}

// operator<< @ 14230bb20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,UObject **param_1)

{
  FAsyncPackageHeaderData *pFVar1;
  FPackageObjectIndex FVar2;
  code *pcVar3;
  FPackageIndex FVar4;
  bool bVar5;
  FArchive *pFVar6;
  FExportObject *pFVar7;
  FName FVar8;
  FPackageObjectIndex *pFVar9;
  UObject *pUVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FPackageIndex local_res8 [2];
  FName local_res20;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res8[0].Index = 0;
  ::operator<<((FArchive *)this,local_res8);
  FVar4.Index = local_res8[0].Index;
  if (local_res8[0].Index == 0) {
    *param_1 = (UObject *)0x0;
    return (FArchive *)this;
  }
  if (local_res8[0].Index < 1) {
    pFVar1 = this->HeaderData;
    if ((-1 < local_res8[0].Index) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalIndex.IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x911,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    if (((int)pFVar1->_padding_ < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header.ImportMap.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x912,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    if ((-1 < FVar4.Index) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    iVar12 = -1 - FVar4.Index;
    if (iVar12 < (int)pFVar1->_padding_) {
      pFVar9 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                         ((TArrayView<FPackageObjectIndex_const_,int> *)&pFVar1->_padding_,iVar12);
      FVar2.TypeAndId = pFVar9->TypeAndId;
      if (FVar2.TypeAndId != 0xffffffffffffffff) {
        pUVar10 = FPackageImportStore::GetImportObject(this->ImportStore,this->HeaderData,FVar2);
        *param_1 = pUVar10;
        if (pUVar10 != (UObject *)0x0) {
          return (FArchive *)this;
        }
        if ((byte)LogStreaming._0_1_ < 5) {
          return (FArchive *)this;
        }
        FPackageImportStore::GetImportName(this->ImportStore,&local_48,this->HeaderData,FVar2);
        if ((-1 < local_res8[0].Index) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsImport()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x55,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FArchive *)(*pcVar3)();
          return pFVar6;
        }
        ::LexToString(&local_58,&this->PackageDesc->PackageIdToLoad);
        FVar8 = FPackagePath::GetPackageFName(&this->PackageDesc->PackagePathToLoad);
        ::FName::ToString((FName *)FVar8,&local_68);
        ::LexToString(&local_78,&this->PackageDesc->UPackageId);
        ::FName::ToString(&this->PackageDesc->UPackageName,&local_88);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_virtual_class_FArchive&___ptr64___cdecl_FExportArchive::operator<<(UObject*___ptr64&___ptr64)___ptr64'
                    ::__l50::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return (FArchive *)this;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return (FArchive *)this;
      }
    }
    if ((-1 < local_res8[0].Index) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    HandleBadImportIndex(this,-1 - local_res8[0].Index,param_1);
  }
  else {
    if ((local_res8[0].Index < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsExport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x5b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    iVar12 = local_res8[0].Index + -1;
    if (iVar12 < (this->HeaderData->ExportsView).ArrayNum) {
      pFVar7 = TArrayView<FExportObject,int>::operator[](&this->HeaderData->ExportsView,iVar12);
      *param_1 = pFVar7->Object;
      TArrayView<FExportMapEntry_const_,int>::operator[]
                ((TArrayView<FExportMapEntry_const_,int> *)&this->HeaderData->_padding_,iVar12);
      FNameMap::GetName((FNameMap *)&this->HeaderData->_padding_,(FMappedName *)&local_res20);
      if (*param_1 == (UObject *)0x0) {
        if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14230bcb6:
          if (6 < (byte)LogStreaming._0_1_) {
            ::FName::ToString(&local_res20,&local_98);
            ::LexToString(&local_a8,&this->PackageDesc->PackageIdToLoad);
            FVar8 = FPackagePath::GetPackageFName(&this->PackageDesc->PackagePathToLoad);
            ::FName::ToString((FName *)FVar8,&local_b8);
            ::LexToString(&local_c8,&this->PackageDesc->UPackageId);
            ::FName::ToString(&this->PackageDesc->UPackageName,&local_d8);
            UE::Logging::Private::BasicLog<7>
                      (&`public:_virtual_class_FArchive&___ptr64___cdecl_FExportArchive::operator<<(UObject*___ptr64&___ptr64)___ptr64'
                        ::__l19::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
        }
        else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                 GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
          FVar11 = (ForElementType<FSetElementId>)0x154ba3ce8;
          if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
              (ForElementType<FSetElementId>)0x0) {
            FVar11 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
          }
          iVar12 = *(int *)((longlong)FVar11 +
                           (ulonglong)
                           (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                           (uint)(this->PackageDesc->UPackageId).Id) * 4);
          if (iVar12 != -1) {
            do {
              if (*(ulong64 *)
                   (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10) ==
                  (this->PackageDesc->UPackageId).Id) {
                if (iVar12 == -1) {
                  return (FArchive *)this;
                }
                goto LAB_14230bcb6;
              }
              iVar12 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                               (longlong)iVar12 * 0x10);
            } while (iVar12 != -1);
          }
        }
      }
    }
    else {
      HandleBadExportIndex(this,iVar12,param_1);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 14230c0c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,FLazyObjectPtr *param_1)

{
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  ::operator<<((FArchive *)this,&local_18);
  *(undefined8 *)param_1 = 0;
  *(uint *)&param_1->field_0x8 = local_18.A;
  *(uint *)&param_1->field_0xc = local_18.B;
  *(uint *)&param_1->field_0x10 = local_18.C;
  *(uint *)&param_1->field_0x14 = local_18.D;
  return (FArchive *)this;
}

// operator<< @ 14230c110

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 14230c120

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,FSoftObjectPath *param_1)

{
  FArchive *pFVar1;
  
  pFVar1 = FArchiveUObject::SerializeSoftObjectPath((FArchive *)this,param_1);
  if (this->InstanceContext != (FLinkerInstancingContext *)0x0) {
    FLinkerInstancingContext::FixupSoftObjectPath(this->InstanceContext,param_1);
  }
  return pFVar1;
}

// operator<< @ 14230c170

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,FSoftObjectPtr *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ForAnyElementType _Src;
  int iVar3;
  size_t _Size;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::Serialize(&local_28,(FArchive *)this);
  _Src.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
  puVar1 = &param_1->field_0x18;
  *(undefined8 *)param_1 = 0;
  *(uint *)&param_1->field_0x8 = local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&param_1->field_0xc = local_28.AssetPath.PackageName.Number;
  *(uint *)&param_1->field_0x10 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&param_1->field_0x14 = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    iVar3 = local_28.SubPathString.Data.ArrayNum;
    _Size = (size_t)local_28.SubPathString.Data.ArrayNum;
    puVar2 = &param_1->field_0x24;
    *(int *)&param_1->field_0x20 = local_28.SubPathString.Data.ArrayNum;
    if ((local_28.SubPathString.Data.ArrayNum == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_28.SubPathString.Data.ArrayNum,*(int *)puVar2,(ForAnyElementType *)puVar1
                 ,local_28.SubPathString.Data.ArrayNum,(int *)puVar2);
      if (iVar3 != 0) {
        memcpy(*(void **)puVar1,_Src.Data,_Size);
      }
    }
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 14230c260

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->_padding_ & 0x3000000) != 0x1000000) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(this->_padding_ + 0x168))(this,&pUStackX_8);
    if (((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 14230c270

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::operator<<(FExportArchive *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FArchive *pFVar6;
  uint local_res8 [2];
  uint local_res18 [2];
  FMappedName local_res20;
  
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res8[0] = 0;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  uVar4 = local_res18[0];
  uVar3 = local_res8[0];
  if (0x3fffffff < local_res18[0]) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex < (1 << TypeShift)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MappedName.h"
                       ,0x29,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_res20.Index = uVar4;
  local_res20.Number = uVar3;
  bVar5 = FNameMap::TryGetName((FNameMap *)&this->HeaderData->_padding_,&local_res20,param_1);
  if (!bVar5) {
    HandleBadNameIndex(this,local_res18[0],param_1);
  }
  return (FArchive *)this;
}

// AttachExternalReadDependency @ 1423111f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FExportArchive::AttachExternalReadDependency
          (FExportArchive *this,TFunction<bool___cdecl(double)> *param_1)

{
  TArray<TFunction<bool___cdecl(double)>,TSizedDefaultAllocator<32>_> *pTVar1;
  TFunction<bool___cdecl(double)> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = this->ExternalReadDependencies;
  pTVar2 = (TFunction<bool___cdecl(double)> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + pTVar1->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = pTVar1->ArrayNum;
  if (iVar6 == pTVar1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar6 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar8 + 0x28) = 0;
  if (*(longlong *)pFVar8 != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  return true;
}

// CheckBufferPosition @ 142311a70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FExportArchive::CheckBufferPosition(FExportArchive *this,wchar_t *param_1,ulong64 param_2)

{
  FName this_00;
  ulonglong uVar1;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar1 = (*(longlong *)this->_padding_ - ((longlong *)this->_padding_)[2]) + param_2;
  if (((uVar1 < this->ExportSerialOffset) ||
      (this->ExportSerialSize + this->ExportSerialOffset < uVar1)) && (1 < (byte)LogStreaming._0_1_)
     ) {
    ::LexToString(&local_48,&this->PackageDesc->PackageIdToLoad);
    this_00 = FPackagePath::GetPackageFName(&this->PackageDesc->PackagePathToLoad);
    ::FName::ToString((FName *)this_00,&local_58);
    ::LexToString(&local_68,&this->PackageDesc->UPackageId);
    ::FName::ToString(&this->PackageDesc->UPackageName,&local_78);
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FExportArchive::CheckBufferPosition(wchar_t_const*___ptr64,unsigned___int64)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogStreaming);
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
  }
  return;
}

// GetArchetypeFromLoader @ 142326720

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall FExportArchive::GetArchetypeFromLoader(FExportArchive *this,UObject *param_1)

{
  return this->TemplateForGetArchetypeFromLoader;
}

// GetArchiveName @ 142326730

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FString * __thiscall
FExportArchive::GetArchiveName(FExportArchive *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = this->PackageDesc == (FAsyncPackageDesc2 *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"FExportArchive");
  }
  else {
    pFVar1 = ::FName::ToString(&this->PackageDesc->UPackageName,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCacheableArchive @ 142326840

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FArchive * __thiscall FExportArchive::GetCacheableArchive(FExportArchive *this)

{
  return (FArchive *)0x0;
}

// HandleBadExportIndex @ 1423278b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FExportArchive::HandleBadExportIndex(FExportArchive *this,int param_1,UObject **param_2)

{
  FString *pFVar1;
  FName this_00;
  bool bVar2;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar2 = false;
  if ((UObjectBaseUtility *)this->CurrentExport != (UObjectBaseUtility *)0x0) {
    pFVar1 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this->CurrentExport,&local_48,(UObject *)0x0,None);
    if ((pFVar1->Data).ArrayNum == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
  }
  ::LexToString(&local_58,&this->PackageDesc->PackageIdToLoad);
  this_00 = FPackagePath::GetPackageFName(&this->PackageDesc->PackagePathToLoad);
  ::FName::ToString((FName *)this_00,&local_68);
  ::LexToString(&local_78,&this->PackageDesc->UPackageId);
  ::FName::ToString(&this->PackageDesc->UPackageName,&local_88);
  UE::Logging::Private::BasicFatalLog
            (&`public:_void___cdecl_FExportArchive::HandleBadExportIndex(int,UObject*___ptr64&___ptr64)___ptr64'
              ::__l6::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *param_2 = (UObject *)0x0;
  return;
}

// HandleBadImportIndex @ 142327a90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FExportArchive::HandleBadImportIndex(FExportArchive *this,int param_1,UObject **param_2)

{
  FString *pFVar1;
  FName this_00;
  bool bVar2;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar2 = false;
  if ((UObjectBaseUtility *)this->CurrentExport != (UObjectBaseUtility *)0x0) {
    pFVar1 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this->CurrentExport,&local_48,(UObject *)0x0,None);
    if ((pFVar1->Data).ArrayNum == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
  }
  ::LexToString(&local_58,&this->PackageDesc->PackageIdToLoad);
  this_00 = FPackagePath::GetPackageFName(&this->PackageDesc->PackagePathToLoad);
  ::FName::ToString((FName *)this_00,&local_68);
  ::LexToString(&local_78,&this->PackageDesc->UPackageId);
  ::FName::ToString(&this->PackageDesc->UPackageName,&local_88);
  UE::Logging::Private::BasicFatalLog
            (&`public:_void___cdecl_FExportArchive::HandleBadImportIndex(int,UObject*___ptr64&___ptr64)___ptr64'
              ::__l6::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *param_2 = (UObject *)0x0;
  return;
}

// HandleBadNameIndex @ 142327c70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FExportArchive::HandleBadNameIndex(FExportArchive *this,int param_1,FName *param_2)

{
  FString *pFVar1;
  FName this_00;
  bool bVar2;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar2 = false;
  if ((UObjectBaseUtility *)this->CurrentExport != (UObjectBaseUtility *)0x0) {
    pFVar1 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this->CurrentExport,&local_48,(UObject *)0x0,None);
    if ((pFVar1->Data).ArrayNum == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
  }
  ::LexToString(&local_58,&this->PackageDesc->PackageIdToLoad);
  this_00 = FPackagePath::GetPackageFName(&this->PackageDesc->PackagePathToLoad);
  ::FName::ToString((FName *)this_00,&local_68);
  ::LexToString(&local_78,&this->PackageDesc->UPackageId);
  ::FName::ToString(&this->PackageDesc->UPackageName,&local_88);
  UE::Logging::Private::BasicFatalLog
            (&`public:_void___cdecl_FExportArchive::HandleBadNameIndex(int,FName&___ptr64)___ptr64'
              ::__l6::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  param_2->ComparisonIndex = 0;
  param_2->Number = 0;
  FArchiveState::SetCriticalError((FArchiveState *)this);
  return;
}

// Seek @ 14233cd90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FExportArchive::Seek(FExportArchive *this,long64 param_1)

{
  *(longlong *)this->_padding_ =
       ((longlong *)this->_padding_)[2] + this->ExportSerialOffset + param_1;
  CheckBufferPosition(this,L"InvalidSeek",0);
  return;
}

// Serialize @ 14233cdc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FExportArchive::Serialize(FExportArchive *this,void *param_1,long64 param_2)

{
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    CheckBufferPosition(this,L"InvalidSerialize",param_2);
    memcpy(param_1,*(void **)this->_padding_,param_2);
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + param_2;
  }
  return;
}

// SerializeBulkData @ 14233ce20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014233d04b) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FExportArchive::SerializeBulkData
          (FExportArchive *this,FBulkData *param_1,FBulkDataSerializationParams *param_2)

{
  uchar *puVar1;
  uint uVar2;
  FAsyncPackageDesc2 *pFVar3;
  ulong64 uVar4;
  code *pcVar5;
  FBulkDataCookedIndex FVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  void *_Dst;
  ulonglong _Size;
  long64 lVar9;
  bool bVar10;
  undefined1 auStackY_108 [32];
  FBulkDataCookedIndex local_d8 [8];
  ulong64 local_d0;
  int local_c8;
  ulong64 local_c0;
  int3 local_b8;
  uchar uStack_b5;
  long64 local_b0;
  FIoReadOptions local_a8;
  FString local_88;
  FIoChunkId local_78;
  undefined1 local_68 [24];
  IMappedFileRegion *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = this->PackageDesc;
  local_d8[0].Value = '\0';
  local_b0 = -1;
  bVar10 = this->bIsOptionalSegment != false;
  SerializeBulkMeta(this,&param_1->BulkMeta,local_d8,&local_b0,param_2->ElementSize);
  FVar6 = FBulkDataCookedIndex::Default;
  uVar2 = *(uint *)((param_1->BulkMeta).Data + 0xc);
  if ((uVar2 & 1) == 0) {
    _Size = (ulonglong)*(uint5 *)(param_1->BulkMeta).Data;
    if ((_Size != 0) && ((uVar2 & 0x20) == 0)) {
      UE::BulkData::Private::FBulkMetaData::SetOffset
                (&param_1->BulkMeta,*(longlong *)this->_padding_ - ((longlong *)this->_padding_)[2])
      ;
      local_d0 = (pFVar3->PackageIdToLoad).Id;
      *(ulong64 *)(param_1->BulkChunkId).Id = local_d0;
      local_c8 = (uint)CONCAT21(0x100,bVar10) << 8;
      *(int *)((param_1->BulkChunkId).Id + 8) = local_c8;
      _Dst = FBulkData::FAllocatedPtr::ReallocateData(&param_1->DataAllocation,param_1,_Size);
      if ((this->_padding_ & 0x200) == 0) {
        CheckBufferPosition(this,L"InvalidSerialize",_Size);
        memcpy(_Dst,*(void **)this->_padding_,_Size);
        *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + _Size;
      }
    }
  }
  else {
    uVar4 = (pFVar3->PackageIdToLoad).Id;
    if ((uVar2 >> 0xc & 1) == 0) {
      *(ulong64 *)(param_1->BulkChunkId).Id = uVar4;
      *(ushort *)((param_1->BulkChunkId).Id + 8) = (ushort)bVar10 << 8;
      (param_1->BulkChunkId).Id[10] = local_d8[0].Value;
      (param_1->BulkChunkId).Id[0xb] = (byte)(uVar2 >> 0xb) & 1 | 2;
      if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x4000) != 0) {
        local_d8[0] = (FBulkDataCookedIndex)FBulkDataCookedIndex::Default.Value;
        local_c0 = (pFVar3->PackageIdToLoad).Id;
        local_b8 = (uint3)CONCAT11(FBulkDataCookedIndex::Default.Value,bVar10) << 8;
        uStack_b5 = '\x03';
        uVar7 = _local_b8;
        local_78.Id[8] = (uchar)local_b8;
        local_78.Id[9] = local_b8._1_1_;
        local_78.Id[10] = local_b8._2_1_;
        local_78.Id[0xb] = '\x03';
        _local_b8 = uVar7;
        local_78.Id._0_8_ = local_c0;
        bVar10 = FIoDispatcher::DoesChunkExist(this->IoDispatcher,&local_78);
        lVar9 = local_b0;
        if (bVar10) {
          *(undefined8 *)(param_1->BulkChunkId).Id = local_78.Id._0_8_;
          *(undefined4 *)((param_1->BulkChunkId).Id + 8) = local_78.Id._8_4_;
          puVar1 = (param_1->BulkMeta).Data + 0xc;
          *(uint *)puVar1 = *(uint *)puVar1 & 0xffffbfff;
          puVar1 = (param_1->BulkMeta).Data + 0xc;
          *(uint *)puVar1 = *(uint *)puVar1 | 0x800;
          if (local_b0 < 0xffffffffff) {
            if (local_b0 < 0) {
              lVar9 = 0x7fffffffffffffff;
            }
          }
          else {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Offset <= MaxOffset",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                                ,0x16d,L"");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          (param_1->BulkMeta).Data[5] = (uchar)lVar9;
          (param_1->BulkMeta).Data[6] = (uchar)((ulonglong)lVar9 >> 8);
          (param_1->BulkMeta).Data[7] = (uchar)((ulonglong)lVar9 >> 0x10);
          (param_1->BulkMeta).Data[9] = (uchar)((ulonglong)lVar9 >> 0x20);
          (param_1->BulkMeta).Data[8] = (uchar)((ulonglong)lVar9 >> 0x18);
        }
      }
    }
    else {
      *(ulong64 *)(param_1->BulkChunkId).Id = uVar4;
      *(ushort *)((param_1->BulkChunkId).Id + 8) = (ushort)bVar10 << 8;
      (param_1->BulkChunkId).Id[10] = FVar6.Value;
      (param_1->BulkChunkId).Id[0xb] = '\x04';
      if (param_2->bAttemptMemoryMapping != false) {
        local_a8.RequestedOffset = (ulong64)*(uint5 *)((param_1->BulkMeta).Data + 5);
        if (0xfffffffffe < local_a8.RequestedOffset) {
          local_a8.RequestedOffset = 0xffffffffffffffff;
        }
        local_a8.RequestedSize =
             (ulong64)CONCAT41(CONCAT31(CONCAT21(CONCAT11((param_1->BulkMeta).Data[4],
                                                          (param_1->BulkMeta).Data[3]),
                                                 (param_1->BulkMeta).Data[2]),
                                        (param_1->BulkMeta).Data[1]),(param_1->BulkMeta).Data[0]);
        local_a8.TargetVa = (void *)0x0;
        local_a8.Flags = None;
        FIoDispatcher::OpenMapped
                  (this->IoDispatcher,(TIoStatusOr<FIoMappedRegion> *)local_68,&param_1->BulkChunkId
                   ,&local_a8);
        if (local_68._8_4_ == Ok) {
          FIoStatus::operator=((FIoStatus *)local_68,&FIoStatus::Unknown);
          FBulkData::FAllocatedPtr::SetMemoryMappedData
                    (&param_1->DataAllocation,param_1,(IMappedFileHandle *)local_68._16_8_,local_50)
          ;
        }
        else {
          if (2 < (byte)LogSerialization._0_1_) {
            ::LexToString(&local_88,&param_1->BulkChunkId);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_virtual_bool___cdecl_FExportArchive::SerializeBulkData(FBulkData&___ptr64,FBulkDataSerializationParams_const&___ptr64)___ptr64'
                        ::__l21::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          FBulkData::ForceBulkDataResident(param_1);
        }
        FIoStatus::operator=((FIoStatus *)local_68,Unknown);
        FIoStatus::~FIoStatus((FIoStatus *)local_68);
      }
    }
  }
  return true;
}

// SerializeBulkMeta @ 14233d2a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FExportArchive::SerializeBulkMeta
          (FExportArchive *this,FBulkMetaData *param_1,FBulkDataCookedIndex *param_2,long64 *param_3
          ,int param_4)

{
  longlong *plVar1;
  FAsyncPackageHeaderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  long64 *plVar7;
  uint local_res8 [2];
  
  if ((int)this->HeaderData->_padding_ == 0) {
    UE::BulkData::Private::FBulkMetaData::FromSerialized
              ((FArchive *)this,(longlong)param_4,param_1,param_3);
  }
  else {
    plVar1 = (longlong *)this->_padding_;
    local_res8[0] = 0xffffffff;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    pFVar2 = this->HeaderData;
    lVar6 = (longlong)(int)local_res8[0];
    uVar5 = 0;
    if ((int)local_res8[0] < (int)pFVar2->_padding_) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar7 = (long64 *)(pFVar2->_padding_ + lVar6 * 0x20);
    *(int *)(param_1->Data + 0xc) = (int)plVar7[3];
    UE::BulkData::Private::FBulkMetaData::SetOffset(param_1,*plVar7);
    lVar6 = plVar7[2];
    if (0xffffffffff < lVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= MaxSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                         ,0x151,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_1->Data[0] = (uchar)lVar6;
    param_1->Data[1] = (uchar)((ulonglong)lVar6 >> 8);
    param_1->Data[2] = (uchar)((ulonglong)lVar6 >> 0x10);
    param_1->Data[3] = (uchar)((ulonglong)lVar6 >> 0x18);
    param_1->Data[4] = (uchar)((ulonglong)lVar6 >> 0x20);
    *param_3 = plVar7[1];
    param_2->Value = *(uchar *)((longlong)plVar7 + 0x1c);
  }
  *(uint *)(param_1->Data + 0xc) = *(uint *)(param_1->Data + 0xc) | 0x80040000;
  return;
}

// Tell @ 14233ecb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

long64 __thiscall FExportArchive::Tell(FExportArchive *this)

{
  return (*(longlong *)this->_padding_ - ((longlong *)this->_padding_)[2]) -
         this->ExportSerialOffset;
}

// TotalSize @ 14233f310

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

long64 __thiscall FExportArchive::TotalSize(FExportArchive *this)

{
  return this->ExportSerialSize;
}

// UsingCustomVersion @ 142342250

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FExportArchive::UsingCustomVersion(FExportArchive *this,FGuid *param_1)

{
  return;
}

