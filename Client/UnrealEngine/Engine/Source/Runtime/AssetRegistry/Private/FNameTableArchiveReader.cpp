// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 13

// FNameTableArchiveReader @ 142b4e0c0

FNameTableArchiveReader * __thiscall
FNameTableArchiveReader::FNameTableArchiveReader(FNameTableArchiveReader *this,FArchive *param_1)

{
  bool bVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->ProxyAr = param_1;
  this->_padding_ = (longlong)&___7FNameTableArchiveReader__6B_;
  (this->NameMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameMap).ArrayNum = 0;
  (this->NameMap).ArrayMax = 0;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  bVar1 = SerializeNameMap(this);
  if (!bVar1) {
    this->ProxyAr = (FArchive *)&GNameTableErrorArchive;
    FArchiveState::SetError((FArchiveState *)this);
  }
  return this;
}

// operator<< @ 142b4f810

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FNameTableArchiveReader::operator<<(FNameTableArchiveReader *this,FName *param_1)

{
  FNameEntryId FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FArchive *pFVar6;
  FName FVar7;
  longlong lVar8;
  uint local_res8 [2];
  uint local_res18 [4];
  
  plVar2 = (longlong *)this->_padding_;
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
  lVar8 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || ((this->NameMap).ArrayNum <= (int)local_res8[0])) {
    if (1 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    this->ProxyAr = (FArchive *)&GNameTableErrorArchive;
    FArchiveState::SetError((FArchiveState *)this);
    FVar7.ComparisonIndex.Value = 0;
    FVar7.Number = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < (this->NameMap).ArrayNum) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar3)();
        return pFVar6;
      }
    }
    plVar2 = (longlong *)this->_padding_;
    FVar1.Value = *(uint *)((this->NameMap).AllocatorInstance.Data + lVar8 * 4);
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar5 = 0;
    if (FVar1.Value != 0) {
      uVar5 = local_res18[0];
    }
    FVar7.Number = uVar5;
    FVar7.ComparisonIndex.Value = FVar1.Value;
  }
  *param_1 = FVar7;
  return (FArchive *)this;
}

// GetCustomVersions @ 142b58cb0

FCustomVersionContainer * __thiscall
FNameTableArchiveReader::GetCustomVersions(FNameTableArchiveReader *this)

{
  FCustomVersionContainer *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b58cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FCustomVersionContainer *)(**(code **)(*(longlong *)this->ProxyAr + 0x60))();
  return pFVar1;
}

// Precache @ 142b5e340

bool __thiscall
FNameTableArchiveReader::Precache(FNameTableArchiveReader *this,long64 param_1,long64 param_2)

{
  undefined1 uVar1;
  
  if ((this->_padding_ & 0x200) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b5e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->ProxyAr + 0x1f0))();
    return (bool)uVar1;
  }
  return false;
}

// ResetCustomVersions @ 142b64c00

void __thiscall FNameTableArchiveReader::ResetCustomVersions(FNameTableArchiveReader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142b64c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->ProxyAr + 0x70))();
  return;
}

// Seek @ 142b64cb0

void __thiscall FNameTableArchiveReader::Seek(FNameTableArchiveReader *this,long64 param_1)

{
  if ((this->_padding_ & 0x200) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b64cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->ProxyAr + 0x1b8))();
    return;
  }
  return;
}

// Serialize @ 142b64e50

void __thiscall
FNameTableArchiveReader::Serialize(FNameTableArchiveReader *this,void *param_1,long64 param_2)

