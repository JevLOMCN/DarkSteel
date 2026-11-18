// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 16

// <lambda_invoker_cdecl> @ 142ab0e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
`FAssetData::SerializeForCache<FAssetRegistryReader_&>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,FAssetData *param_2,Type param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FMapHandle FVar4;
  FSharedReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint auStackX_8 [2];
  ulong64 uStackX_10;
  FAssetDataTagMapSharedView FStackX_18;
  FPartialMapHandle FStackX_20;
  undefined1 auStack_68 [8];
  TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> TStack_60;
  TReferenceControllerBase<1> *pTStack_50;
  FSharedReferencer<1> aFStack_48 [3];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStackX_10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&uStackX_10);
    }
  }
  else {
    uStackX_10 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  FStackX_20 = FixedTagPrivate::FPartialMapHandle::FromInt(uStackX_10);
  FVar4 = FixedTagPrivate::FPartialMapHandle::MakeFullHandle(&FStackX_20,(uint)auStack_68);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&FStackX_18,*(FMapHandle *)FVar4);
  FAssetDataTagMapSharedView::operator=(&param_2->TagsAndValues,&FStackX_18);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&FStackX_18);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if ((int)auStackX_8[0] < 1) {
    pTStack_50 = (TReferenceControllerBase<1> *)0x0;
    aFStack_48[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_60.ArrayNum = 0;
    TStack_60.ArrayMax = 0;
    TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_>::SetNum(&TStack_60,auStackX_8[0],Default);
    LoadBundleEntries(param_1,&TStack_60);
    FVar5.ReferenceController = ::operator_new(0x20);
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pTStack_50 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FVar5.ReferenceController = _UNK_150651568;
    }
    else {
      (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = FVar5.ReferenceController + 1;
      (FVar5.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FVar5.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFAssetBundleData___00_SharedPointerInternals__6B_;
      FVar5.ReferenceController[1]._padding_ = (longlong)TStack_60.AllocatorInstance.Data;
      TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.ReferenceController[1].SharedReferenceCount = (atomic<int>)TStack_60.ArrayNum;
      FVar5.ReferenceController[1].WeakReferenceCount = (atomic<int>)TStack_60.ArrayMax;
      TStack_60.ArrayNum = 0;
      TStack_60.ArrayMax = 0;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = FVar5.ReferenceController;
      pTStack_50 = pTVar7;
    }
    aFStack_48[0].ReferenceController = FVar5.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    DestructItems<FAssetBundleEntry,int>
              ((FAssetBundleEntry *)TStack_60.AllocatorInstance.Data,TStack_60.ArrayNum);
    pTVar6 = pTVar7;
    if ((FAssetBundleEntry *)TStack_60.AllocatorInstance.Data != (FAssetBundleEntry *)0x0) {
      FMemory::Free(TStack_60.AllocatorInstance.Data);
    }
  }
  if (&param_2->TaggedAssetBundles != (TSharedPtr<FAssetBundleData,1> *)&pTStack_50) {
    (param_2->TaggedAssetBundles).Object = (FAssetBundleData *)pTVar6;
    pTStack_50 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_2->TaggedAssetBundles).SharedReferenceCount,aFStack_48);
    FVar5.ReferenceController = aFStack_48[0].ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// <lambda_invoker_cdecl> @ 142ab0e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FAssetData::SerializeForCache<FAssetRegistryWriter_&>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,FAssetData *param_2,Type param_3)

{
  SaveTags((FAssetRegistryWriter *)param_1,&param_2->TagsAndValues);
  SaveBundles(param_1,&param_2->TaggedAssetBundles);
  return;
}

// <lambda_invoker_cdecl> @ 142ab0ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FAssetData::SerializeForCache<FNameTableArchiveReader_&>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,FAssetData *param_2,Type param_3)

{
  FKeyForward FStackX_8;
  FAssetDataTagMap FStack_28;
  
  FStack_28._padding_ = 0;
  FStack_28._padding_ = 0;
  FStack_28.RefCount.Counter = 0;
  TArrayPrivateFriend::Serialize<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)&FStack_28);
  if ((param_1->field_0x28 & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
              ((TTuple<FName,FString> *)FStack_28._padding_,(int)FStack_28._padding_,FStackX_8,
               (FNameFastLess)FStackX_8);
  }
  FAssetData::SetTagsAndAssetBundles(param_2,&FStack_28);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)FStack_28._padding_,(int)FStack_28._padding_);
  if ((TTuple<FName,FString> *)FStack_28._padding_ != (TTuple<FName,FString> *)0x0) {
    FMemory::Free((void *)FStack_28._padding_);
  }
  return;
}

// <lambda_invoker_cdecl> @ 142ab0eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
`FAssetData::SerializeForCacheOldVersion<FAssetRegistryReader_&>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,FAssetData *param_2,Type param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FMapHandle FVar4;
  FSharedReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint auStackX_8 [2];
  ulong64 uStackX_10;
  FAssetDataTagMapSharedView FStackX_20;
  FPartialMapHandle FStack_58;
  undefined1 auStack_50 [8];
  TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> TStack_48;
  TReferenceControllerBase<1> *pTStack_38;
  FSharedReferencer<1> FStack_30;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStackX_10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&uStackX_10);
    }
  }
  else {
    uStackX_10 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  FStack_58 = FixedTagPrivate::FPartialMapHandle::FromInt(uStackX_10);
  FVar4 = FixedTagPrivate::FPartialMapHandle::MakeFullHandle(&FStack_58,(uint)auStack_50);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&FStackX_20,*(FMapHandle *)FVar4);
  FAssetDataTagMapSharedView::operator=(&param_2->TagsAndValues,&FStackX_20);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&FStackX_20);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if ((int)auStackX_8[0] < 1) {
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    TStack_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_48.ArrayNum = 0;
    TStack_48.ArrayMax = 0;
    TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_>::SetNum(&TStack_48,auStackX_8[0],Default);
    if (param_3 == LatestVersion) {
      LoadBundleEntries(param_1,&TStack_48);
    }
    else {
      LoadBundleEntriesOldVersion(param_1,&TStack_48,param_3);
    }
    FVar5.ReferenceController = ::operator_new(0x20);
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pTStack_38 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FVar5.ReferenceController = _UNK_150651568;
    }
    else {
      (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = FVar5.ReferenceController + 1;
      (FVar5.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FVar5.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFAssetBundleData___00_SharedPointerInternals__6B_;
      FVar5.ReferenceController[1]._padding_ = (longlong)TStack_48.AllocatorInstance.Data;
      TStack_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.ReferenceController[1].SharedReferenceCount = (atomic<int>)TStack_48.ArrayNum;
      FVar5.ReferenceController[1].WeakReferenceCount = (atomic<int>)TStack_48.ArrayMax;
      TStack_48.ArrayNum = 0;
      TStack_48.ArrayMax = 0;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = FVar5.ReferenceController;
      pTStack_38 = pTVar7;
    }
    FStack_30.ReferenceController = FVar5.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    DestructItems<FAssetBundleEntry,int>
              ((FAssetBundleEntry *)TStack_48.AllocatorInstance.Data,TStack_48.ArrayNum);
    pTVar6 = pTVar7;
    if ((FAssetBundleEntry *)TStack_48.AllocatorInstance.Data != (FAssetBundleEntry *)0x0) {
      FMemory::Free(TStack_48.AllocatorInstance.Data);
    }
  }
  if (&param_2->TaggedAssetBundles != (TSharedPtr<FAssetBundleData,1> *)&pTStack_38) {
    (param_2->TaggedAssetBundles).Object = (FAssetBundleData *)pTVar6;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_2->TaggedAssetBundles).SharedReferenceCount,&FStack_30);
    FVar5.ReferenceController = FStack_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// <lambda_invoker_cdecl> @ 142ab0ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FAssetData::SerializeForCacheOldVersion<FNameTableArchiveReader_&>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,FAssetData *param_2,Type param_3)

