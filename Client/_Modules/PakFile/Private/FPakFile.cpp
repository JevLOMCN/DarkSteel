// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 62

// ValidateDirectoryTreeSearchConsistency<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a4f9b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFile::ValidateDirectoryTreeSearchConsistency<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 != param_3->ArrayNum) {
    return false;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
LAB_142a4f9f0:
  if (param_1->ArrayNum != iVar1) {
    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (pFVar5 != pFVar4) {
    pFVar3 = (param_3->AllocatorInstance).Data;
    pFVar6 = pFVar3 + (longlong)param_3->ArrayNum * 0x10;
    if (pFVar3 == pFVar6) {
      return false;
    }
    do {
      iVar2 = *(int *)(pFVar3 + 8);
      if (iVar2 == *(int *)(pFVar5 + 8)) {
        if (iVar2 < 2) goto LAB_142a4fa72;
        iVar2 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar3,*(wchar_t **)pFVar5);
        bVar7 = iVar2 == 0;
      }
      else {
        bVar7 = iVar2 + *(int *)(pFVar5 + 8) == 1;
      }
      if (bVar7) goto LAB_142a4fa72;
      pFVar3 = pFVar3 + 0x10;
      if (pFVar3 == pFVar6) {
        return false;
      }
    } while( true );
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 != param_4->ArrayNum) {
    return false;
  }
  pFVar5 = (param_2->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  goto LAB_142a4fa98;
LAB_142a4fa72:
  pFVar5 = pFVar5 + 0x10;
  goto LAB_142a4f9f0;
LAB_142a4fa98:
  if (param_2->ArrayNum != iVar1) {
    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (pFVar5 == pFVar4) {
    return true;
  }
  pFVar3 = (param_4->AllocatorInstance).Data;
  pFVar6 = pFVar3 + (longlong)param_4->ArrayNum * 0x10;
  if (pFVar3 == pFVar6) {
    return false;
  }
  do {
    iVar2 = *(int *)(pFVar3 + 8);
    if (iVar2 == *(int *)(pFVar5 + 8)) {
      if (iVar2 < 2) break;
      iVar2 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar3,*(wchar_t **)pFVar5);
      bVar7 = iVar2 == 0;
    }
    else {
      bVar7 = iVar2 + *(int *)(pFVar5 + 8) == 1;
    }
    if (bVar7) break;
    pFVar3 = pFVar3 + 0x10;
    if (pFVar3 == pFVar6) {
      return false;
    }
  } while( true );
  pFVar5 = pFVar5 + 0x10;
  goto LAB_142a4fa98;
}

// ValidateDirectoryTreeSearchConsistency<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a4fb10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFile::
ValidateDirectoryTreeSearchConsistency<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  uint *puVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res20;
  undefined1 local_a8 [4];
  int local_a4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if (iStack_78 != *(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34)
  {
    return false;
  }
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  iStack_84 = iStack_98;
  local_80 = iStack_98;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_142a4fbce;
      uVar16 = puVar19[lVar10 + 1];
    }
    uStack_94 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_a4 = (int)lVar10;
    iStack_84 = local_80 + -1 + local_a4;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_142a4fbce:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  iVar12 = (int)uVar16 >> 5;
  local_res18 = param_2;
  local_res20 = param_3;
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  this_00 = local_res20;
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar4) {
    puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142a4fcc0;
      uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_142a4fcc0:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    lVar10 = *(longlong *)&pTVar6->Elements;
    pFVar2 = (FString *)(lVar10 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    iVar12 = *(int *)(lVar10 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    iVar9 = iVar12 + -1;
    if (iVar12 == 0) {
      pwVar11 = L"";
      iVar9 = 0;
    }
    else {
      pwVar11 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
    iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (this_00,uVar14,pFVar2);
    if (iVar9 == -1) {
      return false;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  iVar9 = local_res18->ArrayNum;
  if (iVar9 != param_4->ArrayNum) {
    return false;
  }
  pFVar17 = (local_res18->AllocatorInstance).Data;
  pFVar20 = pFVar17 + (longlong)iVar9 * 0x10;
LAB_142a4fd63:
  if (local_res18->ArrayNum != iVar9) {
    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_a8);
  }
  if (pFVar17 == pFVar20) {
    return true;
  }
  pFVar13 = (param_4->AllocatorInstance).Data;
  pFVar15 = pFVar13 + (longlong)param_4->ArrayNum * 0x10;
  if (pFVar13 == pFVar15) {
    return false;
  }
  do {
    iVar12 = *(int *)(pFVar13 + 8);
    if (iVar12 == *(int *)(pFVar17 + 8)) {
      if (iVar12 < 2) break;
      iVar12 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar13,*(wchar_t **)pFVar17);
      bVar7 = iVar12 == 0;
    }
    else {
      bVar7 = iVar12 + *(int *)(pFVar17 + 8) == 1;
    }
    if (bVar7) break;
    pFVar13 = pFVar13 + 0x10;
    if (pFVar13 == pFVar15) {
      return false;
    }
  } while( true );
  pFVar17 = pFVar17 + 0x10;
  goto LAB_142a4fd63;
}

// FPakFile @ 142a53200

/* WARNING: Enum "EVersion": Some values do not have unique names */

FPakFile * __thiscall
FPakFile::FPakFile(FPakFile *this,IPlatformFile *param_1,wchar_t *param_2,bool param_3,bool param_4)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FPakInfo *pFVar3;
  FArchive *pFVar4;
  int iVar5;
  long64 *plVar6;
  undefined8 local_res8;
  FString local_38;
  FSharedPakReader local_28;
  
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  this->_padding_ = (longlong)&_vftable__for__IPakFile__;
  *(undefined4 *)&this->_padding_ = 0;
  ::FString::FString(&this->PakFilename,param_2);
  ::FName::FName(&this->PakFilenameName,param_2);
  (this->Decryptor).Ptr = (FChunkCacheWorker *)0x0;
  (this->Readers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Readers).ArrayNum = 0;
  (this->Readers).ArrayMax = 0;
  this->CurrentlyUsedReaders = (atomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ReadersCriticalSection,4000);
  (this->Info).Magic = 0x5a6f12e1;
  pTVar2 = &(this->Info).CompressionMethods;
  (this->Info).Version = 0xc;
  piVar1 = &(this->Info).CompressionMethods.ArrayMax;
  (this->Info).IndexOffset = -1;
  (this->Info).IndexSize = 0;
  (this->Info).IndexHash.Hash[0] = '\0';
  (this->Info).IndexHash.Hash[1] = '\0';
  (this->Info).IndexHash.Hash[2] = '\0';
  (this->Info).IndexHash.Hash[3] = '\0';
  (this->Info).IndexHash.Hash[4] = '\0';
  (this->Info).IndexHash.Hash[5] = '\0';
  (this->Info).IndexHash.Hash[6] = '\0';
  (this->Info).IndexHash.Hash[7] = '\0';
  pFVar3 = &this->Info;
  (pFVar3->IndexHash).Hash[8] = '\0';
  (pFVar3->IndexHash).Hash[9] = '\0';
  (pFVar3->IndexHash).Hash[10] = '\0';
  (pFVar3->IndexHash).Hash[0xb] = '\0';
  (pFVar3->IndexHash).Hash[0xc] = '\0';
  (pFVar3->IndexHash).Hash[0xd] = '\0';
  (pFVar3->IndexHash).Hash[0xe] = '\0';
  (pFVar3->IndexHash).Hash[0xf] = '\0';
  pFVar3 = &this->Info;
  (pFVar3->IndexHash).Hash[0x10] = '\0';
  (pFVar3->IndexHash).Hash[0x11] = '\0';
  (pFVar3->IndexHash).Hash[0x12] = '\0';
  (pFVar3->IndexHash).Hash[0x13] = '\0';
  (this->Info).bEncryptedIndex = '\0';
  (this->Info).EncryptionKeyGuid.A = 0;
  (this->Info).EncryptionKeyGuid.B = 0;
  (this->Info).EncryptionKeyGuid.C = 0;
  (this->Info).EncryptionKeyGuid.D = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Info).CompressionMethods.ArrayNum = 0;
  *piVar1 = 0;
  local_res8 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&pTVar2->AllocatorInstance,piVar1);
  (this->Info).CompressionMethods.ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
  (this->MountPoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountPoint).Data.ArrayNum = 0;
  (this->MountPoint).Data.ArrayMax = 0;
  (this->Files).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Files).ArrayNum = 0;
  (this->Files).ArrayMax = 0;
  *(undefined8 *)&this->DirectoryIndex = 0;
  *(undefined8 *)&(this->DirectoryIndex).field_0x8 = 0;
  *(undefined8 *)&(this->DirectoryIndex).field_0x20 = 0;
  *(undefined4 *)&(this->DirectoryIndex).field_0x28 = 0;
  *(undefined4 *)&(this->DirectoryIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->DirectoryIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirectoryIndex).field_0x34 = 0;
  *(undefined8 *)&(this->DirectoryIndex).field_0x40 = 0;
  *(undefined4 *)&(this->DirectoryIndex).field_0x48 = 0;
  (this->DirectoryTreeIndex).Root.RelPaths.Ptr = (FString *)0x0;
  (this->DirectoryTreeIndex).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->DirectoryTreeIndex).Root.NumChildNodesAndFlags = 0;
  (this->DirectoryTreeIndex).Root.CapacityChildNodes = 0;
  (this->DirectoryTreeIndex).NumPaths = 0;
  (this->DirectoryTreeIndex).PathSeparator = L'/';
  (this->DirectoryTreeIndex).bPathSeparatorInitialized = false;
  (this->DirectoryTreeIndex).bNeedDriveWithoutPathFixup = false;
  *(undefined8 *)&this->PrunedDirectoryIndex = 0;
  *(undefined8 *)&(this->PrunedDirectoryIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PrunedDirectoryIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PrunedDirectoryIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PrunedDirectoryIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrunedDirectoryIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrunedDirectoryIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PrunedDirectoryIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PrunedDirectoryIndex).field_0x48 = 0;
  (this->PrunedDirectoryTreeIndex).Root.RelPaths.Ptr = (FString *)0x0;
  (this->PrunedDirectoryTreeIndex).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->PrunedDirectoryTreeIndex).Root.NumChildNodesAndFlags = 0;
  (this->PrunedDirectoryTreeIndex).Root.CapacityChildNodes = 0;
  (this->PrunedDirectoryTreeIndex).NumPaths = 0;
  (this->PrunedDirectoryTreeIndex).PathSeparator = L'/';
  (this->PrunedDirectoryTreeIndex).bPathSeparatorInitialized = false;
  (this->PrunedDirectoryTreeIndex).bNeedDriveWithoutPathFixup = false;
  (this->DirectoryIndexLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PathHashIndex = 0;
  *(undefined8 *)&(this->PathHashIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PathHashIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PathHashIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PathHashIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathHashIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PathHashIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PathHashIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PathHashIndex).field_0x48 = 0;
  (this->EncodedPakEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodedPakEntries).ArrayNum = 0;
  (this->EncodedPakEntries).ArrayMax = 0;
  this->PathHashSeed = 0;
  this->NumEntries = 0;
  (this->Timestamp).Ticks = 0;
  this->CachedTotalSize = 0;
  this->bSigned = param_3;
  this->bIsValid = false;
  this->bHasPathHashIndex = false;
  this->bHasFullDirectoryIndex = false;
  this->bWillPruneDirectoryIndex = false;
  this->bNeedsLegacyPruning = false;
  this->bUseDirectoryTree = false;
  ::FString::FString(&local_38,param_2);
  iVar5 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_28.PakFile = (FPakFile *)CONCAT44(local_28.PakFile._4_4_,iVar5);
  local_28.Archive = (FArchive *)local_38.Data.AllocatorInstance.Data;
  iVar5 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile((TStringView<wchar_t> *)&local_28);
  this->PakchunkIndex = iVar5;
  if ((FArchive *)local_38.Data.AllocatorInstance.Data != (FArchive *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  (this->MappedFileHandle).Object = (IMappedFileHandle *)0x0;
  (this->MappedFileHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->MappedFileHandleCriticalSection,4000);
  this->CacheType = Shared;
  this->CacheIndex = -1;
  this->UnderlyingCacheTrimDisabled = false;
  this->bIsMounted = false;
  (this->IoContainerHeader).Ptr = (FIoContainerHeader *)0x0;
  GetSharedReader(this,&local_28,param_1);
  pFVar4 = local_28.Archive;
  if (local_28.Archive != (FArchive *)0x0) {
    plVar6 = (long64 *)(**(code **)((longlong)*param_1 + 0xb0))(param_1,&local_res8,param_2);
    (this->Timestamp).Ticks = *plVar6;
    Initialize(this,pFVar4,param_4);
    ReturnSharedReader(local_28.PakFile,pFVar4);
  }
  return this;
}

// ~FPakFile @ 142a568f0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::~FPakFile(FPakFile *this)

{
  FIoContainerHeader *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FChunkCacheWorker *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  this->_padding_ = (longlong)&_vftable__for__IPakFile__;
  this_00 = (this->IoContainerHeader).Ptr;
  if (this_00 != (FIoContainerHeader *)0x0) {
    FIoContainerHeader::~FIoContainerHeader(this_00);
    ::operator_delete(this_00,0xb0);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MappedFileHandleCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MappedFileHandle).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->EncodedPakEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PathHashIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PathHashIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PathHashIndex);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DirectoryIndexLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DirectoryIndexLock);
  }
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  ::FTreeNode::~FTreeNode(&(this->PrunedDirectoryTreeIndex).Root);
  *(undefined4 *)&(this->PrunedDirectoryIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PrunedDirectoryIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrunedDirectoryIndex);
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  ::FTreeNode::~FTreeNode(&(this->DirectoryTreeIndex).Root);
  *(undefined4 *)&(this->DirectoryIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DirectoryIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirectoryIndex);
  DestructItems<FPakEntry,int>
            ((FPakEntry *)(this->Files).AllocatorInstance.Data,(this->Files).ArrayNum);
  pFVar1 = (this->Files).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Info).CompressionMethods.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ReadersCriticalSection);
  DestructItems<FPakFile::FArchiveAndLastAccessTime,int>
            ((FArchiveAndLastAccessTime *)(this->Readers).AllocatorInstance.Data,
             (this->Readers).ArrayNum);
  pFVar1 = (this->Readers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (this->Decryptor).Ptr;
  if (pFVar3 != (FChunkCacheWorker *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
  }
  pFVar1 = (this->PakFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 142a58d30

FArchive * __thiscall `FPakFile::CreatePakReader'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  IFileHandle *pIVar2;
  FArchiveFileReaderGeneric *pFVar3;
  long64 lVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  
  plVar1 = (longlong *)**(longlong **)this;
  if (plVar1 == (longlong *)0x0) {
    pIVar5 = IFileManager::Get();
                    /* WARNING: Could not recover jumptable at 0x000142a58dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar6 = (FArchive *)
             (**(code **)((longlong)*pIVar5 + 0x18))
                       (pIVar5,**(undefined8 **)((longlong)this + 8),0,
                        *(code **)((longlong)*pIVar5 + 0x18));
    return pFVar6;
  }
  pIVar2 = (IFileHandle *)
           (**(code **)(*plVar1 + 0xe8))(plVar1,**(undefined8 **)((longlong)this + 8),0);
  if (pIVar2 != (IFileHandle *)0x0) {
    pFVar3 = ::operator_new(0xe8);
    if (pFVar3 != (FArchiveFileReaderGeneric *)0x0) {
      lVar4 = (**(code **)((longlong)*pIVar2 + 0x50))();
      pFVar3 = FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
                         (pFVar3,pIVar2,(wchar_t *)**(undefined8 **)((longlong)this + 8),lVar4,0x400
                          ,0);
      return (FArchive *)pFVar3;
    }
    return (FArchive *)0x0;
  }
  return (FArchive *)0x0;
}

// operator() @ 142a5a300

void __thiscall
`FPakFile::ValidateDirectorySearch'::__l2::<lambda_2>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  longlong local_res20;
  
  uVar9 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar7 = (longlong)(int)uVar9 << 4;
    do {
      plVar1 = *(longlong **)this;
      uVar4 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      local_res20 = lVar7;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = (longlong *)*plVar1;
      local_res18 = (param_1->AllocatorInstance).Data + lVar7;
      lVar7 = plVar1[1];
      puVar6 = (undefined8 *)*plVar1;
      puVar8 = puVar6 + (longlong)(int)lVar7 * 2;
      while( true ) {
        if ((int)plVar1[1] != (int)lVar7) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (puVar6 == puVar8) goto LAB_142a5a492;
        iVar10 = *(int *)(puVar6 + 1) + -1;
        if (*(int *)(puVar6 + 1) == 0) {
          iVar10 = 0;
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)*puVar6;
        }
        bVar3 = ::FString::MatchesWildcard((FString *)local_res18,pwVar5,iVar10,IgnoreCase);
        if (bVar3) break;
        puVar6 = puVar6 + 2;
      }
      uVar4 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_1,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
LAB_142a5a492:
      lVar7 = local_res20 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// AddEntryToIndex @ 142a5c3d0

void __cdecl
FPakFile::AddEntryToIndex
          (FString *param_1,FPakEntryLocation *param_2,FString *param_3,ulong64 param_4,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_5,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_6,
          TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
          *param_7,TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
                   *param_8,int param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar12;
  FString *pFVar13;
  FUtf8String *pFVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  ulong64 *puVar17;
  wchar_t *pwVar18;
  undefined1 *puVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  ulong64 *puVar22;
  longlong lVar23;
  FString local_228;
  FString local_218;
  FString local_208;
  FUtf8String local_1f8;
  FUtf8String local_1e8;
  TStringView<wchar_t> local_1d8;
  int local_1c8 [2];
  FString local_1c0;
  ulong64 local_1b0;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  undefined1 local_188 [4];
  undefined1 local_184 [8];
  undefined1 local_17c [12];
  FString *local_170;
  FString *local_168 [2];
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  FUtf8String *local_128;
  FPakEntryLocation *local_120;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FUtf8String *local_f8;
  FPakEntryLocation *local_f0;
  ulong64 *local_e8;
  FString *local_e0;
  ulong64 *local_d8;
  FPakEntryLocation *local_d0;
  FString local_c8;
  FString local_b8;
  FUtf8String local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FUtf8String local_68 [3];
  
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  bVar6 = FPaths::IsRelative(param_1);
  iVar11 = 0;
  if (bVar6) {
    if (&local_228 != param_1) {
      iVar7 = (param_1->Data).ArrayNum;
      pFVar21 = (param_1->Data).AllocatorInstance.Data;
      local_228.Data.ArrayNum = iVar7;
      if (((iVar7 != 0) || (local_228.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,local_228.Data.ArrayMax,(ForAnyElementType *)&local_228,iVar7,
                     &local_228.Data.ArrayMax), iVar7 != 0)) {
        memcpy(local_228.Data.AllocatorInstance.Data,pFVar21,(longlong)iVar7 * 2);
      }
    }
  }
  else {
    bVar6 = IsPathInDirectoryFormat(param_3);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsPathInDirectoryFormat(MountPoint)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x5e6,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (&local_228 != param_1) {
      iVar7 = (param_1->Data).ArrayNum;
      pFVar21 = (param_1->Data).AllocatorInstance.Data;
      local_228.Data.ArrayNum = iVar7;
      if (((iVar7 != 0) || (local_228.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,local_228.Data.ArrayMax,(ForAnyElementType *)&local_228,iVar7,
                     &local_228.Data.ArrayMax), iVar7 != 0)) {
        memcpy(local_228.Data.AllocatorInstance.Data,pFVar21,(longlong)iVar7 * 2);
      }
    }
    iVar7 = (param_3->Data).ArrayNum;
    iVar20 = (param_1->Data).ArrayNum;
    iVar10 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar10 = 0;
    }
    iVar7 = iVar20 + -1;
    if (iVar20 == 0) {
      iVar7 = iVar11;
    }
    if ((iVar7 <= iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Filename.Len() > MountPoint.Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x5e8,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar7 = (param_3->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar18 = L"";
      iVar7 = iVar11;
    }
    else {
      pwVar18 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      iVar7 = iVar7 + -1;
    }
    bVar6 = ::FString::StartsWith(&local_228,pwVar18,iVar7,IgnoreCase);
    if (bVar6) {
      iVar7 = (param_3->Data).ArrayNum;
      iVar20 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar20 = 0;
      }
      ::FString::RightChop(&local_228,&local_1c0,iVar20);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      uVar2 = local_1c0.Data._8_8_;
      iVar7 = local_1c0.Data.ArrayNum;
      local_228.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      uVar3 = local_1c0.Data._8_8_;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.Data.ArrayNum = (int)uVar2;
      local_1c0.Data.ArrayMax = SUB84(uVar2,4);
      local_228.Data.ArrayNum = local_1c0.Data.ArrayNum;
      local_228.Data.ArrayMax = local_1c0.Data.ArrayMax;
      local_1c0.Data._8_8_ = uVar3;
      if (iVar7 < 2) {
        ::FString::operator=(&local_228,L"/");
      }
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bSucceeded",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x5ea,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (param_5 ==
      (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
       *)0x0) goto LAB_142a5c97b;
  local_1d8.DataPtr = (wchar_t *)local_228.Data.AllocatorInstance.Data;
  local_198.DataPtr = (wchar_t *)0x0;
  local_198.Size = 0;
  local_1d8.Size = local_228.Data.ArrayNum + -1;
  if (local_228.Data.ArrayNum == 0) {
    local_1d8.Size = iVar11;
  }
  SplitPathInline(&local_1d8,&local_198);
  iVar11 = local_1d8.Size;
  pFVar21 = (FScriptContainerElement *)local_1d8.DataPtr;
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(local_1d8.Size,local_1d8.DataPtr);
  pTVar12 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
             *)TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
               ::FindByHash<TStringView<wchar_t>_>
                         ((TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                           *)param_5,uVar8,&local_1d8);
  if (pTVar12 ==
      (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
       *)0x0) {
    local_158._12_4_ = local_1d8._12_4_;
    local_158.Size = local_1d8.Size;
    local_138.Size = 0;
    local_138.DataPtr = (wchar_t *)0x0;
    local_158.DataPtr = local_1d8.DataPtr;
    iVar7 = iVar11;
joined_r0x000142a5c69d:
    do {
      if ((iVar11 == 0) ||
         (bVar6 = SplitPathInline(&local_158,&local_138), pwVar18 = local_158.DataPtr,
         pFVar21 = (FScriptContainerElement *)local_1d8.DataPtr, iVar7 = local_1d8.Size, !bVar6))
      goto LAB_142a5c831;
      iVar11 = local_158.Size;
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(local_158.Size,local_158.DataPtr);
      if (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34) {
        puVar19 = &param_5->field_0x38;
        if (*(undefined1 **)&param_5->field_0x40 != (undefined1 *)0x0) {
          puVar19 = *(undefined1 **)&param_5->field_0x40;
        }
        iVar7 = *(int *)(puVar19 + (ulonglong)(*(int *)&param_5->field_0x48 - 1U & uVar9) * 4);
        while (iVar7 != -1) {
          lVar23 = (longlong)iVar7 * 0x68;
          iVar10 = *(int *)(*(longlong *)param_5 + 8 + lVar23);
          iVar20 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar20 = 0;
          }
          if (iVar11 == iVar20) {
            if ((iVar11 != 0) && (iVar20 != 0)) {
              iVar10 = iVar20;
              if (iVar11 < iVar20) {
                iVar10 = iVar11;
              }
              iVar10 = FGenericPlatformStricmp::Strnicmp
                                 (pwVar18,*(wchar_t **)(*(longlong *)param_5 + lVar23),
                                  (longlong)iVar10);
              if (iVar10 != 0) goto LAB_142a5c75e;
            }
            if (iVar11 == iVar20) {
              lVar15 = (longlong)iVar7 * 0x68 + *(longlong *)param_5;
              lVar23 = lVar15 + 0x10;
              if (lVar15 == 0) {
                lVar23 = 0;
              }
              pFVar21 = (FScriptContainerElement *)local_1d8.DataPtr;
              iVar7 = local_1d8.Size;
              if (lVar23 != 0) goto joined_r0x000142a5c69d;
              break;
            }
          }
LAB_142a5c75e:
          iVar7 = *(int *)(lVar23 + 0x60 + *(longlong *)param_5);
        }
      }
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      pFVar13 = ::FString::ConstructFromPtrSize(&local_c8,pwVar18,iVar11);
      if (&local_218 != pFVar13) {
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        local_218.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        local_218.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_170 = &local_218;
      TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                ((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
                  *)param_5,(uint)local_188,(TKeyInitializer<FString_&&> *)(ulonglong)uVar9,
                 (bool *)&local_170);
      pFVar21 = (FScriptContainerElement *)local_1d8.DataPtr;
      iVar7 = local_1d8.Size;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
        pFVar21 = (FScriptContainerElement *)local_1d8.DataPtr;
        iVar7 = local_1d8.Size;
      }
    } while( true );
  }
LAB_142a5c8e1:
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  pFVar14 = FUtf8String::ConstructFromPtrSize(&local_a8,local_198.DataPtr,local_198.Size);
  if (&local_1f8 != pFVar14) {
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    local_1f8.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_1f8.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_128 = &local_1f8;
  local_120 = param_2;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&>_>
            (pTVar12,(TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&> *)local_184,
             (bool *)&local_128);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
LAB_142a5c97b:
  if (param_6 !=
      (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
       *)0x0) {
    local_148.DataPtr = (wchar_t *)local_228.Data.AllocatorInstance.Data;
    local_1a8.DataPtr = (wchar_t *)0x0;
    local_148.Size = local_228.Data.ArrayNum + -1;
    if (local_228.Data.ArrayNum == 0) {
      local_148.Size = 0;
    }
    local_1a8.Size = 0;
    SplitPathInline(&local_148,&local_1a8);
    iVar11 = local_148.Size;
    uVar4 = local_148.DataPtr._0_4_;
    uVar5 = local_148.DataPtr._4_4_;
    local_98.DataPtr._0_4_ = local_148.DataPtr._0_4_;
    local_98.DataPtr._4_4_ = local_148.DataPtr._4_4_;
    local_98.Size = local_148.Size;
    local_98._12_4_ = local_148._12_4_;
    pTVar12 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
               *)TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                 ::Find(param_6,&local_98);
    if (pTVar12 ==
        (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
         *)0x0) {
      local_118.DataPtr = (wchar_t *)0x0;
      local_118.Size = 0;
      local_108.DataPtr._0_4_ = uVar4;
      local_108.DataPtr._4_4_ = uVar5;
      local_108.Size = iVar11;
      local_108._12_4_ = local_148._12_4_;
      iVar7 = iVar11;
      while ((iVar7 != 0 &&
             (bVar6 = SplitPathInline(&local_108,&local_118), iVar7 = local_108.Size, bVar6))) {
        local_88.DataPtr._0_4_ = local_108.DataPtr._0_4_;
        local_88.DataPtr._4_4_ = local_108.DataPtr._4_4_;
        local_88.Size = local_108.Size;
        local_88._12_4_ = local_108._12_4_;
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FindOrAdd(param_6,&local_88,(bool *)0x0);
      }
      local_78.DataPtr._0_4_ = uVar4;
      local_78.DataPtr._4_4_ = uVar5;
      local_78.Size = iVar11;
      local_78._12_4_ = local_148._12_4_;
      pTVar12 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                 *)TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   ::FindOrAdd(param_6,&local_78,(bool *)0x0);
    }
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    pFVar14 = FUtf8String::ConstructFromPtrSize(local_68,local_1a8.DataPtr,local_1a8.Size);
    if (&local_1e8 != pFVar14) {
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      local_1e8.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Data.ArrayNum = (pFVar14->Data).ArrayNum;
      local_1e8.Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
    }
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    local_f8 = &local_1e8;
    local_f0 = param_2;
    TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&>_>
              (pTVar12,(TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&> *)(local_184 + 4)
               ,(bool *)&local_f8);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  if ((param_8 !=
       (TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
        *)0x0) ||
     (param_7 !=
      (TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
       *)0x0)) {
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar16.Data = local_228.Data.AllocatorInstance.Data;
    }
    local_1b0 = HashPath((wchar_t *)FVar16.Data,param_4,param_9);
    if (param_8 !=
        (TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
         *)0x0) {
      if (*(int *)&param_8->field_0x8 != *(int *)&param_8->field_0x34) {
        puVar19 = *(undefined1 **)&param_8->field_0x40;
        if (*(undefined1 **)&param_8->field_0x40 == (undefined1 *)0x0) {
          puVar19 = &param_8->field_0x38;
        }
        iVar11 = *(int *)(puVar19 +
                         ((local_1b0 >> 0x20) * 0x17 + local_1b0 &
                         (ulonglong)(*(int *)&param_8->field_0x48 - 1)) * 4);
        if (iVar11 != -1) {
          do {
            puVar17 = (ulong64 *)((longlong)iVar11 * 0x20 + *(longlong *)param_8);
            if (*puVar17 == local_1b0) {
              puVar22 = puVar17 + 1;
              if (puVar17 == (ulong64 *)0x0) {
                puVar22 = (ulong64 *)0x0;
              }
              if (puVar22 == (ulong64 *)0x0) break;
              iVar11 = (int)puVar22[1];
              if (iVar11 == local_228.Data.ArrayNum) {
                if (iVar11 < 2) break;
                iVar11 = wcscmp((wchar_t *)*puVar22,(wchar_t *)local_228.Data.AllocatorInstance.Data
                               );
                bVar6 = iVar11 == 0;
              }
              else {
                bVar6 = local_228.Data.ArrayNum + iVar11 == 1;
              }
              if ((!bVar6) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!ExistingFilename || ExistingFilename->Equals(RelativePathFromMount)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                                     ,0x62f,
                                     L"Hash collision for two Filenames within a PakFile.  Filename1 == \'%s\'.  Filename2 == \'%s\'.  Hash=\'0x%llx\'. Collision handling is not yet implemented; to resolve the conflict, modify one of the Filenames."
                                    ), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              break;
            }
            iVar11 = (int)puVar17[3];
          } while (iVar11 != -1);
        }
      }
      local_e8 = &local_1b0;
      local_e0 = &local_228;
      TSet<TTuple<unsigned___int64,FString>,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FString_const_&>_>
                ((TSet<TTuple<unsigned___int64,FString>,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>,FDefaultSetAllocator>
                  *)param_8,(TPairInitializer<unsigned___int64_const_&,FString_const_&> *)local_17c,
                 (bool *)&local_e8);
    }
    if (param_7 !=
        (TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
         *)0x0) {
      local_d8 = &local_1b0;
      local_d0 = param_2;
      TSet<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FPakEntryLocation_const_&>_>
                ((TSet<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator>
                  *)param_7,
                 (TPairInitializer<unsigned___int64_const_&,FPakEntryLocation_const_&> *)
                 (local_17c + 4),(bool *)&local_d8);
    }
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return;
LAB_142a5c831:
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  pFVar13 = ::FString::ConstructFromPtrSize(&local_b8,(wchar_t *)pFVar21,iVar7);
  if (&local_208 != pFVar13) {
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    local_208.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_208.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_168[0] = &local_208;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            ((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
              *)param_5,(uint)local_1c8,(TKeyInitializer<FString_&&> *)(ulonglong)uVar8,
             (bool *)local_168);
  pTVar12 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
             *)(*(longlong *)param_5 + (longlong)local_1c8[0] * 0x68 + 0x10);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  goto LAB_142a5c8e1;
}

// AddSpecialFile @ 142a5efb0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::AddSpecialFile(FPakFile *this,FPakEntry *param_1,FString *param_2)

{
  FPakEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *pTVar5;
  uint uVar6;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *pTVar7;
  uint uVar8;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *pTVar9;
  size_t _Size;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar10;
  FPakEntryLocation local_res8 [2];
  undefined8 local_res10;
  int *piVar11;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FArchiveState local_e8;
  undefined8 local_58;
  ForAnyElementType *local_50;
  undefined8 local_48;
  
  MakeDirectoryFromPath(&this->MountPoint);
  pTVar9 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
            *)0x0;
  local_res8[0].Index = -0x80000000;
  if ((param_1->Flags & 2) != 0) goto LAB_142a5f2b5;
  local_e8._padding_ = 0;
  local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f0 = 0;
  local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_e8._40_8_ = 0;
  local_res10 = 0;
  local_e8.ArSerializingDefaults = 0;
  local_e8.ArPortFlags = 0;
  local_e8.ArMaxSerializeSize = 0;
  local_e8.ArUEVer.FileVersionUE4 = 0;
  local_e8.ArUEVer.FileVersionUE5 = 0;
  local_e8.ArLicenseeUEVer = 0;
  local_e8.ArEngineVer.Major = 0;
  local_e8.ArEngineVer.Minor = 0;
  local_e8.ArEngineVer.Patch = 0;
  local_e8.ArEngineVer._6_2_ = 0;
  local_e8.ArEngineVer.Changelist = 0;
  local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_e8.SerializedProperty = (FProperty *)0x0;
  local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_e8.bCustomVersionsAreReset = false;
  local_e8._129_7_ = 0;
  local_e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_e8);
  local_58 = 0;
  local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_50 = &local_f8;
  local_48 = 0;
  FArchiveState::SetIsSaving(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  piVar11 = &(this->EncodedPakEntries).ArrayNum;
  iVar4 = *piVar11;
  local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (((iVar4 < 0) || (0x7ffffffe < iVar4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Offset && Offset <= MaxIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Public\\IPlatformFilePak.h"
                         ,0x270,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0].Index = iVar4;
  bVar3 = EncodePakEntry((FArchive *)&local_e8,param_1,&this->Info);
  if (bVar3) {
    pTVar10 = &this->EncodedPakEntries;
    if ((pTVar10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_f8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    _Size = (size_t)(int)local_f0;
    if ((int)local_f0 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(int)local_f0,&pTVar10->AllocatorInstance,piVar11,
                         &(this->EncodedPakEntries).ArrayMax);
      memcpy((pTVar10->AllocatorInstance).Data + iVar4,local_f8.Data,_Size);
    }
    iVar4 = (this->EncodedPakEntries).ArrayNum;
    piVar11 = &(this->EncodedPakEntries).ArrayMax;
    if (*piVar11 != iVar4) {
      uVar8 = 1;
      uVar6 = 1;
LAB_142a5f279:
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (uVar6,uVar8,iVar4,&pTVar10->AllocatorInstance,iVar4,piVar11);
    }
  }
  else {
    iVar4 = (this->Files).ArrayNum;
    if (((iVar4 < 0) || (0x7ffffffe < iVar4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 <= ListIndex && ListIndex <= MaxIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Public\\IPlatformFilePak.h"
                           ,0x276,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res8[0].Index = -1 - iVar4;
    pTVar10 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->Files;
    pFVar1 = (FPakEntry *)
             (((TArray<FPakEntry,TSizedDefaultAllocator<32>_> *)pTVar10)->AllocatorInstance).Data;
    if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (this->Files).ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (this->Files).ArrayNum;
    piVar11 = &(this->Files).ArrayMax;
    if (iVar4 == *piVar11) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)pTVar10,piVar11);
    }
    (this->Files).ArrayNum = iVar4 + 1;
    FPakEntry::FPakEntry
              ((FPakEntry *)
               ((((TArray<FPakEntry,TSizedDefaultAllocator<32>_> *)pTVar10)->AllocatorInstance).Data
               + (longlong)iVar4 * 0x50),param_1);
    iVar4 = (this->Files).ArrayNum;
    if (*piVar11 != iVar4) {
      uVar8 = 8;
      uVar6 = 0x50;
      goto LAB_142a5f279;
    }
  }
  this->NumEntries = this->NumEntries + 1;
  FArchive::~FArchive((FArchive *)&local_e8);
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
LAB_142a5f2b5:
  pTVar5 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
            *)&this->DirectoryIndex;
  pTVar7 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
            *)&this->PathHashIndex;
  if (this->bHasPathHashIndex == false) {
    pTVar7 = pTVar9;
  }
  if (this->bUseDirectoryTree != false) {
    if (GPak_ValidateDirectoryTreeSearchConsistency == false) {
      pTVar5 = pTVar9;
    }
    pTVar9 = &this->DirectoryTreeIndex;
  }
  AddEntryToIndex(param_2,local_res8,&this->MountPoint,this->PathHashSeed,
                  (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                   *)pTVar5,pTVar9,
                  (TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
                   *)pTVar7,
                  (TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
                   *)0x0,(this->Info).Version);
  return;
}

// Check @ 142a61370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a6166e) */
/* WARNING: Removing unreachable block (ram,0x000142a6168f) */
/* WARNING: Removing unreachable block (ram,0x000142a61634) */
/* WARNING: Removing unreachable block (ram,0x000142a61655) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPakFile::Check(FPakFile *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar5;
  code *pcVar6;
  long64 lVar7;
  FArchive *pFVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  FPakSigningFailureHandlerData *lpCriticalSection;
  FDelegateHandle FVar12;
  longlong lVar13;
  FPakEntry *pFVar14;
  FString *pFVar15;
  void *pvVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *this_00;
  wchar_t *pwVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_458 [32];
  longlong local_438;
  longlong local_430;
  undefined1 local_428 [4];
  int local_424;
  FName local_420;
  FSharedPakReader local_418;
  LARGE_INTEGER local_408;
  int *local_400;
  LARGE_INTEGER local_3f8;
  <lambda_1> local_3f0;
  FString local_3e8;
  FPakEntry local_3d8;
  undefined1 local_388 [76];
  uint local_33c;
  uint local_330;
  bool local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_310;
  bool local_2f0;
  ForAnyElementType local_2e8;
  ForAnyElementType local_2a8;
  EIteratorType local_288;
  bool local_286;
  uchar local_278 [32];
  wchar_t local_258 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_458;
  local_420 = (FName)this;
  if (3 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  QueryPerformanceCounter(&local_408);
  GetSharedReader(this,&local_418,(IPlatformFile *)0x0);
  uVar18 = 0;
  local_424 = 0;
  if (this->bSigned == false) {
    FBaseIterator::FBaseIterator
              ((FBaseIterator *)local_388,this,true,this->bHasFullDirectoryIndex == false);
    lVar13 = _UNK_15076adc8;
    lVar7 = ___xmm_0000000000000000ffffffffffffffff;
    while( true ) {
      if (local_288 != PathHash) break;
      if ((local_2f0 == false) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar19)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      bVar19 = SBORROW4(local_310.CurrentBitIndex,(local_310.Array)->NumBits);
      iVar10 = local_310.CurrentBitIndex - (local_310.Array)->NumBits;
LAB_142a616fe:
      bVar19 = bVar19 != iVar10 < 0;
LAB_142a61701:
      if (!bVar19) goto LAB_142a61c43;
      pFVar14 = FBaseIterator::Info((FBaseIterator *)local_388);
      if ((pFVar14->Flags & 2) == 0) {
        pvVar16 = FMemory::Malloc(pFVar14->Size,0);
        pFVar8 = local_418.Archive;
        (**(code **)(*(longlong *)local_418.Archive + 0x1b8))(local_418.Archive,pFVar14->Offset);
        local_3d8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d8.Hash[0x10] = '\0';
        local_3d8.Hash[0x11] = '\0';
        local_3d8.Hash[0x12] = '\0';
        local_3d8.Hash[0x13] = '\0';
        local_3d8.Flags = '\0';
        local_3d8.Verified = false;
        local_3d8.Hash[0] = '\0';
        local_3d8.Hash[1] = '\0';
        local_3d8.Hash[2] = '\0';
        local_3d8.Hash[3] = '\0';
        local_3d8.Hash[4] = '\0';
        local_3d8.Hash[5] = '\0';
        local_3d8.Hash[6] = '\0';
        local_3d8.Hash[7] = '\0';
        local_3d8.Hash[8] = '\0';
        local_3d8.Hash[9] = '\0';
        local_3d8.Hash[10] = '\0';
        local_3d8.Hash[0xb] = '\0';
        local_3d8.Hash[0xc] = '\0';
        local_3d8.Hash[0xd] = '\0';
        local_3d8.Hash[0xe] = '\0';
        local_3d8.Hash[0xf] = '\0';
        local_3d8.CompressionBlocks.ArrayNum = 0;
        local_3d8.CompressionBlocks.ArrayMax = 0;
        local_3d8.Offset = lVar7;
        local_3d8.Size = lVar13;
        local_3d8.UncompressedSize = 0;
        local_3d8.CompressionBlockSize = 0;
        local_3d8.CompressionMethodIndex = 0;
        FPakEntry::Serialize(&local_3d8,pFVar8,(this->Info).Version);
        if (((((local_3d8.Size != pFVar14->Size) ||
              (local_3d8.UncompressedSize != pFVar14->UncompressedSize)) ||
             (local_3d8.CompressionMethodIndex != pFVar14->CompressionMethodIndex)) ||
            ((local_3d8.Flags != pFVar14->Flags ||
             (local_3d8.CompressionBlockSize != pFVar14->CompressionBlockSize)))) ||
           ((local_3d8.CompressionBlocks.ArrayNum != (pFVar14->CompressionBlocks).ArrayNum ||
            (bVar19 = CompareItems<FPakCompressedBlock,int>
                                ((FPakCompressedBlock *)
                                 local_3d8.CompressionBlocks.AllocatorInstance.Data,
                                 (FPakCompressedBlock *)
                                 (pFVar14->CompressionBlocks).AllocatorInstance.Data,
                                 local_3d8.CompressionBlocks.ArrayNum), !bVar19)))) {
          if (1 < (byte)LogPakFile._0_1_) {
            if ((local_288 == DirectoryTree || local_288 == DirectoryIndex) &&
               (pFVar15 = FBaseIterator::Filename((FBaseIterator *)local_388),
               pFVar15 != (FString *)0x0)) {
              if ((pFVar15->Data).ArrayNum == 0) {
                pwVar17 = L"\"%s\"";
              }
              else {
                pwVar17 = L"\"%s\"";
              }
            }
            else {
              pwVar17 = L"file at offset %u";
              FBaseIterator::Info((FBaseIterator *)local_388);
            }
            TCString<wchar_t>::SnprintfImpl(local_258,0x200,pwVar17);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          local_424 = local_424 + 1;
        }
        (**(code **)(*(longlong *)local_418.Archive + 0x188))
                  (local_418.Archive,pvVar16,pFVar14->Size);
        FSHA1::HashBuffer(pvVar16,pFVar14->Size,local_278);
        iVar10 = memcmp(local_278,local_3d8.Hash,0x14);
        if (iVar10 == 0) {
          if (5 < (byte)LogPakFile._0_1_) {
            uVar1 = pFVar14->CompressionMethodIndex;
            iVar10 = (this->Info).CompressionMethods.ArrayNum;
            uVar11 = 0;
            if ((int)uVar1 < iVar10) {
              uVar11 = ~uVar1 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (local_438 = (longlong)(int)uVar1, local_430 = (longlong)iVar10,
               bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            local_420 = *(FName *)((this->Info).CompressionMethods.AllocatorInstance.Data +
                                  (longlong)(int)uVar1 * 8);
            ::FName::ToString(&local_420,&local_3e8);
            if ((local_288 == DirectoryTree || local_288 == DirectoryIndex) &&
               (pFVar15 = FBaseIterator::Filename((FBaseIterator *)local_388),
               pFVar15 != (FString *)0x0)) {
              if ((pFVar15->Data).ArrayNum == 0) {
                pwVar17 = L"\"%s\"";
              }
              else {
                pwVar17 = L"\"%s\"";
              }
            }
            else {
              pwVar17 = L"file at offset %u";
              FBaseIterator::Info((FBaseIterator *)local_388);
            }
            TCString<wchar_t>::SnprintfImpl(local_258,0x200,pwVar17);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (1 < (byte)LogPakFile._0_1_) {
            if ((local_288 == DirectoryTree || local_288 == DirectoryIndex) &&
               (pFVar15 = FBaseIterator::Filename((FBaseIterator *)local_388),
               pFVar15 != (FString *)0x0)) {
              if ((pFVar15->Data).ArrayNum == 0) {
                pwVar17 = L"\"%s\"";
              }
              else {
                pwVar17 = L"\"%s\"";
              }
            }
            else {
              pwVar17 = L"file at offset %u";
              FBaseIterator::Info((FBaseIterator *)local_388);
            }
            TCString<wchar_t>::SnprintfImpl(local_258,0x200,pwVar17);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          local_424 = local_424 + 1;
        }
        FMemory::Free(pvVar16);
        if ((FPakCompressedBlock *)local_3d8.CompressionBlocks.AllocatorInstance.Data !=
            (FPakCompressedBlock *)0x0) {
          FMemory::Free(local_3d8.CompressionBlocks.AllocatorInstance.Data);
        }
      }
      else if (5 < (byte)LogPakFile._0_1_) {
        if ((local_288 == DirectoryTree || local_288 == DirectoryIndex) &&
           (pFVar15 = FBaseIterator::Filename((FBaseIterator *)local_388), pFVar15 != (FString *)0x0
           )) {
          if ((pFVar15->Data).ArrayNum == 0) {
            pwVar17 = L"\"%s\"";
          }
          else {
            pwVar17 = L"\"%s\"";
          }
        }
        else {
          pwVar17 = L"file at offset %u";
          FBaseIterator::Info((FBaseIterator *)local_388);
        }
        TCString<wchar_t>::SnprintfImpl(local_258,0x200,pwVar17);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      if (local_288 == PathHash) {
        if ((local_2f0 == false) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        this_00 = &local_310;
        local_310.UnvisitedBitMask = local_310.UnvisitedBitMask & ~local_310._padding_._4_4_;
LAB_142a61c0b:
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(this_00);
      }
      else {
        if ((local_288 == DirectoryIndex) || (local_288 == DirectoryTree)) {
          if ((local_288 != DirectoryTree && local_288 != DirectoryIndex) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                                  ,0xa9c,L""), bVar19)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if ((local_320 == false) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar19)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          this_00 = (TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_388 + 0x48);
          local_330 = local_330 & ~local_33c;
          goto LAB_142a61c0b;
        }
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                            ,0x9b2,L"");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FBaseIterator::AdvanceToValid((FBaseIterator *)local_388);
      uVar18 = (ulonglong)((int)uVar18 + 1);
    }
    if (local_288 == DirectoryIndex) {
      if ((local_388[0x30] == false) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar19)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      bVar19 = SBORROW4(local_388._36_4_,*(int *)(local_388._24_8_ + 0x18));
      iVar10 = local_388._36_4_ - *(int *)(local_388._24_8_ + 0x18);
      goto LAB_142a616fe;
    }
    if (local_288 == DirectoryTree) {
      bVar19 = (((FIteratorInternal *)local_388._56_8_)->Stack).ArrayNum != 0;
      goto LAB_142a61701;
    }
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                        ,0x9c9,L"");
    if (bVar19) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
LAB_142a61c43:
    if (local_286 != false) {
      ReleaseSRWLockShared((PSRWLOCK)(local_388._0_8_ + 0x268));
    }
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
    if ((TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
         *)local_388._56_8_ !=
        (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
         *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&((FIteratorInternal *)local_388._56_8_)->Path);
      FVar5 = (((FIteratorInternal *)local_388._56_8_)->Stack).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                    )0x0) {
        FMemory::Free((void *)FVar5);
      }
      ::operator_delete((void *)local_388._56_8_,0x418);
    }
    if (local_424 == 0) {
      if (3 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
    }
    else if (3 < (byte)LogPakFile._0_1_) {
      local_438 = CONCAT44(local_438._4_4_,(int)uVar18);
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Pak_file___s__c_150989368,
                 (FLogCategoryBase *)&LogPakFile);
    }
  }
  else {
    lpCriticalSection = FPakPlatformFile::GetPakSigningFailureHandlerData();
    if (lpCriticalSection == (FPakSigningFailureHandlerData *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_400 = &local_424;
    FVar12 = TMulticastDelegateRegistration<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
             ::AddLambda<_FPakFile::Check_::__l24::<lambda_1>_>
                       ((TMulticastDelegateRegistration<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
                         *)&lpCriticalSection->ChunkSignatureCheckFailedDelegate,&local_3f0);
                    /* WARNING: Load size is inaccurate */
    FVar12.ID = *FVar12.ID;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar8 = local_418.Archive;
    lVar13 = (**(code **)(*(longlong *)local_418.Archive + 0x30))(local_418.Archive);
    if (0 < lVar13) {
      do {
        (**(code **)(*(longlong *)local_418.Archive + 0x1b8))(local_418.Archive,uVar18);
        local_428[0] = 0;
        puVar2 = *(undefined8 **)&pFVar8->field_0x8;
        puVar3 = (undefined1 *)*puVar2;
        if ((undefined1 *)puVar2[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)local_418.Archive + 0x188))(local_418.Archive,local_428,1);
        }
        else {
          local_428[0] = *puVar3;
          plVar4 = *(longlong **)&pFVar8->field_0x8;
          *plVar4 = *plVar4 + 1;
        }
        uVar18 = uVar18 + 0x10000;
      } while ((longlong)uVar18 < lVar13);
    }
    if (FVar12.ID != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &lpCriticalSection->ChunkSignatureCheckFailedDelegate,FVar12);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  QueryPerformanceCounter(&local_3f8);
  if (3 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  bVar19 = local_424 == 0;
  if (local_418.Archive != (FArchive *)0x0) {
    ReturnSharedReader(local_418.PakFile,local_418.Archive);
  }
  return bVar19;
}