{
  (**(code **)(*(longlong *)this->ProxyAr + 0x188))();
  if ((this->ProxyAr->field_0x29 & 2) != 0) {
    this->ProxyAr = (FArchive *)&GNameTableErrorArchive;
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  return;
}

// SerializeNameMap @ 142b689e0

bool __thiscall FNameTableArchiveReader::SerializeNameMap(FNameTableArchiveReader *this)

{
  int *piVar1;
  TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  FName *pFVar12;
  uint uVar13;
  int iVar14;
  uint local_res8 [2];
  ulong64 local_res10;
  FName local_res18 [2];
  uint local_858 [4];
  FNameEntrySerialized local_848;
  
  iVar14 = 0;
  plVar3 = (longlong *)this->_padding_;
  local_res10 = 0;
  if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res10);
    }
  }
  else {
    local_res10 = *(ulong64 *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  lVar9 = (**(code **)(this->_padding_ + 0x30))();
  if (lVar9 < (longlong)local_res10) {
LAB_142b68c88:
    bVar6 = false;
  }
  else {
    if (0 < (longlong)local_res10) {
      uVar10 = (**(code **)(this->_padding_ + 0x28))(this);
      (**(code **)(*(longlong *)this->ProxyAr + 0x1b8))(this->ProxyAr,local_res10);
      plVar3 = (longlong *)this->_padding_;
      local_res8[0] = 0;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((this->_padding_ & 0x10000) == 0) {
          (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if (((this->_padding_ & 0x200) != 0) || ((int)local_res8[0] < 0)) goto LAB_142b68c88;
      pcVar4 = *(code **)(this->_padding_ + 0x30);
      lVar9 = (**(code **)(this->_padding_ + 0x28))(this);
      lVar11 = (*pcVar4)(this);
      pTVar2 = &this->NameMap;
      lVar9 = (longlong)((ulonglong)((uint)(lVar11 - lVar9 >> 0x3f) & 3) + (lVar11 - lVar9)) >> 2;
      uVar13 = (uint)lVar9;
      if ((int)local_res8[0] < lVar9) {
        uVar13 = local_res8[0];
      }
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      piVar1 = &(this->NameMap).ArrayMax;
      if ((this->NameMap).ArrayMax < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar13,&pTVar2->AllocatorInstance,(this->NameMap).ArrayNum,piVar1);
      }
      if (0 < (int)local_res8[0]) {
        do {
          local_848.bIsWide = false;
          local_848.NonCasePreservingHash = 0;
          local_848.CasePreservingHash = 0;
          ::operator<<((FArchive *)this,&local_848);
          if ((this->_padding_ & 0x200) != 0) goto LAB_142b68c88;
          pFVar12 = ::FName::FName(local_res18,&local_848);
          local_858[0] = (pFVar12->ComparisonIndex).Value;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar5 <= (FScriptContainerElement *)local_858) &&
             ((FScriptContainerElement *)local_858 < pFVar5 + (longlong)*piVar1 * 4)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          iVar8 = (this->NameMap).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,piVar1);
            (this->NameMap).ArrayNum = iVar8;
          }
          iVar14 = iVar14 + 1;
          (this->NameMap).ArrayNum = iVar8 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_858[0];
        } while (iVar14 < (int)local_res8[0]);
      }
      (**(code **)(*(longlong *)this->ProxyAr + 0x1b8))(this->ProxyAr,uVar10);
    }
    bVar6 = true;
  }
  return bVar6;
}

// SerializeTagsAndBundles @ 142b6a6f0

void __thiscall
FNameTableArchiveReader::SerializeTagsAndBundles(FNameTableArchiveReader *this,FAssetData *param_1)

{
  FKeyForward local_res8;
  FAssetDataTagMap local_28;
  
  local_28._padding_ = 0;
  local_28._padding_ = 0;
  local_28.RefCount.Counter = 0;
  TArrayPrivateFriend::Serialize<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
            ((FArchive *)this,(TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)&local_28
            );
  if ((this->_padding_ & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
              ((TTuple<FName,FString> *)local_28._padding_,(int)local_28._padding_,local_res8,
               (FNameFastLess)local_res8);
  }
  FAssetData::SetTagsAndAssetBundles(param_1,&local_28);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_28._padding_,(int)local_28._padding_);
  if ((TTuple<FName,FString> *)local_28._padding_ != (TTuple<FName,FString> *)0x0) {
    FMemory::Free((void *)local_28._padding_);
  }
  return;
}

// SerializeTagsAndBundlesOldVersion @ 142b6a780

void __thiscall
FNameTableArchiveReader::SerializeTagsAndBundlesOldVersion
          (FNameTableArchiveReader *this,FAssetData *param_1,int param_2)

{
  FKeyForward local_res8;
  FAssetDataTagMap local_28;
  
  local_28._padding_ = 0;
  local_28._padding_ = 0;
  local_28.RefCount.Counter = 0;
  TArrayPrivateFriend::Serialize<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
            ((FArchive *)this,(TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)&local_28
            );
  if ((this->_padding_ & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
              ((TTuple<FName,FString> *)local_28._padding_,(int)local_28._padding_,local_res8,
               (FNameFastLess)local_res8);
  }
  FAssetData::SetTagsAndAssetBundles(param_1,&local_28);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_28._padding_,(int)local_28._padding_);
  if ((TTuple<FName,FString> *)local_28._padding_ != (TTuple<FName,FString> *)0x0) {
    FMemory::Free((void *)local_28._padding_);
  }
  return;
}

// SetCustomVersions @ 142b6b3b0

void __thiscall
FNameTableArchiveReader::SetCustomVersions
          (FNameTableArchiveReader *this,FCustomVersionContainer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b6b3ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->ProxyAr + 0x68))();
  return;
}

// Tell @ 142b6bb60

long64 __thiscall FNameTableArchiveReader::Tell(FNameTableArchiveReader *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b6bb6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->ProxyAr + 0x28))();
  return lVar1;
}

// TotalSize @ 142b6cc20

long64 __thiscall FNameTableArchiveReader::TotalSize(FNameTableArchiveReader *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b6cc2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->ProxyAr + 0x30))();
  return lVar1;
}

