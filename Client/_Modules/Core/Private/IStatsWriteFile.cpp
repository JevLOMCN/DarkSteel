// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// IStatsWriteFile @ 1419cf8f0

IStatsWriteFile * __thiscall IStatsWriteFile::IStatsWriteFile(IStatsWriteFile *this)

{
  int *piVar1;
  LARGE_INTEGER local_res8;
  
  this->_padding_ = 0;
  piVar1 = &(this->CompressedData).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->File = (FArchive *)0x0;
  (this->ArchiveFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveFilename).Data.ArrayNum = 0;
  (this->ArchiveFilename).Data.ArrayMax = 0;
  (this->Header).Version = 0;
  (this->Header).PlatformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).PlatformName.Data.ArrayNum = 0;
  (this->Header).PlatformName.Data.ArrayMax = 0;
  (this->Header).FrameTableOffset = 0;
  (this->Header).FNameTableOffset = 0;
  (this->Header).NumFNames = 0;
  (this->Header).MetadataMessagesOffset = 0;
  (this->Header).NumMetadataMessages = 0;
  (this->Header).bRawStatsFile = false;
  this->AsyncTask = (FAsyncTask<FAsyncStatsWrite> *)0x0;
  (this->CompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedData).ArrayNum = 0;
  *piVar1 = 0;
  (this->FramesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramesInfo).ArrayNum = 0;
  (this->FramesInfo).ArrayMax = 0;
  (this->DataDelegateHandle).ID = 0;
  this->FileSize = 0;
  this->_padding_ = (longlong)&___7IStatsWriteFile__6B_;
  QueryPerformanceCounter(&local_res8);
  this->StartTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (*piVar1 < 0x100000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x100000,&(this->CompressedData).AllocatorInstance,
               (this->CompressedData).ArrayNum,piVar1);
  }
  return this;
}

// ~IStatsWriteFile @ 1419d31b0

void __thiscall IStatsWriteFile::~IStatsWriteFile(IStatsWriteFile *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IStatsWriteFile__6B_;
  DestructItems<FStatsFrameInfo,int>
            ((FStatsFrameInfo *)(this->FramesInfo).AllocatorInstance.Data,
             (this->FramesInfo).ArrayNum);
  pFVar1 = (this->FramesInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Header).PlatformName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArchiveFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// Finalize @ 1419f7810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall IStatsWriteFile::Finalize(IStatsWriteFile *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FNameEntryId FVar3;
  FArchive *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  IStatsWriteFile *pIVar7;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *pTVar8;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *pTVar9;
  bool bVar10;
  ulong64 uVar11;
  FStatsThreadState *pFVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [4];
  uint local_1d4;
  uint local_1d0;
  undefined1 local_1cc [4];
  uint local_1c8 [2];
  FName local_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  IStatsWriteFile *local_180;
  undefined8 local_178;
  uint local_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  FNameEntryId local_160;
  undefined4 local_15c;
  int local_158;
  FNameEntryId local_154;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_150;
  FArchive *local_148;
  FStatsThreadState *local_140;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString local_d8 [2];
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar4 = this->File;
  local_1d4 = 0xe0f0da4a;
  local_180 = this;
  local_148 = pFVar4;
  if (((pFVar4->field_0x28 & 4) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Writer.IsSaving()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h"
                          ,0x83,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar15 = *(longlong **)&pFVar4->field_0x8;
  if ((uint *)plVar15[1] < (uint *)*plVar15 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,&local_1d4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,&local_1d4);
    }
  }
  else {
    local_1d4 = *(uint *)*plVar15;
    *plVar15 = *plVar15 + 4;
  }
  plVar15 = *(longlong **)&pFVar4->field_0x8;
  if ((uint *)plVar15[1] < (uint *)*plVar15 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,&local_1d4);
    }
  }
  else {
    local_1d4 = *(uint *)*plVar15;
    *plVar15 = *plVar15 + 4;
  }
  uVar11 = (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4);
  (this->Header).FrameTableOffset = uVar11;
  TArrayPrivateFriend::Serialize<FStatsFrameInfo,TSizedDefaultAllocator<32>_>
            (pFVar4,&this->FramesInfo);
  pFVar12 = FStatsThreadState::GetLocalState();
  iStack_1a8 = 0;
  local_190 = 0;
  uStack_1a4 = 1;
  puVar1 = &(pFVar12->ShortNameToLongName).field_0x10;
  local_178 = 1;
  iVar18 = *(int *)&(pFVar12->ShortNameToLongName).field_0x28;
  local_1b0 = &pFVar12->ShortNameToLongName;
  uStack_194 = 0;
  if (iVar18 != 0) {
    puVar21 = *(uint **)&(pFVar12->ShortNameToLongName).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar14 = (longlong)iStack_1a8;
      local_190 = local_190 + 0x20;
      iStack_1a8 = iStack_1a8 + 1;
      uStack_194 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8) goto LAB_1419f79dd;
      uVar19 = puVar21[lVar14 + 1];
    }
    uStack_1a4 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_168 = (int)lVar14;
    uStack_194 = local_190 + -1 + local_168;
    if (iVar18 < (int)uStack_194) {
      uStack_194 = iVar18;
    }
  }