// CreatePakReader @ 142a66b20

/* WARNING: Enum "EVersion": Some values do not have unique names */

FArchive * __thiscall
FPakFile::CreatePakReader(FPakFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  TUniquePtr<FChunkCacheWorker,TDefaultDelete<FChunkCacheWorker>_> *pTVar1;
  FPakSignatureFile *pFVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FChunkCacheWorker *pFVar6;
  FChunkCacheWorker *pFVar7;
  FChunkCacheWorker *pFVar8;
  longlong lVar9;
  FArchive *pFVar10;
  uchar *puVar11;
  ulonglong uVar12;
  byte bVar13;
  FChunkCacheWorker *pFVar14;
  IPlatformFile *local_res10;
  wchar_t *local_res18;
  FChunkCacheWorker *local_res20;
  longlong local_48;
  IPlatformFile **local_40;
  wchar_t **local_38;
  
  local_40 = &local_res10;
  local_38 = &local_res18;
  local_res10 = param_1;
  local_res18 = param_2;
  if (this->bSigned == false) {
    pwVar5 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar5,L"signedpak");
    if (bVar4) goto LAB_142a66b83;
    pwVar5 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar5,L"signed");
    if (bVar4) goto LAB_142a66b83;
    bVar13 = 0;
  }
  else {
LAB_142a66b83:
    bVar13 = 1;
  }
  pwVar5 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar5,L"FileOpenLog");
  pFVar14 = (FChunkCacheWorker *)0x0;
  if ((!(bool)(bVar13 & !bVar4)) ||
     (pTVar1 = &this->Decryptor, (this->Decryptor).Ptr != (FChunkCacheWorker *)0x0))
  goto LAB_142a66c88;
  pFVar6 = (FChunkCacheWorker *)`FPakFile::CreatePakReader'::__l2::<lambda_1>::operator()(&local_40)
  ;
  if (pFVar6 != (FChunkCacheWorker *)0x0) {
    pFVar7 = ::operator_new(0x200,0x40);
    pFVar8 = pFVar14;
    if (pFVar7 != (FChunkCacheWorker *)0x0) {
      local_res20 = pFVar6;
      pFVar8 = FChunkCacheWorker::FChunkCacheWorker(pFVar7,(FArchive *)&local_res20,local_res18);
      pFVar6 = pFVar14;
    }
    if (pTVar1 == (TUniquePtr<FChunkCacheWorker,TDefaultDelete<FChunkCacheWorker>_> *)&local_48) {
      if (pFVar8 != (FChunkCacheWorker *)0x0) {
        lVar9 = pFVar8->_padding_;
        goto LAB_142a66c2d;
      }
    }
    else {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar8;
      if (pFVar7 != (FChunkCacheWorker *)0x0) {
        lVar9 = pFVar7->_padding_;
        pFVar8 = pFVar7;
LAB_142a66c2d:
        (**(code **)(lVar9 + 0x28))(pFVar8);
      }
    }
  }
  if (((pTVar1->Ptr == (FChunkCacheWorker *)0x0) ||
      (pFVar2 = (pTVar1->Ptr->Signatures).Object, pFVar2 == (FPakSignatureFile *)0x0)) ||
     ((pFVar2->ChunkHashes).ArrayNum < 1)) {
    if (pFVar6 != (FChunkCacheWorker *)0x0) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
    return (FArchive *)0x0;
  }
  if (pFVar6 != (FChunkCacheWorker *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6);
  }
  if ((pTVar1->Ptr == (FChunkCacheWorker *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bNeedsDecryptor || Decryptor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FArchive *)(*pcVar3)();
    return pFVar10;
  }
LAB_142a66c88:
  pFVar8 = (FChunkCacheWorker *)`FPakFile::CreatePakReader'::__l2::<lambda_1>::operator()(&local_40)
  ;
  pFVar6 = pFVar14;
  if (pFVar8 != (FChunkCacheWorker *)0x0) {
    if ((this->Decryptor).Ptr == (FChunkCacheWorker *)0x0) {
      return (FArchive *)pFVar8;
    }
    pFVar6 = ::operator_new(0xd8);
    if (pFVar6 == (FChunkCacheWorker *)0x0) {
      pFVar6 = (FChunkCacheWorker *)0x0;
      pFVar14 = pFVar8;
    }
    else {
      pFVar7 = (this->Decryptor).Ptr;
      FArchiveState::FArchiveState((FArchiveState *)pFVar6);
      pFVar6->CachedChunks[4].Data = (uchar *)0x0;
      pFVar6->_padding_ = (longlong)&___7FSignedArchiveReader__6B_;
      *(FChunkCacheWorker **)&pFVar6->CachedChunks[4].LockCount = pFVar8;
      pFVar6->CachedChunks[4].LastAccessTime = 0.0;
      pFVar6->CachedChunks[5].Data = (uchar *)0x0;
      pFVar6->CachedChunks[5].LockCount = 0;
      pFVar6->CachedChunks[5].ChunkIndex = 0;
      pFVar6->CachedChunks[5].LastAccessTime = (double)pFVar7;
      pFVar6->CachedChunks[6].Data = (uchar *)0x0;
      pFVar6->CachedChunks[6].LockCount = 0;
      pFVar6->CachedChunks[6].ChunkIndex = -1;
      pFVar6->CachedChunks[6].LastAccessTime = 0.0;
      puVar11 = FMemory::Malloc(0x10000,0);
      pFVar6->CachedChunks[6].Data = puVar11;
      (**(code **)(pFVar6->_padding_ + 200))(pFVar6,1);
      puVar11 = (uchar *)(**(code **)(**(longlong **)&pFVar6->CachedChunks[4].LockCount + 0x30))();
      pFVar6->CachedChunks[4].LastAccessTime = (double)puVar11;
      pFVar6->CachedChunks[5].Data = puVar11;
      uVar12 = (ulonglong)(ushort)((longlong)puVar11 >> 0x3f);
      pFVar6->CachedChunks[4].Data =
           (uchar *)((ulonglong)(((ulonglong)(puVar11 + uVar12) & 0xffff) != uVar12) +
                    ((longlong)(puVar11 + uVar12) >> 0x10));
    }
  }
  if (pFVar14 != (FChunkCacheWorker *)0x0) {
    (**(code **)pFVar14->_padding_)(pFVar14,1);
  }
  return (FArchive *)pFVar6;
}

// DecodePakEntry @ 142a66df0

void __cdecl FPakFile::DecodePakEntry(uchar *param_1,FPakEntry *param_2,FPakInfo *param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  long64 lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong *puVar18;
  
  uVar15 = *(uint *)param_1;
  uVar11 = uVar15 & 0x3f;
  if (uVar11 == 0x3f) {
    uVar6 = *(uint *)(param_1 + 4);
  }
  else {
    uVar6 = uVar11 << 0xb;
  }
  lVar9 = 4;
  lVar16 = 8;
  if (uVar11 != 0x3f) {
    lVar16 = 4;
  }
  uVar11 = uVar15 >> 0x17 & 0x3f;
  puVar17 = (uint *)(param_1 + lVar16);
  param_2->CompressionMethodIndex = uVar11;
  if ((int)uVar15 < 0) {
    param_2->Offset = (ulonglong)*puVar17;
    lVar16 = 4;
  }
  else {
    param_2->Offset = *(long64 *)puVar17;
    lVar16 = 8;
  }
  puVar18 = (ulonglong *)(lVar16 + (longlong)puVar17);
  if ((uVar15 >> 0x1e & 1) == 0) {
    uVar7 = *puVar18;
    lVar16 = 8;
  }
  else {
    uVar7 = (ulonglong)(uint)*puVar18;
    lVar16 = 4;
  }
  param_2->UncompressedSize = uVar7;
  puVar18 = (ulonglong *)((longlong)puVar18 + lVar16);
  if (uVar11 != 0) {
    if ((uVar15 >> 0x1d & 1) == 0) {
      uVar7 = *puVar18;
      lVar9 = 8;
    }
    else {
      uVar7 = (ulonglong)(uint)*puVar18;
    }
    puVar18 = (ulonglong *)((longlong)puVar18 + lVar9);
  }
  param_2->Size = uVar7;
  piVar1 = &(param_2->CompressionBlocks).ArrayMax;
  piVar2 = &(param_2->CompressionBlocks).ArrayNum;
  bVar8 = param_2->Flags | 1;
  if ((uVar15 >> 0x16 & 1) == 0) {
    bVar8 = param_2->Flags & 0xfe;
  }
  param_2->Flags = bVar8;
  uVar15 = uVar15 >> 6 & 0xffff;
  *piVar2 = 0;
  if (*piVar1 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&(param_2->CompressionBlocks).AllocatorInstance,0,piVar1);
  }
  iVar13 = *piVar2;
  if (iVar13 < (int)uVar15) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15 - iVar13,&(param_2->CompressionBlocks).AllocatorInstance,piVar2,piVar1)
    ;
  }
  else if ((int)uVar15 < iVar13) {
    iVar13 = iVar13 - uVar15;
    if (iVar13 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar13 == 0) goto LAB_142a66fe4;
    pFVar10 = (param_2->CompressionBlocks).AllocatorInstance.Data + (ulonglong)uVar15 * 0x10;
    iVar5 = (*piVar2 - iVar13) - uVar15;
    if (iVar5 != 0) {
      memmove(pFVar10,pFVar10 + (longlong)iVar13 * 0x10,(longlong)iVar5 << 4);
    }
    *piVar2 = *piVar2 - iVar13;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(param_2->CompressionBlocks).AllocatorInstance,*piVar2,piVar1);
  }
