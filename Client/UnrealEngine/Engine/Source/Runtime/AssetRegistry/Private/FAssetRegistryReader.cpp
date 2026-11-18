// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 6

// FAssetRegistryReader @ 142ad5030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAssetRegistryReader * __thiscall
FAssetRegistryReader::FAssetRegistryReader
          (FAssetRegistryReader *this,FArchive *param_1,int param_2,FAssetRegistryHeader param_3)

{
  byte *pbVar1;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar2;
  TFuture<void> *pTVar3;
  TRefCountPtr<FixedTagPrivate::FStore_const_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FStore *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  FAssetRegistryReader *pFVar10;
  TFuture<void> *pTVar11;
  undefined8 uVar12;
  TRefCountPtr<FixedTagPrivate::FStore_const_> TVar13;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong *plVar15;
  byte bVar16;
  bool bStackX_24;
  undefined1 auStackY_118 [32];
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_e8;
  FStore *local_d8;
  FArchive *local_d0;
  FStore *local_c8;
  FAsyncStoreLoader local_c0;
  undefined1 local_b0 [16];
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_a0;
  code *local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d0 = param_1;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  pTVar2 = &this->Names;
  lVar8 = this->_padding_;
  pTVar3 = &this->Task;
  this->_padding_ = (longlong)&___7FAssetRegistryReader__6B_;
  pTVar4 = &this->Tags;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Names).ArrayNum = 0;
  (this->Names).ArrayMax = 0;
  pTVar4->Reference = (FStore *)0x0;
  *(undefined8 *)pTVar3 = 0;
  *(undefined8 *)&(this->Task).field_0x8 = 0;
  if (((lVar8 & 1) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryArchive.cpp"
                         ,0x10b,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FAssetRegistryReader *)(*pcVar7)();
    return pFVar10;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xef;
  bStackX_24 = param_3.bFilterEditorOnlyData;
  plVar15 = (longlong *)this->_padding_;
  bVar16 = (bStackX_24 & 1U) << 4;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | bVar16;
  (**(code **)(*plVar15 + 0x80))();
  *(byte *)((longlong)&this->_padding_ + 3) =
       *(byte *)((longlong)&this->_padding_ + 3) & 0xef | bVar16;
  if ((param_2 < 1) || (param_3.Version != LatestVersion)) {
    pTVar14 = LoadNameBatch(&local_a0,local_d0,RespectOrder);
    if (pTVar2 != pTVar14) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Names).ArrayNum = pTVar14->ArrayNum;
      (this->Names).ArrayMax = pTVar14->ArrayMax;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    TVar13 = FixedTagPrivate::LoadStore((FArchive *)&local_c8,(Type)this);
    if ((FStore *)pTVar4 != TVar13.Reference) {
      pFVar6 = pTVar4->Reference;
      pTVar4->Reference = (FStore *)((TVar13.Reference)->Pairs).DataPtr;
      ((TVar13.Reference)->Pairs).DataPtr = (FNumberedPair *)0x0;
      if (pFVar6 != (FStore *)0x0) {
        FixedTagPrivate::FStore::Release(pFVar6);
      }
    }
    if (local_c8 != (FStore *)0x0) {
      FixedTagPrivate::FStore::Release(local_c8);
    }
  }
  else {
    LoadNameBatchAsync((TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)>
                        *)local_88,(FArchive *)this,param_2,None);
    FixedTagPrivate::FAsyncStoreLoader::FAsyncStoreLoader(&local_c0);
    pTVar11 = FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad
                        (&local_c0,(TFuture<void> *)local_b0,(FArchive *)this,param_2,LatestVersion)
    ;
    if (pTVar3 != pTVar11) {
      *(undefined8 *)pTVar3 = *(undefined8 *)pTVar11;
      *(undefined8 *)pTVar11 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->Task).field_0x8,
                 (FSharedReferencer<1> *)&pTVar11->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b0._8_8_);
    UE::Core::Private::Function::CheckCallable(local_88[0]);
    pcVar7 = local_88[0];
    plVar15 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar15 = local_60;
    }
    uVar12 = (**(code **)(*plVar15 + 8))();
    (*pcVar7)(&local_e8,uVar12);
    if (pTVar2 != &local_e8) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
      (this->Names).ArrayNum = local_e8.ArrayNum;
      (this->Names).ArrayMax = local_e8.ArrayMax;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    TVar13 = FixedTagPrivate::FAsyncStoreLoader::LoadFinalData
                       (&local_c0,(FArchive *)&local_d8,(Type)this);
    if ((FStore *)pTVar4 != TVar13.Reference) {
      pFVar6 = pTVar4->Reference;
      pTVar4->Reference = (FStore *)((TVar13.Reference)->Pairs).DataPtr;
      ((TVar13.Reference)->Pairs).DataPtr = (FNumberedPair *)0x0;
      if (pFVar6 != (FStore *)0x0) {
        FixedTagPrivate::FStore::Release(pFVar6);
      }
    }
    if (local_d8 != (FStore *)0x0) {
      FixedTagPrivate::FStore::Release(local_d8);
    }
    if (local_c0.Store.Reference != (FStore *)0x0) {
      FixedTagPrivate::FStore::Release(local_c0.Store.Reference);
    }
    if (local_88[0] != (code *)0x0) {
      plVar15 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar15 = local_60;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return this;
}

