// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// FAssetRegistryWriter @ 142ad56e0

FAssetRegistryWriter * __thiscall
FAssetRegistryWriter::FAssetRegistryWriter
          (FAssetRegistryWriter *this,FAssetRegistryWriterOptions *param_1,FArchive *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  FAssetRegistryWriter *pFVar4;
  byte bVar5;
  
  FLargeMemoryWriter::FLargeMemoryWriter
            ((FLargeMemoryWriter *)&this->_padding_,0,false,(wchar_t *)0x0);
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,(FArchive *)&this->_padding_);
  this->_padding_ = (longlong)&___7FAssetRegistryWriter__6B_;
  *(undefined8 *)&this->Names = 0;
  *(undefined8 *)&(this->Names).field_0x8 = 0;
  *(undefined8 *)&(this->Names).field_0x20 = 0;
  *(undefined4 *)&(this->Names).field_0x28 = 0;
  *(undefined4 *)&(this->Names).field_0x2c = 0x80;
  *(undefined4 *)&(this->Names).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Names).field_0x34 = 0;
  *(undefined8 *)&(this->Names).field_0x40 = 0;
  *(undefined4 *)&(this->Names).field_0x48 = 0;
  FixedTagPrivate::FStoreBuilder::FStoreBuilder(&this->Tags,&param_1->Tags);
  this->TargetAr = param_2;
  if ((this->_padding_ & 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryArchive.cpp"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAssetRegistryWriter *)(*pcVar2)();
      return pFVar4;
    }
  }
  FArchiveState::SetArchiveState((FArchiveState *)this,(FArchiveState *)this->TargetAr);
  bVar5 = (byte)this->TargetAr->field_0x2b >> 4;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 ^ (bVar5 << 4 ^ *(byte *)((longlong)&this->_padding_ + 3)) & 0x10;
  (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,bVar5 & 1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 3) ^ this->TargetAr->field_0x2b) &
                      0x10;
  return this;
}

// ~FAssetRegistryWriter @ 142ada4f0

void __thiscall FAssetRegistryWriter::~FAssetRegistryWriter(FAssetRegistryWriter *this)

{
  longlong *this_00;
  int iVar1;
  FArchive *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FStoreData *pFVar7;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uchar *puVar10;
  undefined4 uStack_fc;
  TArrayView<FDisplayNameEntryId_const_,int> local_f8;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_e8;
  FStoreData local_d8;
  
  this_00 = &this->_padding_;
  this->_padding_ = (longlong)&___7FAssetRegistryWriter__6B_;
  lVar6 = (**(code **)(*this_00 + 0x30))(this_00);
  pFVar7 = FixedTagPrivate::FStoreBuilder::Finalize(&this->Tags,&local_d8);
  FixedTagPrivate::SaveStore(pFVar7,(FArchive *)this);
  DestructItems<FixedTagPrivate::FMarshalledText,int>
            ((FMarshalledText *)local_d8.Texts.AllocatorInstance.Data,local_d8.Texts.ArrayNum);
  if (local_d8.Texts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Texts.AllocatorInstance.Data);
  }
  if (local_d8.ExportPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.ExportPaths.AllocatorInstance.Data);
  }
  if (local_d8.NumberlessExportPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.NumberlessExportPaths.AllocatorInstance.Data);
  }
  if (local_d8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Names.AllocatorInstance.Data);
  }
  if (local_d8.NumberlessNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.NumberlessNames.AllocatorInstance.Data);
  }
  if (local_d8.WideStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.WideStrings.AllocatorInstance.Data);
  }
  if (local_d8.WideStringOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.WideStringOffsets.AllocatorInstance.Data);
  }
  if (local_d8.AnsiStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AnsiStrings.AllocatorInstance.Data);
  }
  if (local_d8.AnsiStringOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AnsiStringOffsets.AllocatorInstance.Data);
  }
  if (local_d8.NumberlessPairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.NumberlessPairs.AllocatorInstance.Data);
  }
  if (local_d8.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Pairs.AllocatorInstance.Data);
  }
  pFVar2 = this->TargetAr;
  pTVar8 = FlattenIndex(&local_e8,&this->Names);
  local_f8.DataPtr = (FDisplayNameEntryId *)(pTVar8->AllocatorInstance).Data;
  iVar1 = pTVar8->ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f8._12_4_ = uStack_fc;
  local_f8.ArrayNum = iVar1;
  SaveNameBatch(&local_f8,pFVar2);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  pFVar2 = this->TargetAr;
  pcVar4 = *(code **)(*(longlong *)pFVar2 + 0x188);
  lVar9 = (**(code **)(*this_00 + 0x30))(this_00);
  puVar10 = FLargeMemoryWriter::GetData((FLargeMemoryWriter *)this_00);
  (*pcVar4)(pFVar2,puVar10 + lVar6,lVar9 - lVar6);
  pFVar2 = this->TargetAr;
  pcVar4 = *(code **)(*(longlong *)pFVar2 + 0x188);
  puVar10 = FLargeMemoryWriter::GetData((FLargeMemoryWriter *)this_00);
  (*pcVar4)(pFVar2,puVar10,lVar6);
  FixedTagPrivate::FStoreBuilder::~FStoreBuilder(&this->Tags);
  *(undefined4 *)&(this->Names).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Names).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FDisplayNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDisplayNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDisplayNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Names);
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  FLargeMemoryWriter::~FLargeMemoryWriter((FLargeMemoryWriter *)this_00);
  return;
}