LAB_142a66fe4:
  param_2->CompressionBlockSize = 0;
  if (uVar15 != 0) {
    param_2->CompressionBlockSize = uVar6;
    if (uVar15 == 1) {
      uVar6 = IntCastChecked<unsigned_int,__int64>(param_2->UncompressedSize);
      param_2->CompressionBlockSize = uVar6;
    }
    if ((uVar6 == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7109305557994964777>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x729,"OutEntry.CompressionBlockSize != 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar8 = param_2->Flags;
  param_2->Flags = bVar8 & 0xfd;
  iVar13 = param_3->Version;
  if (iVar13 < 5) {
    lVar12 = param_2->Offset;
  }
  else {
    lVar12 = 0;
  }
  iVar5 = (param_2->CompressionBlocks).ArrayNum;
  if (iVar5 == 1) {
    bVar4 = false;
    if ((bVar8 & 1) == 0) {
      lVar9 = 0x30;
      pFVar10 = (param_2->CompressionBlocks).AllocatorInstance.Data;
      if ((2 < param_3->Version) && (lVar9 = 0x35, param_2->CompressionMethodIndex != 0)) {
        lVar9 = (longlong)(param_2->CompressionBlocks).ArrayNum * 0x10 + 0x39;
      }
      lVar16 = lVar9 + 8;
      if (1 < param_3->Version) {
        lVar16 = lVar9;
      }
      *(longlong *)pFVar10 = lVar16 + lVar12;
      *(long64 *)(pFVar10 + 8) = param_2->Size + lVar16 + lVar12;
      return;
    }
  }
  else {
    if (iVar5 < 1) {
      return;
    }
    bVar4 = (bVar8 & 1) == 0;
  }
  lVar16 = 1;
  lVar9 = 0x30;
  if (!bVar4) {
    lVar16 = 0x10;
  }
  if ((iVar13 < 3) || (lVar9 = 0x35, param_2->CompressionMethodIndex == 0)) {
    lVar14 = lVar9 + 8;
    if (1 < iVar13) {
      lVar14 = lVar9;
    }
  }
  else {
    lVar14 = (longlong)iVar5 * 0x10 + 0x39;
  }
  lVar14 = lVar14 + lVar12;
  uVar15 = 0;
  lVar9 = 0;
  while( true ) {
    uVar11 = 0;
    if ((int)uVar15 < (param_2->CompressionBlocks).ArrayNum) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar10 = (param_2->CompressionBlocks).AllocatorInstance.Data;
    uVar15 = uVar15 + 1;
    *(longlong *)(pFVar10 + lVar9) = lVar14;
    uVar7 = *puVar18;
    puVar18 = (ulonglong *)((longlong)puVar18 + 4);
    *(ulonglong *)(pFVar10 + lVar9 + 8) = (ulonglong)(uint)uVar7 + lVar14;
    lVar9 = lVar9 + 0x10;
    lVar14 = lVar14 + (((ulonglong)(uint)uVar7 - 1) + lVar16 & -lVar16);
    if ((param_2->CompressionBlocks).ArrayNum <= (int)uVar15) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// DecryptAndValidateIndex @ 142a671b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFile::DecryptAndValidateIndex
          (FPakFile *this,FArchive *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,FSHAHash *param_3,
          FSHAHash *param_4)

{
  longlong lVar1;
  FGuid local_18;
  
  if ((this->Info).bEncryptedIndex != '\0') {
    local_18.A = (this->Info).EncryptionKeyGuid.A;
    local_18.B = (this->Info).EncryptionKeyGuid.B;
    local_18.C = (this->Info).EncryptionKeyGuid.C;
    local_18.D = (this->Info).EncryptionKeyGuid.D;
    DecryptData((uchar *)(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum,&local_18);
  }
  FSHA1::HashBuffer((param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum,param_4->Hash);
  lVar1 = *(longlong *)param_3->Hash - *(longlong *)param_4->Hash;
  if ((lVar1 == 0) &&
     (lVar1 = *(longlong *)(param_3->Hash + 8) - *(longlong *)(param_4->Hash + 8), lVar1 == 0)) {
    lVar1 = (ulonglong)*(uint *)(param_3->Hash + 0x10) - (ulonglong)*(uint *)(param_4->Hash + 0x10);
  }
  return lVar1 == 0;
}

// EncodePakEntriesIntoIndex @ 142a6b1e0

void __cdecl
FPakFile::EncodePakEntriesIntoIndex
          (int param_1,TFunction<FPakEntryPair_&___cdecl(void)> *param_2,wchar_t *param_3,
          FPakInfo *param_4,FString *param_5,int *param_6,int *param_7,ulong64 *param_8,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_9,TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
                   *param_10,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_11,
          TArray<FPakEntry,TSizedDefaultAllocator<32>_> *param_12,
          TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
          *param_13,int param_14)

{
  FPakEntry *pFVar1;
  wchar_t wVar2;
  code *pcVar3;
  FPakEntry *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  FString *pFVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  FPakEntryLocation local_res8 [2];
  TFunction<FPakEntryPair_&___cdecl(void)> *local_res10;
  ulong64 local_108;
  FString local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  
  uVar16 = (ulonglong)(uint)param_1;
  local_108 = 0;
  local_res10 = param_2;
  if ((param_8 != (ulong64 *)0x0) ||
     (param_10 !=
      (TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
       *)0x0)) {
    ::FString::FString(&local_f8,param_3);
    ::FString::ToLowerInline(&local_f8);
    uVar13 = 0xffffffff;
    uVar12 = 0xffffffff;
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar17.Data = local_f8.Data.AllocatorInstance.Data;
    }
    wVar2 = *(wchar_t *)FVar17.Data;
    while (wVar2 != L'\0') {
      FVar17.Data = FVar17.Data + 2;
      uVar12 = FCrc::CRCTablesSB8[1][uVar13 >> 0x10 & 0xff] ^
               FCrc::CRCTablesSB8[2][((ushort)wVar2 ^ uVar13) >> 8 & 0xff] ^
               FCrc::CRCTablesSB8[0][uVar13 >> 0x18] ^
               FCrc::CRCTablesSB8[3][((ushort)wVar2 ^ uVar13) & 0xff];
      uVar13 = (ulonglong)uVar12;
      wVar2 = *(wchar_t *)FVar17.Data;
    }
    local_108 = (ulong64)~uVar12;
    if (param_8 != (ulong64 *)0x0) {
      *param_8 = local_108;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  local_e8._padding_ = 0;
  local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  *param_6 = 0;
  *param_7 = 0;
  local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_e8._40_8_ = 0;
  local_e8.ArSerializingDefaults = 0;
  local_e8.ArPortFlags = 0;
  local_e8.ArMaxSerializeSize = 0;
  local_e8.ArUEVer.FileVersionUE4 = 0;
  local_e8.ArUEVer.FileVersionUE5 = 0;
  local_e8.ArLicenseeUEVer = 0;
  local_e8.ArEngineVer.Major = 0;
  local_e8.ArEngineVer.Minor = 0;
  local_e8.ArEngineVer.Patch = 0;
  local_e8.ArEngineVer._6_2_ = 0;
  local_e8.ArEngineVer.Changelist = 0;
  local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_e8.SerializedProperty = (FProperty *)0x0;
  local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_e8.bCustomVersionsAreReset = false;
  local_e8._129_7_ = 0;
  local_e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_e8);
  local_58 = 0;
  local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_50 = param_11;
  local_48 = 0;
  FArchiveState::SetIsSaving(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (0 < param_1) {
    do {
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar3 = *(code **)param_2;
      plVar11 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_2->field_0x10;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      pFVar10 = (FString *)(*pcVar3)(uVar9);
      local_res8[0].Index = -0x80000000;
      pFVar1 = (FPakEntry *)(pFVar10 + 1);
      if ((pFVar10[5].Data.ArrayNum & 2) == 0) {
        iVar7 = param_11->ArrayNum;
        if (((iVar7 < 0) || (0x7ffffffe < iVar7)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("0 <= Offset && Offset <= MaxIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Public\\IPlatformFilePak.h"
                               ,0x270,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res8[0].Index = iVar7;
        bVar6 = EncodePakEntry((FArchive *)&local_e8,pFVar1,param_4);
        if (bVar6) {
          *param_6 = *param_6 + 1;
        }
        else {
          uVar12 = param_12->ArrayNum;
          lVar14 = (longlong)(int)uVar12;
          if ((((int)uVar12 < 0) || (0x7ffffffe < (int)uVar12)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("0 <= ListIndex && ListIndex <= MaxIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Public\\IPlatformFilePak.h"
                                 ,0x276,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          piVar15 = &param_12->ArrayNum;
          pFVar4 = (FPakEntry *)(param_12->AllocatorInstance).Data;
          local_res8[0].Index = -1 - uVar12;
          if (((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + param_12->ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = *piVar15;
          if (iVar7 == param_12->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&param_12->AllocatorInstance,&param_12->ArrayMax);
            *piVar15 = iVar7;
          }
          *piVar15 = iVar7 + 1;
          FPakEntry::FPakEntry
                    ((FPakEntry *)((param_12->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
                     pFVar1);
          uVar8 = 0;
          if ((int)uVar12 < *piVar15) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar5 = (param_12->AllocatorInstance).Data;
          *(undefined8 *)(pFVar5 + lVar14 * 0x50 + 0x18) = 0;
          *(undefined8 *)(pFVar5 + lVar14 * 0x50 + 0x18 + 8) = 0;
          *(undefined4 *)(pFVar5 + lVar14 * 0x50 + 0x28) = 0;
          pFVar5[lVar14 * 0x50 + 0x49] = (FScriptContainerElement)0x1;
        }
      }
      else {
        *param_7 = *param_7 + 1;
      }
      AddEntryToIndex(pFVar10,local_res8,param_5,local_108,param_9,
                      (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                       *)0x0,param_10,param_13,param_14);
      uVar16 = uVar16 - 1;
      param_2 = local_res10;
    } while (uVar16 != 0);
  }
  FArchive::~FArchive((FArchive *)&local_e8);
  return;
}

// EncodePakEntry @ 142a6b650

bool __cdecl FPakFile::EncodePakEntry(FArchive *param_1,FPakEntry *param_2,FPakInfo *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  long64 lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  byte bVar17;
  int iVar18;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  longlong local_70;
  int *local_68;
  int *local_60;
  longlong local_58;
  ulonglong local_50;
  
  if (((param_1->field_0x28 & 4) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x63e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((param_2->Flags & 2) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InPakEntry.IsDeleteRecord()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x63f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar9 = 0x30;
  iVar18 = param_3->Version;
  bVar17 = param_2->Flags & 1;
  if ((2 < iVar18) && (lVar9 = 0x35, param_2->CompressionMethodIndex != 0)) {
    lVar9 = (longlong)(param_2->CompressionBlocks).ArrayNum * 0x10 + 0x39;
  }
  lVar15 = lVar9 + 8;
  if (1 < iVar18) {
    lVar15 = lVar9;
  }
  if (0x3f < param_2->CompressionMethodIndex) {
    return false;
  }
  iVar10 = (param_2->CompressionBlocks).ArrayNum;
  if (0xffff < iVar10) {
    return false;
  }
  if (param_2->CompressionMethodIndex != 0) {
    uVar11 = 1;
    if (0 < iVar10) {
      if (iVar18 < 5) {
        lVar9 = param_2->Offset;
      }
      else {
        lVar9 = 0;
      }
      if (lVar9 + lVar15 != *(longlong *)(param_2->CompressionBlocks).AllocatorInstance.Data) {
        return false;
      }
      local_68 = &(param_2->CompressionBlocks).ArrayNum;
      if (iVar10 == 1) {
        if (param_3->Version < 5) {
          lVar12 = param_2->Offset;
        }
        else {
          lVar12 = 0;
        }
        pFVar16 = (param_2->CompressionBlocks).AllocatorInstance.Data;
        if (((param_2->CompressionBlocks).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar9 = 1;
        if (bVar17 != 0) {
          lVar9 = 0x10;
        }
        lVar1 = *(longlong *)((param_2->CompressionBlocks).AllocatorInstance.Data + 8);
        lVar2 = *(longlong *)pFVar16;
        if (((param_2->CompressionBlocks).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (param_2->Size + lVar15 + lVar12 !=
            *(longlong *)(param_2->CompressionBlocks).AllocatorInstance.Data +
            ((lVar1 - lVar2) + -1 + lVar9 & -lVar9)) {
          return false;
        }
      }
    }
    local_68 = &(param_2->CompressionBlocks).ArrayNum;
    iVar10 = *local_68;
    if (1 < iVar10) {
      local_58 = 1;
      local_60 = &(param_2->CompressionBlocks).ArrayNum;
      if (bVar17 != 0) {
        local_58 = 0x10;
      }
      local_70 = 0;
      local_50 = ~(local_58 - 1U);
      lVar9 = 0;
      do {
        iVar18 = uVar11 - 1;
        uVar14 = -uVar11 >> 0x1f;
        uVar7 = 0;
        if (iVar18 < (param_2->CompressionBlocks).ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar16 = (param_2->CompressionBlocks).AllocatorInstance.Data;
        uVar7 = 0;
        if (iVar18 < *local_60) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar13 = local_58 + -1 +
                 (*(longlong *)((param_2->CompressionBlocks).AllocatorInstance.Data + lVar9 + 8) -
                 *(longlong *)(pFVar16 + lVar9)) & local_50;
        uVar7 = 0;
        if (iVar18 < *local_60) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar16 = (param_2->CompressionBlocks).AllocatorInstance.Data + lVar9;
        uVar7 = 0;
        if ((int)uVar11 < (param_2->CompressionBlocks).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar9 = lVar9 + 0x10;
        if (*(longlong *)((param_2->CompressionBlocks).AllocatorInstance.Data + lVar9) !=
            *(longlong *)pFVar16 + uVar13) {
          return false;
        }
        uVar11 = uVar11 + 1;
        local_70 = local_70 + 1;
        iVar10 = *local_68;
      } while ((int)uVar11 < iVar10);
    }
  }
  local_50 = param_2->Size;
  uVar11 = 0;
  lVar9 = param_2->Offset;
  lVar15 = param_2->UncompressedSize;
  if ((1 < iVar10) &&
     (uVar11 = param_2->CompressionBlockSize >> 0xb & 0x3f,
     uVar11 << 0xb != param_2->CompressionBlockSize)) {
    uVar11 = 0x3f;
  }
  uVar7 = 0;
  if (lVar15 < 0x100000000) {
    uVar7 = 0x40000000;
  }
  uVar14 = 0;
  if ((longlong)local_50 < 0x100000000) {
    uVar14 = 0x20000000;
  }
  uVar8 = 0;
  if (lVar9 < 0x100000000) {
    uVar8 = 0x80000000;
  }
  local_res8[0] =
       (param_2->Flags & 1) << 0x16 | iVar10 << 6 | uVar7 | uVar14 | uVar8 |
       param_2->CompressionMethodIndex << 0x17 | uVar11;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (uVar11 == 0x3f) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = param_2->CompressionBlockSize;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  if (lVar9 < 0x100000000) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = (uint)param_2->Offset;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  else {
    ::operator<<(param_1,&param_2->Offset);
  }
  if (lVar15 < 0x100000000) {
    local_res20[0] = (uint)param_2->UncompressedSize;
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  else {
    ::operator<<(param_1,&param_2->UncompressedSize);
  }
  if (param_2->CompressionMethodIndex != 0) {
    if ((longlong)local_50 < 0x100000000) {
      local_78 = (uint)param_2->Size;
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_78);
        }
      }
      else {
        local_78 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
    }
    else {
      ::operator<<(param_1,&param_2->Size);
    }
    iVar18 = (param_2->CompressionBlocks).ArrayNum;
    if (((1 < iVar18) || ((iVar18 == 1 && ((param_2->Flags & 1) != 0)))) && (uVar11 = 0, 0 < iVar18)
       ) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (param_2->CompressionBlocks).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar16 = (param_2->CompressionBlocks).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar11 < (param_2->CompressionBlocks).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar13 = *(longlong *)((param_2->CompressionBlocks).AllocatorInstance.Data + lVar9 + 8) -
                 *(longlong *)(pFVar16 + lVar9);
        if (((uVar13 != (uVar13 & 0xffffffff)) || ((longlong)uVar13 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        plVar3 = *(longlong **)&param_1->field_0x8;
        local_74 = (uint)uVar13;
        if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_74,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_74);
          }
        }
        else {
          local_74 = *(uint *)*plVar3;
          *plVar3 = *plVar3 + 4;
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar11 < (param_2->CompressionBlocks).ArrayNum);
    }
  }
  return true;
}

// Find @ 142a6de00

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EFindResult __thiscall FPakFile::Find(FPakFile *this,FString *param_1,FPakEntry *param_2)

{
  code *pcVar1;
  bool bVar2;
  EFindResult EVar3;
  FIndexSettings *pFVar4;
  FPakEntryLocation *pFVar5;
  FPakEntryLocation *pFVar6;
  
  pFVar4 = GetIndexSettings();
  if (pFVar4->bValidatePruning == false) {
LAB_142a6df57:
    if (this->bHasPathHashIndex != false) {
      pFVar6 = FindLocationFromIndex
                         (param_1,&this->MountPoint,&this->PathHashIndex,this->PathHashSeed,
                          (this->Info).Version);
      goto LAB_142a6e01e;
    }
  }
  else if (this->bHasPathHashIndex != false) {
    if (this->bHasFullDirectoryIndex != false) {
      pFVar5 = FindLocationFromIndex
                         (param_1,&this->MountPoint,&this->PathHashIndex,this->PathHashSeed,
                          (this->Info).Version);
      if (this->bWillPruneDirectoryIndex == false) {
        pFVar6 = FindLocationFromIndex(this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex)
        ;
      }
      else {
        AcquireSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
        pFVar6 = FindLocationFromIndex(this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex)
        ;
        ReleaseSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
      }
      if (((pFVar5 != (FPakEntryLocation *)0x0) != (pFVar6 != (FPakEntryLocation *)0x0)) &&
         (1 < (byte)LogPakFile._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      if (pFVar5 != (FPakEntryLocation *)0x0) {
        pFVar6 = pFVar5;
      }
      goto LAB_142a6e01e;
    }
    goto LAB_142a6df57;
  }
  if ((((this->Files).ArrayNum != 0) && (this->bHasFullDirectoryIndex == false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Files.IsEmpty() || bHasFullDirectoryIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x967,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if (this->bWillPruneDirectoryIndex == false) {
    pFVar6 = FindLocationFromIndex(this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex);
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
    pFVar6 = FindLocationFromIndex(this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex);
    ReleaseSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
LAB_142a6e01e:
  if (pFVar6 != (FPakEntryLocation *)0x0) {
    EVar3 = GetPakEntry(pFVar6,param_2,&this->EncodedPakEntries,&this->Files,&this->Info);
    return EVar3;
  }
  return NotFound;
}

// FindLocationFromIndex @ 142a6f180

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPakEntryLocation * __thiscall
FPakFile::FindLocationFromIndex
          (FPakFile *this,FString *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *this_00;
  FUtf8String *pFVar6;
  FScriptContainerElement *pFVar7;
  FPakEntryLocation *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FUtf8String local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if (this->bUseDirectoryTree == false) {
    pFVar8 = FindLocationFromIndex(param_1,&this->MountPoint,param_2);
    return pFVar8;
  }
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  iVar5 = (this->MountPoint).Data.ArrayNum;
  if (iVar5 == 0) {
    pwVar9 = L"";
    iVar5 = iVar10;
  }
  else {
    pwVar9 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  bVar2 = ::FString::StartsWith(param_1,pwVar9,iVar5,IgnoreCase);
  pFVar12 = pFVar11;
  if (bVar2) {
    iVar5 = (param_1->Data).ArrayNum;
    iVar3 = (this->MountPoint).Data.ArrayNum;
    iVar13 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar13 = iVar10;
    }
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = iVar10;
    }
    iVar3 = iVar10;
    if (iVar5 < 0) {
      iVar3 = iVar5;
    }
    iVar1 = iVar5 - iVar3;
    if (iVar13 < iVar5 - iVar3) {
      iVar1 = iVar13;
    }
    iVar5 = iVar13 - iVar1;
    if (iVar3 + 0x7fffffff < iVar13 - iVar1) {
      iVar5 = iVar3 + 0x7fffffff;
    }
    local_38.DataPtr = (wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar1 * 2);
    if (0 < iVar5) {
      iVar10 = iVar5;
    }
    local_38._12_4_ = local_48._12_4_;
    local_38.Size = iVar10;
    local_48.DataPtr = (wchar_t *)0x0;
    local_48.Size = 0;
    pFVar12 = (FScriptContainerElement *)0x0;
    if (iVar10 != 0) {
      SplitPathInline(&local_38,&local_48);
      this_00 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                 *)TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   ::Find(param_3,&local_38);
      iVar5 = local_48.Size;
      if (this_00 !=
          (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
           *)0x0) {
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        pFVar6 = FUtf8String::ConstructFromPtrSize
                           ((FUtf8String *)&local_38,local_48.DataPtr,local_48.Size);
        pFVar14 = pFVar11;
        if (&local_58 != pFVar6) {
          pFVar14 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = pFVar14;
        }
        if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.DataPtr);
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,local_48.DataPtr);
        iVar5 = TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FUtf8String>(this_00,uVar4,&local_58);
        pFVar7 = pFVar11;
        if (iVar5 != -1) {
          pFVar7 = (FScriptContainerElement *)
                   ((longlong)iVar5 * 0x20 + *(longlong *)&this_00->Elements);
        }
        pFVar12 = pFVar7 + 0x10;
        if (pFVar7 == (FScriptContainerElement *)0x0) {
          pFVar12 = pFVar11;
        }
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
      }
    }
  }
  if ((GPak_ValidateDirectoryTreeSearchConsistency != false) &&
     (pFVar8 = FindLocationFromIndex(param_1,&this->MountPoint,param_2),
     (pFVar12 != (FScriptContainerElement *)0x0) != (pFVar8 != (FPakEntryLocation *)0x0))) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  return (FPakEntryLocation *)pFVar12;
}

// FindLocationFromIndex @ 142a6f3f0

FPakEntryLocation * __cdecl
FPakFile::FindLocationFromIndex
          (FString *param_1,FString *param_2,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *this;
  FUtf8String *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FUtf8String local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar5 = (param_2->Data).ArrayNum;
  pFVar12 = (FScriptContainerElement *)0x0;
  if (iVar5 == 0) {
    pwVar8 = L"";
    iVar5 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  bVar2 = ::FString::StartsWith(param_1,pwVar8,iVar5,IgnoreCase);
  if (bVar2) {
    iVar5 = (param_1->Data).ArrayNum;
    local_28.DataPtr = (wchar_t *)0x0;
    local_28.Size = 0;
    iVar1 = (param_2->Data).ArrayNum;
    iVar3 = 0;
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = iVar3;
    }
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = iVar3;
    }
    if (iVar5 < 0) {
      iVar3 = iVar5;
    }
    iVar1 = iVar5 - iVar3;
    if (iVar11 < iVar5 - iVar3) {
      iVar1 = iVar11;
    }
    iVar5 = iVar11 - iVar1;
    if (iVar3 + 0x7fffffff < iVar11 - iVar1) {
      iVar5 = iVar3 + 0x7fffffff;
    }
    local_18.DataPtr = (wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar1 * 2);
    local_18.Size = 0;
    if (0 < iVar5) {
      local_18.Size = iVar5;
    }
    if (local_18.Size != 0) {
      SplitPathInline(&local_18,&local_28);
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
      this = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              *)TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                            *)param_3,uVar4,&local_18);
      iVar5 = local_28.Size;
      if (this != (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)0x0) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        pFVar6 = FUtf8String::ConstructFromPtrSize
                           ((FUtf8String *)&local_18,local_28.DataPtr,local_28.Size);
        pFVar9 = pFVar12;
        if (&local_38 != pFVar6) {
          pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = pFVar9;
        }
        if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.DataPtr);
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,local_28.DataPtr);
        iVar5 = TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FUtf8String>(this,uVar4,&local_38);
        pFVar7 = pFVar12;
        if (iVar5 != -1) {
          pFVar7 = (FScriptContainerElement *)
                   ((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements);
        }
        pFVar10 = pFVar7 + 0x10;
        if (pFVar7 == (FScriptContainerElement *)0x0) {
          pFVar10 = pFVar12;
        }
        if (pFVar9 == (FScriptContainerElement *)0x0) {
          return (FPakEntryLocation *)pFVar10;
        }
        FMemory::Free(pFVar9);
        return (FPakEntryLocation *)pFVar10;
      }
    }
  }
  return (FPakEntryLocation *)0x0;
}

// FindLocationFromIndex @ 142a6f5b0

FPakEntryLocation * __cdecl
FPakFile::FindLocationFromIndex
          (FString *param_1,FString *param_2,
          TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
          *param_3,ulong64 param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  ulong64 uVar3;
  FPakEntryLocation *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  iVar1 = (param_2->Data).ArrayNum;
  pwVar6 = L"";
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(param_1,pwVar5,iVar7,IgnoreCase);
  if (bVar2) {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = (param_2->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (*(short *)((longlong)pwVar6 + (longlong)iVar7 * 2) != 0) {
      uVar3 = HashPath((wchar_t *)((longlong)pwVar6 + (longlong)iVar7 * 2),param_4,param_5);
      pFVar4 = TMapBase<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
               ::Find((TMapBase<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
                       *)param_3,uVar3);
      return pFVar4;
    }
  }
  return (FPakEntryLocation *)0x0;
}

// FindPrunedDirectoryInIndexInternal @ 142a703f0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
FPakFile::FindPrunedDirectoryInIndexInternal
          (FPakFile *this,FString *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  int iVar4;
  TStringView<wchar_t> local_28;
  
  if (this->bUseDirectoryTree != false) {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    local_28.Size = iVar4;
    pTVar2 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::Find(param_3,&local_28);
    if ((GPak_ValidateDirectoryTreeSearchConsistency != false) &&
       ((pTVar3 = TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                  ::Find((TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                          *)param_2,param_1),
        (pTVar2 !=
        (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
         *)0x0) !=
        (pTVar3 !=
        (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
         *)0x0) ||
        ((pTVar2 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0 &&
         (*(int *)&pTVar2->field_0x8 - *(int *)&pTVar2->field_0x34 !=
          *(int *)&pTVar3->field_0x8 - *(int *)&pTVar3->field_0x34)))))) {
      iVar1 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_28.DataPtr = (wchar_t *)0x0;
      local_28.Size = iVar1;
      if (iVar1 == 0) {
        local_28.Size = 0;
        local_28._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,(int *)&local_28.field_0xc);
        memcpy(local_28.DataPtr,_Src,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
    return pTVar2;
  }
  pTVar2 = TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
           ::Find((TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                   *)param_2,param_1);
  return pTVar2;
}

// FindPrunedDirectoryInternal @ 142a70580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall FPakFile::FindPrunedDirectoryInternal(FPakFile *this,FString *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FIndexSettings *pFVar9;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  ForElementType<FSetElementId> FVar18;
  void *pvVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStackY_198 [32];
  FSparseArrayAllocationInfo local_150;
  undefined4 local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  FString local_130;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_120;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  void *local_98;
  int local_90 [2];
  TBitArray<FDefaultBitArrayAllocator> local_88;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar9 = GetIndexSettings();
  if (((pFVar9->bValidatePruning == false) || (this->bWillPruneDirectoryIndex == false)) ||
     (this->bNeedsLegacyPruning != false)) {
    pTVar10 = FindPrunedDirectoryInIndexInternal
                        (this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex);
    return pTVar10;
  }
  pTVar10 = FindPrunedDirectoryInIndexInternal
                      (this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex);
  local_120 = pTVar10;
  local_118 = FindPrunedDirectoryInIndexInternal
                        (this,param_1,&this->PrunedDirectoryIndex,&this->PrunedDirectoryTreeIndex);
  if ((pTVar10 !=
      (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
       *)0x0) ==
      (local_118 !=
      (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
       *)0x0)) {
    return pTVar10;
  }
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  ::FString::ConcatFF(&local_130,&this->MountPoint,param_1);
  iVar24 = 1;
  if (pTVar10 ==
      (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
       *)0x0) goto LAB_142a70b5c;
  if (local_b4 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                       (int *)(local_e8 + 0xc));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),1);
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
    if (local_c8 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_c8;
    }
    uVar6 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar6;
    puVar3 = (uint *)((longlong)FVar22 + (longlong)(iVar8 >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar6 & 0x1f));
    iVar8 = local_b8;
  }
  else {
    local_b4 = local_b4 + -1;
    iVar8 = *(int *)(local_e8._0_8_ + (longlong)local_b8 * 0x18 + 4);
    iVar7 = local_b8;
    if (local_b4 != 0) {
      *(undefined4 *)(local_e8._0_8_ + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  local_b8 = iVar8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_e8,&local_150,iVar7);
  iVar7 = local_130.Data.ArrayNum;
  FVar12.Data = local_130.Data.AllocatorInstance.Data;
  pTVar20 = local_150.Pointer;
  if (local_150.Pointer == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  }
  else {
    *(FScriptContainerElement **)(local_150.Pointer)->InlineData = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)(local_150.Pointer)->InlineData + 0xc);
    *(int *)((longlong)(local_150.Pointer)->InlineData + 8) = local_130.Data.ArrayNum;
    if (local_130.Data.ArrayNum == 0) {
      *piVar1 = 0;
      *(undefined4 *)&(local_150.Pointer)->SecondaryData = 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130.Data.ArrayNum,0,local_150.Pointer,local_130.Data.ArrayNum,piVar1);
      memcpy(*(FScriptContainerElement **)(pTVar20->AllocatorInstance).InlineData,FVar12.Data,
             (longlong)iVar7 * 2);
      *(undefined4 *)&(pTVar20->AllocatorInstance).SecondaryData = 0xffffffff;
    }
  }
  iVar25 = local_150.Index;
  iVar8 = *(int *)((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    pwVar17 = L"";
    iVar7 = 0;
  }
  else {
    pwVar17 = *(wchar_t **)(pTVar20->AllocatorInstance).InlineData;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar17);
  if ((local_e8._8_4_ - local_b4 != 1) && (local_e8._8_4_ != local_b4)) {
    FVar12.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar12.Data = local_a8.Data;
    }
    iVar7 = *(int *)(FVar12.Data + (ulonglong)(local_a0 - 1 & uVar6) * 4);
    pFVar14 = (FScriptContainerElement *)local_e8._0_8_;
    while (iVar7 != -1) {
      lVar16 = (longlong)iVar7 * 0x18;
      iVar8 = *(int *)((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
      iVar4 = *(int *)(pFVar14 + lVar16 + 8);
      if (iVar4 == iVar8) {
        if (1 < iVar4) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar14 + lVar16),
                             (wchar_t *)
                             *(FScriptContainerElement **)(pTVar20->AllocatorInstance).InlineData);
          bVar26 = iVar8 == 0;
          pFVar14 = (FScriptContainerElement *)local_e8._0_8_;
          goto LAB_142a7088c;
        }
LAB_142a7089e:
        if (iVar7 != -1) {
          if (*(void **)(pFVar14 + (longlong)iVar7 * 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar14 + (longlong)iVar7 * 0x18));
          }
          memmove(pFVar14 + (longlong)iVar7 * 0x18,pTVar20,0x10);
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8,iVar25,1);
          iVar25 = iVar7;
        }
        if (iVar7 != -1) goto LAB_142a70b5c;
        break;
      }
      bVar26 = iVar4 + iVar8 == 1;
LAB_142a7088c:
      if (bVar26) goto LAB_142a7089e;
      iVar7 = *(int *)(pFVar14 + lVar16 + 0x10);
    }
  }
  uVar21 = 1;
  uVar13 = local_e8._8_4_ - local_b4;
  if (3 < uVar13) {
    uVar15 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar21 <= (int)local_a0)) {
    uVar6 = local_a0 - 1 & uVar6;
    *(uint *)&(pTVar20->AllocatorInstance).SecondaryData.field_0x4 = uVar6;
    FVar12.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar12.Data = local_a8.Data;
    }
    uVar15 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar6;
    *(undefined4 *)&(pTVar20->AllocatorInstance).SecondaryData =
         *(undefined4 *)(FVar12.Data + uVar15 * 4);
    *(int *)(FVar12.Data + uVar15 * 4) = iVar25;
    goto LAB_142a70b5c;
  }
  local_a0 = uVar21;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar21 != 0) {
    uVar6 = uVar21;
    if (uVar21 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar6 = 0;
        goto LAB_142a70962;
      }
    }
    else {
LAB_142a70962:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar6,4);
    }
    if (0 < (int)uVar21) {
      uVar23 = (ulonglong)uVar21;
      uVar15 = 0;
      do {
        FVar12.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_a8.Data;
        }
        uVar11 = uVar15 & (longlong)(int)uVar21 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(FVar12.Data + uVar11 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_a0 != 0) {
    local_150.Pointer = local_e8 + 0x10;
    local_150.Index = 0;
    local_150._4_4_ = 1;
    iStack_13c = 0;
    iStack_138 = 0;
    if (local_c0 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_c8;
      }
      uVar6 = *(uint *)FVar22;
      while (uVar6 == 0) {
        iStack_138 = iStack_138 + 0x20;
        lVar16 = (longlong)local_150.Index;
        local_150.Index = local_150.Index + 1;
        if ((int)(local_c0 + -1 + (local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_150.Index)
        goto LAB_142a70a6d;
        uVar6 = ((uint *)((longlong)FVar22 + 4))[lVar16];
      }
      local_150._4_4_ = -uVar6 & uVar6;
      uVar15 = (ulonglong)(uint)local_150._4_4_ * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iStack_13c = iStack_138 + -1 + (int)lVar16;
      if (local_c0 < iStack_13c) {
LAB_142a70a6d:
        iStack_13c = local_c0;
      }
    }
    local_140 = 0xffffffff;
    local_110 = (longlong *)local_e8;
    local_108._padding_ = CONCAT44(local_150._4_4_,local_150.Index);
    local_108.CurrentBitIndex = iStack_13c;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_134;
    local_108.BaseBitIndex = iStack_138;
    local_108.Array = local_150.Pointer;
    iVar7 = iStack_13c;
    if (iStack_13c < local_c0) {
      do {
        puVar2 = (undefined8 *)(*local_110 + (longlong)iVar7 * 0x18);
        iVar25 = *(int *)(*local_110 + 8 + (longlong)iVar7 * 0x18);
        iVar8 = iVar25 + -1;
        if (iVar25 == 0) {
          pwVar17 = L"";
          iVar8 = 0;
        }
        else {
          pwVar17 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar17);
        uVar6 = local_a0 - 1 & uVar6;
        *(uint *)((longlong)puVar2 + 0x14) = uVar6;
        FVar12.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_a8.Data;
        }
        uVar15 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(FVar12.Data + uVar15 * 4);
        *(int *)(FVar12.Data + uVar15 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        iVar7 = local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_142a70b5c:
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  if (local_118 !=
      (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
       *)0x0) {
    if (local_64 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,1,(ForAnyElementType *)&local_98,local_90,local_90 + 1);
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_88,1);
      FVar22 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_88.AllocatorInstance.SecondaryData;
      }
      uVar6 = iVar8 >> 0x1f & 0x1f;
      iVar8 = iVar8 + uVar6;
      puVar3 = (uint *)((longlong)FVar22 + (longlong)(iVar8 >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar6 & 0x1f));
      iVar8 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar8 = *(int *)((longlong)local_98 + (longlong)local_68 * 0x18 + 4);
      iVar7 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)((longlong)local_98 + (longlong)iVar8 * 0x18) = 0xffffffff;
      }
    }
    local_68 = iVar8;
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_98,&local_150,iVar7);
    iVar7 = local_130.Data.ArrayNum;
    FVar12.Data = local_130.Data.AllocatorInstance.Data;
    pvVar19 = local_150.Pointer;
    if (local_150.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      *(FScriptContainerElement **)(local_150.Pointer)->InlineData = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)(local_150.Pointer)->InlineData + 0xc);
      *(int *)((longlong)(local_150.Pointer)->InlineData + 8) = local_130.Data.ArrayNum;
      pTVar20 = pvVar19;
      if (local_130.Data.ArrayNum == 0) {
        *piVar1 = 0;
        *(undefined4 *)&(local_150.Pointer)->SecondaryData = 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130.Data.ArrayNum,0,local_150.Pointer,local_130.Data.ArrayNum,piVar1);
        memcpy(*(FScriptContainerElement **)pvVar19->InlineData,FVar12.Data,(longlong)iVar7 * 2);
        *(undefined4 *)&pvVar19->SecondaryData = 0xffffffff;
      }
    }
    iVar25 = local_150.Index;
    iVar8 = *(int *)((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      pwVar17 = L"";
      iVar7 = 0;
    }
    else {
      pwVar17 = *(wchar_t **)(pTVar20->AllocatorInstance).InlineData;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar17);
    if ((local_90[0] - local_64 != 1) && (local_90[0] != local_64)) {
      FVar18 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_58;
      }
      iVar7 = *(int *)((longlong)FVar18 + (ulonglong)(local_50 - 1U & uVar6) * 4);
      pvVar19 = local_98;
      while (iVar7 != -1) {
        lVar16 = (longlong)iVar7 * 0x18;
        iVar8 = *(int *)((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
        iVar4 = *(int *)(lVar16 + 8 + (longlong)pvVar19);
        if (iVar4 == iVar8) {
          if (1 < iVar4) {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar16 + (longlong)pvVar19),
                               (wchar_t *)
                               *(FScriptContainerElement **)(pTVar20->AllocatorInstance).InlineData)
            ;
            bVar26 = iVar8 == 0;
            pvVar19 = local_98;
            goto LAB_142a70d2b;
          }
LAB_142a70d3d:
          if (iVar7 != -1) {
            pvVar5 = *(void **)((longlong)pvVar19 + (longlong)iVar7 * 0x18);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove((void *)((longlong)pvVar19 + (longlong)iVar7 * 0x18),pTVar20,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_98,iVar25,1);
            iVar25 = iVar7;
          }
          if (iVar7 != -1) goto LAB_142a70df8;
          break;
        }
        bVar26 = iVar4 + iVar8 == 1;
LAB_142a70d2b:
        if (bVar26) goto LAB_142a70d3d;
        iVar7 = *(int *)(lVar16 + 0x10 + (longlong)pvVar19);
      }
    }
    uVar13 = local_90[0] - local_64;
    if (3 < uVar13) {
      uVar15 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar24 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar24 <= local_50)) {
      uVar6 = local_50 - 1U & uVar6;
      *(uint *)&(pTVar20->AllocatorInstance).SecondaryData.field_0x4 = uVar6;
      FVar18 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_58;
      }
      uVar15 = (longlong)local_50 - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&(pTVar20->AllocatorInstance).SecondaryData =
           *(undefined4 *)((longlong)FVar18 + uVar15 * 4);
      *(int *)((longlong)FVar18 + uVar15 * 4) = iVar25;
    }
    else {
      local_50 = iVar24;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&local_98);
    }
  }
LAB_142a70df8:
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar12.Data = local_130.Data.AllocatorInstance.Data;
  }
  ValidateDirectorySearch
            (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&local_98,
             (wchar_t *)FVar12.Data);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)&local_98,0);
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  local_a0 = 0;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_e8,0);
  if (local_c8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  return local_120;
}

// FindPrunedFilesAtPath @ 142a70f10

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::FindPrunedFilesAtPath
          (FPakFile *this,wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  <lambda_1> local_res20 [8];
  FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
  local_18;
  
  local_18.ShouldVisit = local_res20;
  local_18.bIncludeDirectories = param_4;
  local_18.bRecursive = param_5;
  local_18.bIncludeFiles = param_3;
  FindPrunedFilesAtPathInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
            (this,param_1,param_2,&local_18);
  return;
}

// GetIndexSettings @ 142a752d0

FIndexSettings * __cdecl FPakFile::GetIndexSettings(void)

{
  char cVar1;
  wchar_t *pwVar2;
  TDelegate<void___cdecl(bool_&,bool_&,bool_&),FDefaultDelegateUserPolicy> *pTVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = FPakPlatformFile::GetPakSetIndexSettingsDelegate();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,&local_28);
      if ((*(int *)&pTVar3->field_0x10 != 0) &&
         (*(longlong **)&pTVar3->field_0x8 != (longlong *)0x0)) {
        cVar1 = (**(code **)(**(longlong **)&pTVar3->field_0x8 + 0x38))();
        if (cVar1 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          pTVar3 = FPakPlatformFile::GetPakSetIndexSettingsDelegate();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,&local_28);
          if (*(int *)&pTVar3->field_0x10 == 0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = *(longlong **)&pTVar3->field_0x8;
          }
          (**(code **)(*plVar4 + 0x60))(plVar4,&IndexLoadParams,0x154ba8b75,0x154ba8b76);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      FConfigCacheIni::GetBool
                (GConfig,L"Pak",L"WritePathHashIndex",&IndexLoadParams.bWritePathHashIndex,
                 &GEngineIni);
      FConfigCacheIni::GetBool
                (GConfig,L"Pak",L"WriteFullDirectoryIndex",&IndexLoadParams.bWriteFullDirectoryIndex
                 ,&GEngineIni);
      IndexLoadParams.bKeepFullDirectory = IndexLoadParams.bKeepFullDirectory != false;
      pwVar2 = FCommandLine::Get();
      FParse::Bool(pwVar2,L"ForcePakKeepFullDirectory=",&IndexLoadParams.bKeepFullDirectory);
      FParse::Bool(pwVar2,L"ForcePakValidatePruning=",&IndexLoadParams.bValidatePruning);
      FParse::Bool(pwVar2,L"ForcePakDelayPruning=",&IndexLoadParams.bDelayPruning);
      FParse::Bool(pwVar2,L"ForcePakWritePathHashIndex=",&IndexLoadParams.bWritePathHashIndex);
      FParse::Bool(pwVar2,L"ForcePakWriteFullDirectoryIndex=",
                   &IndexLoadParams.bWriteFullDirectoryIndex);
      _Init_thread_footer(&::_TSS0);
      return &IndexLoadParams;
    }
  }
  return &IndexLoadParams;
}