{
  FKeyForward FStackX_8;
  FAssetDataTagMap FStack_28;
  
  FStack_28._padding_ = 0;
  FStack_28._padding_ = 0;
  FStack_28.RefCount.Counter = 0;
  TArrayPrivateFriend::Serialize<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)&FStack_28);
  if ((param_1->field_0x28 & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
              ((TTuple<FName,FString> *)FStack_28._padding_,(int)FStack_28._padding_,FStackX_8,
               (FNameFastLess)FStackX_8);
  }
  FAssetData::SetTagsAndAssetBundles(param_2,&FStack_28);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)FStack_28._padding_,(int)FStack_28._padding_);
  if ((TTuple<FName,FString> *)FStack_28._padding_ != (TTuple<FName,FString> *)0x0) {
    FMemory::Free((void *)FStack_28._padding_);
  }
  return;
}

// FAssetData @ 142ad42a0

FAssetData * __thiscall FAssetData::FAssetData(FAssetData *this,FAssetData *param_1)

{
  FName FVar1;
  
  this->PackageName = param_1->PackageName;
  this->PackagePath = param_1->PackagePath;
  this->AssetName = param_1->AssetName;
  this->AssetClass = param_1->AssetClass;
  FVar1 = (param_1->AssetClassPath).AssetName;
  (this->AssetClassPath).PackageName = (param_1->AssetClassPath).PackageName;
  (this->AssetClassPath).AssetName = FVar1;
  (this->ChunkArrayRegistryHandle).Index = (param_1->ChunkArrayRegistryHandle).Index;
  this->PackageFlags = param_1->PackageFlags;
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            (&this->TagsAndValues,&param_1->TagsAndValues);
  (this->TaggedAssetBundles).Object = (param_1->TaggedAssetBundles).Object;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->ChunkIDs).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    *(undefined8 *)(this->ChunkIDs).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->ChunkIDs).AllocatorInstance.InlineData;
  }
  (this->ChunkIDs).AllocatorInstance.SecondaryData =
       (param_1->ChunkIDs).AllocatorInstance.SecondaryData;
  (param_1->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->ChunkIDs).ArrayNum = (param_1->ChunkIDs).ArrayNum;
  (this->ChunkIDs).ArrayMax = (param_1->ChunkIDs).ArrayMax;
  (param_1->ChunkIDs).ArrayNum = 0;
  (param_1->ChunkIDs).ArrayMax = 2;
  return this;
}