// operator<< @ 142adc9b0

FArchive * __thiscall FAssetRegistryWriter::operator<<(FAssetRegistryWriter *this,FName *param_1)

{
  TMap<FDisplayNameEntryId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>_>
  *this_00;
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FArchive *pFVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  uint *local_30;
  int *local_28;
  
  local_res18[0] = (param_1->ComparisonIndex).Value;
  this_00 = &this->Names;
  local_res20[0] = *(int *)&(this->Names).field_0x8 - *(int *)&(this->Names).field_0x34;
  uVar5 = ::GetTypeHash((FNameEntryId)local_res18[0]);
  if (*(int *)&(this->Names).field_0x8 != *(int *)&(this->Names).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Names).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Names).field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&(this->Names).field_0x48 - 1U & uVar5) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&this_00->field_0x0);
        if (*puVar8 == local_res18[0]) {
          if (puVar8 != (uint *)0x0) goto LAB_142adca83;
          break;
        }
        uVar9 = puVar8[2];
      } while (uVar9 != 0xffffffff);
    }
  }
  local_30 = local_res18;
  local_28 = local_res20;
  TSet<TTuple<FDisplayNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FDisplayNameEntryId_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<FDisplayNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_38,
             (TPairInitializer<FDisplayNameEntryId_const_&,unsigned_int_&&> *)(ulonglong)uVar5,
             (bool *)&local_30);
  puVar8 = (uint *)((longlong)local_38[0] * 0x10 + *(longlong *)&this_00->field_0x0);
LAB_142adca83:
  local_res8[0] = puVar8[1];
  if (((int)local_res8[0] < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index & AssetRegistryNumberedNameBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryArchive.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FArchive *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = param_1->Number;
  plVar2 = (longlong *)this->_padding_;
  if (uVar5 == 0) {
    if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 4;
      return (FArchive *)this;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    puVar8 = local_res8;
  }
  else {
    local_res8[0] = local_res8[0] | 0x80000000;
    local_res10[0] = uVar5;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = (longlong *)this->_padding_;
    if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 4;
      return (FArchive *)this;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    puVar8 = local_res10;
  }
  if ((bVar1 & 1) != 0) {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,puVar8);
    return (FArchive *)this;
  }
  (**(code **)(this->_padding_ + 0x188))(this,puVar8,4);
  return (FArchive *)this;
}

// SerializeTagsAndBundles @ 142b1db70

void __thiscall
FAssetRegistryWriter::SerializeTagsAndBundles(FAssetRegistryWriter *this,FAssetData *param_1)

{
  SaveTags(this,&param_1->TagsAndValues);
  SaveBundles((FArchive *)this,&param_1->TaggedAssetBundles);
  return;
}