// GetNumFiles @ 142a76040

/* WARNING: Enum "EVersion": Some values do not have unique names */

int __thiscall FPakFile::GetNumFiles(FPakFile *this)

{
  return (this->EncodedPakEntries).ArrayNum;
}

// GetPakEntry @ 142a767d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

EFindResult __thiscall
FPakFile::GetPakEntry(FPakFile *this,FPakEntryLocation *param_1,FPakEntry *param_2)

{
  EFindResult EVar1;
  
  EVar1 = GetPakEntry(param_1,param_2,&this->EncodedPakEntries,&this->Files,&this->Info);
  return EVar1;
}

// GetPakEntry @ 142a76810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a76b27) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EFindResult __cdecl
FPakFile::GetPakEntry
          (FPakEntryLocation *param_1,FPakEntry *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPakEntry,TSizedDefaultAllocator<32>_> *param_4,FPakInfo *param_5)

{
  TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  long64 lVar5;
  bool bVar6;
  EFindResult EVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  FScriptContainerElement *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  lVar5 = _UNK_15076adc8;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar8 = param_1->Index;
  uVar12 = uVar8 + 0x7fffffff;
  if (param_2 == (FPakEntry *)0x0) goto LAB_142a76b40;
  if (uVar12 < 0xfffffffe) {
    if ((uVar8 < 0x7fffffff) && (-1 < (int)uVar8)) {
      if ((param_3->ArrayNum <= (int)uVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("EncodedOffset < EncodedPakEntries.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0x573,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      DecodePakEntry((uchar *)((param_3->AllocatorInstance).Data + (int)uVar8),param_2,param_5);
    }
    else {
      if (uVar12 < 0x7fffffff) {
        uVar10 = ~uVar8;
        if (-1 < (int)uVar8) goto LAB_142a768c3;
      }
      else {
        uVar10 = 0xffffffff;
LAB_142a768c3:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ListIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x579,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
      }
      uVar8 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      pTVar1 = &param_2->CompressionBlocks;
      pFVar11 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x50;
      param_2->Offset = *(long64 *)pFVar11;
      param_2->Size = *(long64 *)(pFVar11 + 8);
      param_2->UncompressedSize = *(long64 *)(pFVar11 + 0x10);
      param_2->CompressionMethodIndex = *(uint *)(pFVar11 + 0x44);
      if (pTVar1 != (TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *)(pFVar11 + 0x30)) {
        iVar3 = *(int *)(pFVar11 + 0x38);
        piVar2 = &(param_2->CompressionBlocks).ArrayMax;
        _Src = *(void **)&pFVar11[0x30].field_0x0;
        (param_2->CompressionBlocks).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      param_2->CompressionBlockSize = *(uint *)(pFVar11 + 0x40);
      param_2->Flags = (uchar)pFVar11[0x48];
    }
  }
  else {
    pTVar1 = &param_2->CompressionBlocks;
    local_60 = 0;
    local_60._0_1_ = '\0';
    param_2->Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_60._1_1_ = false;
    local_68._0_4_ = 0;
    param_2->Size = lVar5;
    param_2->UncompressedSize = 0;
    local_70._4_4_ = 0;
    param_2->Hash[0] = '\0';
    param_2->Hash[1] = '\0';
    param_2->Hash[2] = '\0';
    param_2->Hash[3] = '\0';
    param_2->Hash[4] = '\0';
    param_2->Hash[5] = '\0';
    param_2->Hash[6] = '\0';
    param_2->Hash[7] = '\0';
    param_2->Hash[8] = '\0';
    param_2->Hash[9] = '\0';
    param_2->Hash[10] = '\0';
    param_2->Hash[0xb] = '\0';
    param_2->Hash[0xc] = '\0';
    param_2->Hash[0xd] = '\0';
    param_2->Hash[0xe] = '\0';
    param_2->Hash[0xf] = '\0';
    param_2->Hash[0x10] = '\0';
    param_2->Hash[0x11] = '\0';
    param_2->Hash[0x12] = '\0';
    param_2->Hash[0x13] = '\0';
    local_78 = (FScriptContainerElement *)0x0;
    local_70 = 0;
    local_68 = 0;
    local_68._4_4_ = local_70._4_4_;
    if (pTVar1 != (TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *)&local_78) {
      pFVar11 = (pTVar1->AllocatorInstance).Data;
      pFVar9 = (FScriptContainerElement *)0x0;
      local_68._4_4_ = 0;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
        pFVar9 = local_78;
      }
      (pTVar1->AllocatorInstance).Data = pFVar9;
      (param_2->CompressionBlocks).ArrayNum = (int)local_70;
      (param_2->CompressionBlocks).ArrayMax = local_70._4_4_;
    }
    param_2->CompressionBlockSize = (uint)local_68;
    param_2->CompressionMethodIndex = local_68._4_4_;
    param_2->Flags = (uchar)local_60;
    param_2->Verified = (bool)local_60._1_1_;
    param_2->Flags = param_2->Flags | 2;
  }
  param_2->Hash[0] = '\0';
  param_2->Hash[1] = '\0';
  param_2->Hash[2] = '\0';
  param_2->Hash[3] = '\0';
  param_2->Hash[4] = '\0';
  param_2->Hash[5] = '\0';
  param_2->Hash[6] = '\0';
  param_2->Hash[7] = '\0';
  param_2->Hash[8] = '\0';
  param_2->Hash[9] = '\0';
  param_2->Hash[10] = '\0';
  param_2->Hash[0xb] = '\0';
  param_2->Hash[0xc] = '\0';
  param_2->Hash[0xd] = '\0';
  param_2->Hash[0xe] = '\0';
  param_2->Hash[0xf] = '\0';
  param_2->Hash[0x10] = '\0';
  param_2->Hash[0x11] = '\0';
  param_2->Hash[0x12] = '\0';
  param_2->Hash[0x13] = '\0';
  param_2->Verified = true;
LAB_142a76b40:
  return (0xfffffffd < uVar12) + Found;
}

// GetPrunedFilenames @ 142a77b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a77deb) */
/* WARNING: Removing unreachable block (ram,0x000142a77c21) */
/* WARNING: Removing unreachable block (ram,0x000142a77c46) */
/* WARNING: Removing unreachable block (ram,0x000142a77be4) */
/* WARNING: Removing unreachable block (ram,0x000142a77c09) */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::GetPrunedFilenames(FPakFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 auStack_1c8 [32];
  FString *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  FString local_178;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  undefined1 local_128 [76];
  uint local_dc;
  uint local_d0;
  bool local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  bool local_90;
  ForAnyElementType local_88;
  ForAnyElementType local_48;
  EIteratorType local_28;
  bool local_26;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FBaseIterator::FBaseIterator((FBaseIterator *)local_128,this,true,false);
LAB_142a77bc0:
  do {
    if (local_28 == PathHash) {
      if ((local_90 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar6 = SBORROW4(local_b0.CurrentBitIndex,(local_b0.Array)->NumBits);
      iVar3 = local_b0.CurrentBitIndex - (local_b0.Array)->NumBits;
LAB_142a77cb5:
      bVar6 = bVar6 != iVar3 < 0;
    }
    else {
      if (local_28 == DirectoryIndex) {
        if ((local_128[0x30] == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar6 = SBORROW4(local_128._36_4_,*(int *)(local_128._24_8_ + 0x18));
        iVar3 = local_128._36_4_ - *(int *)(local_128._24_8_ + 0x18);
        goto LAB_142a77cb5;
      }
      if (local_28 != DirectoryTree) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x9c9,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_142a77f39;
      }
      bVar6 = (((FIteratorInternal *)local_128._56_8_)->Stack).ArrayNum != 0;
    }
    if (!bVar6) {
LAB_142a77f39:
      if (local_26 != false) {
        ReleaseSRWLockShared((PSRWLOCK)(local_128._0_8_ + 0x268));
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if ((TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
           *)local_128._56_8_ !=
          (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
           *)0x0) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                  ((TStringBuilderBase<wchar_t> *)&((FIteratorInternal *)local_128._56_8_)->Path);
        FVar1 = (((FIteratorInternal *)local_128._56_8_)->Stack).AllocatorInstance.SecondaryData;
        if (FVar1 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                      )0x0) {
          FMemory::Free((void *)FVar1);
        }
        ::operator_delete((void *)local_128._56_8_,0x418);
      }
      return;
    }
    pFVar4 = FBaseIterator::Filename((FBaseIterator *)local_128);
    local_168 = (pFVar4->Data).AllocatorInstance.Data;
    iVar3 = (pFVar4->Data).ArrayNum;
    iStack_160 = iVar3 + -1;
    if (iVar3 == 0) {
      iStack_160 = 0;
    }
    local_158 = (this->MountPoint).Data.AllocatorInstance.Data;
    local_148._12_4_ = uStack_15c;
    local_148.Size = iStack_160;
    iVar3 = (this->MountPoint).Data.ArrayNum;
    iStack_150 = iVar3 + -1;
    if (iVar3 == 0) {
      iStack_150 = 0;
    }
    local_138._12_4_ = uStack_14c;
    local_138.Size = iStack_150;
    local_148.DataPtr = (wchar_t *)local_168;
    local_138.DataPtr = (wchar_t *)local_158;
    PakPathCombineInternal<wchar_t>(&local_178,&local_138,&local_148);
    pFVar5 = (param_1->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_178) &&
       ((FScriptContainerElement *)&local_178 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) {
      local_190 = (longlong)param_1->ArrayNum;
      local_188 = 0x10;
      local_1a8 = &local_178;
      local_1a0 = pFVar5;
      local_198 = (longlong)param_1->ArrayMax;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar3 = param_1->ArrayNum;
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_178.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_178.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_178.Data.ArrayMax;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28 == PathHash) {
      if ((local_90 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
LAB_142a77f05:
      FBaseIterator::AdvanceToValid((FBaseIterator *)local_128);
      goto LAB_142a77bc0;
    }
    if ((local_28 != DirectoryIndex) && (local_28 != DirectoryTree)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x9b2,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_142a77f05;
    }
    if ((local_28 != DirectoryTree && local_28 != DirectoryIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0xa9c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_c0 == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_d0 = local_d0 & ~local_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_128 + 0x48));
    FBaseIterator::AdvanceToValid((FBaseIterator *)local_128);
  } while( true );
}

// GetPrunedFilenamesInChunk @ 142a77fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a7808f) */
/* WARNING: Removing unreachable block (ram,0x000142a780b4) */
/* WARNING: Removing unreachable block (ram,0x000142a78051) */
/* WARNING: Removing unreachable block (ram,0x000142a78076) */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::GetPrunedFilenamesInChunk
          (FPakFile *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar4;
  code *pcVar5;
  int iVar6;
  FPakEntry *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [76];
  uint local_fc;
  uint local_f0;
  bool local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  bool local_b0;
  ForAnyElementType local_a8;
  ForAnyElementType local_68;
  EIteratorType local_48;
  bool local_46;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FBaseIterator::FBaseIterator((FBaseIterator *)local_148,this,true,false);
LAB_142a78030:
  do {
    if (local_48 == PathHash) {
      if ((local_b0 == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar9 = SBORROW4(local_d0.CurrentBitIndex,(local_d0.Array)->NumBits);
      iVar6 = local_d0.CurrentBitIndex - (local_d0.Array)->NumBits;
LAB_142a78124:
      bVar9 = bVar9 != iVar6 < 0;
    }
    else {
      if (local_48 == DirectoryIndex) {
        if ((local_148[0x30] == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar9 = SBORROW4(local_148._36_4_,*(int *)(local_148._24_8_ + 0x18));
        iVar6 = local_148._36_4_ - *(int *)(local_148._24_8_ + 0x18);
        goto LAB_142a78124;
      }
      if (local_48 != DirectoryTree) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x9c9,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_142a7837e;
      }
      bVar9 = (((FIteratorInternal *)local_148._56_8_)->Stack).ArrayNum != 0;
    }
    if (!bVar9) {
LAB_142a7837e:
      if (local_46 != false) {
        ReleaseSRWLockShared((PSRWLOCK)(local_148._0_8_ + 0x268));
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if ((TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
           *)local_148._56_8_ !=
          (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
           *)0x0) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                  ((TStringBuilderBase<wchar_t> *)&((FIteratorInternal *)local_148._56_8_)->Path);
        FVar4 = (((FIteratorInternal *)local_148._56_8_)->Stack).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                      )0x0) {
          FMemory::Free((void *)FVar4);
        }
        ::operator_delete((void *)local_148._56_8_,0x418);
      }
      return;
    }
    pFVar7 = FBaseIterator::Info((FBaseIterator *)local_148);
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar6 = param_1->ArrayNum;
    lVar1 = pFVar7->Offset;
    lVar2 = pFVar7->Size;
    pFVar3 = pFVar8 + (longlong)iVar6 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar6) {
        local_158[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (pFVar8 == pFVar3) goto LAB_142a78235;
      if ((lVar1 < (longlong)*(int *)pFVar8 * 0x10000 + 0x10000) &&
         ((longlong)*(int *)pFVar8 * 0x10000 < lVar2 + lVar1)) break;
      pFVar8 = pFVar8 + 4;
    }
    pFVar8 = (FScriptContainerElement *)FBaseIterator::Filename((FBaseIterator *)local_148);
    pFVar3 = (param_2->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar8) && (pFVar8 < pFVar3 + (longlong)param_2->ArrayMax * 0x10)) {
      local_170 = (longlong)param_2->ArrayNum;
      local_168 = 0x10;
      local_188 = pFVar8;
      local_180 = pFVar3;
      local_178 = (longlong)param_2->ArrayMax;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)pFVar8);
LAB_142a78235:
    if (local_48 == PathHash) {
      if ((local_b0 == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
    }
    else {
      if ((local_48 == DirectoryIndex) || (local_48 == DirectoryTree)) {
        if ((local_48 != DirectoryTree && local_48 != DirectoryIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                               ,0xa9c,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_e0 == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_f0 = local_f0 & ~local_fc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 0x48));
        FBaseIterator::AdvanceToValid((FBaseIterator *)local_148);
        goto LAB_142a78030;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x9b2,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FBaseIterator::AdvanceToValid((FBaseIterator *)local_148);
  } while( true );
}

// GetRelativePathFromMountInline @ 142a78ba0

bool __cdecl FPakFile::GetRelativePathFromMountInline(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar1 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar1 = iVar1 + -1;
  }
  bVar3 = ::FString::StartsWith(param_1,pwVar4,iVar1,IgnoreCase);
  if (!bVar3) {
    return false;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  ::FString::RightChop(param_1,&local_18,iVar5);
  if (param_1 != &local_18) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum < 2) {
    ::FString::operator=(param_1,L"/");
  }
  return true;
}

// GetSharedReader @ 142a78e50

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSharedPakReader * __thiscall
FPakFile::GetSharedReader
          (FPakFile *this,FSharedPakReader *__return_storage_ptr__,IPlatformFile *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSharedPakReader *pFVar6;
  FArchive *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_48 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_PakSharedReaders.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PakSharedReaders.UniqueName;
  FMemScope::FMemScope(local_48,&local_res20,true);
  lpCriticalSection = &this->ReadersCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = (this->Readers).ArrayNum;
  if (iVar5 == 0) {
    if ((this->PakFilename).Data.ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(this->PakFilename).Data.AllocatorInstance.Data;
    }
    pFVar7 = CreatePakReader(this,param_1,pwVar9);
    if ((pFVar7 == (FArchive *)0x0) && (2 < (byte)LogPakFile._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
  }
  else {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSharedPakReader *)(*pcVar3)();
      return pFVar6;
    }
    lVar8 = (longlong)(this->Readers).ArrayNum;
    pFVar10 = (this->Readers).AllocatorInstance.Data;
    pFVar7 = *(FArchive **)(pFVar10 + lVar8 * 0x10 + -0x10);
    *(undefined8 *)(pFVar10 + lVar8 * 0x10 + -0x10) = 0;
    iVar5 = (this->Readers).ArrayNum;
    pFVar10 = (this->Readers).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    puVar2 = *(undefined8 **)(pFVar10 + -0x10);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    iVar5 = (this->Readers).ArrayNum - iVar5;
    if (iVar5 != 0) {
      memmove(pFVar10 + -0x10,pFVar10,(longlong)iVar5 << 4);
    }
    piVar1 = &(this->Readers).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Readers).AllocatorInstance,(this->Readers).ArrayNum,
               &(this->Readers).ArrayMax);
  }
  LOCK();
  this->CurrentlyUsedReaders = (atomic<int>)((int)this->CurrentlyUsedReaders + 1);
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  __return_storage_ptr__->Archive = pFVar7;
  __return_storage_ptr__->PakFile = this;
  FMemScope::~FMemScope(local_48);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// HashPath @ 142a7bfe0

ulong64 __cdecl FPakFile::HashPath(wchar_t *param_1,ulong64 param_2,int param_3)

{
  FScriptContainerElement FVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  ::FString::ToLowerInline(&local_18);
  iVar4 = local_18.Data.ArrayNum * 2 + -2;
  if (param_3 < 0xb) {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    uVar2 = param_2 + 0x100000001b3;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      FVar1 = *FVar3.Data;
      FVar3.Data = FVar3.Data + 1;
      uVar2 = (uVar2 ^ (byte)FVar1) * -0x340d631b7bdddcdb;
    }
  }
  else {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FFnv::MemFnv64(FVar3.Data,iVar4,param_2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return uVar2;
}

// Initialize @ 142a7d820

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakFile::Initialize(FPakFile *this,FArchive *param_1,bool param_2)

{
  int iVar1;
  FChunkCacheWorker *pFVar2;
  FPakSignatureFile *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  long64 lVar7;
  longlong lVar8;
  FEncryptionKeyManager *this_00;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FScopedBootTiming local_58;
  
  lVar7 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  uVar11 = (ulonglong)_tls_index;
  bVar6 = false;
  this->CachedTotalSize = lVar7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name278,L"FileSystem/PakFile");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name278,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name278,true);
  iVar10 = 0xd;
  do {
    iVar10 = iVar10 + -1;
    lVar8 = 0x3d;
    if (iVar10 < 7) {
      lVar8 = 0x2d;
    }
    lVar9 = lVar8 + 0xa0;
    if (iVar10 < 8) {
      lVar9 = lVar8;
    }
    if ((8 < iVar10) && (iVar10 < 10)) {
      lVar9 = lVar9 + 1;
    }
    lVar9 = this->CachedTotalSize - lVar9;
    if (-1 < lVar9) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar9);
      (**(code **)(*(longlong *)param_1 + 0x1f0))(param_1,lVar9,0);
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId295,"PakFile_SerilizeTrailer",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                   ,0x127);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId295);
      }
      FScopedBootTiming::FScopedBootTiming(&local_58,"PakFile_SerilizeTrailer");
      FPakInfo::Serialize(&this->Info,param_1,iVar10);
      if ((this->Info).Magic == 0x5a6f12e1) {
        bVar6 = true;
      }
      FScopedBootTiming::~FScopedBootTiming(&local_58);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        if ((this->Info).Magic != 0x5a6f12e1) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        iVar1 = (this->Info).Version;
        if ((iVar1 < 1) || (iVar10 < iVar1)) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        lVar8 = (this->Info).IndexOffset;
        if ((lVar8 < 0) || (this->CachedTotalSize <= lVar8)) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        lVar8 = (this->Info).IndexSize + (this->Info).IndexOffset;
        if ((lVar8 < 0) || (this->CachedTotalSize < lVar8)) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        if ((((this->Info).EncryptionKeyGuid.D == 0 && (this->Info).EncryptionKeyGuid.C == 0) &&
            (this->Info).EncryptionKeyGuid.B == 0) && (this->Info).EncryptionKeyGuid.A == 0) {
LAB_142a7daeb:
          if (param_2) {
            LoadIndex(this,param_1);
          }
          bVar6 = ShouldCheckPak();
          if (((bVar6) && (bVar6 = Check(this), !bVar6)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7109305557994963267>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                                 ,0x143,"Check()"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          this_00 = UE::FEncryptionKeyManager::Get();
          bVar6 = UE::FEncryptionKeyManager::ContainsKey(this_00,&(this->Info).EncryptionKeyGuid);
          if (bVar6) goto LAB_142a7daeb;
        }
        pFVar2 = (this->Decryptor).Ptr;
        if (pFVar2 == (FChunkCacheWorker *)0x0) {
          this->bIsValid = true;
        }
        else {
          pFVar3 = (pFVar2->Signatures).Object;
          pTVar4 = (pFVar2->Signatures).SharedReferenceCount.ReferenceController;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar3 == (FPakSignatureFile *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pFVar3->SignatureData).ArrayNum == 0x14) {
            iVar10 = memcmp((pFVar3->SignatureData).AllocatorInstance.Data,&(this->Info).IndexHash,
                            0x14);
            this->bIsValid = iVar10 == 0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
          }
          else {
            this->bIsValid = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
          }
        }
        goto LAB_142a7dbd0;
      }
    }
    if (iVar10 < 1) {
LAB_142a7dbd0:
      FMemScope::~FMemScope(&local_res10);
      FLLMScope::~FLLMScope(local_res8);
      return;
    }
  } while( true );
}

// IsPakDelayPruning @ 142a7f510

bool __cdecl FPakFile::IsPakDelayPruning(void)

{
  FIndexSettings *pFVar1;
  
  pFVar1 = GetIndexSettings();
  return pFVar1->bDelayPruning;
}

// IsPakKeepFullDirectory @ 142a7f5b0

bool __cdecl FPakFile::IsPakKeepFullDirectory(void)

{
  FIndexSettings *pFVar1;
  
  pFVar1 = GetIndexSettings();
  return pFVar1->bKeepFullDirectory;
}

// IsPakValidatePruning @ 142a7f5d0

bool __cdecl FPakFile::IsPakValidatePruning(void)

{
  FIndexSettings *pFVar1;
  
  pFVar1 = GetIndexSettings();
  return pFVar1->bValidatePruning;
}

// IsPakWriteFullDirectoryIndex @ 142a7f5f0

bool __cdecl FPakFile::IsPakWriteFullDirectoryIndex(void)

{
  FIndexSettings *pFVar1;
  
  pFVar1 = GetIndexSettings();
  return pFVar1->bWriteFullDirectoryIndex;
}

// IsPakWritePathHashIndex @ 142a7f610

bool __cdecl FPakFile::IsPakWritePathHashIndex(void)

{
  FIndexSettings *pFVar1;
  
  pFVar1 = GetIndexSettings();
  return pFVar1->bWritePathHashIndex;
}

// IsPathInDirectoryFormat @ 142a7f630

bool __cdecl FPakFile::IsPathInDirectoryFormat(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    if ((iVar5 + -1 < 0) || (iVar5 <= iVar5 + -1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar5 * 2 + -2) == 0x2f) {
      return true;
    }
  }
  return false;
}

// LoadIndex @ 142a80210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakFile::LoadIndex(FPakFile *this,FArchive *param_1)

{
  undefined1 *puVar1;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *this_00;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *this_01;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_248 [32];
  undefined4 uStack_1ec;
  undefined1 auStack_1e0 [16];
  uint uStack_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  *local_1b8;
  undefined2 local_1b0;
  FPakFile *local_1a8;
  TStringView<wchar_t> local_198;
  FScopedBootTiming local_188;
  undefined1 local_170 [32];
  longlong local_150;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  *pTStack_148;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  local_138;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  bVar16 = GPak_UseDirectoryTreeForPakSearch;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar5 = false;
  bVar6 = false;
  bVar14 = !GPak_UseDirectoryTreeForPakSearch;
  this->bUseDirectoryTree = GPak_UseDirectoryTreeForPakSearch;
  bVar14 = (bool)(bVar14 | GPak_ValidateDirectoryTreeSearchConsistency);
  local_1a8 = this;
  if ((this->Info).Version < 10) {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId376,"PakFile_LoadLegacy",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                 ,0x178);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId376);
    }
    FScopedBootTiming::FScopedBootTiming(&local_188,"PakFile_LoadLegacy");
    local_138.Elements._0_8_ = 0;
    local_138.Elements._8_8_ = 0;
    local_138.Elements._32_8_ = 0;
    local_138.Elements._40_8_ = 0x8000000000;
    local_138.Elements._48_4_ = 0xffffffff;
    local_138.Elements._52_4_ = 0;
    local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_138.HashSize = 0;
    bVar7 = LoadLegacyIndex(this,param_1,
                            (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                             *)&local_138);
    if ((!bVar7) &&
       (bVar7 = LoadLegacyIndex(this,param_1,
                                (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                                 *)&local_138), !bVar7)) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    if (bVar16) {
      TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_170,&local_138);
      local_1b8 = &local_138;
      local_1b0 = 0;
      stack0xfffffffffffffe28 = local_170._16_16_;
      auStack_1e0._0_8_ = local_170._8_8_;
      local_1c8 = local_150;
      pTStack_1c0 = pTStack_148;
      uVar11 = local_170._24_8_ >> 0x20;
      if ((int)local_170._28_4_ < *(int *)(local_170._16_8_ + 0x18)) {
        this_00 = &this->DirectoryTreeIndex;
        uVar12 = local_170._28_4_;
        do {
          if (bVar14 == false) {
            bVar6 = true;
            local_e8._0_8_ = (FScriptContainerElement *)0x0;
            local_e8._8_8_ = 0;
            local_c8 = (void *)0x0;
            local_c0 = 0;
            local_bc = 0x80;
            local_b8 = 0xffffffff;
            local_b4 = 0;
            local_a8 = (ForElementType<FSetElementId>)0x0;
            local_a0 = 0;
            TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
            ::
            Move<TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>_>
                      ((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                        *)local_e8,
                       (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                        *)(*(longlong *)local_170._0_8_ + 0x10 + (longlong)(int)uVar12 * 0x68));
            pTVar13 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                       *)local_e8;
          }
          else {
            bVar5 = true;
            local_98._0_8_ = (FScriptContainerElement *)0x0;
            local_98._8_8_ = 0;
            local_78 = (void *)0x0;
            local_70 = 0;
            local_6c = 0x80;
            local_68 = 0xffffffff;
            local_64 = 0;
            local_58 = (ForElementType<FSetElementId>)0x0;
            local_50 = 0;
            TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                         *)local_98,
                        (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                         *)(*(longlong *)local_170._0_8_ + 0x10 + (longlong)(int)(uint)uVar11 * 0x68
                           ));
            pTVar13 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                       *)local_98;
            uVar12 = (uint)uVar11;
          }
          puVar10 = (undefined8 *)((longlong)(int)uVar12 * 0x68 + *(longlong *)local_170._0_8_);
          local_198.DataPtr = (wchar_t *)*puVar10;
          iVar2 = *(int *)(puVar10 + 1);
          iVar8 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar8 = 0;
          }
          local_198._12_4_ = uStack_1ec;
          local_198.Size = iVar8;
          pTVar9 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                    *)TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                      ::FindOrAdd(this_00,&local_198,(bool *)0x0);
          if (pTVar9 != pTVar13) {
            TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
            ::
            Move<TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>_>
                      (pTVar9,pTVar13);
          }
          if (bVar6) {
            bVar6 = false;
            local_a0 = 0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_a8);
            }
            TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_e8,0,local_e8._8_4_);
            iVar8 = SUB84(local_e8._8_8_,4);
            local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
            if (iVar8 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
            }
            local_b8 = 0xffffffff;
            local_b4 = 0;
            local_c0 = 0;
            if (0x80 < local_bc) {
              local_bc = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_e8._0_8_);
            }
          }
          if (bVar5) {
            bVar5 = false;
            local_50 = 0;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_58);
            }
            TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_98,0,local_98._8_4_);
            bVar16 = local_98._12_4_ != 0;
            local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
            if (bVar16) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
            }
            local_68 = 0xffffffff;
            local_64 = 0;
            local_70 = 0;
            if (0x80 < local_6c) {
              local_6c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
            }
            if (local_78 != (void *)0x0) {
              FMemory::Free(local_78);
            }
            if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98._0_8_);
            }
          }
          uStack_1d0 = uStack_1d0 & ~auStack_1e0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1e0);
          this = local_1a8;
          uVar11 = (ulonglong)uStack_1cc;
          uVar12 = uStack_1cc;
        } while ((int)uStack_1cc < *(int *)(auStack_1e0._8_8_ + 0x18));
        if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
          uVar12 = *(int *)&(local_1b8->Elements).field_0x8 -
                   *(int *)&(local_1b8->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar8 = 1;
          }
          else {
            uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar8 = 1 << ((byte)lVar4 & 0x1f);
          }
          if (((0 < (int)uVar12) && (local_1b8->HashSize < iVar8)) || (iVar8 < local_1b8->HashSize))
          {
            local_1b8->HashSize = iVar8;
            TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_1b8);
          }
        }
      }
      TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
      ::FTreeNode::Shrink(&(this->DirectoryTreeIndex).Root);
    }
    if ((bVar14 != false) &&
       (this_01 = &this->DirectoryIndex,
       (TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
        *)this_01 != &local_138)) {
      TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,0,*(int *)&(this->DirectoryIndex).field_0x8);
      if (*(void **)this_01 != (void *)0x0) {
        FMemory::Free(*(void **)this_01);
      }
      puVar1 = &(this->DirectoryIndex).field_0x10;
      *(undefined8 *)this_01 = local_138.Elements._0_8_;
      *(undefined4 *)&(this->DirectoryIndex).field_0x8 = local_138.Elements._8_4_;
      *(undefined4 *)&(this->DirectoryIndex).field_0xc = local_138.Elements._12_4_;
      local_138.Elements._0_8_ = 0;
      local_138.Elements._8_8_ = 0;
      if (puVar1 != &local_138.Elements.field_0x10) {
        if (local_138.Elements._32_8_ == 0) {
          *(undefined8 *)puVar1 = local_138.Elements._16_8_;
          *(undefined8 *)&(this->DirectoryIndex).field_0x18 = local_138.Elements._24_8_;
        }
        pvVar3 = *(void **)&(this->DirectoryIndex).field_0x20;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(undefined8 *)&(this->DirectoryIndex).field_0x20 = local_138.Elements._32_8_;
        *(undefined4 *)&(this->DirectoryIndex).field_0x28 = local_138.Elements._40_4_;
        *(undefined4 *)&(this->DirectoryIndex).field_0x2c = local_138.Elements._44_4_;
        local_138.Elements._40_8_ = 0;
        local_138.Elements._32_8_ = 0;
      }
      *(undefined4 *)&(this->DirectoryIndex).field_0x30 = local_138.Elements._48_4_;
      *(undefined4 *)&(this->DirectoryIndex).field_0x34 = local_138.Elements._52_4_;
      local_138.Elements._52_4_ = 0;
      local_138.Elements._48_4_ = 0xffffffff;
      if (local_138.Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
        (this->DirectoryIndex).field_0x38 = local_138.Hash.InlineData[0];
        (this->DirectoryIndex).field_0x39 = local_138.Hash.InlineData[1];
        (this->DirectoryIndex).field_0x3a = local_138.Hash.InlineData[2];
        (this->DirectoryIndex).field_0x3b = local_138.Hash.InlineData[3];
      }
      pvVar3 = *(void **)&(this->DirectoryIndex).field_0x40;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(ForElementType<FSetElementId> *)&(this->DirectoryIndex).field_0x40 =
           local_138.Hash.SecondaryData;
      local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      *(int *)&(this->DirectoryIndex).field_0x48 = local_138.HashSize;
    }
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    FScopedBootTiming::~FScopedBootTiming(&local_188);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    bVar6 = LoadIndexInternal(this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex,
                              &this->PrunedDirectoryIndex,&this->PrunedDirectoryTreeIndex,bVar14,
                              bVar16);
    if ((!bVar6) &&
       (bVar6 = LoadIndexInternal(this,param_1,&this->DirectoryIndex,&this->DirectoryTreeIndex,
                                  &this->PrunedDirectoryIndex,&this->PrunedDirectoryTreeIndex,bVar14
                                  ,bVar16), !bVar6)) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
  }
  return;
}