// ~FAssetRegistryReader @ 142ada260

void __thiscall FAssetRegistryReader::~FAssetRegistryReader(FAssetRegistryReader *this)

{
  longlong *plVar1;
  FStore *this_00;
  FScriptContainerElement *pFVar2;
  char cVar3;
  
  this->_padding_ = (longlong)&___7FAssetRegistryReader__6B_;
  if (*(longlong *)&this->Task != 0) {
    do {
      do {
      } while (*(longlong *)&this->Task == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Task + 0x60);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar3 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Task).field_0x8);
  this_00 = (this->Tags).Reference;
  if (this_00 != (FStore *)0x0) {
    FixedTagPrivate::FStore::Release(this_00);
  }
  pFVar2 = (this->Names).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  return;
}

// operator<< @ 142adc840

FArchive * __thiscall FAssetRegistryReader::operator<<(FAssetRegistryReader *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  uint local_res10 [4];
  
  if ((this->Names).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Names.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryArchive.cpp"
                       ,0x135,L"Attempted to load FName before name batch loading has finished");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar2)();
      return pFVar5;
    }
  }
  plVar1 = (longlong *)this->_padding_;
  local_res8[0] = 0;
  local_res10[0] = 0;
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
  if ((local_res8[0] & 0x80000000) != 0) {
    plVar1 = (longlong *)this->_padding_;
    local_res8[0] = local_res8[0] + 0x80000000;
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
  }
  lVar7 = (longlong)(int)local_res8[0];
  uVar6 = 0;
  if ((int)local_res8[0] < (this->Names).ArrayNum) {
    uVar6 = ~local_res8[0] >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar3.Number = local_res10[0];
  FVar3.ComparisonIndex.Value = *(uint *)((this->Names).AllocatorInstance.Data + lVar7 * 4);
  *param_1 = FVar3;
  return (FArchive *)this;
}