// FAssetData @ 142ad4360

FAssetData * __thiscall FAssetData::FAssetData(FAssetData *this,FAssetData *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  this->PackageName = param_1->PackageName;
  this->PackagePath = param_1->PackagePath;
  this->AssetName = param_1->AssetName;
  this->AssetClass = param_1->AssetClass;
  FVar4 = (param_1->AssetClassPath).AssetName;
  (this->AssetClassPath).PackageName = (param_1->AssetClassPath).PackageName;
  (this->AssetClassPath).AssetName = FVar4;
  (this->ChunkArrayRegistryHandle).Index = (param_1->ChunkArrayRegistryHandle).Index;
  this->PackageFlags = param_1->PackageFlags;
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            (&this->TagsAndValues,&param_1->TagsAndValues);
  (this->TaggedAssetBundles).Object = (param_1->TaggedAssetBundles).Object;
  pTVar3 = (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_1->ChunkIDs).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ChunkIDs).ArrayNum;
  (this->ChunkIDs).ArrayNum = iVar2;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_1->ChunkIDs;
  }
  piVar1 = &(this->ChunkIDs).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->ChunkIDs).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->ChunkIDs).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->ChunkIDs;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// FAssetData @ 142ad4470

FAssetData * __thiscall FAssetData::FAssetData(FAssetData *this)

{
  (this->ChunkArrayRegistryHandle).Index = -1;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  (this->PackagePath).ComparisonIndex = 0;
  (this->PackagePath).Number = 0;
  (this->AssetName).ComparisonIndex = 0;
  (this->AssetName).Number = 0;
  (this->AssetClass).ComparisonIndex = 0;
  (this->AssetClass).Number = 0;
  (this->AssetClassPath).PackageName.ComparisonIndex = 0;
  (this->AssetClassPath).PackageName.Number = 0;
  (this->AssetClassPath).AssetName.ComparisonIndex = 0;
  (this->AssetClassPath).AssetName.Number = 0;
  this->PackageFlags = 0;
  (this->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (this->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->ChunkIDs).ArrayNum = 0;
  (this->ChunkIDs).ArrayMax = 2;
  return this;
}

// ~FAssetData @ 142ad9660

void __thiscall FAssetData::~FAssetData(FAssetData *this)

{
  ForElementType<int> FVar1;
  
  FVar1 = (this->ChunkIDs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TaggedAssetBundles).SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&this->TagsAndValues);
  return;
}