// LoadIndexInternal @ 142a80900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFile::LoadIndexInternal
          (FPakFile *this,FArchive *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_3,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_4,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_5,bool param_6,bool param_7)

{
  uint *puVar1;
  int *piVar2;
  ulong64 *puVar3;
  TArray<FPakEntry,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FArchive *pFVar9;
  undefined1 uVar10;
  int iVar11;
  FIndexSettings *pFVar12;
  FStaticBasicLogRecord *pFVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  char cVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStackY_558 [32];
  uint local_518 [2];
  ulong64 local_510;
  ulong64 local_508;
  ulong64 local_500;
  uint local_4f8;
  uint local_4f4;
  ulong64 local_4f0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_4e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_4d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_4c8;
  FArchive *local_4b8;
  FMemoryReader local_4a8;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *local_398;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_390;
  ulonglong local_388;
  undefined8 uStack_380;
  ulonglong local_378;
  undefined8 uStack_370;
  ulonglong local_368;
  undefined8 uStack_360;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *local_358;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_350;
  FGuid local_348;
  FGuid local_338;
  FGuid local_328;
  FScopedBootTiming local_318;
  FScopedBootTiming local_300;
  FScopedBootTiming local_2e8;
  FArchiveState local_2c8;
  undefined8 local_238;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_230;
  undefined8 local_228;
  FArchiveState local_218;
  undefined8 local_188;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_180;
  undefined8 local_178;
  FScopedBootTiming local_168;
  FScopedBootTiming local_150;
  FScopedBootTiming local_138;
  FScopedBootTiming local_120;
  FScopedBootTiming local_108;
  FScopedBootTiming local_f0;
  FScopedBootTiming local_d8;
  FScopedBootTiming local_c0;
  FScopedBootTiming local_a8;
  longlong local_90;
  longlong lStack_88;
  int local_80;
  uchar local_7c [20];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_350 = param_4;
  uVar16 = 0;
  local_358 = param_5;
  this->bHasPathHashIndex = false;
  this->bHasFullDirectoryIndex = false;
  this->bWillPruneDirectoryIndex = false;
  this->bNeedsLegacyPruning = false;
  uVar5 = (this->Info).IndexOffset;
  uVar6 = (this->Info).IndexSize;
  local_378 = uVar6 + uVar5;
  bVar19 = (longlong)((uVar5 ^ local_378) & (uVar6 ^ local_378)) < 0;
  if (bVar19) {
    uStack_370 = 0;
    local_378 = uVar16;
  }
  bVar19 = !bVar19;
  uStack_370 = CONCAT71(uStack_370._1_7_,bVar19);
  local_4b8 = param_1;
  local_398 = param_3;
  local_390 = param_2;
  if (((((longlong)uVar5 < 0) || ((longlong)uVar6 < 0)) || (!bVar19)) ||
     ((this->CachedTotalSize < (longlong)local_378 || (uVar6 != (longlong)(int)uVar6)))) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    return false;
  }
  local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.ArrayNum = 0;
  local_4c8.ArrayMax = 0;
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar5);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
            (&local_4c8,(int)(this->Info).IndexSize,Default);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId429,"PakFile_LoadPrimaryIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
               ,0x1ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId429);
  }
  FScopedBootTiming::FScopedBootTiming(&local_168,"PakFile_LoadPrimaryIndex");
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,local_4c8.AllocatorInstance.Data,(this->Info).IndexSize);
  FScopedBootTiming::~FScopedBootTiming(&local_168);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_80 = 0;
  local_90 = 0;
  lStack_88 = 0;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId435,"PakFile_HashPrimaryIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
               ,0x1b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
  }
  FScopedBootTiming::FScopedBootTiming(&local_2e8,"PakFile_HashPrimaryIndex");
  if ((this->Info).bEncryptedIndex != '\0') {
    local_348.A = (this->Info).EncryptionKeyGuid.A;
    local_348.B = (this->Info).EncryptionKeyGuid.B;
    local_348.C = (this->Info).EncryptionKeyGuid.C;
    local_348.D = (this->Info).EncryptionKeyGuid.D;
    DecryptData((uchar *)local_4c8.AllocatorInstance.Data,(longlong)local_4c8.ArrayNum,&local_348);
  }
  FSHA1::HashBuffer(local_4c8.AllocatorInstance.Data,(longlong)local_4c8.ArrayNum,(uchar *)&local_90
                   );
  if (((*(longlong *)(this->Info).IndexHash.Hash != local_90) ||
      (*(longlong *)((this->Info).IndexHash.Hash + 8) != lStack_88)) ||
     (*(int *)((this->Info).IndexHash.Hash + 0x10) != local_80)) {
    if (4 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    if (((4 < (byte)LogPakFile._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
        4 < (byte)LogPakFile._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
       4 < (byte)LogPakFile._0_1_)) {
      (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      if (((4 < (byte)LogPakFile._0_1_) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
          4 < (byte)LogPakFile._0_1_)) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
         4 < (byte)LogPakFile._0_1_)) {
        local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8.Data.ArrayNum = 0;
        local_3a8.Data.ArrayMax = 0;
        BytesToHex((this->Info).IndexHash.Hash,0x14,&local_3a8);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u__Stored_Index_H_150987e50,
                   (FLogCategoryBase *)&LogPakFile);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogPakFile._0_1_) {
          local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f8.Data.ArrayNum = 0;
          local_3f8.Data.ArrayMax = 0;
          BytesToHex((uchar *)&local_90,0x14,&local_3f8);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    FScopedBootTiming::~FScopedBootTiming(&local_2e8);
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar19 = false;
    goto LAB_142a82413;
  }
  FScopedBootTiming::~FScopedBootTiming(&local_2e8);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_4a8);
  local_4a8._padding_ = 0;
  local_4a8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_4a8.Bytes = &local_4c8;
  local_4a8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_4a8,true);
  (**(code **)(local_4a8._padding_ + 0x108))(&local_4a8,0);
  piVar2 = &this->NumEntries;
  *piVar2 = 0;
  ::operator<<((FArchive *)&local_4a8,&this->MountPoint);
  iVar14 = (this->MountPoint).Data.ArrayNum;
  iVar11 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar11 = 0;
  }
  if (iVar11 < 0x10000) {
    MakeDirectoryFromPath(&this->MountPoint);
    if (*(int **)(local_4a8._padding_ + 8) < *(int **)local_4a8._padding_ + 1) {
      if ((local_4a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_4a8,piVar2,4);
        }
        else {
          (**(code **)(local_4a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = **(int **)local_4a8._padding_;
      *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 4;
    }
    if (*piVar2 < 0) {
      if (1 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      goto LAB_142a82234;
    }
    puVar3 = &this->PathHashSeed;
    if (*(ulong64 **)(local_4a8._padding_ + 8) < *(ulong64 **)local_4a8._padding_ + 1) {
      if ((local_4a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_4a8,puVar3,8);
        }
        else {
          (**(code **)(local_4a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,puVar3);
      }
    }
    else {
      *puVar3 = **(ulong64 **)local_4a8._padding_;
      *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 8;
    }
    local_4f0 = 0xffffffffffffffff;
    local_7c[0x10] = '\0';
    local_7c[0x11] = '\0';
    local_7c[0x12] = '\0';
    local_7c[0x13] = '\0';
    bVar19 = false;
    local_508 = 0;
    local_7c[0] = '\0';
    local_7c[1] = '\0';
    local_7c[2] = '\0';
    local_7c[3] = '\0';
    local_7c[4] = '\0';
    local_7c[5] = '\0';
    local_7c[6] = '\0';
    local_7c[7] = '\0';
    local_7c[8] = '\0';
    local_7c[9] = '\0';
    local_7c[10] = '\0';
    local_7c[0xb] = '\0';
    local_7c[0xc] = '\0';
    local_7c[0xd] = '\0';
    local_7c[0xe] = '\0';
    local_7c[0xf] = '\0';
    puVar1 = *(uint **)local_4a8._padding_ + 1;
    if (*(uint **)(local_4a8._padding_ + 8) < puVar1) {
      local_4f8 = 0;
      if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_4a8,&local_4f8,4);
      }
      else {
        (**(code **)(local_4a8._padding_ + 0x188))();
      }
      if (1 < local_4f8) {
        FArchiveState::SetError((FArchiveState *)&local_4a8);
      }
      uVar4 = local_4f8;
      if ((local_4a8._padding_ & 1U) != 0) goto LAB_142a80dd0;
    }
    else {
      uVar4 = **(uint **)local_4a8._padding_;
      *(uint **)local_4a8._padding_ = puVar1;
LAB_142a80dd0:
      bVar19 = false;
      if (uVar4 != 0) {
        if (*(ulonglong **)(local_4a8._padding_ + 8) < *(ulonglong **)local_4a8._padding_ + 1) {
          if ((local_4a8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_4a8,&local_4f0,8);
            }
            else {
              (**(code **)(local_4a8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,&local_4f0);
          }
        }
        else {
          local_4f0 = **(ulonglong **)local_4a8._padding_;
          *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 8;
        }
        if (*(ulonglong **)(local_4a8._padding_ + 8) < *(ulonglong **)local_4a8._padding_ + 1) {
          if ((local_4a8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_4a8,&local_508,8);
            }
            else {
              (**(code **)(local_4a8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,&local_508);
          }
        }
        else {
          local_508 = **(ulonglong **)local_4a8._padding_;
          *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 8;
        }
        if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_4a8,local_7c,0x14);
        }
        else {
          (**(code **)(local_4a8._padding_ + 0x188))();
        }
        bVar19 = local_4f0 != 0xffffffffffffffff;
      }
    }
    local_500 = 0xffffffffffffffff;
    local_58 = 0;
    local_510 = 0;
    local_68 = 0;
    uStack_60 = 0;
    puVar1 = *(uint **)local_4a8._padding_ + 1;
    if (*(uint **)(local_4a8._padding_ + 8) < puVar1) {
      local_4f4 = 0;
      if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_4a8,&local_4f4,4);
      }
      else {
        (**(code **)(local_4a8._padding_ + 0x188))();
      }
      if (1 < local_4f4) {
        FArchiveState::SetError((FArchiveState *)&local_4a8);
      }
      uVar4 = local_4f4;
      if ((local_4a8._padding_ & 1U) != 0) goto LAB_142a80f45;
    }
    else {
      uVar4 = **(uint **)local_4a8._padding_;
      *(uint **)local_4a8._padding_ = puVar1;
LAB_142a80f45:
      uVar16 = (ulonglong)(uVar4 != 0);
      if (uVar4 != 0) {
        if (*(ulonglong **)(local_4a8._padding_ + 8) < *(ulonglong **)local_4a8._padding_ + 1) {
          if ((local_4a8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_4a8,&local_500,8);
            }
            else {
              (**(code **)(local_4a8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,&local_500);
          }
        }
        else {
          local_500 = **(ulonglong **)local_4a8._padding_;
          *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 8;
        }
        if (*(ulonglong **)(local_4a8._padding_ + 8) < *(ulonglong **)local_4a8._padding_ + 1) {
          if ((local_4a8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_4a8,&local_510,8);
            }
            else {
              (**(code **)(local_4a8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,&local_510);
          }
        }
        else {
          local_510 = **(ulonglong **)local_4a8._padding_;
          *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 8;
        }
        if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_4a8,&local_68,0x14);
        }
        else {
          (**(code **)(local_4a8._padding_ + 0x188))();
        }
        uVar16 = (ulonglong)(local_500 != 0xffffffffffffffff);
      }
    }
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId499,"PakFile_SerializeEncodedEntries",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                 ,499);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId499);
    }
    FScopedBootTiming::FScopedBootTiming(&local_f0,"PakFile_SerializeEncodedEntries");
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_4a8,&this->EncodedPakEntries);
    FScopedBootTiming::~FScopedBootTiming(&local_f0);
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_518[0] = 0;
    if (*(uint **)(local_4a8._padding_ + 8) < *(uint **)local_4a8._padding_ + 1) {
      if ((local_4a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_4a8._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_4a8,local_518,4);
        }
        else {
          (**(code **)(local_4a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_4a8,local_518);
      }
    }
    else {
      local_518[0] = **(uint **)local_4a8._padding_;
      *(ulonglong *)local_4a8._padding_ = *(ulonglong *)local_4a8._padding_ + 4;
    }
    uVar4 = local_518[0];
    if ((int)local_518[0] < 0) {
      if ((4 < (byte)LogPakFile._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
         4 < (byte)LogPakFile._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      goto LAB_142a82234;
    }
    this_00 = &this->Files;
    iVar14 = (this->Files).ArrayNum;
    piVar2 = &(this->Files).ArrayNum;
    if (iVar14 < (int)local_518[0]) {
      iVar14 = local_518[0] - iVar14;
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x50,8,iVar14,&this_00->AllocatorInstance,piVar2,&(this->Files).ArrayMax);
      DefaultConstructItems<FPakEntry,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar11 * 0x50,iVar14);
    }
    else if ((int)local_518[0] < iVar14) {
      uVar15 = iVar14 - local_518[0];
      if (((int)(local_518[0] | uVar15) < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      if (uVar15 != 0) {
        TArray<FPakEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar4,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,*piVar2,&(this->Files).ArrayMax);
      }
    }
    if (0 < (int)local_518[0]) {
      bVar18 = -1 < CpuChannel->Enabled;
      if (bVar18) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId515,"PakFile_SerializeUnencodedEntries",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                   ,0x203);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId515);
      }
      FScopedBootTiming::FScopedBootTiming(&local_150,"PakFile_SerializeUnencodedEntries");
      pFVar7 = (this_00->AllocatorInstance).Data;
      iVar14 = 0;
      if (0 < (int)local_518[0]) {
        do {
          FPakEntry::Serialize
                    ((FPakEntry *)(pFVar7 + (longlong)iVar14 * 0x50),(FArchive *)&local_4a8,
                     (this->Info).Version);
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)local_518[0]);
      }
      FScopedBootTiming::~FScopedBootTiming(&local_150);
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (bVar19) {
      if ((char)uVar16 == '\0') {
        cVar17 = '\0';
        bVar19 = true;
        bVar18 = false;
      }
      else {
        pFVar12 = GetIndexSettings();
        cVar17 = pFVar12->bKeepFullDirectory;
        bVar19 = (bool)cVar17 == false;
        pFVar12 = GetIndexSettings();
        if (((pFVar12->bKeepFullDirectory == false) &&
            (pFVar12 = GetIndexSettings(), pFVar12->bValidatePruning == false)) &&
           (pFVar12 = GetIndexSettings(), pFVar12->bDelayPruning == false)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
      }
    }
    else {
      if ((char)uVar16 == '\0') {
        if (((4 < (byte)LogPakFile._0_1_) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
            4 < (byte)LogPakFile._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
           4 < (byte)LogPakFile._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        goto LAB_142a82234;
      }
      cVar17 = '\x01';
      bVar19 = false;
      bVar18 = true;
    }
    local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d8.ArrayNum = 0;
    local_4d8.ArrayMax = 0;
    local_2c8._padding_ = 0;
    local_2c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_2c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_2c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_2c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_2c8._40_8_ = 0;
    local_2c8.ArSerializingDefaults = 0;
    local_2c8.ArPortFlags = 0;
    local_2c8.ArMaxSerializeSize = 0;
    local_2c8.ArUEVer.FileVersionUE4 = 0;
    local_2c8.ArUEVer.FileVersionUE5 = 0;
    local_2c8.ArLicenseeUEVer = 0;
    local_2c8.ArEngineVer.Major = 0;
    local_2c8.ArEngineVer.Minor = 0;
    local_2c8.ArEngineVer.Patch = 0;
    local_2c8.ArEngineVer._6_2_ = 0;
    local_2c8.ArEngineVer.Changelist = 0;
    local_2c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_2c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_2c8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_2c8.SerializedProperty = (FProperty *)0x0;
    local_2c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_2c8.bCustomVersionsAreReset = false;
    local_2c8._129_7_ = 0;
    local_2c8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_2c8);
    local_238 = 0;
    local_2c8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_230 = &local_4d8;
    local_228 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_2c8,true);
    (**(code **)(local_2c8._padding_ + 0x108))(&local_2c8,0);
    pFVar9 = local_4b8;
    if (bVar19) {
      local_368 = local_508 + local_4f0;
      bVar20 = (longlong)((local_4f0 ^ local_368) & (local_508 ^ local_368)) < 0;
      if (bVar20) {
        uStack_360 = 0;
        local_368 = 0;
      }
      bVar20 = !bVar20;
      uStack_360 = CONCAT71(uStack_360._1_7_,bVar20);
      if ((((longlong)local_4f0 < 0) || ((longlong)local_508 < 0)) ||
         ((!bVar20 ||
          ((this->CachedTotalSize < (longlong)local_368 || (local_508 != (longlong)(int)local_508)))
          ))) {
        if ((4 < (byte)LogPakFile._0_1_) &&
           ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
            4 < (byte)LogPakFile._0_1_ &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
            4 < (byte)LogPakFile._0_1_)))) {
          (**(code **)(*(longlong *)local_4b8 + 0x30))(local_4b8,local_4f0,local_508);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          if ((4 < (byte)LogPakFile._0_1_) &&
             (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
             4 < (byte)LogPakFile._0_1_)) {
            pFVar13 = &::LOG_Static;
LAB_142a821b0:
            UE::Logging::Private::BasicLog<5>(pFVar13,(FLogCategoryBase *)&LogPakFile);
          }
        }
      }
      else {
        (**(code **)(*(longlong *)local_4b8 + 0x1b8))(local_4b8);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_4d8,(int)local_508,Default)
        ;
        bVar20 = -1 < CpuChannel->Enabled;
        if (bVar20) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&::__CpuProfilerEventSpecId582,"PakFile_LoadPathHashIndex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                     ,0x246);
          FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId582);
        }
        FScopedBootTiming::FScopedBootTiming(&local_138,"PakFile_LoadPathHashIndex");
        (**(code **)(*(longlong *)pFVar9 + 0x188))
                  (pFVar9,local_4d8.AllocatorInstance.Data,local_508);
        FScopedBootTiming::~FScopedBootTiming(&local_138);
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        bVar20 = -1 < CpuChannel->Enabled;
        if (bVar20) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId587,"PakFile_HashPathHashIndex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                     ,0x24b);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId587);
        }
        FScopedBootTiming::FScopedBootTiming(&local_318,"PakFile_HashPathHashIndex");
        if ((this->Info).bEncryptedIndex != '\0') {
          local_338.A = (this->Info).EncryptionKeyGuid.A;
          local_338.B = (this->Info).EncryptionKeyGuid.B;
          local_338.C = (this->Info).EncryptionKeyGuid.C;
          local_338.D = (this->Info).EncryptionKeyGuid.D;
          DecryptData((uchar *)local_4d8.AllocatorInstance.Data,(longlong)local_4d8.ArrayNum,
                      &local_338);
        }
        FSHA1::HashBuffer(local_4d8.AllocatorInstance.Data,(longlong)local_4d8.ArrayNum,
                          (uchar *)&local_90);
        iVar14 = memcmp(local_7c,&local_90,0x14);
        if (iVar14 == 0) {
          FScopedBootTiming::~FScopedBootTiming(&local_318);
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          bVar20 = -1 < CpuChannel->Enabled;
          if (bVar20) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId603,"PakFile_SerializePathHashIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0x25b);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId603);
          }
          FScopedBootTiming::FScopedBootTiming(&local_120,"PakFile_SerializePathHashIndex");
          TSetPrivateFriend::
          Serialize<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator>
                    ((FArchive *)&local_2c8,
                     (TSet<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator>
                      *)&this->PathHashIndex);
          FScopedBootTiming::~FScopedBootTiming(&local_120);
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          this->bHasPathHashIndex = true;
          goto LAB_142a81924;
        }
        if (4 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        if (((4 < (byte)LogPakFile._0_1_) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
            4 < (byte)LogPakFile._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
           4 < (byte)LogPakFile._0_1_)) {
          (**(code **)(*(longlong *)pFVar9 + 0x30))(pFVar9);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          if (((4 < (byte)LogPakFile._0_1_) &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
              4 < (byte)LogPakFile._0_1_)) &&
             (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
             4 < (byte)LogPakFile._0_1_)) {
            local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3e8.Data.ArrayNum = 0;
            local_3e8.Data.ArrayMax = 0;
            BytesToHex(local_7c,0x14,&local_3e8);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogPakFile._0_1_) {
              local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3d8.Data.ArrayNum = 0;
              local_3d8.Data.ArrayMax = 0;
              BytesToHex((uchar *)&local_90,0x14,&local_3d8);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
              if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        FScopedBootTiming::~FScopedBootTiming(&local_318);
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
LAB_142a821bc:
      bVar19 = false;
    }
    else {
LAB_142a81924:
      if (bVar18) {
        local_388 = local_510 + local_500;
        bVar18 = (longlong)((local_500 ^ local_388) & (local_510 ^ local_388)) < 0;
        if (bVar18) {
          uStack_380 = 0;
          local_388 = 0;
        }
        bVar18 = !bVar18;
        uStack_380 = CONCAT71(uStack_380._1_7_,bVar18);
        if (((((longlong)local_500 < 0) || ((longlong)local_510 < 0)) || (!bVar18)) ||
           ((this->CachedTotalSize < (longlong)local_388 || (local_510 != (longlong)(int)local_510))
           )) {
          if ((4 < (byte)LogPakFile._0_1_) &&
             ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
              4 < (byte)LogPakFile._0_1_ &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
              4 < (byte)LogPakFile._0_1_)))) {
            (**(code **)(*(longlong *)pFVar9 + 0x30))(pFVar9,local_500,local_510);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            if ((4 < (byte)LogPakFile._0_1_) &&
               (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
               4 < (byte)LogPakFile._0_1_)) {
              pFVar13 = &::LOG_Static;
              goto LAB_142a821b0;
            }
          }
        }
        else {
          local_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4e8.ArrayNum = 0;
          local_4e8.ArrayMax = 0;
          (**(code **)(*(longlong *)pFVar9 + 0x1b8))(pFVar9);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                    (&local_4e8,(int)local_510,Default);
          bVar18 = -1 < CpuChannel->Enabled;
          if (bVar18) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId643,"PakFile_LoadDirectoryIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0x283);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId643);
          }
          FScopedBootTiming::FScopedBootTiming(&local_a8,"PakFile_LoadDirectoryIndex");
          (**(code **)(*(longlong *)pFVar9 + 0x188))
                    (pFVar9,local_4e8.AllocatorInstance.Data,local_510);
          FScopedBootTiming::~FScopedBootTiming(&local_a8);
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          bVar18 = -1 < CpuChannel->Enabled;
          if (bVar18) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId648,"PakFile_HashDirectoryIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0x288);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId648);
          }
          FScopedBootTiming::FScopedBootTiming(&local_300,"PakFile_HashDirectoryIndex");
          if ((this->Info).bEncryptedIndex != '\0') {
            local_328.A = (this->Info).EncryptionKeyGuid.A;
            local_328.B = (this->Info).EncryptionKeyGuid.B;
            local_328.C = (this->Info).EncryptionKeyGuid.C;
            local_328.D = (this->Info).EncryptionKeyGuid.D;
            DecryptData((uchar *)local_4e8.AllocatorInstance.Data,(longlong)local_4e8.ArrayNum,
                        &local_328);
          }
          FSHA1::HashBuffer(local_4e8.AllocatorInstance.Data,(longlong)local_4e8.ArrayNum,
                            (uchar *)&local_90);
          iVar14 = memcmp(&local_68,&local_90,0x14);
          if (iVar14 == 0) {
            FScopedBootTiming::~FScopedBootTiming(&local_300);
            if (bVar18) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            local_218._padding_ = 0;
            local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
            local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
            local_218._40_8_ = 0;
            local_218.ArSerializingDefaults = 0;
            local_218.ArPortFlags = 0;
            local_218.ArMaxSerializeSize = 0;
            local_218.ArUEVer.FileVersionUE4 = 0;
            local_218.ArUEVer.FileVersionUE5 = 0;
            local_218.ArLicenseeUEVer = 0;
            local_218.ArEngineVer.Major = 0;
            local_218.ArEngineVer.Minor = 0;
            local_218.ArEngineVer.Patch = 0;
            local_218.ArEngineVer._6_2_ = 0;
            local_218.ArEngineVer.Changelist = 0;
            local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
            local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
            local_218.SerializedProperty = (FProperty *)0x0;
            local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            local_218.bCustomVersionsAreReset = false;
            local_218._129_7_ = 0;
            local_218.NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(&local_218);
            local_188 = 0;
            local_218._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_180 = &local_4e8;
            local_178 = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading(&local_218,true);
            (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
            bVar18 = -1 < CpuChannel->Enabled;
            if (bVar18) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId665,"PakFile_SerializeDirectoryIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x299);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId665);
            }
            FScopedBootTiming::FScopedBootTiming(&local_d8,"PakFile_SerializeDirectoryIndex");
            LoadIndexInternal_DirectoryIndex
                      (this,(FArchive *)&local_218,local_390,local_398,param_6,param_7);
            FScopedBootTiming::~FScopedBootTiming(&local_d8);
            if (bVar18) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            this->bHasFullDirectoryIndex = true;
            if (cVar17 == '\0') {
              if ((!bVar19) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bWillUsePathHashIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                                      ,0x2a7,L""), bVar19)) {
                pcVar8 = (code *)swi(3);
                uVar10 = (*pcVar8)();
                return (bool)uVar10;
              }
              bVar19 = -1 < CpuChannel->Enabled;
              if (bVar19) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId681,"PakFile_SerializePrunedDirectoryIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x2a9);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId681);
              }
              FScopedBootTiming::FScopedBootTiming
                        (&local_c0,"PakFile_SerializePrunedDirectoryIndex");
              LoadIndexInternal_DirectoryIndex
                        (this,(FArchive *)&local_2c8,local_350,local_358,param_6,param_7);
              FScopedBootTiming::~FScopedBootTiming(&local_c0);
              if (bVar19) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              this->bWillPruneDirectoryIndex = true;
              bSomePakNeedsPruning = true;
            }
            else {
              this->bWillPruneDirectoryIndex = false;
            }
            FArchive::~FArchive((FArchive *)&local_218);
            if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4e8.AllocatorInstance.Data);
            }
            goto LAB_142a82030;
          }
          if (4 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          if (((4 < (byte)LogPakFile._0_1_) &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
              4 < (byte)LogPakFile._0_1_)) &&
             (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
             4 < (byte)LogPakFile._0_1_)) {
            (**(code **)(*(longlong *)pFVar9 + 0x30))(pFVar9);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            if (((4 < (byte)LogPakFile._0_1_) &&
                (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
                4 < (byte)LogPakFile._0_1_)) &&
               (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
               4 < (byte)LogPakFile._0_1_)) {
              local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3c8.Data.ArrayNum = 0;
              local_3c8.Data.ArrayMax = 0;
              BytesToHex((uchar *)&local_68,0x14,&local_3c8);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
              if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
              }
              if (4 < (byte)LogPakFile._0_1_) {
                local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3b8.Data.ArrayNum = 0;
                local_3b8.Data.ArrayMax = 0;
                BytesToHex((uchar *)&local_90,0x14,&local_3b8);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
                if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                }
              }
            }
          }
          FScopedBootTiming::~FScopedBootTiming(&local_300);
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e8.AllocatorInstance.Data);
          }
        }
        goto LAB_142a821bc;
      }
      if ((!bVar19) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWillUsePathHashIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                              ,0x263,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      bVar19 = -1 < CpuChannel->Enabled;
      if (bVar19) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId614,"PakFile_SerializePrunedDirectoryIndex",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                   ,0x266);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId614);
      }
      FScopedBootTiming::FScopedBootTiming(&local_108,"PakFile_SerializePrunedDirectoryIndex");
      LoadIndexInternal_DirectoryIndex
                (this,(FArchive *)&local_2c8,local_390,local_398,param_6,param_7);
      FScopedBootTiming::~FScopedBootTiming(&local_108);
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      this->bHasFullDirectoryIndex = false;
      this->bWillPruneDirectoryIndex = false;
LAB_142a82030:
      if (((5 < (byte)LogPakFile._0_1_) &&
          (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
          5 < (byte)LogPakFile._0_1_)) &&
         (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
         5 < (byte)LogPakFile._0_1_)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      if (((this->bHasFullDirectoryIndex == false) && (this->bHasPathHashIndex == false)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("bHasFullDirectoryIndex || bHasPathHashIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                              ,0x2b7,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      bVar19 = true;
    }
    FArchive::~FArchive((FArchive *)&local_2c8);
    if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.AllocatorInstance.Data);
    }
  }
  else {
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
LAB_142a82234:
    bVar19 = false;
  }
  FArchive::~FArchive((FArchive *)&local_4a8);
LAB_142a82413:
  if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.AllocatorInstance.Data);
  }
  return bVar19;
}