// SerializeTagsAndBundles @ 142b1d920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAssetRegistryReader::SerializeTagsAndBundles(FAssetRegistryReader *this,FAssetData *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FMapHandle FVar4;
  FSharedReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint local_res8 [2];
  ulong64 local_res10;
  FAssetDataTagMapSharedView local_res18;
  FPartialMapHandle local_res20;
  undefined1 local_68 [8];
  TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> local_60;
  TReferenceControllerBase<1> *local_50;
  FSharedReferencer<1> aFStack_48 [3];
  
  plVar1 = (longlong *)this->_padding_;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res10);
    }
  }
  else {
    local_res10 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  local_res20 = FixedTagPrivate::FPartialMapHandle::FromInt(local_res10);
  FVar4 = FixedTagPrivate::FPartialMapHandle::MakeFullHandle(&local_res20,(uint)local_68);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&local_res18,*(FMapHandle *)FVar4);
  FAssetDataTagMapSharedView::operator=(&param_1->TagsAndValues,&local_res18);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_res18);
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
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if ((int)local_res8[0] < 1) {
    local_50 = (TReferenceControllerBase<1> *)0x0;
    aFStack_48[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_>::SetNum(&local_60,local_res8[0],Default);
    LoadBundleEntries((FArchive *)this,&local_60);
    FVar5.ReferenceController = ::operator_new(0x20);
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_50 = ___xmm_00000000000000000000000000000010;
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
      FVar5.ReferenceController[1]._padding_ = (longlong)local_60.AllocatorInstance.Data;
      local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.ReferenceController[1].SharedReferenceCount = (atomic<int>)local_60.ArrayNum;
      FVar5.ReferenceController[1].WeakReferenceCount = (atomic<int>)local_60.ArrayMax;
      local_60.ArrayNum = 0;
      local_60.ArrayMax = 0;
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
      local_50 = pTVar7;
    }
    aFStack_48[0].ReferenceController = FVar5.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    DestructItems<FAssetBundleEntry,int>
              ((FAssetBundleEntry *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
    pTVar6 = pTVar7;
    if ((FAssetBundleEntry *)local_60.AllocatorInstance.Data != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  if (&param_1->TaggedAssetBundles != (TSharedPtr<FAssetBundleData,1> *)&local_50) {
    (param_1->TaggedAssetBundles).Object = (FAssetBundleData *)pTVar6;
    local_50 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->TaggedAssetBundles).SharedReferenceCount,aFStack_48);
    FVar5.ReferenceController = aFStack_48[0].ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// SerializeTagsAndBundlesOldVersion @ 142b1dbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAssetRegistryReader::SerializeTagsAndBundlesOldVersion
          (FAssetRegistryReader *this,FAssetData *param_1,Type param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FMapHandle FVar4;
  FSharedReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint local_res8 [2];
  ulong64 local_res10;
  FAssetDataTagMapSharedView local_res20;
  FPartialMapHandle local_58;
  undefined1 local_50 [8];
  TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> local_48;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  
  plVar1 = (longlong *)this->_padding_;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res10);
    }
  }
  else {
    local_res10 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  local_58 = FixedTagPrivate::FPartialMapHandle::FromInt(local_res10);
  FVar4 = FixedTagPrivate::FPartialMapHandle::MakeFullHandle(&local_58,(uint)local_50);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&local_res20,*(FMapHandle *)FVar4);
  FAssetDataTagMapSharedView::operator=(&param_1->TagsAndValues,&local_res20);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_res20);
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
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if ((int)local_res8[0] < 1) {
    local_38 = (TReferenceControllerBase<1> *)0x0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_>::SetNum(&local_48,local_res8[0],Default);
    if (param_2 == LatestVersion) {
      LoadBundleEntries((FArchive *)this,&local_48);
    }
    else {
      LoadBundleEntriesOldVersion((FArchive *)this,&local_48,param_2);
    }
    FVar5.ReferenceController = ::operator_new(0x20);
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
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
      FVar5.ReferenceController[1]._padding_ = (longlong)local_48.AllocatorInstance.Data;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.ReferenceController[1].SharedReferenceCount = (atomic<int>)local_48.ArrayNum;
      FVar5.ReferenceController[1].WeakReferenceCount = (atomic<int>)local_48.ArrayMax;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
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
      local_38 = pTVar7;
    }
    FStack_30.ReferenceController = FVar5.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    DestructItems<FAssetBundleEntry,int>
              ((FAssetBundleEntry *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    pTVar6 = pTVar7;
    if ((FAssetBundleEntry *)local_48.AllocatorInstance.Data != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  if (&param_1->TaggedAssetBundles != (TSharedPtr<FAssetBundleData,1> *)&local_38) {
    (param_1->TaggedAssetBundles).Object = (FAssetBundleData *)pTVar6;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->TaggedAssetBundles).SharedReferenceCount,&FStack_30);
    FVar5.ReferenceController = FStack_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// WaitForTasks @ 142b2de60

void __thiscall FAssetRegistryReader::WaitForTasks(FAssetRegistryReader *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Task != 0) {
    do {
      do {
      } while (*(longlong *)&this->Task == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Task + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  return;
}

