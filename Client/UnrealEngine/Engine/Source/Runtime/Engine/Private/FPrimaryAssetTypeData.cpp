// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FPrimaryAssetTypeData @ 1475a5050

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetTypeData * __thiscall
FPrimaryAssetTypeData::FPrimaryAssetTypeData
          (FPrimaryAssetTypeData *this,FName param_1,UClass *param_2,bool param_3,bool param_4)

{
  undefined1 *this_00;
  UClass *local_res8;
  
  (this->Info).PrimaryAssetType = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this_00 = &(this->Info).AssetBaseClass.SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Info).AssetBaseClass.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Info).AssetBaseClass.SoftObjectPtr = 0;
  *(undefined8 *)&(this->Info).AssetBaseClass.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Info).AssetBaseClass.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FSoftObjectPtr::operator=(&(this->Info).AssetBaseClass.SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->Info).AssetBaseClassLoaded.field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Info).bHasBlueprintClasses = param_3;
  (this->Info).Directories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Directories.ArrayNum = 0;
  (this->Info).Directories.ArrayMax = 0;
  (this->Info).SpecificAssets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).SpecificAssets.ArrayNum = 0;
  (this->Info).SpecificAssets.ArrayMax = 0;
  (this->Info).Rules.Priority = -1;
  (this->Info).Rules.ChunkId = -1;
  (this->Info).Rules.bApplyRecursively = true;
  (this->Info).Rules.CookRule = Unknown;
  (this->Info).AssetScanPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).AssetScanPaths.ArrayNum = 0;
  (this->Info).AssetScanPaths.ArrayMax = 0;
  (this->Info).bIsDynamicAsset = false;
  (this->Info).NumberOfAssets = 0;
  (this->Info).bIsEditorOnly = param_4;
  *(undefined8 *)&(this->DeferredAssetScanPaths).Elements = 0;
  *(undefined8 *)&(this->DeferredAssetScanPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeferredAssetScanPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DeferredAssetScanPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeferredAssetScanPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredAssetScanPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredAssetScanPaths).Elements.field_0x34 = 0;
  (this->DeferredAssetScanPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DeferredAssetScanPaths).HashSize = 0;
  *(undefined8 *)&(this->AdditionalAssetScanPaths).Elements = 0;
  *(undefined8 *)&(this->AdditionalAssetScanPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalAssetScanPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalAssetScanPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalAssetScanPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalAssetScanPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalAssetScanPaths).Elements.field_0x34 = 0;
  (this->AdditionalAssetScanPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AdditionalAssetScanPaths).HashSize = 0;
  *(undefined8 *)&(this->RealAssetScanPaths).Elements = 0;
  *(undefined8 *)&(this->RealAssetScanPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RealAssetScanPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RealAssetScanPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RealAssetScanPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RealAssetScanPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RealAssetScanPaths).Elements.field_0x34 = 0;
  (this->RealAssetScanPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RealAssetScanPaths).HashSize = 0;
  *(undefined8 *)&this->AssetMap = 0;
  *(undefined8 *)&(this->AssetMap).field_0x8 = 0;
  *(undefined8 *)&(this->AssetMap).field_0x20 = 0;
  *(undefined4 *)&(this->AssetMap).field_0x28 = 0;
  *(undefined4 *)&(this->AssetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetMap).field_0x34 = 0;
  *(undefined8 *)&(this->AssetMap).field_0x40 = 0;
  *(undefined4 *)&(this->AssetMap).field_0x48 = 0;
  return this;
}

// ~FPrimaryAssetTypeData @ 1475a9ce0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall FPrimaryAssetTypeData::~FPrimaryAssetTypeData(FPrimaryAssetTypeData *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  
  if (*(int *)&(this->AssetMap).field_0x8 != *(int *)&(this->AssetMap).field_0x34) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssetMap.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x1c5,
                       L"FPrimaryAssetTypeData is being destructed while still containing assets");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)&(this->AssetMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AssetMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetMap);
  (this->RealAssetScanPaths).HashSize = 0;
  FVar2 = (this->RealAssetScanPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RealAssetScanPaths).Elements);
  (this->AdditionalAssetScanPaths).HashSize = 0;
  FVar2 = (this->AdditionalAssetScanPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AdditionalAssetScanPaths).Elements);
  (this->DeferredAssetScanPaths).HashSize = 0;
  FVar2 = (this->DeferredAssetScanPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeferredAssetScanPaths).Elements);
  FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(&this->Info);
  return;
}

// FindOrAddAsset @ 1475ca860

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetData * __thiscall
FPrimaryAssetTypeData::FindOrAddAsset
          (FPrimaryAssetTypeData *this,FName param_1,FSoftObjectPtr *param_2,
          FSoftObjectPath *param_3,
          TMap<FSoftObjectPath,FPrimaryAssetId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>_>
          *param_4)