// LoadIndexInternal_DirectoryIndex @ 142a82480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::LoadIndexInternal_DirectoryIndex
          (FPakFile *this,FArchive *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_3,bool param_4,bool param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FUtf8String *pFVar8;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar9;
  longlong lVar10;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  undefined1 auStackY_228 [32];
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  FString local_1e8;
  FUtf8String local_1d8;
  FString local_1c8;
  FUtf8String local_1b8;
  undefined1 local_1a8 [16];
  TStringView<wchar_t> local_198;
  FPakFile *local_188;
  FUtf8String *local_180;
  uint *local_178;
  FUtf8String *local_170;
  uint *local_168;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FUtf8String local_148;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar5 = false;
  bVar4 = false;
  local_1ec = 0;
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_1f0 = 0;
  local_1f4 = 0x80000000;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_188 = this;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1f0);
    }
  }
  else {
    local_1f0 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  puVar1 = &param_1->field_0x2a;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
           *)param_2);
  if (param_4) {
    TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
               *)param_2,local_1f0);
  }
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  ::FTreeNode::Reset(&param_3->Root);
  param_3->NumPaths = 0;
  param_3->PathSeparator = L'/';
  param_3->bPathSeparatorInitialized = false;
  for (; 0 < (int)local_1f0; local_1f0 = local_1f0 - 1) {
    ::operator<<(param_1,&local_1e8);
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_1f8 = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1f8);
      }
    }
    else {
      local_1f8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
    ::Reset(&local_98);
    TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
    ::Reserve(&local_98,local_1f8);
    if ((this->Info).Version < 0xc) {
      if (0 < (int)local_1f8) {
        local_170 = &local_1d8;
        local_168 = &local_1f4;
        do {
          ::operator<<(param_1,&local_1c8);
          plVar2 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((*puVar1 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1f4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_1f4);
            }
          }
          else {
            local_1f4 = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.Data.ArrayNum = 0;
          local_1d8.Data.ArrayMax = 0;
          iVar7 = local_1c8.Data.ArrayNum + -1;
          if (local_1c8.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          pFVar8 = FUtf8String::ConstructFromPtrSize
                             (&local_148,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar7);
          if (&local_1d8 != pFVar8) {
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            local_1d8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
            local_1d8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&>_>
                    (&local_98,
                     (TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&> *)(local_1a8 + 4),
                     (bool *)&local_170);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          local_1f8 = local_1f8 - 1;
        } while (0 < (int)local_1f8);
      }
    }
    else {
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (0 < (int)local_1f8) {
        local_180 = &local_1b8;
        local_178 = &local_1f4;
        do {
          ::operator<<(param_1,&local_1b8);
          plVar2 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((*puVar1 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1f4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_1f4);
            }
          }
          else {
            local_1f4 = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&>_>
                    (&local_98,
                     (TPairInitializer<FUtf8String_&&,FPakEntryLocation_const_&> *)local_1a8,
                     (bool *)&local_180);
          local_1f8 = local_1f8 - 1;
        } while (0 < (int)local_1f8);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    if (param_5) {
      if (param_4) {
        bVar5 = true;
        local_e8._0_8_ = (FScriptContainerElement *)0x0;
        local_e8._8_8_ = 0;
        local_c8 = (void *)0x0;
        local_c0 = 0;
        local_bc = 0x80;
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = (ForElementType<FSetElementId>)0x0;
        local_a0 = 0;
        TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                     *)local_e8,&local_98);
        pTVar11 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)local_e8;
      }
      else {
        bVar4 = true;
        local_138._0_8_ = (FScriptContainerElement *)0x0;
        local_138._8_8_ = 0;
        local_118 = (void *)0x0;
        local_110 = 0;
        local_10c = 0x80;
        local_108 = 0xffffffff;
        local_104 = 0;
        local_f8 = (ForElementType<FSetElementId>)0x0;
        local_f0 = 0;
        TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                    *)local_138,&local_98);
        pTVar11 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)local_138;
      }
      local_158 = local_1e8.Data.AllocatorInstance.Data;
      iStack_150 = local_1e8.Data.ArrayNum + -1;
      if (local_1e8.Data.ArrayNum == 0) {
        iStack_150 = 0;
      }
      local_198._12_4_ = uStack_14c;
      local_198.Size = iStack_150;
      local_198.DataPtr = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
      pTVar9 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                *)TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                  ::FindOrAdd(param_3,&local_198,(bool *)0x0);
      if (pTVar9 != pTVar11) {
        TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>_>
                  (pTVar9,pTVar11);
      }
      if (bVar4) {
        bVar4 = false;
        local_f0 = 0;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8);
        }
        TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_138,0,local_138._8_4_);
        iVar7 = SUB84(local_138._8_8_,4);
        local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_110 = 0;
        if (0x80 < local_10c) {
          local_10c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_138._0_8_);
        }
      }
      if (bVar5) {
        bVar5 = false;
        local_a0 = 0;
        if (local_a8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_e8,0,local_e8._8_4_);
        bVar12 = local_e8._12_4_ != 0;
        local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
        if (bVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
        }
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_c0 = 0;
        if (0x80 < local_bc) {
          local_bc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
        }
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e8._0_8_);
        }
      }
    }
    if (param_4) {
      iVar7 = local_1e8.Data.ArrayNum + -1;
      FVar3.Data = local_1e8.Data.AllocatorInstance.Data;
      if (local_1e8.Data.ArrayNum == 0) {
        iVar7 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
      iVar7 = TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
                          *)param_2,uVar6,&local_1e8);
      if ((iVar7 == -1) || (lVar10 = (longlong)iVar7 * 0x68 + *(longlong *)param_2, lVar10 == 0)) {
        local_198.DataPtr = (wchar_t *)&local_1e8;
        TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
                    *)param_2,(uint)&local_1ec,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
                   (bool *)&local_198);
        lVar10 = (longlong)local_1ec * 0x68 + *(longlong *)param_2;
      }
      if ((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
           *)(lVar10 + 0x10) != &local_98) {
        TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                    *)(lVar10 + 0x10),&local_98);
      }
    }
    this = local_188;
  }
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  ::FTreeNode::Shrink(&param_3->Root);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadLegacyIndex @ 142a82b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFile::LoadLegacyIndex
          (FPakFile *this,FArchive *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FIndexSettings *pFVar8;
  int iVar9;
  code **ppcVar10;
  wchar_t *pwVar11;
  TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
  *pTVar12;
  bool bVar13;
  undefined1 auStackY_2d8 [32];
  int local_264;
  int local_260 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_258;
  int local_248;
  FString local_240;
  FString local_230;
  ulonglong local_220;
  undefined8 uStack_218;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_210;
  FMemoryReader local_208;
  FGuid local_158;
  longlong local_148;
  longlong lStack_140;
  int local_138;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  void *local_e8;
  undefined4 local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  void *local_a8;
  undefined8 local_a0;
  FPakEntry local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar3 = (this->Info).IndexOffset;
  this->bHasPathHashIndex = false;
  this->bHasFullDirectoryIndex = false;
  this->bWillPruneDirectoryIndex = false;
  this->bNeedsLegacyPruning = false;
  uVar4 = (this->Info).IndexSize;
  local_220 = uVar4 + uVar3;
  bVar13 = (longlong)((uVar3 ^ local_220) & (uVar4 ^ local_220)) < 0;
  if (bVar13) {
    uStack_218 = 0;
    local_220 = 0;
  }
  bVar13 = !bVar13;
  uStack_218 = CONCAT71(uStack_218._1_7_,bVar13);
  local_210 = param_2;
  if (((((longlong)uVar4 < 0) || ((longlong)uVar3 < 0)) || (!bVar13)) ||
     ((this->CachedTotalSize < (longlong)local_220 || (uVar4 != (longlong)(int)uVar4)))) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    return false;
  }
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_258,(int)uVar4,Default);
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(this->Info).IndexOffset);
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,local_258.AllocatorInstance.Data,(this->Info).IndexSize);
  local_148 = 0;
  lStack_140 = 0;
  local_138 = 0;
  if ((this->Info).bEncryptedIndex != '\0') {
    local_158.A = (this->Info).EncryptionKeyGuid.A;
    local_158.B = (this->Info).EncryptionKeyGuid.B;
    local_158.C = (this->Info).EncryptionKeyGuid.C;
    local_158.D = (this->Info).EncryptionKeyGuid.D;
    DecryptData((uchar *)local_258.AllocatorInstance.Data,(longlong)local_258.ArrayNum,&local_158);
  }
  FSHA1::HashBuffer(local_258.AllocatorInstance.Data,(longlong)local_258.ArrayNum,
                    (uchar *)&local_148);
  if (((*(longlong *)(this->Info).IndexHash.Hash == local_148) &&
      (*(longlong *)((this->Info).IndexHash.Hash + 8) == lStack_140)) &&
     (*(int *)((this->Info).IndexHash.Hash + 0x10) == local_138)) {
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_208);
    local_208._padding_ = 0;
    local_208._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_208.Bytes = &local_258;
    local_208.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_208,true);
    (**(code **)(local_208._padding_ + 0x108))(&local_208,0);
    piVar1 = &this->NumEntries;
    *piVar1 = 0;
    ::operator<<((FArchive *)&local_208,&this->MountPoint);
    iVar2 = (this->MountPoint).Data.ArrayNum;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    if (iVar9 < 0x10000) {
      if (*(int **)(local_208._padding_ + 8) < *(int **)local_208._padding_ + 1) {
        if ((local_208._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_208._padding_ + 0x188) == FMemoryReader::Serialize) {
            FMemoryReader::Serialize(&local_208,piVar1,4);
          }
          else {
            (**(code **)(local_208._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_208,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = **(int **)local_208._padding_;
        *(longlong *)local_208._padding_ = *(longlong *)local_208._padding_ + 4;
      }
      if (-1 < *piVar1) {
        MakeDirectoryFromPath(&this->MountPoint);
        local_a8 = (void *)0x0;
        local_a0 = 0;
        local_98.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.CompressionBlocks.ArrayNum = 0;
        local_98.CompressionBlocks.ArrayMax = 0;
        FPakEntry::Reset(&local_98);
        local_128._0_8_ = (FScriptContainerElement *)0x0;
        local_128._8_8_ = 0;
        local_108 = (void *)0x0;
        local_100 = 0;
        local_fc = 0x80;
        local_f8 = 0xffffffff;
        local_f4 = 0;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        local_260[0] = 0;
        local_264 = 0;
        pFVar8 = GetIndexSettings();
        bVar13 = pFVar8->bKeepFullDirectory;
        local_248 = (this->Info).Version;
        pTVar12 = &this->PathHashIndex;
        if (bVar13 != false) {
          pTVar12 = (TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
                     *)0x0;
        }
        if ((this->PakFilename).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(this->PakFilename).Data.AllocatorInstance.Data;
        }
        local_d8[0] = (code *)0x0;
        local_b0 = FMemory::Malloc(0x20,8);
        *local_b0 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::`2'::<lambda_1>,0,1>
                             ::_vftable_;
        local_b0[1] = (code *)&local_a8;
        local_b0[2] = (code *)&local_208;
        local_b0[3] = (code *)this;
        if (local_b0 + 1 != (code **)0x0) {
          local_d8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,FPakEntryPair_&>
                        ::Call;
        }
        EncodePakEntriesIntoIndex
                  (*piVar1,(TFunction<FPakEntryPair_&___cdecl(void)> *)local_d8,pwVar11,&this->Info,
                   &this->MountPoint,local_260,&local_264,&this->PathHashSeed,local_210,pTVar12,
                   &this->EncodedPakEntries,&this->Files,
                   (TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
                    *)local_128,local_248);
        if (local_d8[0] != (code *)0x0) {
          ppcVar10 = local_d8 + 2;
          if (local_b0 != (code **)0x0) {
            ppcVar10 = local_b0;
          }
          (**(code **)(*ppcVar10 + 0x10))();
        }
        if (((this->Files).ArrayNum + local_264 + local_260[0] != *piVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumEncodedEntries + Files.Num() + NumDeletedEntries == NumEntries",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                               ,0x364,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar2 = (this->Files).ArrayNum;
        piVar1 = &(this->Files).ArrayMax;
        if (*piVar1 != iVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,iVar2,&(this->Files).AllocatorInstance,iVar2,piVar1);
        }
        iVar2 = (this->EncodedPakEntries).ArrayNum;
        piVar1 = &(this->EncodedPakEntries).ArrayMax;
        if (*piVar1 != iVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,&(this->EncodedPakEntries).AllocatorInstance,iVar2,piVar1);
        }
        this->bHasPathHashIndex = bVar13 == false;
        this->bHasFullDirectoryIndex = true;
        pFVar8 = GetIndexSettings();
        if (pFVar8->bKeepFullDirectory == false) {
          this->bWillPruneDirectoryIndex = true;
          this->bNeedsLegacyPruning = true;
          bSomePakNeedsPruning = true;
        }
        else {
          this->bWillPruneDirectoryIndex = false;
          this->bNeedsLegacyPruning = false;
        }
        if (((this->bHasFullDirectoryIndex == false) && (this->bHasPathHashIndex == false)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("bHasFullDirectoryIndex || bHasPathHashIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                                ,0x37a,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_e0 = 0;
        bVar13 = true;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_128,0,local_128._8_4_);
        iVar2 = SUB84(local_128._8_8_,4);
        local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
        }
        local_f8 = 0xffffffff;
        local_f4 = 0;
        local_100 = 0;
        if (0x80 < local_fc) {
          local_fc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
        }
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._0_8_);
        }
        if (local_98.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.CompressionBlocks.AllocatorInstance.Data);
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        FArchive::~FArchive((FArchive *)&local_208);
        goto LAB_142a833a5;
      }
      if (1 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
    }
    else if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      bVar13 = false;
      FArchive::~FArchive((FArchive *)&local_208);
      goto LAB_142a833a5;
    }
    bVar13 = false;
    FArchive::~FArchive((FArchive *)&local_208);
  }
  else {
    if (4 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    if (((4 < (byte)LogPakFile._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
        4 < (byte)LogPakFile._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
       4 < (byte)LogPakFile._0_1_)) {
      (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      if (((4 < (byte)LogPakFile._0_1_) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
          4 < (byte)LogPakFile._0_1_)) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile),
         4 < (byte)LogPakFile._0_1_)) {
        local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_240.Data.ArrayNum = 0;
        local_240.Data.ArrayMax = 0;
        BytesToHex((this->Info).IndexHash.Hash,0x14,&local_240);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u__Stored_Index_H_150988ad0,
                   (FLogCategoryBase *)&LogPakFile);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogPakFile._0_1_) {
          local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.Data.ArrayNum = 0;
          local_230.Data.ArrayMax = 0;
          BytesToHex((uchar *)&local_148,0x14,&local_230);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    bVar13 = false;
  }
LAB_142a833a5:
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  return bVar13;
}

// MakeDirectoryFromPath @ 142a83420

void __cdecl FPakFile::MakeDirectoryFromPath(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if ((iVar4 + -1 < 0) || (iVar4 <= iVar4 + -1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar4 * 2 + -2) != 0x2f) {
      ::FString::AppendChars(param_1,L"/",1);
    }
  }
  return;
}

// NormalizeDirectoryQuery @ 142a86c70

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::NormalizeDirectoryQuery(FPakFile *this,wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  
  ::FString::operator=(param_2,param_1);
  MakeDirectoryFromPath(param_2);
  bVar1 = GetRelativePathFromMountInline(param_2,&this->MountPoint);
  return bVar1;
}

// PakContains @ 142a8a970

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::PakContains(FPakFile *this,FString *param_1)

{
  EFindResult EVar1;
  
  EVar1 = Find((FPakFile *)&this[-1].UnderlyingCacheTrimDisabled,param_1,(FPakEntry *)0x0);
  return EVar1 == Found;
}

// PakGetMountPoint @ 142a8a990

/* WARNING: Enum "EVersion": Some values do not have unique names */

FString * __thiscall FPakFile::PakGetMountPoint(FPakFile *this)

{
  return (FString *)&(this->Info).CompressionMethods;
}

// PakGetPakFilename @ 142a8a9a0

/* WARNING: Enum "EVersion": Some values do not have unique names */

FString * __thiscall FPakFile::PakGetPakFilename(FPakFile *this)

{
  return (FString *)&this->_padding_;
}

// PakGetPakchunkIndex @ 142a8a9b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

int __thiscall FPakFile::PakGetPakchunkIndex(FPakFile *this)

{
  return (int)this->CachedTotalSize;
}

// PakPathCombine @ 142a8a9c0

FString * __cdecl
FPakFile::PakPathCombine
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  PakPathCombineInternal<wchar_t>(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// PakPathCombine @ 142a8aa00

FString * __cdecl
FPakFile::PakPathCombine
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<char8_t> *param_2)

{
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  PakPathCombineInternal<char8_t>(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// PakVisitPrunedFilenames @ 142a8aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a8aae0) */
/* WARNING: Removing unreachable block (ram,0x000142a8ab05) */
/* WARNING: Removing unreachable block (ram,0x000142a8aaa1) */
/* WARNING: Removing unreachable block (ram,0x000142a8aac6) */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::PakVisitPrunedFilenames(FPakFile *this,FDirectoryVisitor *param_1)

{
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar1;
  int iVar2;
  code *pcVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [76];
  uint local_dc;
  uint local_d0;
  bool local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  bool local_90;
  ForAnyElementType local_88;
  ForAnyElementType local_48;
  EIteratorType local_28;
  bool local_26;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  FBaseIterator::FBaseIterator
            ((FBaseIterator *)local_128,(FPakFile *)&this[-1].UnderlyingCacheTrimDisabled,false,
             false);
LAB_142a8aa80:
  do {
    if (local_28 == PathHash) {
      if ((local_90 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar6 = SBORROW4(local_b0.CurrentBitIndex,(local_b0.Array)->NumBits);
      iVar2 = local_b0.CurrentBitIndex - (local_b0.Array)->NumBits;
LAB_142a8ab77:
      bVar6 = bVar6 != iVar2 < 0;
    }
    else {
      if (local_28 == DirectoryIndex) {
        if ((local_128[0x30] == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = SBORROW4(local_128._36_4_,*(int *)(local_128._24_8_ + 0x18));
        iVar2 = local_128._36_4_ - *(int *)(local_128._24_8_ + 0x18);
        goto LAB_142a8ab77;
      }
      if (local_28 != DirectoryTree) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x9c9,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_142a8acf5;
      }
      bVar6 = (((FIteratorInternal *)local_128._56_8_)->Stack).ArrayNum != 0;
    }
    if (!bVar6) {
LAB_142a8acf5:
      if (local_26 != false) {
        ReleaseSRWLockShared((PSRWLOCK)(local_128._0_8_ + 0x268));
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if ((TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
           *)local_128._56_8_ !=
          (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
           *)0x0) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                  ((TStringBuilderBase<wchar_t> *)&((FIteratorInternal *)local_128._56_8_)->Path);
        FVar1 = (((FIteratorInternal *)local_128._56_8_)->Stack).AllocatorInstance.SecondaryData;
        if (FVar1 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                      )0x0) {
          FMemory::Free((void *)FVar1);
        }
        ::operator_delete((void *)local_128._56_8_,0x418);
      }
      return;
    }
    pFVar4 = FBaseIterator::Filename((FBaseIterator *)local_128);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit(param_1,pwVar5,false);
    if (local_28 == PathHash) {
      if ((local_90 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
    }
    else {
      if ((local_28 == DirectoryIndex) || (local_28 == DirectoryTree)) {
        if ((local_28 != DirectoryTree && local_28 != DirectoryIndex) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                               ,0xa9c,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((local_c0 == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_d0 = local_d0 & ~local_dc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_128 + 0x48));
        FBaseIterator::AdvanceToValid((FBaseIterator *)local_128);
        goto LAB_142a8aa80;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x9b2,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FBaseIterator::AdvanceToValid((FBaseIterator *)local_128);
  } while( true );
}

// PassedSignatureChecks @ 142a8af30

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::PassedSignatureChecks(FPakFile *this)

{
  FChunkCacheWorker *pFVar1;
  FPakSignatureFile *pFVar2;
  
  pFVar1 = (this->Decryptor).Ptr;
  if (((pFVar1 != (FChunkCacheWorker *)0x0) &&
      (pFVar2 = (pFVar1->Signatures).Object, pFVar2 != (FPakSignatureFile *)0x0)) &&
     (0 < (pFVar2->ChunkHashes).ArrayNum)) {
    return true;
  }
  return false;
}

// PruneDirectoryIndex @ 142a8c630

void __cdecl
FPakFile::PruneDirectoryIndex
          (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
           *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,FString *param_3)

{
  PruneDirectoryIndexInternal
            (param_1,(TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                      *)0x0,param_2,
             (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
              *)0x0,param_3);
  return;
}

// PruneDirectoryIndexInternal @ 142a8c660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FPakFile::PruneDirectoryIndexInternal
          (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
           *param_1,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_2,TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                   *param_3,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_4,FString *param_5)

{
  code *pcVar1;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *this;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *this_00;
  bool *pbVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar13;
  ulonglong uVar14;
  FString *pFVar15;
  byte bVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong lVar19;
  uchar *puVar20;
  ForElementType<FSetElementId> FVar21;
  wchar_t *pwVar22;
  int iVar23;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  ForElementType<unsigned_int> FVar28;
  Type TVar29;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTVar30;
  undefined8 uVar31;
  FScriptContainerElement *pFVar32;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *pTVar33;
  char cVar34;
  longlong lVar35;
  undefined1 auStackY_be8 [32];
  bool local_b98;
  undefined1 local_b97;
  undefined1 local_b96;
  undefined1 local_b95;
  undefined1 local_b94;
  undefined1 local_b93;
  undefined1 local_b92;
  undefined1 local_b91;
  undefined1 local_b90;
  undefined1 local_b8f [7];
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *local_b88;
  undefined8 local_b80;
  ForAnyElementType local_b78;
  undefined8 local_b70;
  ForAnyElementType local_b68;
  undefined8 local_b60;
  ForAnyElementType local_b58;
  undefined8 local_b50;
  ForAnyElementType local_b48;
  undefined8 local_b40;
  FString local_b38;
  longlong *local_b28;
  undefined8 uStack_b20;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  int local_b00;
  undefined4 uStack_afc;
  undefined1 local_af8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_af0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_ae0;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *local_ad0;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *local_ac8;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *local_ac0;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_ab8;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a80;
  int local_a70;
  int local_a6c;
  int local_a68 [2];
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *local_a60;
  FString local_a58;
  undefined1 local_a48 [16];
  TStringView<wchar_t> local_a38;
  undefined1 local_a28 [16];
  TStringView<wchar_t> local_a18;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  *local_a08;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a00;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9a0;
  TPairInitializer<FUtf8String_const_&,FPakEntryLocation_const_&> local_980;
  FString *local_970;
  FString *local_968;
  FString *local_960;
  longlong *local_958;
  undefined1 auStack_950 [16];
  uint uStack_940;
  uint uStack_93c;
  longlong local_938;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTStack_930;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *local_928;
  undefined2 local_920;
  longlong *local_918;
  undefined1 auStack_910 [16];
  uint uStack_900;
  uint uStack_8fc;
  longlong local_8f8;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTStack_8f0;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *local_8e8;
  undefined2 local_8e0;
  undefined1 local_8d8 [12];
  uint uStack_8cc;
  TBitArray<FDefaultBitArrayAllocator> *local_8c8;
  undefined8 uStack_8c0;
  longlong local_8b8;
  undefined8 uStack_8b0;
  undefined1 local_8a8 [12];
  uint uStack_89c;
  TBitArray<FDefaultBitArrayAllocator> *local_898;
  undefined8 uStack_890;
  longlong local_888;
  undefined8 uStack_880;
  longlong *local_878;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_870;
  undefined8 uStack_850;
  longlong *local_848;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_840;
  undefined8 uStack_820;
  undefined1 local_818 [12];
  uint local_80c;
  longlong local_808;
  uint local_800;
  int local_7fc;
  FString local_7d8;
  TStringView<wchar_t> local_7c8;
  FScriptContainerElement *local_7b8;
  uint uStack_7b0;
  undefined4 uStack_7ac;
  wchar_t *local_7a8;
  int iStack_7a0;
  undefined4 uStack_79c;
  FScriptContainerElement *local_798;
  int iStack_790;
  undefined4 uStack_78c;
  uchar *local_788;
  int iStack_780;
  undefined4 uStack_77c;
  FScriptContainerElement *local_778;
  int iStack_770;
  undefined4 uStack_76c;
  FString local_768;
  TStringView<wchar_t> local_758;
  FScriptContainerElement *local_748;
  int iStack_740;
  undefined4 uStack_73c;
  FScriptContainerElement *local_738;
  int iStack_730;
  undefined4 uStack_72c;
  uchar *local_728;
  int iStack_720;
  undefined4 uStack_71c;
  FScriptContainerElement *local_718;
  int iStack_710;
  undefined4 uStack_70c;
  FScriptContainerElement *local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  FScriptContainerElement *local_6f8;
  longlong local_6f0;
  wchar_t *local_6e8;
  int local_6e0;
  longlong local_6d8;
  TStringView<wchar_t> local_6c8;
  TStringView<wchar_t> local_6b8;
  undefined1 local_6a8 [32];
  TStringView<wchar_t> local_688;
  TStringView<char8_t> local_678;
  TStringView<wchar_t> local_668;
  FString local_658;
  FString local_648;
  TStringView<wchar_t> local_638;
  TStringView<wchar_t> local_628;
  TStringView<char8_t> local_618;
  TStringView<wchar_t> local_608;
  TStringView<wchar_t> local_5f8;
  FString local_5e8;
  TRangedForIterator local_5d8;
  TRangedForIterator local_5a8;
  undefined1 local_578 [32];
  longlong local_558;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTStack_550;
  undefined1 local_548 [32];
  longlong local_528;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  *pTStack_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f8;
  undefined4 local_4bc;
  undefined1 local_4b8 [16];
  TBitArray<FDefaultBitArrayAllocator> local_4a8;
  undefined4 local_488;
  int local_484;
  undefined1 local_480 [8];
  ForElementType<FSetElementId> local_478;
  int local_470;
  undefined1 local_468 [1048];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  local_af0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_af0.ArrayNum = 0;
  local_af0.ArrayMax = 0;
  local_ae0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ae0.ArrayNum = 0;
  local_ae0.ArrayMax = 0;
  local_a80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a80.ArrayNum = 0;
  local_a80.ArrayMax = 0;
  local_ac8 = param_2;
  local_ac0 = param_4;
  local_ab8 = param_3;
  local_a08 = (TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
               *)param_1;
  FConfigCacheIni::GetArray(GConfig,L"Pak",L"DirectoryIndexKeepFiles",&local_af0,&GEngineIni);
  FConfigCacheIni::GetArray
            (GConfig,L"Pak",L"DirectoryIndexKeepEmptyDirectories",&local_ae0,&GEngineIni);
  FConfigCacheIni::GetArray
            (GConfig,L"Pak",L"DirectoryRootsToKeepInMemoryWhenUnloadingPakEntryFilenames",&local_a80
             ,&GEngineIni);
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&local_ae0,&local_a80);
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&local_af0,&local_a80);
  if (param_3 !=
      (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
       *)0x0) {
    TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
             *)param_3,0);
  }
  if (param_4 !=
      (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
       *)0x0) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FTreeNode::Reset(&param_4->Root);
    param_4->NumPaths = 0;
    param_4->PathSeparator = L'/';
    param_4->bPathSeparatorInitialized = false;
  }
  local_4b8._0_8_ = 0;
  local_488 = 0xffffffff;
  local_4b8._8_8_ = 0;
  local_4a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_4a8.NumBits = 0;
  local_4a8.MaxBits = 0x80;
  local_484 = 0;
  local_478 = (ForElementType<FSetElementId>)0x0;
  local_470 = 0;
  if ((local_ae0.ArrayNum < 1) && (local_af0.ArrayNum < 1)) {
    if ((param_1 !=
         (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *)0x0) &&
       (param_3 ==
        (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
         *)0x0)) {
      TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
               *)param_1,0);
    }
    if ((param_2 !=
         (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *)0x0) &&
       (param_4 ==
        (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
         *)0x0)) {
      TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
      ::Empty(param_2);
    }
  }
  else {
    local_b80 = 1;
    uVar31 = local_b80;
    pTVar33 = param_2;
    if (param_1 !=
        (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
         *)0x0) {
      TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
      ::TIterator::TIterator
                ((TIterator *)local_818,
                 (TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                  *)param_1,false);
      uVar31 = 1;
      if (local_7fc < *(int *)(local_808 + 0x18)) {
        do {
          iVar10 = local_7fc;
          this_00 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0;
          pTVar30 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                     *)((longlong)local_7fc * 0x68 + *(longlong *)local_818._0_8_);
          local_7a8 = *(wchar_t **)&pTVar30->Elements;
          pTVar33 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                     *)&(pTVar30->Elements).field_0x10;
          iVar23 = *(int *)&(pTVar30->Elements).field_0x8;
          iVar8 = 0;
          iStack_7a0 = iVar23 + -1;
          if (iVar23 == 0) {
            iStack_7a0 = iVar8;
          }
          local_6b8._12_4_ = uStack_79c;
          local_6b8.Size = iStack_7a0;
          local_798 = (param_5->Data).AllocatorInstance.Data;
          iVar23 = (param_5->Data).ArrayNum;
          iStack_790 = iVar23 + -1;
          if (iVar23 == 0) {
            iStack_790 = iVar8;
          }
          local_688._12_4_ = uStack_78c;
          local_688.Size = iStack_790;
          local_b88 = pTVar30;
          local_ad0 = pTVar33;
          local_6b8.DataPtr = local_7a8;
          local_688.DataPtr = (wchar_t *)local_798;
          PakPathCombineInternal<wchar_t>(&local_a58,&local_688,&local_6b8);
          iVar9 = local_a58.Data.ArrayNum;
          iVar23 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar23 = iVar8;
          }
          if (iVar23 < 1) {
LAB_142a8c967:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsPathInDirectoryFormat(FullDirectoryName)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                               ,0x3fa,L"");
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          else {
            iVar23 = iVar9 + -2;
            if (iVar9 == 0) {
              iVar23 = -1;
            }
            if ((((iVar23 < 0) || (iVar9 == 0)) || (iVar9 + -1 <= iVar23)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x113,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(short *)(local_a58.Data.AllocatorInstance.Data + (longlong)iVar23 * 2) != 0x2f)
            goto LAB_142a8c967;
          }
          local_b78.Data = (FScriptContainerElement *)0x0;
          local_b70 = 0;
          local_b98 = false;
          pTVar24 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                     *)(*(longlong *)local_818._0_8_ + 0x10 + (longlong)iVar10 * 0x68);
          TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)local_578,pTVar24);
          local_920 = 0;
          stack0xfffffffffffff6b8 = local_578._16_16_;
          local_958 = (longlong *)local_578._0_8_;
          auStack_950._0_8_ = local_578._8_8_;
          local_938 = local_558;
          pTStack_930 = pTStack_550;
          uVar17 = local_578._24_8_ >> 0x20;
          bVar5 = false;
          local_928 = pTVar24;
          if (local_578._28_4_ < *(int *)(local_578._16_8_ + 0x18)) {
            do {
              plVar4 = local_958;
              lVar35 = (longlong)(int)uVar17 * 0x20;
              pFVar32 = (FScriptContainerElement *)(*local_958 + lVar35);
              local_788 = *(uchar **)pFVar32;
              iStack_780 = *(int *)(pFVar32 + 8) + -1;
              if (*(int *)(pFVar32 + 8) == 0) {
                iStack_780 = 0;
              }
              local_778 = local_a58.Data.AllocatorInstance.Data;
              local_678._12_4_ = uStack_77c;
              local_678.Size = iStack_780;
              iStack_770 = local_a58.Data.ArrayNum + -1;
              if (local_a58.Data.ArrayNum == 0) {
                iStack_770 = 0;
              }
              local_668._12_4_ = uStack_76c;
              local_668.Size = iStack_770;
              local_668.DataPtr = (wchar_t *)local_a58.Data.AllocatorInstance.Data;
              local_678.DataPtr = local_788;
              PakPathCombineInternal<char8_t>(&local_768,&local_668,&local_678);
              iVar23 = local_af0.ArrayNum;
              uVar17 = (ulonglong)local_af0.ArrayNum;
              pFVar27 = local_af0.AllocatorInstance.Data + uVar17 * 0x10;
              FVar25.Data = local_af0.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar17 != iVar23) {
                  local_b97 = 0;
                  `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_b97);
                }
                param_3 = local_ab8;
                if (FVar25.Data == pFVar27) {
                  if (local_ab8 ==
                      (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                       *)0x0) {
                    if (((local_b78.Data <= pFVar32) &&
                        (pFVar32 < local_b78.Data + (longlong)local_b70._4_4_ * 0x10)) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar5)) {
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    iVar23 = (int)local_b70;
                    if ((int)local_b70 == local_b70._4_4_) {
                      iVar23 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&local_b78,(int *)((longlong)&local_b70 + 4));
                    }
                    local_b70 = CONCAT44(local_b70._4_4_,iVar23 + 1);
                    FUtf8String::FUtf8String
                              ((FUtf8String *)(local_b78.Data + (longlong)iVar23 * 0x10),
                               (FUtf8String *)pFVar32);
                  }
                  goto LAB_142a8cc26;
                }
                iVar10 = *(int *)(FVar25.Data + 8) + -1;
                if (*(int *)(FVar25.Data + 8) == 0) {
                  iVar10 = 0;
                  pwVar22 = L"";
                }
                else {
                  pwVar22 = *(wchar_t **)FVar25.Data;
                }
                bVar5 = ::FString::MatchesWildcard(&local_768,pwVar22,iVar10,(Type)local_b80);
                param_3 = local_ab8;
                if (bVar5) break;
                uVar17 = local_af0._8_8_ & 0xffffffff;
                FVar25.Data = FVar25.Data + 0x10;
              }
              local_b98 = true;
              if (local_ab8 !=
                  (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                   *)0x0) {
                if (this_00 ==
                    (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0) {
                  this_00 = TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                            ::Emplace<FString_const_&>
                                      ((TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                                        *)local_ab8,(FString *)local_b88);
                }
                TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                ::Emplace<FUtf8String_const_&,FPakEntryLocation_const_&>
                          ((TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                            *)this_00,(FUtf8String *)pFVar32,
                           (FPakEntryLocation *)(*plVar4 + 0x10 + lVar35));
              }
LAB_142a8cc26:
              if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_768.Data.AllocatorInstance.Data);
              }
              uStack_940 = uStack_940 & ~auStack_950._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_950);
              uVar17 = (ulonglong)uStack_93c;
            } while ((int)uStack_93c < *(int *)(auStack_950._8_8_ + 0x18));
            pTVar30 = local_b88;
            pTVar33 = local_ad0;
            bVar5 = local_b98;
            if (((char)local_920 != '\0') && (local_920._1_1_ != '\0')) {
              TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_928,
                                  *(int *)&(local_928->Elements).field_0x8 -
                                  *(int *)&(local_928->Elements).field_0x34,Default);
              pTVar30 = local_b88;
              pTVar33 = local_ad0;
            }
          }
          if (param_3 ==
              (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
               *)0x0) {
            iVar23 = (int)local_b70;
            pFVar32 = local_b78.Data + (longlong)(int)local_b70 * 0x10;
            FVar25.Data = local_b78.Data;
            while( true ) {
              if ((int)local_b70 != iVar23) {
                local_b96 = 0;
                `TCheckedPointerIterator<FUtf8String,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b96);
              }
              pTVar30 = local_b88;
              if (FVar25.Data == pFVar32) break;
              if (*(int *)((pTVar33->Root).Value.Pad + 8) !=
                  *(int *)((pTVar33->Root).Value.Pad + 0x34)) {
                if (*(int *)(FVar25.Data + 8) == 0) {
                  pcVar18 = "";
                  iVar10 = 0;
                }
                else {
                  pcVar18 = *(char **)FVar25.Data;
                  iVar10 = *(int *)(FVar25.Data + 8) + -1;
                }
                uVar7 = FCrc::Strihash_DEPRECATED<char8_t>(iVar10,(uchar *)pcVar18);
                TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                ::RemoveImpl<FUtf8String>
                          ((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                            *)pTVar33,uVar7,(FUtf8String *)FVar25.Data);
              }
              FVar25.Data = FVar25.Data + 0x10;
            }
          }
          if (bVar5 == false) {
            iVar23 = local_ae0.ArrayNum;
            uVar17 = (ulonglong)local_ae0.ArrayNum;
            pFVar32 = local_ae0.AllocatorInstance.Data + uVar17 * 0x10;
            FVar25.Data = local_ae0.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar17 != iVar23) {
                local_b95 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_b95);
              }
              if (FVar25.Data == pFVar32) goto LAB_142a8cd8d;
              iVar10 = *(int *)(FVar25.Data + 8) + -1;
              if (*(int *)(FVar25.Data + 8) == 0) {
                iVar10 = 0;
                pwVar22 = L"";
              }
              else {
                pwVar22 = *(wchar_t **)FVar25.Data;
              }
              bVar6 = ::FString::MatchesWildcard(&local_a58,pwVar22,iVar10,(Type)local_b80);
              if (bVar6) break;
              uVar17 = local_ae0._8_8_ & 0xffffffff;
              FVar25.Data = FVar25.Data + 0x10;
            }
            bVar5 = true;
          }
LAB_142a8cd8d:
          iVar23 = *(int *)&(pTVar30->Elements).field_0x8;
          if (iVar23 == 0) {
            pwVar22 = L"";
            iVar23 = 0;
          }
          else {
            pwVar22 = *(wchar_t **)&pTVar30->Elements;
            iVar23 = iVar23 + -1;
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar22);
          pbVar12 = TMapBase<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_>
                    ::FindOrAddImpl<FString_const_&>
                              ((TMapBase<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_>
                                *)local_4b8,uVar7,(FString *)pTVar30);
          *pbVar12 = bVar5;
          DestructItems<FUtf8String,int>((FUtf8String *)local_b78.Data,(int)local_b70);
          if (local_b78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b78.Data);
          }
          if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a58.Data.AllocatorInstance.Data);
          }
          local_800 = local_800 & ~local_80c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_818 + 8));
          param_3 = local_ab8;
          uVar31 = local_b80;
        } while (local_7fc < *(int *)(local_808 + 0x18));
      }
      TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
      ::TIterator::~TIterator((TIterator *)local_818);
      local_9e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10);
      local_b48.Data = (FScriptContainerElement *)0x0;
      local_b40 = 0;
      local_9e0._padding_._0_4_ = 0;
      local_9e0._padding_._4_4_ = (undefined4)uVar31;
      local_9e0.UnvisitedBitMask = 0xffffffff;
      local_9e0.CurrentBitIndex = 0;
      local_9e0.BaseBitIndex = 0;
      if (local_4a8.NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9e0);
      }
      uStack_b20 = CONCAT44(local_9e0._padding_._4_4_,(int)local_9e0._padding_);
      local_b28 = (longlong *)local_4b8;
      uStack_b10 = CONCAT44(local_9e0.CurrentBitIndex,local_9e0.UnvisitedBitMask);
      uStack_b08 = CONCAT44(local_9e0._28_4_,local_9e0.BaseBitIndex);
      local_b00 = local_4b8._8_4_ - local_484;
      pTStack_b18 = local_9e0.Array;
      uStack_880._4_4_ = uStack_afc;
      uStack_880._0_4_ = local_b00;
      local_898 = local_9e0.Array;
      local_8a8._0_8_ = local_b28;
      unique0x10003903 = uStack_b20;
      uStack_890 = uStack_b10;
      local_888 = uStack_b08;
      pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_518,(TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10),
                           local_4a8.NumBits);
      local_b28 = (longlong *)local_4b8;
      uStack_b20 = pTVar13->_padding_;
      pTStack_b18 = pTVar13->Array;
      uStack_b10._0_4_ = pTVar13->UnvisitedBitMask;
      uStack_b10._4_4_ = pTVar13->CurrentBitIndex;
      uStack_b08 = *(longlong *)&pTVar13->BaseBitIndex;
      local_b00 = local_4b8._8_4_ - local_484;
      local_5d8._44_4_ = uStack_afc;
      local_5d8.InitialNum = local_b00;
      local_5d8._padding_ = (longlong)local_b28;
      local_5d8._padding_ = uStack_b20;
      local_5d8._padding_ = (longlong)pTStack_b18;
      local_5d8._padding_ = uStack_b10;
      local_5d8._padding_ = uStack_b08;
      bVar5 = TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_8a8,&local_5d8);
      if (bVar5) {
        do {
          lVar19 = (longlong)uStack_890._4_4_ * 0x20;
          lVar35 = *(longlong *)local_8a8._0_8_;
          if (*(char *)(lVar19 + 0x10 + lVar35) != '\0') {
            local_a48._0_8_ = *(undefined8 *)(lVar19 + lVar35);
            iVar23 = *(int *)(lVar19 + 8 + lVar35);
            local_a48._8_4_ = iVar23 + -1;
            if (iVar23 == 0) {
              local_a48._8_4_ = 0;
            }
            if (((local_b48.Data <=
                  (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *)local_a48) &&
                ((FScriptContainerElement *)local_a48 <
                 local_b48.Data + (longlong)local_b40._4_4_ * 0x10)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar23 = (int)local_b40;
            if ((int)local_b40 == local_b40._4_4_) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_b48,(int *)((longlong)&local_b40 + 4));
            }
            local_b40 = CONCAT44(local_b40._4_4_,iVar23 + 1);
            *(undefined8 *)(local_b48.Data + (longlong)iVar23 * 0x10) = local_a48._0_8_;
            *(ulonglong *)(local_b48.Data + (longlong)iVar23 * 0x10 + 8) =
                 CONCAT44(local_a48._12_4_,local_a48._8_4_);
          }
          uStack_890 = CONCAT44(uStack_890._4_4_,(uint)uStack_890 & ~uStack_89c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_8a8 + 8));
          bVar5 = TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!=((TRangedForIterator *)local_8a8,&local_5d8);
        } while (bVar5);
      }
      uVar14 = (ulonglong)(int)local_b40;
      local_a60 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *)(local_b48.Data + uVar14 * 0x10);
      local_b88 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)CONCAT44(local_b88._4_4_,(int)local_b40);
      uVar17 = uVar14;
      FVar25.Data = local_b48.Data;
LAB_142a8d0a2:
      pTVar33 = local_a60;
      local_ad0 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *)FVar25.Data;
      if ((int)uVar14 != (int)uVar17) {
        local_b94 = 0;
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_b94);
      }
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)FVar25.Data != pTVar33) {
        pwVar22 = *(wchar_t **)
                   (((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                      *)FVar25.Data)->Root).Value.Pad;
        local_a38._8_8_ =
             *(undefined8 *)
              ((((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                  *)FVar25.Data)->Root).Value.Pad + 8);
        local_758.DataPtr = (wchar_t *)0x0;
        local_758.Size = 0;
        iVar23 = local_a38.Size;
        local_a38.DataPtr = pwVar22;
        do {
          iVar8 = (param_5->Data).ArrayNum;
          iVar10 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar10 = 0;
          }
          if (iVar23 == iVar10) {
            if ((iVar23 != 0) && (iVar10 != 0)) {
              iVar8 = iVar10;
              if (iVar23 < iVar10) {
                iVar8 = iVar23;
              }
              iVar8 = FGenericPlatformStricmp::Strnicmp
                                (pwVar22,(wchar_t *)(param_5->Data).AllocatorInstance.Data,
                                 (longlong)iVar8);
              if (iVar8 != 0) goto LAB_142a8d12c;
            }
            if (iVar23 == iVar10) goto LAB_142a8d301;
          }
LAB_142a8d12c:
          bVar5 = SplitPathInline(&local_a38,&local_758);
          pwVar22 = local_a38.DataPtr;
          if (!bVar5) goto LAB_142a8d301;
          iVar23 = local_a38.Size;
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(local_a38.Size,local_a38.DataPtr);
          if (local_4b8._8_4_ != local_484) {
            FVar21 = (ForElementType<FSetElementId>)local_480;
            if (local_478 != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_478;
            }
            iVar10 = *(int *)((longlong)FVar21 + (ulonglong)(local_470 - 1U & uVar7) * 4);
            lVar35 = local_4b8._0_8_;
            while (iVar10 != -1) {
              lVar19 = (longlong)iVar10 * 0x20;
              iVar9 = *(int *)(lVar19 + 8 + lVar35);
              iVar8 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar8 = 0;
              }
              if (iVar23 == iVar8) {
                if ((iVar23 != 0) && (iVar8 != 0)) {
                  iVar9 = iVar8;
                  if (iVar23 < iVar8) {
                    iVar9 = iVar23;
                  }
                  iVar9 = FGenericPlatformStricmp::Strnicmp
                                    (pwVar22,*(wchar_t **)(lVar19 + lVar35),(longlong)iVar9);
                  lVar35 = local_4b8._0_8_;
                  if (iVar9 != 0) goto LAB_142a8d201;
                }
                if (iVar23 == iVar8) {
                  if (iVar10 != -1) {
                    lVar35 = (longlong)iVar10 * 0x20 + lVar35;
                    pcVar18 = (char *)(lVar35 + 0x10);
                    if (lVar35 == 0) {
                      pcVar18 = (char *)0x0;
                    }
                    if (pcVar18 != (char *)0x0) goto LAB_142a8d2c9;
                  }
                  break;
                }
              }
LAB_142a8d201:
              iVar10 = *(int *)(lVar19 + 0x18 + lVar35);
            }
          }
          local_ab0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ab0.Data.ArrayNum = 0;
          local_ab0.Data.ArrayMax = 0;
          pFVar15 = ::FString::ConstructFromPtrSize(&local_658,pwVar22,iVar23);
          if (&local_ab0 != pFVar15) {
            if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
            }
            local_ab0.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_ab0.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_ab0.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.Data.AllocatorInstance.Data);
          }
          local_960 = &local_ab0;
          TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                    ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                      *)local_4b8,(uint)local_a68,(TKeyInitializer<FString_&&> *)(ulonglong)uVar7,
                     (bool *)&local_960);
          pcVar18 = (char *)(local_4b8._0_8_ + 0x10 + (longlong)local_a68[0] * 0x20);
          if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
          }
LAB_142a8d2c9:
          if (*pcVar18 != '\0') goto LAB_142a8d301;
          *pcVar18 = '\x01';
        } while( true );
      }
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)local_b48.Data !=
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)0x0) {
        FMemory::Free(local_b48.Data);
      }
      uVar31 = local_b80;
      local_9c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10);
      local_9c0._padding_._4_4_ = (undefined4)local_b80;
      local_9c0._padding_._0_4_ = 0;
      local_9c0.UnvisitedBitMask = 0xffffffff;
      local_9c0.CurrentBitIndex = 0;
      local_9c0.BaseBitIndex = 0;
      if (local_4a8.NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9c0);
      }
      uStack_b20 = CONCAT44(local_9c0._padding_._4_4_,(int)local_9c0._padding_);
      local_b28 = (longlong *)local_4b8;
      uStack_b10 = CONCAT44(local_9c0.CurrentBitIndex,local_9c0.UnvisitedBitMask);
      uStack_b08 = CONCAT44(local_9c0._28_4_,local_9c0.BaseBitIndex);
      local_b00 = local_4b8._8_4_ - local_484;
      pTStack_b18 = local_9c0.Array;
      uStack_8b0._4_4_ = uStack_afc;
      uStack_8b0._0_4_ = local_b00;
      local_8c8 = local_9c0.Array;
      local_8d8._0_8_ = local_b28;
      unique0x100038e3 = uStack_b20;
      uStack_8c0 = uStack_b10;
      local_8b8 = uStack_b08;
      pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_4f8,(TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10),
                           local_4a8.NumBits);
      local_b28 = (longlong *)local_4b8;
      uStack_b20 = pTVar13->_padding_;
      pTStack_b18 = pTVar13->Array;
      uStack_b10._0_4_ = pTVar13->UnvisitedBitMask;
      uStack_b10._4_4_ = pTVar13->CurrentBitIndex;
      uStack_b08 = *(longlong *)&pTVar13->BaseBitIndex;
      local_b00 = local_4b8._8_4_ - local_484;
      local_5a8._44_4_ = uStack_afc;
      local_5a8.InitialNum = local_b00;
      local_5a8._padding_ = (longlong)local_b28;
      local_5a8._padding_ = uStack_b20;
      local_5a8._padding_ = (longlong)pTStack_b18;
      local_5a8._padding_ = uStack_b10;
      local_5a8._padding_ = uStack_b08;
      bVar5 = TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_8d8,&local_5a8);
      pTVar2 = local_a08;
      this = local_ab8;
      pTVar33 = local_ac8;
      if (bVar5) {
        do {
          pFVar15 = (FString *)((longlong)uStack_8c0._4_4_ * 0x20 + *(longlong *)local_8d8._0_8_);
          if (*(char *)&pFVar15[1].Data.AllocatorInstance.Data == '\0') {
            if ((this == (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                          *)0x0) &&
               (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34)) {
              iVar23 = (pFVar15->Data).ArrayNum;
              if (iVar23 == 0) {
                pwVar22 = L"";
                iVar23 = 0;
              }
              else {
                pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                iVar23 = iVar23 + -1;
              }
              uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar22);
              TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FString>(pTVar2,uVar7,pFVar15);
            }
          }
          else if (this != (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                            *)0x0) {
            iVar23 = (pFVar15->Data).ArrayNum;
            if (iVar23 == 0) {
              pwVar22 = L"";
              iVar23 = 0;
            }
            else {
              pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
              iVar23 = iVar23 + -1;
            }
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar22);
            TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
                        *)this,uVar7,pFVar15);
          }
          uStack_8c0 = CONCAT44(uStack_8c0._4_4_,(uint)uStack_8c0 & ~uStack_8cc);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_8d8 + 8));
          bVar5 = TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!=((TRangedForIterator *)local_8d8,&local_5a8);
          uVar31 = local_b80;
          pTVar33 = local_ac8;
        } while (bVar5);
      }
    }
    TVar29 = (Type)uVar31;
    if (pTVar33 !=
        (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
         *)0x0) {
      TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
      ::FIteratorInternal::FIteratorInternal
                ((FIteratorInternal *)local_468,&pTVar33->Root,TVar29,pTVar33->PathSeparator);
      while (local_468._488_4_ != 0) {
        pTVar30 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)0x0;
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)&local_6e8);
        if ((local_6d8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_b38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b38.Data.ArrayNum = 0;
        local_b38.Data.ArrayMax = 0;
        pFVar15 = ::FString::ConstructFromPtrSize(&local_648,local_6e8,local_6e0);
        if (&local_b38 != pFVar15) {
          if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b38.Data.AllocatorInstance.Data);
          }
          local_b38.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b38.Data.ArrayNum = (pFVar15->Data).ArrayNum;
          local_b38.Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
        }
        if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_648.Data.AllocatorInstance.Data);
        }
        if ((local_468._488_4_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(bool)Internal",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x72f,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)local_6a8);
        pTVar24 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)local_6a8._16_8_;
        local_b88 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                     *)local_6a8._16_8_;
        if (((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              *)local_6a8._16_8_ ==
             (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_748 = local_b38.Data.AllocatorInstance.Data;
        iVar23 = 0;
        iStack_740 = local_b38.Data.ArrayNum + -1;
        if (local_b38.Data.ArrayNum == 0) {
          iStack_740 = iVar23;
        }
        local_638._12_4_ = uStack_73c;
        local_638.Size = iStack_740;
        local_638.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
        local_738 = (param_5->Data).AllocatorInstance.Data;
        iVar10 = (param_5->Data).ArrayNum;
        iStack_730 = iVar10 + -1;
        if (iVar10 == 0) {
          iStack_730 = iVar23;
        }
        local_628._12_4_ = uStack_72c;
        local_628.Size = iStack_730;
        local_628.DataPtr = (wchar_t *)local_738;
        PakPathCombineInternal<wchar_t>(&local_a90,&local_628,&local_638);
        bVar5 = ::FString::EndsWith(&local_a90,L"/",(int)uVar31,(int)uVar31);
        if (!bVar5) {
          ::FString::AppendChar(&local_a90,L'/');
        }
        iVar8 = local_a90.Data.ArrayNum;
        iVar10 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar10 = iVar23;
        }
        if (iVar10 < 1) {
LAB_142a8d795:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsPathInDirectoryFormat(FullDirectoryName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0x47f,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar23 = iVar8 + -2;
          if (iVar8 == 0) {
            iVar23 = -1;
          }
          if ((((iVar23 < 0) || (iVar8 == 0)) || (iVar8 + -1 <= iVar23)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x113,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(short *)(local_a90.Data.AllocatorInstance.Data + (longlong)iVar23 * 2) != 0x2f)
          goto LAB_142a8d795;
        }
        local_b68.Data = (FScriptContainerElement *)0x0;
        local_b98 = false;
        local_b60 = 0;
        TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_548,pTVar24);
        local_8e8 = pTVar24;
        local_8e0 = 0;
        stack0xfffffffffffff6f8 = local_548._16_16_;
        local_918 = (longlong *)local_548._0_8_;
        auStack_910._0_8_ = local_548._8_8_;
        local_8f8 = local_528;
        pTStack_8f0 = pTStack_520;
        uVar17 = local_548._24_8_ >> 0x20;
        cVar34 = '\0';
        if (local_548._28_4_ < *(int *)(local_548._16_8_ + 0x18)) {
          do {
            plVar4 = local_918;
            lVar35 = (longlong)(int)uVar17 * 0x20;
            pFVar32 = (FScriptContainerElement *)(*local_918 + lVar35);
            local_728 = *(uchar **)pFVar32;
            iStack_720 = *(int *)(pFVar32 + 8) + -1;
            if (*(int *)(pFVar32 + 8) == 0) {
              iStack_720 = 0;
            }
            local_718 = local_a90.Data.AllocatorInstance.Data;
            local_618._12_4_ = uStack_71c;
            local_618.Size = iStack_720;
            iStack_710 = local_a90.Data.ArrayNum + -1;
            if (local_a90.Data.ArrayNum == 0) {
              iStack_710 = 0;
            }
            local_608._12_4_ = uStack_70c;
            local_608.Size = iStack_710;
            local_608.DataPtr = (wchar_t *)local_a90.Data.AllocatorInstance.Data;
            local_618.DataPtr = local_728;
            PakPathCombineInternal<char8_t>(&local_7d8,&local_608,&local_618);
            iVar23 = local_af0.ArrayNum;
            uVar17 = (ulonglong)local_af0.ArrayNum;
            pFVar27 = local_af0.AllocatorInstance.Data + uVar17 * 0x10;
            FVar25.Data = local_af0.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar17 != iVar23) {
                local_b93 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_b93);
              }
              if (FVar25.Data == pFVar27) {
                if (local_ac0 ==
                    (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                     *)0x0) {
                  if (((local_b68.Data <= pFVar32) &&
                      (pFVar32 < local_b68.Data + (longlong)local_b60._4_4_ * 0x10)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar23 = (int)local_b60;
                  if ((int)local_b60 == local_b60._4_4_) {
                    iVar23 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_b68,(int *)((longlong)&local_b60 + 4));
                  }
                  local_b60 = CONCAT44(local_b60._4_4_,iVar23 + 1);
                  FUtf8String::FUtf8String
                            ((FUtf8String *)(local_b68.Data + (longlong)iVar23 * 0x10),
                             (FUtf8String *)pFVar32);
                }
                goto LAB_142a8da83;
              }
              iVar10 = *(int *)(FVar25.Data + 8) + -1;
              if (*(int *)(FVar25.Data + 8) == 0) {
                iVar10 = 0;
                pwVar22 = L"";
              }
              else {
                pwVar22 = *(wchar_t **)FVar25.Data;
              }
              bVar5 = ::FString::MatchesWildcard(&local_7d8,pwVar22,iVar10,(Type)local_b80);
              if (bVar5) break;
              uVar17 = local_af0._8_8_ & 0xffffffff;
              FVar25.Data = FVar25.Data + 0x10;
            }
            local_b98 = true;
            if (local_ac0 !=
                (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                 *)0x0) {
              if (pTVar30 ==
                  (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)0x0) {
                local_708 = local_b38.Data.AllocatorInstance.Data;
                iStack_700 = local_b38.Data.ArrayNum + -1;
                if (local_b38.Data.ArrayNum == 0) {
                  iStack_700 = 0;
                }
                local_5f8._12_4_ = uStack_6fc;
                local_5f8.Size = iStack_700;
                local_5f8.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
                pTVar30 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                           *)TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                             ::FindOrAdd(local_ac0,&local_5f8,(bool *)0x0);
              }
              local_6f0 = *plVar4 + 0x10 + lVar35;
              local_6f8 = pFVar32;
              TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FUtf8String_const_&,FPakEntryLocation_const_&>_>
                        (pTVar30,&local_980,(bool *)&local_6f8);
            }
LAB_142a8da83:
            if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
            }
            uStack_900 = uStack_900 & ~auStack_910._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_910);
            uVar31 = local_b80;
            uVar17 = (ulonglong)uStack_8fc;
          } while ((int)uStack_8fc < *(int *)(auStack_910._8_8_ + 0x18));
          pTVar24 = local_b88;
          cVar34 = local_b98;
          if (((char)local_8e0 != '\0') && (local_8e0._1_1_ != '\0')) {
            uVar7 = *(int *)&(local_8e8->Elements).field_0x8 -
                    *(int *)&(local_8e8->Elements).field_0x34;
            iVar23 = (int)local_b80;
            if (3 < uVar7) {
              uVar17 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
              lVar35 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              local_980.Key._4_4_ = (undefined4)lVar35;
              iVar23 = iVar23 << ((byte)lVar35 & 0x1f);
            }
            if (((0 < (int)uVar7) && (local_8e8->HashSize < iVar23)) ||
               (iVar23 < local_8e8->HashSize)) {
              local_8e8->HashSize = iVar23;
              TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              ::Rehash(local_8e8);
              pTVar24 = local_b88;
            }
          }
        }
        if (local_ac0 ==
            (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             *)0x0) {
          iVar23 = (int)local_b60;
          pFVar32 = local_b68.Data + (longlong)(int)local_b60 * 0x10;
          FVar25.Data = local_b68.Data;
          while( true ) {
            if ((int)local_b60 != iVar23) {
              local_b92 = 0;
              `TCheckedPointerIterator<FUtf8String,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_b92);
            }
            uVar31 = local_b80;
            if (FVar25.Data == pFVar32) break;
            if (*(int *)&(pTVar24->Elements).field_0x8 != *(int *)&(pTVar24->Elements).field_0x34) {
              if (*(int *)(FVar25.Data + 8) == 0) {
                pcVar18 = "";
                iVar10 = 0;
              }
              else {
                pcVar18 = *(char **)FVar25.Data;
                iVar10 = *(int *)(FVar25.Data + 8) + -1;
              }
              uVar7 = FCrc::Strihash_DEPRECATED<char8_t>(iVar10,(uchar *)pcVar18);
              TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
              ::RemoveImpl<FUtf8String>(pTVar24,uVar7,(FUtf8String *)FVar25.Data);
            }
            FVar25.Data = FVar25.Data + 0x10;
          }
        }
        TVar29 = (Type)uVar31;
        if (cVar34 == '\0') {
          iVar23 = local_ae0.ArrayNum;
          uVar17 = (ulonglong)local_ae0.ArrayNum;
          pFVar32 = local_ae0.AllocatorInstance.Data + uVar17 * 0x10;
          FVar25.Data = local_ae0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar17 != iVar23) {
              local_b91 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_b91);
            }
            if (FVar25.Data == pFVar32) goto LAB_142a8dc27;
            iVar10 = *(int *)(FVar25.Data + 8) + -1;
            if (*(int *)(FVar25.Data + 8) == 0) {
              iVar10 = 0;
              pwVar22 = L"";
            }
            else {
              pwVar22 = *(wchar_t **)FVar25.Data;
            }
            bVar5 = ::FString::MatchesWildcard(&local_a90,pwVar22,iVar10,TVar29);
            if (bVar5) break;
            uVar17 = local_ae0._8_8_ & 0xffffffff;
            FVar25.Data = FVar25.Data + 0x10;
          }
          cVar34 = '\x01';
        }