// operator= @ 142adb8e0

FAssetData * __thiscall FAssetData::operator=(FAssetData *this,FAssetData *param_1)

{
  TSharedPtr<FAssetBundleData,1> *pTVar1;
  ForElementType<int> FVar2;
  FName FVar3;
  
  this->PackageName = param_1->PackageName;
  this->PackagePath = param_1->PackagePath;
  this->AssetName = param_1->AssetName;
  this->AssetClass = param_1->AssetClass;
  FVar3 = (param_1->AssetClassPath).AssetName;
  (this->AssetClassPath).PackageName = (param_1->AssetClassPath).PackageName;
  (this->AssetClassPath).AssetName = FVar3;
  (this->ChunkArrayRegistryHandle).Index = (param_1->ChunkArrayRegistryHandle).Index;
  this->PackageFlags = param_1->PackageFlags;
  FAssetDataTagMapSharedView::operator=(&this->TagsAndValues,&param_1->TagsAndValues);
  pTVar1 = &param_1->TaggedAssetBundles;
  if (&this->TaggedAssetBundles != pTVar1) {
    (this->TaggedAssetBundles).Object = pTVar1->Object;
    pTVar1->Object = (FAssetBundleData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TaggedAssetBundles).SharedReferenceCount,
               &(param_1->TaggedAssetBundles).SharedReferenceCount);
  }
  if (&this->ChunkIDs != &param_1->ChunkIDs) {
    if ((param_1->ChunkIDs).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
      *(undefined8 *)(this->ChunkIDs).AllocatorInstance.InlineData =
           *(undefined8 *)(param_1->ChunkIDs).AllocatorInstance.InlineData;
    }
    FVar2 = (this->ChunkIDs).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (this->ChunkIDs).AllocatorInstance.SecondaryData =
         (param_1->ChunkIDs).AllocatorInstance.SecondaryData;
    (param_1->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (this->ChunkIDs).ArrayNum = (param_1->ChunkIDs).ArrayNum;
    (this->ChunkIDs).ArrayMax = (param_1->ChunkIDs).ArrayMax;
    (param_1->ChunkIDs).ArrayNum = 0;
    (param_1->ChunkIDs).ArrayMax = 2;
  }
  return this;
}

// operator= @ 142adb9d0

FAssetData * __thiscall FAssetData::operator=(FAssetData *this,FAssetData *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FAssetBundleData *pFVar5;
  FName FVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  this->PackageName = param_1->PackageName;
  this->PackagePath = param_1->PackagePath;
  this->AssetName = param_1->AssetName;
  this->AssetClass = param_1->AssetClass;
  FVar6 = (param_1->AssetClassPath).AssetName;
  (this->AssetClassPath).PackageName = (param_1->AssetClassPath).PackageName;
  (this->AssetClassPath).AssetName = FVar6;
  (this->ChunkArrayRegistryHandle).Index = (param_1->ChunkArrayRegistryHandle).Index;
  this->PackageFlags = param_1->PackageFlags;
  FAssetDataTagMapSharedView::operator=(&this->TagsAndValues,&param_1->TagsAndValues);
  pTVar4 = (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->TaggedAssetBundles).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  (this->TaggedAssetBundles).Object = pFVar5;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (this != param_1) {
    iVar2 = (this->ChunkIDs).ArrayMax;
    piVar1 = &(this->ChunkIDs).ArrayMax;
    iVar3 = (param_1->ChunkIDs).ArrayNum;
    _Src = (param_1->ChunkIDs).AllocatorInstance.SecondaryData;
    (this->ChunkIDs).ArrayNum = iVar3;
    if (_Src == (ForElementType<int>)0x0) {
      _Src = (ForElementType<int>)&param_1->ChunkIDs;
    }
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,iVar3,iVar2,&(this->ChunkIDs).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->ChunkIDs).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<int>)0x0) {
          _Dst = (ForElementType<int>)&this->ChunkIDs;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 2);
      }
    }
  }
  return this;
}