LAB_1419f79dd:
  uStack_18c = local_ac;
  iStack_188 = *(int *)&(pFVar12->ShortNameToLongName).field_0x8 -
               *(int *)&(pFVar12->ShortNameToLongName).field_0x34;
  uVar19 = *(uint *)&(pFVar12->ShortNameToLongName).field_0x28;
  uVar22 = uVar19 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
  uStack_198 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_194;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_130._28_4_ = local_ac;
  TStack_130.BaseBitIndex = local_190;
  uStack_110 = CONCAT44(uStack_184,iStack_188);
  local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_150 = local_1b0;
  local_140 = pFVar12;
  local_138 = local_1b0;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar18 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = local_150;
  pIVar7 = local_180;
  uVar17 = *(uint *)&(pFVar12->ShortNameToLongName).field_0x28;
  if (uVar19 != uVar17) {
    puVar5 = *(undefined1 **)&(pFVar12->ShortNameToLongName).field_0x20;
    puVar20 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar20 = puVar5;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1419f7b10;
      uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_164 = (int)lVar14;
    uVar19 = local_164 + -1 + uVar22;
    if ((int)uVar17 < (int)uVar19) {
      uVar19 = uVar17;
    }
  }
LAB_1419f7b10:
  while( true ) {
    pTVar9 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_1d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    plVar15 = &pIVar7->_padding_;
    if (((TStack_130.CurrentBitIndex == uVar19) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar8))
    break;
    local_1b8 = *(undefined4 *)
                 ((longlong)TStack_130.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar9);
    TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Emplace<FNameEntryId>
              ((TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *)
               &pIVar7->_padding_,&local_160,(bool *)&local_1b8);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::operator=
            ((TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *)local_88,
             (TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *)plVar15);
  pFVar4 = local_148;
  uVar17 = (int)pIVar7->_padding_ - *(int *)((longlong)&pIVar7->_padding_ + 4);
  uVar22 = (uint)local_178;
  uVar19 = uVar22;
  if (3 < uVar17) {
    uVar2 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_15c = (undefined4)lVar14;
    uVar19 = uVar22 << ((byte)lVar14 & 0x1f);
  }
  if ((((int)uVar17 < 1) || ((int)uVar19 <= (int)pIVar7->_padding_)) &&
     ((int)pIVar7->_padding_ <= (int)uVar19)) {
    TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *)plVar15);
    TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)plVar15,uVar17);
  }
  else {
    TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)plVar15,uVar17);
    *(uint *)&pIVar7->_padding_ = uVar19;
    TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Rehash
              ((TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *)plVar15);
  }
  uVar11 = (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4);
  uVar19 = local_60;
  iStack_1a8 = 0;
  local_190 = 0;
  (pIVar7->Header).FNameTableOffset = uVar11;
  (pIVar7->Header).NumFNames = (longlong)(local_88._8_4_ - local_54);
  uStack_194 = 0;
  if (local_60 != 0) {
    puVar21 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar21 = local_68;
    }
    uVar17 = *puVar21;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_1a8;
      local_190 = local_190 + 0x20;
      iStack_1a8 = iStack_1a8 + 1;
      uStack_194 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
      goto LAB_1419f7cf1;
      uVar17 = puVar21[lVar14 + 1];
    }
    uVar22 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar22 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_158 = (int)lVar14;
    uStack_194 = local_190 + -1 + local_158;
    if ((int)local_60 < (int)uStack_194) {
      uStack_194 = local_60;
    }
  }