LAB_142a8dc27:
        if (local_b38.Data.ArrayNum == 0) {
          pwVar22 = L"";
          iVar23 = 0;
        }
        else {
          iVar23 = local_b38.Data.ArrayNum + -1;
          pwVar22 = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar22);
        iVar23 = TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                             *)local_4b8,uVar7,&local_b38);
        if ((iVar23 == -1) || (lVar35 = (longlong)iVar23 * 0x20 + local_4b8._0_8_, lVar35 == 0)) {
          local_968 = &local_b38;
          TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                      *)local_4b8,(uint)&local_a70,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar7,(bool *)&local_968);
          lVar35 = (longlong)local_a70 * 0x20 + local_4b8._0_8_;
        }
        *(char *)(lVar35 + 0x10) = cVar34;
        DestructItems<FUtf8String,int>((FUtf8String *)local_b68.Data,(int)local_b60);
        if (local_b68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b68.Data);
        }
        if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a90.Data.AllocatorInstance.Data);
        }
        if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b38.Data.AllocatorInstance.Data);
        }
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator++((FIteratorInternal *)local_468);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)(local_468 + 0x1f0));
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )local_468._480_8_ !=
          (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )0x0) {
        FMemory::Free((void *)local_468._480_8_);
      }
      local_9a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10);
      local_9a0.UnvisitedBitMask = 0xffffffff;
      local_b58.Data = (FScriptContainerElement *)0x0;
      local_b50 = 0;
      local_9a0._padding_._0_4_ = 0;
      local_9a0.CurrentBitIndex = 0;
      local_9a0.BaseBitIndex = 0;
      local_9a0._padding_._4_4_ = TVar29;
      if (local_4a8.NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9a0);
      }
      iVar23 = local_4a8.NumBits;
      uStack_b20 = CONCAT44(local_9a0._padding_._4_4_,(undefined4)local_9a0._padding_);
      local_b28 = (longlong *)local_4b8;
      uStack_b10._4_4_ = local_9a0.CurrentBitIndex;
      uStack_b10._0_4_ = local_9a0.UnvisitedBitMask;
      uStack_b08._4_4_ = local_9a0._28_4_;
      uStack_b08._0_4_ = local_9a0.BaseBitIndex;
      local_a00.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10);
      bVar16 = (byte)local_4a8.NumBits & 0x1f;
      local_b00 = local_4b8._8_4_ - local_484;
      local_a00._padding_._0_4_ = local_4a8.NumBits >> 5;
      local_a00._padding_._4_4_ = TVar29 << bVar16;
      local_a00.UnvisitedBitMask = -1 << bVar16;
      pTStack_b18 = local_9a0.Array;
      local_a00.BaseBitIndex = local_4a8.NumBits & 0xffffffe0;
      local_a00.CurrentBitIndex = local_4a8.NumBits;
      uStack_850 = CONCAT44(uStack_afc,local_b00);
      TStack_870.Array = local_9a0.Array;
      local_878 = local_b28;
      TStack_870._padding_ = uStack_b20;
      TStack_870._16_8_ = uStack_b10;
      TStack_870._24_8_ = uStack_b08;
      if ((local_4a8.NumBits < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar23 != local_4a8.NumBits) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a00);
      }
      iVar23 = local_a00.CurrentBitIndex;
      pTVar3 = local_a00.Array;
      uStack_b20 = CONCAT44(local_a00._padding_._4_4_,(int)local_a00._padding_);
      uStack_b10 = CONCAT44(local_a00.CurrentBitIndex,local_a00.UnvisitedBitMask);
      uStack_b08 = CONCAT44(local_a00._28_4_,local_a00.BaseBitIndex);
      pTStack_b18 = local_a00.Array;
      while( true ) {
        plVar4 = local_878;
        if ((int)local_878[1] - *(int *)((longlong)local_878 + 0x34) != (int)uStack_850) {
          local_b90 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b90);
        }
        if (((TStack_870.CurrentBitIndex == iVar23) && (TStack_870.Array == pTVar3)) &&
           (plVar4 == (longlong *)local_4b8)) break;
        puVar20 = (uchar *)((longlong)TStack_870.CurrentBitIndex * 0x20 + *plVar4);
        if (puVar20[0x10] != '\0') {
          local_a28._0_8_ = *(undefined8 *)puVar20;
          local_a28._8_4_ = *(int *)(puVar20 + 8) + -1;
          if (*(int *)(puVar20 + 8) == 0) {
            local_a28._8_4_ = 0;
          }
          if (((local_b58.Data <=
                (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                 *)local_a28) &&
              ((FScriptContainerElement *)local_a28 <
               local_b58.Data + (longlong)local_b50._4_4_ * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((int)local_b50 == local_b50._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_b58,(int *)((longlong)&local_b50 + 4));
            local_b50 = CONCAT44(local_b50._4_4_,iVar10);
          }
          lVar35 = (longlong)(int)local_b50;
          local_b50 = CONCAT44(local_b50._4_4_,(int)local_b50 + 1);
          *(undefined8 *)(local_b58.Data + lVar35 * 0x10) = local_a28._0_8_;
          *(ulonglong *)(local_b58.Data + lVar35 * 0x10 + 8) =
               CONCAT44(local_a28._12_4_,local_a28._8_4_);
        }
        TStack_870.UnvisitedBitMask = TStack_870.UnvisitedBitMask & ~TStack_870._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_870);
      }
      uVar17 = (ulonglong)(int)local_b50;
      local_a60 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *)(local_b58.Data + uVar17 * 0x10);
      local_b88 = (TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                   *)CONCAT44(local_b88._4_4_,(int)local_b50);
      FVar25.Data = local_b58.Data;