// FastGetAsset @ 142af45b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FAssetData::FastGetAsset
          (FAssetData *this,bool param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  FName FVar1;
  UPackage *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UPackage *this_00;
  FString *pFVar5;
  UObject *pUVar6;
  ForElementType<FSetElementId> FVar7;
  wchar_t *pwVar8;
  FLinkerInstancingContext local_98;
  FString local_88;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  
  FVar1 = this->PackageName;
  if ((FVar1 == (FName)0x0) || (this->AssetName == (FName)0x0)) {
    param_2->HashSize = 0;
    FVar7 = (param_2->Hash).SecondaryData;
LAB_142af4720:
    if (FVar7 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_2->Elements);
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UPackage_NoRegister();
    this_00 = (UPackage *)StaticFindObjectFast(pUVar4,(UObject *)0x0,FVar1,None,RF_NoFlags,Borrowed)
    ;
    pUVar2 = this_00;
    if ((this_00 == (UPackage *)0x0) ||
       (bVar3 = UPackage::IsFullyLoaded(this_00), pUVar2 = (UPackage *)0x0, !bVar3)) {
      this_00 = pUVar2;
      if (param_1) {
        local_78.Elements._0_8_ = 0;
        local_78.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        local_78.Elements._48_8_ = _UNK_150631d98;
        local_78.Elements._8_8_ = 0;
        local_78.Elements._32_8_ = 0;
        local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_78.HashSize = 0;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>(&local_78,param_2);
        FLinkerInstancingContext::FLinkerInstancingContext(&local_98,&local_78);
        pFVar5 = ::FName::ToString(&this->PackageName,&local_88);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        this_00 = LoadPackage((UPackage *)0x0,pwVar8,0,(FArchive *)0x0,&local_98);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedData.SharedReferenceCount.ReferenceController);
      }
      if (this_00 == (UPackage *)0x0) {
        param_2->HashSize = 0;
        FVar7 = (param_2->Hash).SecondaryData;
        goto LAB_142af4720;
      }
    }
    FVar1 = this->AssetName;
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = StaticFindObjectFast(pUVar4,(UObject *)this_00,FVar1,None,RF_NoFlags,Borrowed);
    param_2->HashSize = 0;
    FVar7 = (param_2->Hash).SecondaryData;
    if (FVar7 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_2->Elements);
  }
  return pUVar6;
}

// IsUAsset @ 142b05770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAssetData::IsUAsset(FAssetData *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_10d8 [32];
  TStringView<wchar_t> local_10b8;
  TStringBuilderBase<wchar_t> local_10a8;
  wchar_t local_1088 [1035];
  wchar_t local_872 [5];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10d8;
  if ((this->PackageName != (FName)0x0) && (this->AssetName != (FName)0x0)) {
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    ::FName::ToString(&this->AssetName,&local_868);
    local_10a8.Base = local_1088;
    local_10a8.bIsDynamic = false;
    local_10a8.bIsExternal = false;
    local_10a8.CurPos = local_1088;
    local_10a8.End = local_872;
    ::FName::ToString(&this->PackageName,&local_10a8);
    pwVar2 = local_868.Base;
    pwVar1 = local_10a8.Base;
    lVar8 = (longlong)local_868.CurPos - (longlong)local_868.Base;
    iVar7 = (int)((longlong)local_10a8.CurPos - (longlong)local_10a8.Base >> 1);
    local_10b8.Size = iVar7;
    local_10b8.DataPtr = local_10a8.Base;
    iVar3 = UE::String::FindLastChar(&local_10b8,L'/',CaseSensitive);
    iVar4 = iVar3 + 1;
    iVar5 = 0x7fffffff;
    if (iVar4 < 0) {
      iVar5 = iVar3 + -0x80000000;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar7 < iVar4) {
      iVar4 = iVar7;
    }
    iVar3 = iVar7 - iVar4;
    if (iVar5 < iVar7 - iVar4) {
      iVar3 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    iVar3 = (int)(lVar8 >> 1);
    if (((iVar5 == iVar3) &&
        (((iVar5 == 0 || (iVar3 == 0)) ||
         (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar1 + iVar4,pwVar2,(longlong)iVar3),
         iVar4 == 0)))) && (iVar5 == iVar3)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    return bVar6;
  }
  return false;
}