{
  undefined1 *this_00;
  uint uVar1;
  FPrimaryAssetData *pFVar2;
  TPairInitializer<FSoftObjectPath_const_&,FPrimaryAssetId_&&> local_res8;
  FName local_48;
  FName local_40;
  FSoftObjectPath *local_38;
  FName *local_30;
  
  local_res8.Value = (FPrimaryAssetId *)param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar2 = TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
                       *)&this->AssetMap,uVar1 + param_1.Number,(FName *)&local_res8.Value);
  this_00 = &(pFVar2->AssetPtr).field_0x8;
  if ((*(longlong *)&(pFVar2->AssetPtr).field_0x8 != 0) &&
     (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34)) {
    uVar1 = ::GetTypeHash((FSoftObjectPath *)this_00);
    TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
    ::RemoveImpl<FSoftObjectPath>
              ((TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
                *)param_4,uVar1,(FSoftObjectPath *)this_00);
  }
  *(undefined8 *)&pFVar2->AssetPtr = *(undefined8 *)param_2;
  FSoftObjectPath::operator=((FSoftObjectPath *)this_00,(FSoftObjectPath *)&param_2->field_0x8);
  FSoftObjectPath::operator=(&pFVar2->ARLookupPath,param_3);
  if (*(longlong *)this_00 != 0) {
    local_48 = (this->Info).PrimaryAssetType;
    local_40 = (FName)local_res8.Value;
    local_30 = &local_48;
    local_38 = (FSoftObjectPath *)this_00;
    TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FSoftObjectPath_const_&,FPrimaryAssetId_&&>_>
              ((TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
                *)param_4,&local_res8,(bool *)&local_38);
  }
  (this->Info).NumberOfAssets =
       *(int *)&(this->AssetMap).field_0x8 - *(int *)&(this->AssetMap).field_0x34;
  return pFVar2;
}

// GetAssets @ 1475d1d00

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
* __thiscall FPrimaryAssetTypeData::GetAssets(FPrimaryAssetTypeData *this)

{
  return &this->AssetMap;
}

// RemoveAsset @ 1475f2ff0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
FPrimaryAssetTypeData::RemoveAsset
          (FPrimaryAssetTypeData *this,FName param_1,
          TMap<FSoftObjectPath,FPrimaryAssetId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 local_78 [8];
  FSoftObjectPath local_70;
  FName local_50;
  FName local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  uchar *local_30;
  ushort local_28;
  bool local_26;
  uchar *local_20;
  ushort local_18;
  bool local_16;
  
  local_70.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.SubPathString.Data.ArrayNum = 0;
  local_70.SubPathString.Data.ArrayMax = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_70.AssetPath.AssetName.Number = 0;
  local_70.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_70.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_70.SubPathString,0);
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_30 = (uchar *)0x0;
  local_28 = 0;
  local_26 = false;
  local_20 = (uchar *)0x0;
  local_18 = 0;
  local_16 = false;
  bVar2 = TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
          ::RemoveAndCopyValue(&this->AssetMap,param_1,(FPrimaryAssetData *)local_78);
  if (((bVar2) && (local_70.AssetPath.PackageName != (FName)0x0)) &&
     (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
    uVar3 = ::GetTypeHash(&local_70);
    TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
    ::RemoveImpl<FSoftObjectPath>
              ((TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
                *)param_2,uVar3,&local_70);
  }
  (this->Info).NumberOfAssets =
       *(int *)&(this->AssetMap).field_0x8 - *(int *)&(this->AssetMap).field_0x34;
  if (local_20 != (uchar *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(local_20 + 8));
    if ((local_20 == (uchar *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x85,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((local_16 != false) && (local_20 == (uchar *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x93,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMemory::Free(local_20);
    local_20 = (uchar *)0x0;
  }
  if (local_30 != (uchar *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(local_30 + 8));
    if ((local_30 == (uchar *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x85,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((local_26 != false) && (local_30 == (uchar *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x93,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMemory::Free(local_30);
    local_30 = (uchar *)0x0;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// ResetAssets @ 1475f6bf0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
FPrimaryAssetTypeData::ResetAssets
          (FPrimaryAssetTypeData *this,
          TMap<FSoftObjectPath,FPrimaryAssetId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>_>
          *param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = 0;
  iVar2 = *(int *)&(this->AssetMap).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AssetMap).field_0x10;
  iVar11 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->AssetMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)TStack_60.Array;
    }
    uVar8 = *puVar12;
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1475f6c9f;
      uVar8 = puVar12[lVar7 + 1];
    }
    uVar5 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar6 = local_res20 + -1 + iVar11;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_1475f6c9f:
  uVar8 = *(uint *)&(this->AssetMap).field_0x28;
  uVar14 = uVar8 & 0xffffffe0;
  puVar13 = &(this->AssetMap).field_0x10;
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar9);
  iVar9 = (int)uVar8 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AssetMap).field_0x8 - *(int *)&(this->AssetMap).field_0x34);
  if ((((int)uVar8 < 0) || (iVar2 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->AssetMap).field_0x28;
  if (uVar8 != uVar5) {
    puVar10 = *(undefined1 **)&(this->AssetMap).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar13;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar9 * 4);
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar9;
      uVar14 = uVar14 + 0x20;
      iVar9 = iVar9 + 1;
      uVar8 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1475f6db0;
      uVar8 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar8 = (int)lVar7 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
  }
LAB_1475f6db0:
  while( true ) {
    if (*(int *)&(this->AssetMap).field_0x8 - *(int *)&(this->AssetMap).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) break;
    lVar7 = *(longlong *)&(this->AssetMap).field_0x0 + (longlong)TStack_60.CurrentBitIndex * 0x78;
    if ((*(longlong *)(lVar7 + 0x10) != 0) &&
       (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34)) {
      uVar5 = ::GetTypeHash((FSoftObjectPath *)(lVar7 + 0x10));
      TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
      ::RemoveImpl<FSoftObjectPath>
                ((TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
                  *)param_1,uVar5,(FSoftObjectPath *)(lVar7 + 0x10));
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
           *)&this->AssetMap);
  (this->Info).NumberOfAssets = 0;
  return;
}

// ShrinkAssets @ 1475fe320

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall FPrimaryAssetTypeData::ShrinkAssets(FPrimaryAssetTypeData *this)

{
  TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
            *)&this->AssetMap);
  return;
}