LAB_142a8dfdc:
      pTVar33 = local_a60;
      local_ac8 = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *)FVar25.Data;
      if ((int)local_b50 != (int)uVar17) {
        local_b8f[0] = 0;
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b8f);
      }
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)FVar25.Data != pTVar33) {
        pwVar22 = *(wchar_t **)
                   (((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                      *)FVar25.Data)->Root).Value.Pad;
        local_a18._8_8_ =
             *(undefined8 *)
              ((((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                  *)FVar25.Data)->Root).Value.Pad + 8);
        local_7c8.DataPtr = (wchar_t *)0x0;
        local_7c8.Size = 0;
        iVar23 = local_a18.Size;
        local_a18.DataPtr = pwVar22;
        do {
          iVar8 = (param_5->Data).ArrayNum;
          iVar10 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar10 = 0;
          }
          if (iVar23 == iVar10) {
            if ((iVar23 != 0) && (iVar10 != 0)) {
              iVar8 = iVar10;
              if (iVar23 < iVar10) {
                iVar8 = iVar23;
              }
              iVar8 = FGenericPlatformStricmp::Strnicmp
                                (pwVar22,(wchar_t *)(param_5->Data).AllocatorInstance.Data,
                                 (longlong)iVar8);
              if (iVar8 != 0) goto LAB_142a8e06c;
            }
            if (iVar23 == iVar10) goto LAB_142a8e23b;
          }
LAB_142a8e06c:
          bVar5 = SplitPathInline(&local_a18,&local_7c8);
          pwVar22 = local_a18.DataPtr;
          if (!bVar5) goto LAB_142a8e23b;
          iVar23 = local_a18.Size;
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(local_a18.Size,local_a18.DataPtr);
          if (local_4b8._8_4_ != local_484) {
            FVar21 = (ForElementType<FSetElementId>)local_480;
            if (local_478 != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_478;
            }
            iVar10 = *(int *)((longlong)FVar21 + (ulonglong)(local_470 - 1U & uVar7) * 4);
            lVar35 = local_4b8._0_8_;
            while (iVar10 != -1) {
              lVar19 = (longlong)iVar10 * 0x20;
              iVar9 = *(int *)(lVar19 + 8 + lVar35);
              iVar8 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar8 = 0;
              }
              if (iVar23 == iVar8) {
                if ((iVar23 != 0) && (iVar8 != 0)) {
                  iVar9 = iVar8;
                  if (iVar23 < iVar8) {
                    iVar9 = iVar23;
                  }
                  iVar9 = FGenericPlatformStricmp::Strnicmp
                                    (pwVar22,*(wchar_t **)(lVar19 + lVar35),(longlong)iVar9);
                  lVar35 = local_4b8._0_8_;
                  if (iVar9 != 0) goto LAB_142a8e141;
                }
                if (iVar23 == iVar8) {
                  if (iVar10 != -1) {
                    lVar35 = (longlong)iVar10 * 0x20 + lVar35;
                    pcVar18 = (char *)(lVar35 + 0x10);
                    if (lVar35 == 0) {
                      pcVar18 = (char *)0x0;
                    }
                    if (pcVar18 != (char *)0x0) goto LAB_142a8e203;
                  }
                  break;
                }
              }
LAB_142a8e141:
              iVar10 = *(int *)(lVar19 + 0x18 + lVar35);
            }
          }
          local_aa0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_aa0.Data.ArrayNum = 0;
          local_aa0.Data.ArrayMax = 0;
          pFVar15 = ::FString::ConstructFromPtrSize(&local_5e8,pwVar22,iVar23);
          if (&local_aa0 != pFVar15) {
            if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
            }
            local_aa0.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_aa0.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_aa0.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
          }
          local_970 = &local_aa0;
          TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                    ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                      *)local_4b8,(uint)&local_a6c,(TKeyInitializer<FString_&&> *)(ulonglong)uVar7,
                     (bool *)&local_970);
          pcVar18 = (char *)(local_4b8._0_8_ + 0x10 + (longlong)local_a6c * 0x20);
          if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
          }
LAB_142a8e203:
          if (*pcVar18 != '\0') goto LAB_142a8e23b;
          *pcVar18 = '\x01';
        } while( true );
      }
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)local_b58.Data !=
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)0x0) {
        FMemory::Free(local_b58.Data);
      }
      uVar7 = local_4a8.NumBits;
      iVar10 = 0;
      iVar8 = 0;
      TStack_840.CurrentBitIndex = 0;
      iVar23 = iVar8;
      if (local_4a8.NumBits == 0) {
LAB_142a8e2f5:
        uVar11 = (uint)local_b80;
      }
      else {
        FVar28 = (ForElementType<unsigned_int>)(local_4b8 + 0x10);
        if (local_4a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_4a8.AllocatorInstance.SecondaryData;
        }
        uVar11 = *(uint *)FVar28;
        while (uVar11 == 0) {
          lVar35 = (longlong)iVar10;
          iVar23 = iVar23 + 0x20;
          iVar10 = iVar10 + 1;
          TStack_840.CurrentBitIndex = local_4a8.NumBits;
          if ((int)((local_4a8.NumBits - 1U) + ((int)(local_4a8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5
              < iVar10) goto LAB_142a8e2f5;
          uVar11 = ((uint *)((longlong)FVar28 + 4))[lVar35];
        }
        uVar11 = -uVar11 & uVar11;
        uVar17 = (ulonglong)uVar11 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        local_980.Value._0_4_ = (int)lVar35;
        TStack_840.CurrentBitIndex = (int)local_980.Value + -1 + iVar23;
        if (local_4a8.NumBits < TStack_840.CurrentBitIndex) {
          TStack_840.CurrentBitIndex = local_4a8.NumBits;
        }
      }
      local_b28 = (longlong *)local_4b8;
      pTStack_b18 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10);
      local_b00 = local_4b8._8_4_ - local_484;
      uVar26 = local_4a8.NumBits & 0xffffffe0;
      uStack_b10 = CONCAT44(TStack_840.CurrentBitIndex,0xffffffff);
      uStack_b20 = CONCAT44(uVar11,iVar10);
      uStack_b08 = CONCAT44(local_4bc,iVar23);
      TStack_840._padding_ = uStack_b20;
      iVar23 = local_4a8.NumBits >> 5;
      uStack_820 = CONCAT44(uStack_afc,local_b00);
      bVar16 = (byte)local_4a8.NumBits;
      TStack_840.UnvisitedBitMask = 0xffffffff;
      TStack_840._24_8_ = uStack_b08;
      local_848 = local_b28;
      TStack_840.Array = pTStack_b18;
      if ((local_4a8.NumBits < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar2 = local_a08;
      if (uVar7 != local_4a8.NumBits) {
        FVar28 = (ForElementType<unsigned_int>)(local_4b8 + 0x10);
        if (local_4a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_4a8.AllocatorInstance.SecondaryData;
        }
        uVar7 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar23 * 4);
        while (uVar7 == 0) {
          lVar35 = (longlong)iVar23;
          uVar26 = uVar26 + 0x20;
          iVar23 = iVar23 + 1;
          uVar7 = local_4a8.NumBits;
          if ((int)((local_4a8.NumBits - 1U) + ((int)(local_4a8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5
              < iVar23) goto LAB_142a8e430;
          uVar7 = ((uint *)((longlong)FVar28 + 4))[lVar35];
        }
        uVar17 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
        lVar35 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar7 = (int)lVar35 + -1 + uVar26;
        if (local_4a8.NumBits < (int)uVar7) {
          uVar7 = local_4a8.NumBits;
        }
      }
LAB_142a8e430:
      while( true ) {
        plVar4 = local_848;
        if ((int)local_848[1] - *(int *)((longlong)local_848 + 0x34) != (int)uStack_820) {
          `TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_af8);
        }
        if (((TStack_840.CurrentBitIndex == uVar7) &&
            (TStack_840.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10))) &&
           (plVar4 == (longlong *)local_4b8)) break;
        pFVar15 = (FString *)(*plVar4 + (longlong)TStack_840.CurrentBitIndex * 0x20);
        if (*(char *)&pFVar15[1].Data.AllocatorInstance.Data == '\0') {
          if ((local_ac0 ==
               (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                *)0x0) &&
             (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34)) {
            iVar23 = (pFVar15->Data).ArrayNum;
            if (iVar23 == 0) {
              pwVar22 = L"";
              iVar23 = iVar8;
            }
            else {
              pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
              iVar23 = iVar23 + -1;
            }
            uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar22);
            TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(pTVar2,uVar11,pFVar15);
          }
        }
        else if (local_ac0 !=
                 (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                  *)0x0) {
          local_7b8 = (pFVar15->Data).AllocatorInstance.Data;
          iVar23 = (pFVar15->Data).ArrayNum;
          uStack_7b0 = iVar23 - 1;
          if (iVar23 == 0) {
            uStack_7b0 = 0;
          }
          local_6c8._12_4_ = uStack_7ac;
          local_6c8.Size = uStack_7b0;
          local_6c8.DataPtr = (wchar_t *)local_7b8;
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          ::FindOrAdd(local_ac0,&local_6c8,(bool *)0x0);
        }
        TStack_840.UnvisitedBitMask = TStack_840.UnvisitedBitMask & ~TStack_840._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_840);
      }
    }
  }
  local_470 = 0;
  if (local_478 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_478);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4b8);
  DestructItems<FString,int>((FString *)local_a80.AllocatorInstance.Data,local_a80.ArrayNum);
  if (local_a80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_ae0.AllocatorInstance.Data,local_ae0.ArrayNum);
  if (local_ae0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_af0.AllocatorInstance.Data,local_af0.ArrayNum);
  if (local_af0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af0.AllocatorInstance.Data);
  }
  return;
LAB_142a8d301:
  uVar14 = local_b40 & 0xffffffff;
  FVar25.Data = (FScriptContainerElement *)((local_ad0->Root).Value.Pad + 0x10);
  uVar17 = (ulonglong)local_b88 & 0xffffffff;
  goto LAB_142a8d0a2;
LAB_142a8e23b:
  FVar25.Data = (FScriptContainerElement *)((local_ac8->Root).Value.Pad + 0x10);
  uVar17 = (ulonglong)local_b88 & 0xffffffff;
  goto LAB_142a8dfdc;
}

// RecreatePakReaders @ 142a927c0

/* WARNING: Removing unreachable block (ram,0x000142a92975) */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPakFile::RecreatePakReaders(FPakFile *this,IPlatformFile *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FPakFile::FArchiveAndLastAccessTime,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FChunkCacheWorker *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FArchive *pFVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  IPlatformFile *local_res10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FArchiveAndLastAccessTime local_48;
  
  lpCriticalSection = &this->ReadersCriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((0 < (int)this->CurrentlyUsedReaders) && (1 < (byte)LogPakFile._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  pFVar3 = (this->Decryptor).Ptr;
  if (pFVar3 != (FChunkCacheWorker *)0x0) {
    (this->Decryptor).Ptr = (FChunkCacheWorker *)0x0;
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
  }
  iVar2 = (this->Readers).ArrayNum;
  pFVar11 = (this->Readers).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pTVar1 = &this->Readers;
  pFVar10 = pFVar11 + (longlong)iVar2 * 0x10;
  do {
    if ((this->Readers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPakFile::FArchiveAndLastAccessTime,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) {
      if (pTVar1 != (TArray<FPakFile::FArchiveAndLastAccessTime,TSizedDefaultAllocator<32>_> *)
                    &local_58) {
        DestructItems<FPakFile::FArchiveAndLastAccessTime,int>
                  ((FArchiveAndLastAccessTime *)(pTVar1->AllocatorInstance).Data,
                   (this->Readers).ArrayNum);
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        (pTVar1->AllocatorInstance).Data = local_58.Data;
        (this->Readers).ArrayNum = (int)local_50;
        (this->Readers).ArrayMax = local_50._4_4_;
        local_50 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
      }
      bVar5 = true;
LAB_142a929f7:
      DestructItems<FPakFile::FArchiveAndLastAccessTime,int>
                ((FArchiveAndLastAccessTime *)local_58.Data,(int)local_50);
      if ((FArchiveAndLastAccessTime *)local_58.Data != (FArchiveAndLastAccessTime *)0x0) {
        FMemory::Free(local_58.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar5;
    }
    if ((this->PakFilename).Data.ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(this->PakFilename).Data.AllocatorInstance.Data;
    }
    pFVar8 = CreatePakReader(this,local_res10,pwVar9);
    if (pFVar8 == (FArchive *)0x0) {
      if (2 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      bVar5 = false;
      goto LAB_142a929f7;
    }
    local_48.LastAccessTime = *(double *)(pFVar11 + 8);
    local_48.Archive.Ptr = pFVar8;
    if (((local_58.Data <= &local_48) &&
        (&local_48 < (FArchiveAndLastAccessTime *)(local_58.Data + (longlong)local_50._4_4_ * 0x10))
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (int)local_50;
    if ((int)local_50 == local_50._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58,(int *)((longlong)&local_50 + 4));
    }
    local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
    *(FArchive **)&local_58.Data[(longlong)iVar7 * 0x10].field_0x0 = local_48.Archive.Ptr;
    local_48.Archive.Ptr = (FArchive *)0x0;
    *(double *)(local_58.Data + (longlong)iVar7 * 0x10 + 8) = local_48.LastAccessTime;
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// ReleaseOldReaders @ 142a967e0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::ReleaseOldReaders(FPakFile *this,double param_1)

{
  FChunkCacheWorker *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  LARGE_INTEGER local_res8;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->ReadersCriticalSection);
  if (BVar5 != 0) {
    QueryPerformanceCounter(&local_res8);
    uVar7 = (this->Readers).ArrayNum - 1;
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (-1 < (int)uVar7) {
      lVar8 = (longlong)(int)uVar7 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Readers).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(double *)((this->Readers).AllocatorInstance.Data + lVar8 + 8) <= dVar3 - param_1) {
          uVar7 = uVar7 + 1;
          uVar6 = 0;
          if ((int)uVar7 <= (this->Readers).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar7 != 0) {
            TArray<FPakFile::FArchiveAndLastAccessTime,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->Readers,0,uVar7);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(this->Readers).AllocatorInstance,(this->Readers).ArrayNum,
                       &(this->Readers).ArrayMax);
          }
          break;
        }
        lVar8 = lVar8 + -0x10;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    if ((((this->Readers).ArrayNum == 0) && (this->CurrentlyUsedReaders == (atomic<int>)0x0)) &&
       (pFVar1 = (this->Decryptor).Ptr, pFVar1 != (FChunkCacheWorker *)0x0)) {
      (this->Decryptor).Ptr = (FChunkCacheWorker *)0x0;
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadersCriticalSection);
  }
  return;
}

// RequiresDirectoryIndexLock @ 142a99a10

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::RequiresDirectoryIndexLock(FPakFile *this)

{
  return this->bWillPruneDirectoryIndex;
}

// ReturnSharedReader @ 142a9bdf0

/* WARNING: Removing unreachable block (ram,0x000142a9bf14) */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::ReturnSharedReader(FPakFile *this,FArchive *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  LARGE_INTEGER local_res8;
  FArchive *local_18;
  double local_10;
  
  lpCriticalSection = &this->ReadersCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  this->CurrentlyUsedReaders = (atomic<int>)((int)this->CurrentlyUsedReaders + -1);
  UNLOCK();
  local_18 = param_1;
  QueryPerformanceCounter(&local_res8);
  pFVar2 = (this->Readers).AllocatorInstance.Data;
  local_10 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  if (((pFVar2 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->Readers).ArrayMax * 0x10))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Readers).ArrayNum;
  piVar1 = &(this->Readers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Readers).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Readers).AllocatorInstance.Data;
  (this->Readers).ArrayNum = iVar5 + 1;
  *(FArchive **)(pFVar2 + (longlong)iVar5 * 0x10) = local_18;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_10;
  local_18 = (FArchive *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142a9bf33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SaveIndexInternal_DirectoryIndex @ 142a9c040

void __cdecl
FPakFile::SaveIndexInternal_DirectoryIndex
          (FArchive *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2)

{
  FString *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  code *pcVar7;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint uVar18;
  FString *pFVar19;
  undefined1 local_res8 [8];
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_res10;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_148;
  uint local_144;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  FString *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FString *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res20[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_res10 = param_2;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  iVar3 = *(int *)&param_2->field_0x28;
  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
  iStack_138 = 0;
  local_120 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)pTVar17;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_142a9c13f;
      uVar11 = puVar16[lVar10 + 1];
    }
    uStack_134 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_110 = (int)lVar10;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar3 < iStack_124) {
      iStack_124 = iVar3;
    }
  }
LAB_142a9c13f:
  uVar11 = *(uint *)&param_2->field_0x28;
  uStack_11c = local_4c;
  uVar18 = uVar11 & 0xffffffe0;
  iStack_118 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  TStack_90._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_124;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_120;
  uStack_70 = CONCAT44(uStack_114,iStack_118);
  local_144 = uVar11;
  local_140 = param_2;
  local_130 = (undefined1 *)pTVar17;
  local_100 = pTVar17;
  local_98 = param_2;
  TStack_90.Array = pTVar17;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar11 != uVar4) {
    puVar14 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar17;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar18 = uVar18 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      local_144 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142a9c270;
      uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_10c = (int)lVar10;
    uVar11 = local_10c + -1 + uVar18;
    local_144 = uVar11;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
      local_144 = uVar4;
    }
  }
LAB_142a9c270:
  do {
    pTVar8 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar11) && (TStack_90.Array == pTVar17)) &&
       (pTVar8 == param_2)) {
      return;
    }
    pFVar19 = (FString *)((longlong)TStack_90.CurrentBitIndex * 0x68 + *(longlong *)pTVar8);
    ::operator<<(param_1,pFVar19);
    local_148 = pFVar19[1].Data.ArrayNum -
                *(int *)((longlong)&pFVar19[4].Data.AllocatorInstance.Data + 4);
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_148);
      }
    }
    else {
      local_148 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar3 = pFVar19[3].Data.ArrayNum;
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 2);
    iStack_f0 = 0;
    pFVar1 = pFVar19 + 1;
    local_d8 = 0;
    uStack_ec = 1;
    iStack_dc = 0;
    if (iVar3 != 0) {
      pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar19[3].Data.AllocatorInstance.Data;
      pTVar15 = pTVar17;
      if (pTVar6 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = pTVar6;
      }
      uVar11 = *(uint *)&((ForAnyElementType *)(pTVar15->AllocatorInstance).InlineData)->Data;
      while (uVar11 == 0) {
        lVar10 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        iStack_dc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_142a9c38f;
        uVar11 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar15->AllocatorInstance).InlineData)->Data +
                          lVar10 * 4 + 4);
      }
      uStack_ec = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_ec * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_108 = (int)lVar10;
      iStack_dc = local_d8 + -1 + local_108;
      if (iVar3 < iStack_dc) {
        iStack_dc = iVar3;
      }
    }
LAB_142a9c38f:
    iStack_d4 = iStack_124;
    iStack_d0 = pFVar19[1].Data.ArrayNum -
                *(int *)((longlong)&pFVar19[4].Data.AllocatorInstance.Data + 4);
    uVar11 = pFVar19[3].Data.ArrayNum;
    uVar18 = uVar11 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
    uStack_e0 = 0xffffffff;
    TStack_c0.CurrentBitIndex = iStack_dc;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_c0._28_4_ = iStack_124;
    TStack_c0.BaseBitIndex = local_d8;
    uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
    local_f8 = pFVar1;
    local_e8 = pTVar17;
    local_c8 = pFVar1;
    TStack_c0.Array = pTVar17;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = pFVar19[3].Data.ArrayNum;
    if (uVar11 != uVar4) {
      pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar19[3].Data.AllocatorInstance.Data;
      pTVar15 = pTVar17;
      if (pTVar6 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = pTVar6;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((longlong)
                         &((ForAnyElementType *)(pTVar15->AllocatorInstance).InlineData)->Data +
                        (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar18 = uVar18 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_142a9c4a0;
        uVar11 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar15->AllocatorInstance).InlineData)->Data +
                          lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_104 = (int)lVar10;
      uVar11 = local_104 + -1 + uVar18;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_142a9c4a0:
    while( true ) {
      pFVar19 = local_c8;
      if ((local_c8->Data).ArrayNum -
          *(int *)((longlong)&local_c8[3].Data.AllocatorInstance.Data + 4) != (int)uStack_a0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c0.CurrentBitIndex == uVar11) && (TStack_c0.Array == pTVar17)) &&
         (pFVar19 == pFVar1)) break;
      pFVar13 = (pFVar19->Data).AllocatorInstance.Data + (longlong)TStack_c0.CurrentBitIndex * 0x20;
      ::operator<<(param_1,(FUtf8String *)pFVar13);
      puVar16 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar16 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)(pFVar13 + 0x10));
        }
      }
      else {
        *(uint *)&(((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&pFVar13[0x10].field_0x0)->
                  AllocatorInstance).Data = *puVar16;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    param_2 = local_res10;
    pTVar17 = local_100;
    uVar11 = local_144;
  } while( true );
}

// ShouldUseDirectoryTree @ 142aa0340

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::ShouldUseDirectoryTree(FPakFile *this)

{
  return this->bUseDirectoryTree;
}

// ShouldValidatePrunedDirectory @ 142aa0350

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::ShouldValidatePrunedDirectory(FPakFile *this)

{
  FIndexSettings *pFVar1;
  
  pFVar1 = GetIndexSettings();
  if (((pFVar1->bValidatePruning != false) && (this->bWillPruneDirectoryIndex != false)) &&
     (this->bNeedsLegacyPruning == false)) {
    return true;
  }
  return false;
}

// SplitPathInline @ 142aa0cc0

bool __cdecl FPakFile::SplitPathInline(TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined8 uStack_20;
  TStringView<wchar_t> local_18;
  
  iVar7 = param_1->Size;
  if (iVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0x537,L"");
    if (!bVar4) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (iVar7 != 1) {
    pwVar10 = TStringView<wchar_t>::operator[](param_1,iVar7 + -1);
    if (*pwVar10 == L'/') {
      iVar7 = param_1->Size;
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = 0;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      uStack_20 = CONCAT44(uStack_20._4_4_,iVar6);
      param_1->DataPtr = param_1->DataPtr;
      *(undefined8 *)&param_1->Size = uStack_20;
    }
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar7 = UE::String::FindLastChar(&local_18,L'/',CaseSensitive);
    if (iVar7 == -1) {
      uStack_20 = CONCAT44(uStack_20._4_4_,1);
      param_2->DataPtr = L"/";
      *(undefined8 *)&param_2->Size = uStack_20;
      iVar7 = param_1->Size;
      uVar3 = *(undefined4 *)&param_1->field_0xc;
      param_2->DataPtr = param_1->DataPtr;
      param_2->Size = iVar7;
      *(undefined4 *)&param_2->field_0xc = uVar3;
      param_1->DataPtr = L"/";
      *(undefined8 *)&param_1->Size = uStack_20;
      return true;
    }
    iVar9 = param_1->Size;
    iVar6 = iVar7 + 1;
    iVar8 = iVar6;
    iVar2 = 0x7fffffff;
    if (iVar6 < 0) {
      iVar8 = 0;
      iVar2 = iVar7 + -0x80000000;
    }
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
    iVar7 = iVar9 - iVar8;
    if (iVar2 < iVar9 - iVar8) {
      iVar7 = iVar2;
    }
    iVar9 = 0;
    if (0 < iVar7) {
      iVar9 = iVar7;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,iVar9);
    param_2->DataPtr = param_1->DataPtr + iVar8;
    *(undefined8 *)&param_2->Size = uStack_20;
    iVar7 = param_1->Size;
    if (iVar6 < param_1->Size) {
      iVar7 = iVar6;
    }
    iVar6 = 0;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,iVar6);
    param_1->DataPtr = param_1->DataPtr;
    *(undefined8 *)&param_1->Size = uStack_20;
    return true;
  }
  if (*param_1->DataPtr != L'/') {
    uStack_20 = CONCAT44(uStack_20._4_4_,1);
    param_2->DataPtr = L"/";
    *(undefined8 *)&param_2->Size = uStack_20;
    iVar7 = param_1->Size;
    uVar3 = *(undefined4 *)&param_1->field_0xc;
    param_2->DataPtr = param_1->DataPtr;
    param_2->Size = iVar7;
    *(undefined4 *)&param_2->field_0xc = uVar3;
    param_1->DataPtr = L"/";
    *(undefined8 *)&param_1->Size = uStack_20;
    return true;
  }
  param_2->DataPtr = (wchar_t *)0x0;
  *(undefined8 *)&param_2->Size = 0;
  return false;
}

// ValidateDirectorySearch @ 142aab7d0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFile::ValidateDirectorySearch
          (FPakFile *this,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,wchar_t *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  int *piVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  uint *puVar18;
  FIdentityFunctor local_res18;
  undefined1 local_1a8;
  undefined1 local_1a7;
  char local_1a6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d [5];
  TArray<FString,TSizedDefaultAllocator<32>_> local_178;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_168;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  FString local_120;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_110;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78 [2];
  undefined4 local_4c;
  
  puVar1 = &(param_1->Elements).field_0x10;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  iVar7 = *(int *)&(param_1->Elements).field_0x28;
  iStack_158 = 0;
  local_120.Data.ArrayNum = 1;
  local_120.Data.ArrayMax = 0;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = iStack_158;
  if (iVar7 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uStack_154 = *puVar18;
    local_140 = 0;
    iStack_158 = 0;
    while (uStack_154 == 0) {
      lVar9 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_154 = 1;
      iStack_144 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_142aab89e;
      uStack_154 = puVar18[lVar9 + 1];
    }
    uStack_154 = ~(uStack_154 - 1) & uStack_154;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_130 = (int)lVar9;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar7 < iStack_144) {
      iStack_144 = iVar7;
    }
  }
LAB_142aab89e:
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_138 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_144;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = local_140;
  uStack_b0 = CONCAT44(uStack_134,iStack_138);
  local_160 = param_1;
  local_150 = puVar1;
  local_d8 = param_1;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar7 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar15 != uVar3) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142aab99e;
      uVar15 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_12c = (int)lVar9;
    uVar15 = (uVar14 - 1) + local_12c;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_142aab99e:
  while( true ) {
    pTVar5 = local_d8;
    if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    if (((TStack_d0.CurrentBitIndex == uVar15) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    lVar9 = *(longlong *)&pTVar5->Elements;
    pFVar16 = (FScriptContainerElement *)(lVar9 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    iVar7 = *(int *)(lVar9 + 8 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    if (iVar7 == 0) {
      pwVar10 = L"";
      iVar7 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar16;
      iVar7 = iVar7 + -1;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
    iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (param_2,uVar14,(FString *)pFVar16);
    if (iVar7 == -1) {
      if (((local_190.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = local_190.ArrayNum;
      if (local_190.ArrayNum == local_190.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_190.AllocatorInstance,&local_190.ArrayMax);
      }
      local_190.ArrayNum = iVar7 + 1;
      ::FString::FString((FString *)(local_190.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                         (FString *)pFVar16);
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  iStack_100 = 0;
  uStack_fc = local_120.Data.ArrayNum;
  puVar1 = &(param_2->Elements).field_0x10;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  iVar7 = *(int *)&(param_2->Elements).field_0x28;
  iStack_ec = iStack_100;
  local_e8 = iStack_100;
  if (iVar7 != 0) {
    puVar18 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar9 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      iStack_ec = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_142aabb7f;
      uVar15 = puVar18[lVar9 + 1];
    }
    uStack_fc = ~(uVar15 - 1) & uVar15;
    uVar2 = (ulonglong)uStack_fc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_128 = (int)lVar9;
    iStack_ec = local_e8 + -1 + local_128;
    if (iVar7 < iStack_ec) {
      iStack_ec = iVar7;
    }
  }
LAB_142aabb7f:
  uVar15 = *(uint *)&(param_2->Elements).field_0x28;
  iStack_e4 = iStack_144;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_e0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_f0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_fc,iStack_100);
  TStack_a0.CurrentBitIndex = iStack_ec;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_a0._28_4_ = iStack_144;
  TStack_a0.BaseBitIndex = local_e8;
  uStack_80 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = param_2;
  local_f8 = puVar1;
  local_a8 = param_2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar7 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar15 != uVar3) {
    puVar17 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142aabc80;
      uVar15 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_124 = (int)lVar9;
    uVar15 = (uVar14 - 1) + local_124;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_142aabc80:
  while( true ) {
    pTVar5 = local_a8;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      local_1a7 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a7);
    }
    if (((TStack_a0.CurrentBitIndex == uVar15) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_2))
    break;
    lVar9 = *(longlong *)&pTVar5->Elements;
    pFVar16 = (FScriptContainerElement *)(lVar9 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
    iVar11 = *(int *)(lVar9 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
    iVar7 = iVar11 + -1;
    if (iVar11 == 0) {
      pwVar10 = L"";
      iVar7 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar16;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
    iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (param_1,uVar14,(FString *)pFVar16);
    if (iVar7 == -1) {
      if (((local_1a0.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = local_1a0.ArrayNum;
      if (local_1a0.ArrayNum == local_1a0.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
      }
      local_1a0.ArrayNum = iVar7 + 1;
      ::FString::FString((FString *)(local_1a0.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                         (FString *)pFVar16);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  if ((local_190.ArrayNum != 0) || (local_1a0.ArrayNum != 0)) {
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    FConfigCacheIni::GetArray(GConfig,L"Pak",L"IndexValidationIgnore",&local_178,&GEngineIni);
    local_110 = &local_178;
    local_168 = &local_110;
    `FPakFile::ValidateDirectorySearch'::__l2::<lambda_2>::operator()(&local_168,&local_190);
    `FPakFile::ValidateDirectorySearch'::__l2::<lambda_2>::operator()(&local_168,&local_1a0);
    if ((local_190.ArrayNum != 0) || (local_1a0.ArrayNum != 0)) {
      local_res18 = SUB81(param_2,0);
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum,local_res18,
                 (TLess<void> *)&local_180);
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum,local_res18,
                 (TLess<void> *)&local_17f);
      if (1 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      piVar12 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar12 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        atexit(`FPakFile::ValidateDirectorySearch'::__l2::
               _dynamic_atexit_destructor_for__AlreadyLoggedCallstack__);
        _Init_thread_footer(&::_TSS2);
      }
      if ((*piVar12 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&AlreadyLoggedCallstackLock,4000);
        atexit(`FPakFile::ValidateDirectorySearch'::__l2::
               _dynamic_atexit_destructor_for__AlreadyLoggedCallstackLock__);
        _Init_thread_footer(&::_TSS3);
      }
      bVar6 = false;
      if ((int)(AlreadyLoggedCallstack.Elements._8_4_ - AlreadyLoggedCallstack.Elements._52_4_) < 10
         ) {
        EnterCriticalSection((LPCRITICAL_SECTION)&AlreadyLoggedCallstackLock);
        if ((int)(AlreadyLoggedCallstack.Elements._8_4_ - AlreadyLoggedCallstack.Elements._52_4_) <
            10) {
          pFVar8 = ::FString::FString(local_78,param_3);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (&AlreadyLoggedCallstack,&local_120,(bool *)pFVar8);
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
          bVar6 = local_1a6 == '\0';
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&AlreadyLoggedCallstackLock);
        if (bVar6) {
          if (2 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          ::FDebug::DumpStackTraceToLog(Warning);
        }
      }
      iVar7 = local_190.ArrayNum;
      if (0 < local_190.ArrayNum) {
        pFVar16 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 0x10;
        FVar13.Data = local_190.AllocatorInstance.Data;
        while( true ) {
          if (local_190.ArrayNum != iVar7) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_17e);
          }
          if (FVar13.Data == pFVar16) break;
          if (2 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          FVar13.Data = FVar13.Data + 0x10;
        }
      }
      if (0 < local_1a0.ArrayNum) {
        if (1 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        iVar7 = local_1a0.ArrayNum;
        pFVar16 = local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayNum * 0x10;
        FVar13.Data = local_1a0.AllocatorInstance.Data;
        while( true ) {
          if (local_1a0.ArrayNum != iVar7) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_17d);
          }
          if (FVar13.Data == pFVar16) break;
          if (2 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          FVar13.Data = FVar13.Data + 0x10;
        }
      }
    }
    DestructItems<FString,int>((FString *)0x0,0);
    DestructItems<FString,int>((FString *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return;
}