// GetTagValueRef<FAssetRegistryExportPath> @ 142b75cf0

FAssetRegistryExportPath * __thiscall
FAssetData::GetTagValueRef<FAssetRegistryExportPath>
          (FAssetData *this,FAssetRegistryExportPath *__return_storage_ptr__,FName param_1)

{
  FAssetDataTagMapSharedView *this_00;
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FValueId *pFVar4;
  FAssetRegistryExportPath *pFVar5;
  FAssetTagValueRef_u_0 local_res8;
  FAssetRegistryExportPath local_38;
  
  this_00 = &this->TagsAndValues;
  if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
    if ((this_00->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
      local_res8.Loose =
           TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                      (this_00->field0_0x0).Loose,param_1);
      goto LAB_142b75d63;
    }
  }
  else {
    pFVar4 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this_00,param_1);
    if (pFVar4 == (FValueId *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Bits =
           ((ulonglong)*(ushort *)&this_00->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar4;
    }
LAB_142b75d63:
    if (local_res8.Loose != (FString *)0x0) {
      pFVar5 = FAssetTagValueRef::AsExportPath((FAssetTagValueRef *)&local_res8.Fixed,&local_38);
      goto LAB_142b75d9c;
    }
  }
  local_38.ClassPath.PackageName.ComparisonIndex.Value = 0;
  local_38.ClassPath.PackageName.Number = 0;
  pFVar5 = &local_38;
  local_38.ClassPath.AssetName.ComparisonIndex.Value = 0;
  local_38.ClassPath.AssetName.Number = 0;
  local_38.Class.ComparisonIndex.Value = 0;
  local_38.Class.Number = 0;
  local_38.Package.ComparisonIndex.Value = 0;
  local_38.Package.Number = 0;
  local_38.Object.ComparisonIndex.Value = 0;
  local_38.Object.Number = 0;
LAB_142b75d9c:
  FVar1 = (pFVar5->ClassPath).AssetName;
  FVar2 = pFVar5->Class;
  FVar3 = pFVar5->Package;
  (__return_storage_ptr__->ClassPath).PackageName = (pFVar5->ClassPath).PackageName;
  (__return_storage_ptr__->ClassPath).AssetName = FVar1;
  FVar1 = pFVar5->Object;
  __return_storage_ptr__->Class = FVar2;
  __return_storage_ptr__->Package = FVar3;
  __return_storage_ptr__->Object = FVar1;
  return __return_storage_ptr__;
}

// GetTagValueRef<FString> @ 142b75dd0

FString * __thiscall
FAssetData::GetTagValueRef<FString>(FAssetData *this,FString *__return_storage_ptr__,FName param_1)