LAB_1419f7cf1:
  iStack_188 = local_88._8_4_ - local_54;
  local_1b0 = (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
               *)local_88;
  local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar17 = local_60 & 0xffffffe0;
  uStack_198 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_194;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uVar22,iStack_1a8);
  uStack_18c = local_8c;
  iVar18 = (int)local_60 >> 5;
  TStack_100._28_4_ = local_8c;
  TStack_100.BaseBitIndex = local_190;
  uStack_e0 = CONCAT44(uStack_184,iStack_188);
  bVar13 = (byte)local_60;
  uStack_1a4 = uVar22;
  local_108 = (longlong *)local_1b0;
  TStack_100.Array = local_1a0;
  if (((int)local_60 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar19 != local_60) {
    puVar21 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar21 = local_68;
    }
    uVar19 = -1 << (bVar13 & 0x1f) & puVar21[iVar18];
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar18;
      uVar17 = uVar17 + 0x20;
      iVar18 = iVar18 + 1;
      uVar19 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_1419f7dff;
      uVar19 = puVar21[lVar14 + 1];
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (int)lVar14 + -1 + uVar17;
    if ((int)local_60 < (int)uVar19) {
      uVar19 = local_60;
    }
  }
LAB_1419f7dff:
  do {
    plVar15 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1cc);
    }
    if (((TStack_100.CurrentBitIndex == uVar19) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar15 == (longlong *)local_88)) {
      uVar11 = (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4);
      (pIVar7->Header).MetadataMessagesOffset = uVar11;
      (pIVar7->Header).NumMetadataMessages =
           (longlong)
           (*(int *)&(local_140->ShortNameToLongName).field_0x8 -
           *(int *)&(local_140->ShortNameToLongName).field_0x34);
      FStatsWriteStream::WriteMetadata((FStatsWriteStream *)&pIVar7->_padding_,pFVar4);
      (**(code **)(*(longlong *)pFVar4 + 0x1b8))(pFVar4,4);
      ::operator<<(pFVar4,&pIVar7->Header);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    uStack_16c = 0x10000;
    FVar3.Value = *(uint *)(*plVar15 + (longlong)TStack_100.CurrentBitIndex * 0xc);
    local_1c0.Number = 0;
    local_1c0.ComparisonIndex.Value = FVar3.Value;
    local_170 = FVar3.Value;
    uVar22 = ::GetTypeHash(FVar3);
    if ((int)pIVar7->_padding_ != *(int *)((longlong)&pIVar7->_padding_ + 4)) {
      plVar15 = &pIVar7->_padding_;
      if ((longlong *)pIVar7->_padding_ != (longlong *)0x0) {
        plVar15 = (longlong *)pIVar7->_padding_;
      }
      iVar18 = *(int *)((longlong)plVar15 + (ulonglong)((int)pIVar7->_padding_ - 1U & uVar22) * 4);
      if (iVar18 != -1) {
        do {
          if (*(uint *)(pIVar7->_padding_ + (longlong)iVar18 * 0xc) == FVar3.Value)
          goto LAB_1419f7eca;
          iVar18 = *(int *)(pIVar7->_padding_ + 4 + (longlong)iVar18 * 0xc);
        } while (iVar18 != -1);
      }
    }
    iVar18 = -1;
LAB_1419f7eca:
    plVar15 = *(longlong **)&pFVar4->field_0x8;
    local_1c8[0] = local_1c0.ComparisonIndex.Value;
    if ((uint *)plVar15[1] < (uint *)*plVar15 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_1c8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,local_1c8);
      }
    }
    else {
      local_1c8[0] = *(uint *)*plVar15;
      *plVar15 = *plVar15 + 4;
    }
    local_1d0 = 0x10000;
    if (iVar18 == -1) {
      local_1b4 = local_1c0.ComparisonIndex.Value;
      TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Emplace<FNameEntryId>
                ((TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *)
                 &pIVar7->_padding_,&local_154,(bool *)&local_1b4);
      local_1d0 = local_1d0 | 0x400000;
    }
    plVar15 = *(longlong **)&pFVar4->field_0x8;
    if ((uint *)plVar15[1] < (uint *)*plVar15 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,&local_1d0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,&local_1d0);
      }
    }
    else {
      local_1d0 = *(uint *)*plVar15;
      *plVar15 = *plVar15 + 4;
    }
    if (iVar18 == -1) {
      ::FName::ToString(&local_1c0,local_d8);
      ::operator<<(pFVar4,local_d8);
      if (local_d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8[0].Data.AllocatorInstance.Data);
      }
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