{
  FAssetDataTagMapSharedView *this_00;
  bool bVar1;
  bool bVar2;
  FValueId *pFVar3;
  FString *pFVar4;
  FAssetTagValueRef_u_0 local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = &this->TagsAndValues;
  local_res8.Bits = local_res8.Bits & 0xffffffff00000000;
  if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
    if ((this_00->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
      local_res8.Loose =
           TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                      (this_00->field0_0x0).Loose,param_1);
      goto LAB_142b75e47;
    }
    local_res8.Loose = (FString *)0x0;
  }
  else {
    pFVar3 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this_00,param_1);
    if (pFVar3 == (FValueId *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Bits =
           ((ulonglong)*(ushort *)&this_00->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar3;
    }
LAB_142b75e47:
    if (local_res8.Loose != (FString *)0x0) {
      pFVar4 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res8.Fixed,&local_18);
      bVar2 = true;
      bVar1 = false;
      goto LAB_142b75e7e;
    }
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = &local_28;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar2 = false;
  bVar1 = true;
LAB_142b75e7e:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PrintAssetData @ 142ba1140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAssetData::PrintAssetData(FAssetData *this)

{
  FAssetDataTagMapSharedView *this_00;
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FNumberedPair *pFVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uStack_d0;
  TArrayView<int_const_,int> local_b8;
  FName local_a8;
  FAssetTagValueRef_u_0 FStack_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FNumberedPair local_28;
  
  if (4 < (byte)LogAssetData._0_1_) {
    GetObjectPathString(this,&local_98);
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogAssetData);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((4 < (byte)LogAssetData._0_1_) &&
       (UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l21::
                    LOG_Static,(FLogCategoryBase *)&LogAssetData), 4 < (byte)LogAssetData._0_1_)) {
      ::FName::ToString(&this->PackageName,&local_88);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l39::
                  LOG_Static,(FLogCategoryBase *)&LogAssetData);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogAssetData._0_1_) {
        ::FName::ToString(&this->PackagePath,&local_78);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l57::
                    LOG_Static,(FLogCategoryBase *)&LogAssetData);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogAssetData._0_1_) {
          ::FName::ToString(&this->AssetName,&local_68);
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l75::
                      LOG_Static,(FLogCategoryBase *)&LogAssetData);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogAssetData._0_1_) {
            FTopLevelAssetPath::ToString(&this->AssetClassPath,&local_58);
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l93
                        ::LOG_Static,(FLogCategoryBase *)&LogAssetData);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
  this_00 = &this->TagsAndValues;
  if (4 < (byte)LogAssetData._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l111::
                LOG_Static,(FLogCategoryBase *)&LogAssetData);
  }
  if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
    if ((this_00->field0_0x0).Loose == (FAssetDataTagMap *)0x0) goto LAB_142ba1492;
    uVar10 = (uint)((this_00->field0_0x0).Loose)->_padding_;
  }
  else {
    uVar10 = (uint)(this->TagsAndValues).field0_0x0.Fixed.Num;
  }
  if (uVar10 != 0) {
    do {
      if (((this_00->field0_0x0).Loose == (FAssetDataTagMap *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("View.Bits != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                             ,0x1a6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
        lVar2 = ((this_00->field0_0x0).Loose)->_padding_;
        local_a8 = *(FName *)(lVar2 + uVar9 * 0x18);
        uStack_d0 = lVar2 + (uVar9 * 3 + 1) * 8;
      }
      else {
        uVar1 = *(ushort *)&this_00->field0_0x0;
        pFVar5 = FixedTagPrivate::FMapHandle::At((FMapHandle *)this_00,&local_28,(uint)uVar9);
        local_a8 = pFVar5->Key;
        uStack_d0 = (ulonglong)CONCAT24(uVar1 >> 2,pFVar5->Value) | 0x8000000000000000;
      }
      FStack_a0.Bits = uStack_d0;
      if (4 < (byte)LogAssetData._0_1_) {
        FAssetTagValueRef::AsString((FAssetTagValueRef *)&FStack_a0.Fixed,&local_38);
        ::FName::ToString(&local_a8,&local_48);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::F::
                    LOG_Static,(FLogCategoryBase *)&LogAssetData);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 != uVar10);
  }
LAB_142ba1492:
  GetChunkIDs(this,&local_b8);
  if (4 < (byte)LogAssetData._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l151::
                LOG_Static,(FLogCategoryBase *)&LogAssetData);
  }
  bVar6 = LogAssetData._0_1_;
  for (piVar7 = local_b8.DataPtr; piVar7 != local_b8.DataPtr + local_b8.ArrayNum;
      piVar7 = piVar7 + 1) {
    if (4 < bVar6) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l173::
                  LOG_Static,(FLogCategoryBase *)&LogAssetData);
      bVar6 = LogAssetData._0_1_;
    }
  }
  if (4 < bVar6) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetData::PrintAssetData(void)const___ptr64'::__l191::
                LOG_Static,(FLogCategoryBase *)&LogAssetData);
  }
  return;
}