// FinalizeSavingData @ 1419f8240

void __thiscall IStatsWriteFile::FinalizeSavingData(IStatsWriteFile *this,long64 param_1)

{
  return;
}

// GetFileMetaDesc @ 1419fe1b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
IStatsWriteFile::GetFileMetaDesc(IStatsWriteFile *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  LARGE_INTEGER local_res8;
  FTimespan local_res10;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FTextFormat local_c8;
  TSharedPtr<FCulture,1> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  QueryPerformanceCounter(&local_res8);
  FTimespan::Assign(&local_res10,0,0,0,
                    (int)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                          __real_4170000000000000) - this->StartTime),0);
  local_a8.Object = (FCulture *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsMemory(&local_48,this->FileSize,(FNumberFormattingOptions *)0x0,&local_a8,IEC);
  local_b8.Object = (FCulture *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar5 = FText::AsTimespan(&local_38,&local_res10,&local_b8);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"StatsFile",L"FileMetaDesc_Fmt",
                      L"STATS FILE: Duration: {0}, Filesize: {1}");
  pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar6,Default);
  local_98.Type = Text;
  FText::FText((FText *)&local_98.TextValue,pFVar5);
  if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_78 = 4;
  FText::FText(&local_68,pFVar4);
  if (local_68.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_d8.AllocatorInstance.Data,&local_98,2);
  local_c8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
  local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_c8,&local_d8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (pFVar4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SendTask @ 141a1d8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IStatsWriteFile::SendTask(IStatsWriteFile *this)

{
  longlong lVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  bool bVar8;
  FAsyncTask<FAsyncStatsWrite> *pFVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  ulonglong uVar12;
  FAsyncTask<FAsyncStatsWrite> *pFVar13;
  FName local_res8;
  
  WaitTask(this);
  if ((int)this->_padding_ != 0) {
    pFVar9 = ::operator_new(0x88);
    pFVar13 = (FAsyncTask<FAsyncStatsWrite> *)0x0;
    if (pFVar9 != (FAsyncTask<FAsyncStatsWrite> *)0x0) {
      uVar12 = (ulonglong)_tls_index;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
      pFVar9->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
      pFVar9->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncStatsWrite____6B_;
      pvVar7 = ThreadLocalStoragePointer;
      *(undefined4 *)&pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      lVar1 = *(longlong *)((longlong)pvVar7 + uVar12 * 8);
      *(undefined2 *)&pFVar9->_padding_ = 3;
      pFVar9->_padding_ = -1;
      pFVar9->_padding_ = 0;
      (pFVar9->Task).Outer = this;
      (pFVar9->Task).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Task).Data.ArrayNum = 0;
      (pFVar9->Task).Data.ArrayMax = 0;
      uVar5 = *(undefined4 *)&this->_padding_;
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      pFVar3 = (pFVar9->Task).Data.AllocatorInstance.Data;
      lVar4 = *(longlong *)&(pFVar9->Task).Data.ArrayNum;
      (pFVar9->Task).Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
      (pFVar9->Task).Data.ArrayNum = uVar5;
      (pFVar9->Task).Data.ArrayMax = uVar6;
      this->_padding_ = (longlong)pFVar3;
      this->_padding_ = lVar4;
      if ((*(int *)(lVar1 + 0x9d4c) <
           `public:_struct_TStatId___cdecl_FAsyncStatsWrite::GetStatId(void)const___ptr64'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAsyncStatsWrite::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_FAsyncStatsWrite::GetStatId(void)const___ptr64'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        FThreadSafeStaticStat<`FAsyncStatsWrite::GetStatId'::__l2::FStat_FAsyncStatsWrite>::
        FThreadSafeStaticStat<_FAsyncStatsWrite::GetStatId_::__l2::FStat_FAsyncStatsWrite>
                  (&`public:_struct_TStatId___cdecl_FAsyncStatsWrite::GetStatId(void)const___ptr64'
                    ::__l2::StatPtr_FAsyncStatsWrite);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAsyncStatsWrite::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar11 = _StatPtr_FAsyncStatsWrite;
      if (_StatPtr_FAsyncStatsWrite == (TStatIdData *)0x0) {
        pFVar10 = ::FName::FName(&local_res8,"FAsyncStatsWrite");
        pTVar11 = FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &`public:_struct_TStatId___cdecl_FAsyncStatsWrite::GetStatId(void)const___ptr64'
                              ::__l2::StatPtr_FAsyncStatsWrite,*pFVar10,L"FAsyncStatsWrite",
                             "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                             L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      }
      pFVar9->_padding_ = (longlong)pTVar11;
      pFVar13 = pFVar9;
    }
    this->AsyncTask = pFVar13;
    if (((int)this->_padding_ != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OutData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                           ,0x174,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->AsyncTask,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  }
  return;
}

// Start @ 141a216e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IStatsWriteFile::Start(IStatsWriteFile *this,FString *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  ForAnyElementType FVar6;
  FArchiveState *this_00;
  int iVar7;
  uint local_res8 [2];
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FArchiveState local_d8;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pFVar3 = FPaths::ProfilingDir(&local_f8);
  ::FString::ConcatFC(&local_118,pFVar3,L"UnrealStats/");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar6.Data = local_118.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_e8,(wchar_t *)FVar6.Data);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_128,&local_e8,param_1);
  pFVar3 = FPaths::GetExtension(&local_f8,&local_128,false);
  iVar7 = (pFVar3->Data).ArrayNum;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (iVar7 < 2) {
    ::FString::AppendChars(&local_128,L".uestats",8);
  }
  FPaths::GetPath(&local_108,&local_128);
  pIVar4 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar6.Data = local_108.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,FVar6.Data,1);
  ::FString::ConcatFC(&local_138,&local_128,L".inprogress");
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  pIVar4 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar6.Data = local_138.Data.AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,FVar6.Data,0);
  this->File = pFVar5;
  if (pFVar5 == (FArchive *)0x0) {
    if (1 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
  }
  else {
    iVar7 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              (&this->ArchiveFilename,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar7);
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_48 = 0;
    local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_38 = 0;
    local_40 = &this->_padding_;
    FArchiveState::SetIsSaving(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    local_48 = (longlong)(int)this->_padding_;
    local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    local_res8[0] = 0x10293847;
    this_00 = &local_d8;
    if ((FArchiveState *)this->File != (FArchiveState *)0x0) {
      this_00 = (FArchiveState *)this->File;
    }
    puVar1 = (uint *)this_00->ActiveFPLB->StartFastPathLoadBuffer;
    if (this_00->ActiveFPLB->EndFastPathLoadBuffer < puVar1 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
      }
    }
    else {
      local_res8[0] = *puVar1;
      this_00->ActiveFPLB->StartFastPathLoadBuffer =
           this_00->ActiveFPLB->StartFastPathLoadBuffer + 4;
    }
    (this->Header).Version = 6;
    ::FString::FString(&local_148,"Windows");
    pFVar3 = &(this->Header).PlatformName;
    if (pFVar3 != &local_148) {
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
      (this->Header).PlatformName.Data.ArrayNum = local_148.Data.ArrayNum;
      (this->Header).PlatformName.Data.ArrayMax = local_148.Data.ArrayMax;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    ::operator<<((FArchive *)this_00,&this->Header);
    FStatsWriteStream::WriteMetadata((FStatsWriteStream *)&this->_padding_,(FArchive *)this_00);
    (**(code **)(this_00->_padding_ + 0x208))(this_00);
    FArchive::~FArchive((FArchive *)&local_d8);
    (**(code **)(this->_padding_ + 8))(this,1);
    LOCK();
    FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + 1;
    UNLOCK();
    FThreadStats::CheckEnable();
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// Stop @ 141a24610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IStatsWriteFile::Stop(IStatsWriteFile *this)

{
  int iVar1;
  FArchive *pFVar2;
  char cVar3;
  IFileManager *pIVar4;
  FCommandStatsFile *this_00;
  wchar_t *pwVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FString local_18;
  
  if (this->File != (FArchive *)0x0) {
    LOCK();
    FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + -1;
    UNLOCK();
    FThreadStats::CheckEnable();
    (**(code **)(this->_padding_ + 8))(this,0);
    SendTask(this);
    SendTask(this);
    Finalize(this);
    (**(code **)(*(longlong *)this->File + 0x210))();
    pFVar2 = this->File;
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    }
    this->File = (FArchive *)0x0;
    ::FString::ConcatFC(&local_18,&this->ArchiveFilename,L".inprogress");
    pIVar4 = IFileManager::Get();
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar7.Data = local_18.Data.AllocatorInstance.Data;
    }
    if ((this->ArchiveFilename).Data.ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(this->ArchiveFilename).Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,pwVar5,FVar7.Data,1,0,0,0);
    if ((cVar3 == '\0') && (2 < (byte)LogStats._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    if (4 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    this_00 = FCommandStatsFile::Get();
    iVar1 = (this->ArchiveFilename).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this_00->LastFileSaved,
               (wchar_t *)(this->ArchiveFilename).Data.AllocatorInstance.Data,iVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WaitTask @ 141a2fbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IStatsWriteFile::WaitTask(IStatsWriteFile *this)

{
  int *piVar1;
  FAsyncTask<FAsyncStatsWrite> *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_StreamFileWaitForWrite> FVar7;
  FThreadStats *this_00;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this->AsyncTask == (FAsyncTask<FAsyncStatsWrite> *)0x0) {
    return;
  }
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_StreamFileWaitForWrite;
  if (StatPtr_STAT_StreamFileWaitForWrite ==
      (FThreadSafeStaticStat<FStat_STAT_StreamFileWaitForWrite>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_StreamFileWaitForWrite");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_StreamFileWaitForWrite>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamFileWaitForWrite,*pFVar6,
                       L"Wait For Write","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                   ,0x166);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_141a2fd5a;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_141a2fd5a:
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncTask,true,false);
  pFVar2 = this->AsyncTask;
  if (pFVar2 != (FAsyncTask<FAsyncStatsWrite> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  this->AsyncTask = (FAsyncTask<FAsyncStatsWrite> *)0x0;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     ((FThreadStats::TlsSlot != 0xffffffff &&
      (this_00 = FThreadStats::GetThreadStats(),
      this_00->bWaitForExplicitFlush < this_00->ScopeCount)))) {
    local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
    local_38.NameAndInfo.Index.Value = FVar11.Value;
    QueryPerformanceCounter(&local_res8);
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
    local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
    local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
    local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_38);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// WriteHeader @ 141a32de0

void __thiscall IStatsWriteFile::WriteHeader(IStatsWriteFile *this)

{
  FString *pFVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  FArchiveState *this_00;
  uint local_res8 [2];
  undefined8 local_res10;
  FString local_e8;
  FArchiveState local_d8;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_res10 = 0;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_38 = 0;
  local_40 = &this->_padding_;
  FArchiveState::SetIsSaving(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  local_48 = (longlong)(int)this->_padding_;
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_res8[0] = 0x10293847;
  this_00 = &local_d8;
  if ((FArchiveState *)this->File != (FArchiveState *)0x0) {
    this_00 = (FArchiveState *)this->File;
  }
  puVar2 = (uint *)this_00->ActiveFPLB->StartFastPathLoadBuffer;
  if (this_00->ActiveFPLB->EndFastPathLoadBuffer < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    this_00->ActiveFPLB->StartFastPathLoadBuffer = this_00->ActiveFPLB->StartFastPathLoadBuffer + 4;
  }
  (this->Header).Version = 6;
  ::FString::FString(&local_e8,"Windows");
  pFVar1 = &(this->Header).PlatformName;
  if (pFVar1 != &local_e8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    (this->Header).PlatformName.Data.ArrayNum = local_e8.Data.ArrayNum;
    (this->Header).PlatformName.Data.ArrayMax = local_e8.Data.ArrayMax;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  ::operator<<((FArchive *)this_00,&this->Header);
  FStatsWriteStream::WriteMetadata((FStatsWriteStream *)&this->_padding_,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x208))(this_00);
  FArchive::~FArchive((FArchive *)&local_d8);
  return;
}

