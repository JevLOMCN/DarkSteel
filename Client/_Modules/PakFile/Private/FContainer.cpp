// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 4

// FContainer @ 142a51420

FContainer * __thiscall UE::IoStore::FContainer::FContainer(FContainer *this)

{
  (this->TocStorage).Data.TypeIndex = '\0';
  (this->EncryptionKey).Key[0] = '\0';
  (this->EncryptionKey).Key[1] = '\0';
  (this->EncryptionKey).Key[2] = '\0';
  (this->EncryptionKey).Key[3] = '\0';
  (this->EncryptionKey).Key[4] = '\0';
  (this->EncryptionKey).Key[5] = '\0';
  (this->EncryptionKey).Key[6] = '\0';
  (this->EncryptionKey).Key[7] = '\0';
  (this->EncryptionKey).Key[8] = '\0';
  (this->EncryptionKey).Key[9] = '\0';
  (this->EncryptionKey).Key[10] = '\0';
  (this->EncryptionKey).Key[0xb] = '\0';
  (this->EncryptionKey).Key[0xc] = '\0';
  (this->EncryptionKey).Key[0xd] = '\0';
  (this->EncryptionKey).Key[0xe] = '\0';
  (this->EncryptionKey).Key[0xf] = '\0';
  (this->EncryptionKey).Key[0x10] = '\0';
  (this->EncryptionKey).Key[0x11] = '\0';
  (this->EncryptionKey).Key[0x12] = '\0';
  (this->EncryptionKey).Key[0x13] = '\0';
  (this->EncryptionKey).Key[0x14] = '\0';
  (this->EncryptionKey).Key[0x15] = '\0';
  (this->EncryptionKey).Key[0x16] = '\0';
  (this->EncryptionKey).Key[0x17] = '\0';
  (this->EncryptionKey).Key[0x18] = '\0';
  (this->EncryptionKey).Key[0x19] = '\0';
  (this->EncryptionKey).Key[0x1a] = '\0';
  (this->EncryptionKey).Key[0x1b] = '\0';
  (this->EncryptionKey).Key[0x1c] = '\0';
  (this->EncryptionKey).Key[0x1d] = '\0';
  (this->EncryptionKey).Key[0x1e] = '\0';
  (this->EncryptionKey).Key[0x1f] = '\0';
  (this->ChunkLookup).PerfectMap.ChunkHashSeeds.DataPtr = (int *)0x0;
  (this->ChunkLookup).PerfectMap.ChunkHashSeeds.ArrayNum = 0;
  (this->ChunkLookup).PerfectMap.ChunkIds.DataPtr = (FIoChunkId *)0x0;
  (this->ChunkLookup).PerfectMap.ChunkIds.ArrayNum = 0;
  (this->ChunkLookup).PerfectMap.Offsets.DataPtr = (FIoOffsetAndLength *)0x0;
  (this->ChunkLookup).PerfectMap.Offsets.ArrayNum = 0;
  *(undefined8 *)&(this->ChunkLookup).DefaultMap = 0;
  *(undefined8 *)&(this->ChunkLookup).DefaultMap.field_0x8 = 0;
  *(undefined8 *)&(this->ChunkLookup).DefaultMap.field_0x20 = 0;
  *(undefined4 *)&(this->ChunkLookup).DefaultMap.field_0x28 = 0;
  *(undefined4 *)&(this->ChunkLookup).DefaultMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkLookup).DefaultMap.field_0x34 = 0;
  *(undefined4 *)&(this->ChunkLookup).DefaultMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkLookup).DefaultMap.field_0x40 = 0;
  *(undefined4 *)&(this->ChunkLookup).DefaultMap.field_0x48 = 0;
  (this->ChunkLookup).Type = Default;
  (this->Partitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Partitions).ArrayNum = 0;
  (this->Partitions).ArrayMax = 0;
  (this->CompressionMethods).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressionMethods).ArrayNum = 0;
  (this->CompressionMethods).ArrayMax = 0;
  (this->CompressionBlocks).DataPtr = (FIoStoreTocCompressedBlockEntry *)0x0;
  (this->CompressionBlocks).ArrayNum = 0;
  (this->CompressionBlockHashes).DataPtr = (FSHAHash *)0x0;
  (this->CompressionBlockHashes).ArrayNum = 0;
  (this->BaseFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFilePath).Data.ArrayNum = 0;
  (this->BaseFilePath).Data.ArrayMax = 0;
  this->PartitionSize = 0;
  this->CompressionBlockSize = 0;
  this->ActiveReadCount = (atomic<int>)0x0;
  (this->ContainerId).Id = 0xffffffffffffffff;
  this->MountOrder = 0x7fffffff;
  this->InstanceId = 0;
  return this;
}

// GetAllocatedSize @ 142a722f0

ulong64 __thiscall UE::IoStore::FContainer::GetAllocatedSize(FContainer *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)&(this->ChunkLookup).DefaultMap.field_0x48;
  if (uVar1 < 2) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->ChunkLookup).DefaultMap.field_0x2c;
  iVar3 = *(int *)&(this->ChunkLookup).DefaultMap.field_0xc;
  uVar4 = FIoStoreTocResourceStorage::GetAllocatedSize(&this->TocStorage);
  return uVar4 + (longlong)iVar3 * 0x20 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar5;
}

// GetPartition @ 142a779b0

FContainerPartition * __thiscall
UE::IoStore::FContainer::GetPartition
          (FContainer *this,ulong64 param_1,ulong64 *param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FContainerPartition *pFVar7;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = this->PartitionSize;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  uVar5 = SUB164(auVar2 / auVar1,0);
  if ((SUB168(auVar2 / auVar1,0) != (longlong)(int)uVar5) || ((int)uVar5 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FContainerPartition *)(*pcVar3)();
      return pFVar7;
    }
  }
  *param_2 = param_1 % this->PartitionSize;
  if (param_3 != (int *)0x0) {
    *param_3 = uVar5;
  }
  if ((this->Partitions).ArrayNum <= (int)uVar5) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7693791830353117587>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                       ,0x193,"PartitionIndex < Partitions.Num()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FContainerPartition *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Partitions).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FContainerPartition *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FContainerPartition *)
         ((this->Partitions).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30);
}

// Open @ 142a873d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a87b39) */

TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> * __cdecl
UE::IoStore::FContainer::Open
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *__return_storage_ptr__,wchar_t *param_1,int param_2,uint param_3,
          FIoContainerHeader *param_4)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::IoStore::FContainerPartition,TSizedDefaultAllocator<32>_> *pTVar2;
  uchar uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  FIoOffsetAndLength *pFVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  size_t sVar17;
  TStringView<wchar_t> *pTVar18;
  FString *pFVar19;
  void *pvVar20;
  FContainer *this;
  FContainer *this_00;
  FEncryptionKeyManager *this_01;
  FIoStatus *pFVar21;
  TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
  *pTVar22;
  IPlatformIoDispatcher *pIVar23;
  int *piVar24;
  FIoChunkId *pFVar25;
  FIoStoreTocCompressedBlockEntry *pFVar26;
  FPlatformFileManager *this_02;
  IPlatformFile *pIVar27;
  longlong *plVar28;
  FIoStatusBuilder *pFVar29;
  code *pcVar30;
  EType EVar31;
  longlong lVar32;
  ulong64 uVar33;
  wchar_t *pwVar34;
  int iVar35;
  uint uVar36;
  FContainer *pFVar37;
  FScriptContainerElement *pFVar38;
  char cVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  int iVar43;
  FContainer *pFVar44;
  uint uVar45;
  byte bVar46;
  ulonglong uVar47;
  FAESKey **ppFVar48;
  bool bVar49;
  undefined1 auStackY_1468 [32];
  FLLMScope local_1418;
  char local_1414;
  FContainer *local_1410;
  FIoOffsetAndLength *local_1408;
  uint local_1400 [2];
  ForAnyElementType local_13f8;
  undefined8 local_13f0;
  FContainer *local_13e8;
  FMemScope local_13e0;
  TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
  *local_13d8;
  FIoBuffer local_13d0;
  FIoStatus local_13c8;
  undefined1 local_13b8 [8];
  FIoBuffer local_13b0;
  ulong64 local_13a8;
  FScriptContainerElement *local_1398;
  ulonglong uStack_1390;
  longlong local_1388;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_1380;
  FContainer *local_1378;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  FIoStatus local_1340;
  FIoContainerHeader *local_1330;
  FIoStatus local_1328;
  FScriptContainerElement *local_1318;
  int local_1310;
  undefined4 local_1308;
  byte local_1304;
  FIoChunkId *local_1300;
  FIoOffsetAndLength *local_12f8;
  FIoChunkId *local_12f0;
  FIoOffsetAndLength *local_12e8;
  wchar_t *local_12d8;
  undefined4 uStack_12d0;
  undefined4 uStack_12cc;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_12c8;
  int iStack_12c0;
  undefined4 uStack_12bc;
  wchar_t *local_12b8;
  undefined4 uStack_12b0;
  undefined4 uStack_12ac;
  wchar_t *local_12a8;
  undefined4 uStack_12a0;
  undefined4 uStack_129c;
  wchar_t *local_1298;
  undefined4 uStack_1290;
  undefined4 uStack_128c;
  FAESKey *local_1288;
  undefined8 uStack_1280;
  FAESKey *local_1278;
  undefined8 local_1270;
  TMemoryView<void> local_1268;
  wchar_t *local_1258;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  wchar_t *local_1248;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  TStringView<wchar_t> local_1238;
  FIoChunkDecodingParams local_1228;
  TStringView<wchar_t> local_11c8;
  TStringView<wchar_t> local_11b8;
  TStringView<wchar_t> local_11a8;
  TStringView<wchar_t> local_1198;
  TStringView<wchar_t> local_1188;
  TMemoryView<void_const_> local_1178;
  TStringView<wchar_t> local_1168;
  TStringView<wchar_t> local_1158;
  FArchiveState local_1148;
  undefined8 local_10b8;
  undefined8 local_10b0;
  ulonglong local_10a8;
  undefined8 local_10a0;
  FString local_1098;
  TStringView<wchar_t> local_1088;
  wchar_t *local_1078;
  undefined8 uStack_1070;
  FString local_1068;
  FIoStatus local_1058;
  FIoStatus local_1048;
  FIoStatus local_1038;
  FIoStatus local_1028;
  FIoStatus local_1018;
  FIoStatus local_1008;
  FIoChunkId local_ff8;
  FIoStatus local_fe8;
  undefined8 local_fd8;
  FIoStoreTocResourceView local_fc8;
  TStringBuilderBase<wchar_t> local_e78;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  local_e58;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  local_c58;
  FIoStatusBuilder local_b28;
  FIoStatusBuilder local_8f8;
  FIoStatusBuilder local_6c8;
  FIoStatusBuilder local_498;
  FIoStatusBuilder local_268;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142a873fa;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1468;
  local_1330 = param_4;
  local_13d8 = __return_storage_ptr__;
  local_13b8._0_4_ = param_2;
  local_13b8._4_4_ = param_3;
  FLLMScope::FLLMScope(&local_1418,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_13e0,AsyncLoading,true);
  bVar49 = CpuChannel->Enabled < 0;
  if (bVar49) {
    local_1414 = '\0';
  }
  else {
    local_1414 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId184,"ReadContainerHeader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
               ,0xb8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId184);
  }
  cVar39 = !bVar49;
  pFVar44 = (FContainer *)0x0;
  iVar43 = 0;
  local_1238.Size = iVar43;
  local_1238.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar17 = wcslen(param_1);
    local_1238.Size = (int)sVar17;
  }
  pTVar18 = FPathViews::GetBaseFilenameWithPath(&local_1088,&local_1238);
  local_13e8 = (FContainer *)0x0;
  local_1078 = pTVar18->DataPtr;
  uStack_1070 = *(undefined8 *)&pTVar18->Size;
  pFVar19 = ::FString::ConstructFromPtrSize
                      (&local_1098,pTVar18->DataPtr,(int)*(undefined8 *)&pTVar18->Size);
  pFVar37 = pFVar44;
  iVar15 = iVar43;
  if (&local_1068 != pFVar19) {
    pFVar37 = (FContainer *)(pFVar19->Data).AllocatorInstance.Data;
    (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar15 = (pFVar19->Data).ArrayNum;
    (pFVar19->Data).ArrayNum = 0;
    (pFVar19->Data).ArrayMax = 0;
    local_13e8 = pFVar37;
  }
  if (local_1098.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1098.Data.AllocatorInstance.Data);
  }
  local_e78.bIsDynamic = false;
  local_e78.bIsExternal = false;
  iVar35 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar35 = iVar43;
  }
  local_e78.Base = (wchar_t *)&local_e58;
  local_e78.End = (wchar_t *)&local_c58;
  uVar33 = (ulong64)iVar35;
  local_e78.CurPos = (wchar_t *)&local_e58;
  if (&local_c58 <
      (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
       *)((longlong)&local_e58._padding_ + uVar33 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_e78,uVar33);
  }
  if (iVar35 != 0) {
    pvVar20 = FGenericPlatformString::Memcpy(local_e78.CurPos,pFVar37,uVar33 * 2);
    local_e78.CurPos = (wchar_t *)((longlong)pvVar20 + uVar33 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_e78,L".utoc",5);
  FIoStoreTocResourceView::FIoStoreTocResourceView(&local_fc8);
  local_c58.TypeIndex = 0;
  if (local_e78.End <
      (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
       *)((longlong)(longlong *)local_e78.CurPos + 2U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_e78,1);
  }
  *(undefined2 *)(longlong *)local_e78.CurPos = 0;
  FIoStoreTocResourceView::Read
            (&local_13c8,local_e78.Base,Default,&local_fc8,(FIoStoreTocResourceStorage *)&local_c58)
  ;
  if (local_13c8.ErrorCode != Ok) {
    local_1328.ErrorMessage.Chars = local_13c8.ErrorMessage.Chars;
    if (local_13c8.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_13c8.ErrorMessage.Chars + -4) =
           *(int *)(local_13c8.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_1328.ErrorCode = local_13c8.ErrorCode;
    local_1328.SystemErrorCode = local_13c8.SystemErrorCode;
    TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
    TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
              (__return_storage_ptr__,&local_1328);
    FIoStatus::~FIoStatus(&local_13c8);
    TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
    ::
    ~TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
              (&local_c58);
LAB_142a8767d:
    if (local_fc8.LegacyChunkMetas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc8.LegacyChunkMetas.AllocatorInstance.Data);
    }
    if (local_fc8.CompressionMethods.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc8.CompressionMethods.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e78);
    goto joined_r0x000142a88ce3;
  }
  this = ::operator_new(0x248);
  this_00 = pFVar44;
  if (this != (FContainer *)0x0) {
    memset(this,0,0x248);
    this_00 = FContainer(this);
  }
  local_1410 = this_00;
  if ((local_fc8.Header.ContainerFlags & Encrypted) != None) {
    this_01 = FEncryptionKeyManager::Get();
    bVar49 = FEncryptionKeyManager::TryGetKey
                       (this_01,&local_fc8.Header.EncryptionKeyGuid,&this_00->EncryptionKey);
    if (!bVar49) {
      pFVar21 = FIoStatus::FIoStatus(&local_1058,InvalidEncryptionKey);
      TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
      TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                (__return_storage_ptr__,pFVar21);
      if (this_00 != (FContainer *)0x0) {
        pFVar38 = (this_00->BaseFilePath).Data.AllocatorInstance.Data;
        if (pFVar38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar38);
        }
        pFVar38 = (this_00->CompressionMethods).AllocatorInstance.Data;
        if (pFVar38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar38);
        }
        DestructItems<UE::IoStore::FContainerPartition,int>
                  ((FContainerPartition *)(this_00->Partitions).AllocatorInstance.Data,
                   (this_00->Partitions).ArrayNum);
        pFVar38 = (this_00->Partitions).AllocatorInstance.Data;
        if (pFVar38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar38);
        }
        *(undefined4 *)&(this_00->ChunkLookup).DefaultMap.field_0x48 = 0;
        pvVar20 = *(void **)&(this_00->ChunkLookup).DefaultMap.field_0x40;
        if (pvVar20 != (void *)0x0) {
          FMemory::Free(pvVar20);
        }
        TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&(this_00->ChunkLookup).DefaultMap);
        FIoStoreTocResourceStorage::~FIoStoreTocResourceStorage(&this_00->TocStorage);
        ::operator_delete(this_00,0x248);
      }
      FIoStatus::~FIoStatus(&local_13c8);
      FIoStoreTocResourceStorage::~FIoStoreTocResourceStorage
                ((FIoStoreTocResourceStorage *)&local_c58);
      goto LAB_142a8767d;
    }
  }
  FIoStoreTocResourceStorage::operator=
            (&this_00->TocStorage,(FIoStoreTocResourceStorage *)&local_c58);
  uVar16 = 0;
  uVar45 = iVar15 - 1;
  if (iVar15 == 0) {
    uVar45 = uVar16;
  }
  local_1408 = (FIoOffsetAndLength *)CONCAT44(local_1408._4_4_,uVar45);
  ::FString::AssignRange(&this_00->BaseFilePath,(wchar_t *)pFVar37,uVar45);
  pTVar1 = &this_00->CompressionMethods;
  this_00->PartitionSize = local_fc8.Header.PartitionSize;
  if (pTVar1 != &local_fc8.CompressionMethods) {
    pFVar38 = (pTVar1->AllocatorInstance).Data;
    if (pFVar38 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar38);
    }
    (pTVar1->AllocatorInstance).Data = local_fc8.CompressionMethods.AllocatorInstance.Data;
    local_fc8.CompressionMethods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->CompressionMethods).ArrayNum = local_fc8.CompressionMethods.ArrayNum;
    (this_00->CompressionMethods).ArrayMax = local_fc8.CompressionMethods.ArrayMax;
    local_fc8.CompressionMethods.ArrayNum = 0;
    local_fc8.CompressionMethods.ArrayMax = 0;
  }
  this_00->CompressionBlockSize = (ulonglong)local_fc8.Header.CompressionBlockSize;
  (this_00->CompressionBlocks).DataPtr = local_fc8.CompressionBlocks.DataPtr;
  (this_00->CompressionBlocks).ArrayNum = local_fc8.CompressionBlocks.ArrayNum;
  *(undefined4 *)&(this_00->CompressionBlocks).field_0xc = local_fc8.CompressionBlocks._12_4_;
  *(undefined4 *)&(this_00->CompressionBlockHashes).DataPtr =
       local_fc8.ChunkBlockSignatures.DataPtr._0_4_;
  *(undefined4 *)((longlong)&(this_00->CompressionBlockHashes).DataPtr + 4) =
       local_fc8.ChunkBlockSignatures.DataPtr._4_4_;
  (this_00->CompressionBlockHashes).ArrayNum = local_fc8.ChunkBlockSignatures.ArrayNum;
  *(undefined4 *)&(this_00->CompressionBlockHashes).field_0xc =
       local_fc8.ChunkBlockSignatures._12_4_;
  this_00->ContainerFlags = local_fc8.Header.ContainerFlags;
  (this_00->ContainerId).Id = local_fc8.Header.ContainerId.Id;
  this_00->MountOrder = local_13b8._0_4_;
  this_00->InstanceId = local_13b8._4_4_;
  if (local_fc8.ChunkPerfectHashSeeds.ArrayNum == 0) {
    pFVar37 = pFVar44;
    if (local_fc8.Header.TocEntryCount != 0) {
      do {
        iVar15 = (int)pFVar37;
        local_12f0 = TArrayView<FIoChunkId_const_,int>::operator[](&local_fc8.ChunkIds,iVar15);
        local_12e8 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                               (&local_fc8.ChunkOffsetLengths,iVar15);
        TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&>_>
                  ((TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
                    *)&(this_00->ChunkLookup).DefaultMap,
                   (TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&> *)local_13b8,
                   (bool *)&local_12f0);
        pFVar37 = (FContainer *)(ulonglong)(iVar15 + 1U);
      } while (iVar15 + 1U < local_fc8.Header.TocEntryCount);
    }
    EVar31 = Default;
  }
  else {
    for (piVar24 = local_fc8.ChunkIndicesWithoutPerfectHash.DataPtr;
        piVar24 !=
        local_fc8.ChunkIndicesWithoutPerfectHash.DataPtr +
        local_fc8.ChunkIndicesWithoutPerfectHash.ArrayNum; piVar24 = piVar24 + 1) {
      iVar15 = *piVar24;
      local_1300 = TArrayView<FIoChunkId_const_,int>::operator[](&local_fc8.ChunkIds,iVar15);
      local_12f8 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                             (&local_fc8.ChunkOffsetLengths,iVar15);
      TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&>_>
                ((TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
                  *)&(this_00->ChunkLookup).DefaultMap,
                 (TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&> *)(local_13b8 + 4)
                 ,(bool *)&local_1300);
    }
    EVar31 = Perfect;
    (this_00->ChunkLookup).PerfectMap.ChunkHashSeeds.DataPtr =
         local_fc8.ChunkPerfectHashSeeds.DataPtr;
    *(ulonglong *)&(this_00->ChunkLookup).PerfectMap.ChunkHashSeeds.ArrayNum =
         CONCAT44(local_fc8.ChunkPerfectHashSeeds._12_4_,local_fc8.ChunkPerfectHashSeeds.ArrayNum);
    (this_00->ChunkLookup).PerfectMap.Offsets.DataPtr = local_fc8.ChunkOffsetLengths.DataPtr;
    (this_00->ChunkLookup).PerfectMap.Offsets.ArrayNum = local_fc8.ChunkOffsetLengths.ArrayNum;
    *(int *)&(this_00->ChunkLookup).PerfectMap.Offsets.field_0xc =
         local_fc8.ChunkOffsetLengths._12_4_;
    (this_00->ChunkLookup).PerfectMap.ChunkIds.DataPtr = local_fc8.ChunkIds.DataPtr;
    (this_00->ChunkLookup).PerfectMap.ChunkIds.ArrayNum = local_fc8.ChunkIds.ArrayNum;
    *(int *)&(this_00->ChunkLookup).PerfectMap.ChunkIds.field_0xc = local_fc8.ChunkIds._12_4_;
  }
  (this_00->ChunkLookup).Type = EVar31;
  if ((int)local_fc8.Header.PartitionCount < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)local_fc8.Header.PartitionCount);
  }
  if ((this_00->Partitions).ArrayMax < (int)local_fc8.Header.PartitionCount) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,local_fc8.Header.PartitionCount,&(this_00->Partitions).AllocatorInstance,
               (this_00->Partitions).ArrayNum,&(this_00->Partitions).ArrayMax);
  }
  pFVar37 = local_1410;
  if (local_fc8.Header.PartitionCount != 0) {
    uVar47 = (ulonglong)(int)local_1408;
    local_13a8 = uVar47 * 2;
    do {
      uVar33 = local_13a8;
      local_1378 = pFVar37;
      local_1370 = 0;
      pTVar2 = &pFVar37->Partitions;
      local_1358 = 0;
      uStack_1368 = 0;
      local_1360 = 0;
      local_1350 = 0;
      pFVar38 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar38 <= (FScriptContainerElement *)&local_1378) &&
          ((FScriptContainerElement *)&local_1378 <
           pFVar38 + (longlong)(pFVar37->Partitions).ArrayMax * 0x30)) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      iVar15 = (pFVar37->Partitions).ArrayNum;
      piVar24 = &(pFVar37->Partitions).ArrayMax;
      if (iVar15 == *piVar24) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar2->AllocatorInstance,piVar24);
      }
      (pFVar37->Partitions).ArrayNum = iVar15 + 1;
      pFVar38 = (pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x30;
      *(FContainer **)pFVar38 = local_1378;
      *(undefined8 *)(pFVar38 + 8) = 0;
      *(undefined8 *)(pFVar38 + 8) = local_1370;
      *(undefined4 *)(pFVar38 + 0x10) = (undefined4)uStack_1368;
      *(undefined4 *)(pFVar38 + 0x14) = uStack_1368._4_4_;
      *(undefined8 *)(pFVar38 + 0x18) = local_1360;
      *(undefined8 *)(pFVar38 + 0x20) = local_1358;
      *(undefined8 *)(pFVar38 + 0x28) = local_1350;
      local_1350 = 0;
      uStack_1368 = 0;
      local_1370 = 0;
      local_e78.CurPos = local_e78.Base;
      if (local_e78.End <
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)((longlong)(longlong *)local_e78.Base + uVar33)) {
        TStringBuilderBase<wchar_t>::Extend(&local_e78,(longlong)(int)uVar47);
      }
      if ((int)uVar47 != 0) {
        pvVar20 = FGenericPlatformString::Memcpy(local_e78.CurPos,local_13e8,uVar33);
        local_e78.CurPos = (wchar_t *)(uVar33 + (longlong)pvVar20);
      }
      if ((int)pFVar44 != 0) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_e78,L"_s%d");
      }
      if (local_e78.End <
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)((longlong)((longlong)local_e78.CurPos + 8) + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_e78,5);
      }
      pvVar20 = FGenericPlatformString::Memcpy(local_e78.CurPos,L".ucas",10);
      local_e78.CurPos = (wchar_t *)((longlong)pvVar20 + 10);
      bVar13 = pFVar37->ContainerFlags >> 1 & 1;
      local_1318 = (pFVar37->CompressionMethods).AllocatorInstance.Data;
      bVar46 = bVar13 | 2;
      if ((pFVar37->ContainerFlags & Signed) == None) {
        bVar46 = bVar13;
      }
      iVar15 = (pFVar37->CompressionMethods).ArrayNum;
      if ((iVar15 < 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      uVar47 = pFVar37->CompressionBlockSize;
      local_1310 = iVar15;
      if ((uVar47 != (uVar47 & 0xffffffff)) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
         bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      local_1308 = (undefined4)uVar47;
      local_1348 = 0;
      local_1304 = bVar46;
      pIVar23 = FPlatformIoDispatcher::Get();
      pcVar30 = *(code **)((longlong)*pIVar23 + 0x10);
      if (local_e78.End <
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)((longlong)(longlong *)local_e78.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_e78,1);
      }
      *(undefined2 *)(longlong *)local_e78.CurPos = 0;
      (*pcVar30)(pIVar23,&local_fe8,local_e78.Base,&local_1318);
      __return_storage_ptr__ = local_13d8;
      if (local_fe8.ErrorCode != Ok) {
        local_1340.ErrorMessage.Chars = local_fe8.ErrorMessage.Chars;
        if (local_fe8.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(local_fe8.ErrorMessage.Chars + -4) =
               *(int *)(local_fe8.ErrorMessage.Chars + -4) + 1;
          UNLOCK();
        }
        local_1340.ErrorCode = local_fe8.ErrorCode;
        local_1340.SystemErrorCode = local_fe8.SystemErrorCode;
        FIoStatus::FIoStatus(&local_13d8->StatusValue);
        if ((local_1340.ErrorCode == Ok) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InStatus.IsOk()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                                ,0x102,L""), bVar49)) {
          pcVar30 = (code *)swi(3);
          pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                     *)(*pcVar30)();
          return pTVar22;
        }
        FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_1340);
        FIoStatus::~FIoStatus(&local_1340);
        FIoStatus::operator=(&local_fe8,Unknown);
        FIoStatus::~FIoStatus(&local_fe8);
        goto LAB_142a87e90;
      }
      if (local_e78.End <
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)((longlong)(longlong *)local_e78.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_e78,1);
      }
      *(undefined2 *)(longlong *)local_e78.CurPos = 0;
      ::FString::operator=((FString *)(pFVar38 + 8),local_e78.Base);
      if (local_fe8.ErrorCode != Ok) {
        StatusOrCrash(&local_fe8);
      }
      FIoStatus::operator=(&local_fe8,&FIoStatus::Unknown);
      *(undefined8 *)(pFVar38 + 0x18) = local_fd8;
      *(undefined8 *)(pFVar38 + 0x20) = local_1348;
      FIoStatus::operator=(&local_fe8,Unknown);
      FIoStatus::~FIoStatus(&local_fe8);
      uVar45 = (int)pFVar44 + 1;
      pFVar44 = (FContainer *)(ulonglong)uVar45;
      uVar47 = (ulonglong)local_1408 & 0xffffffff;
    } while (uVar45 < local_fc8.Header.PartitionCount);
  }
  CreateContainerHeaderChunkId(&local_ff8,&pFVar37->ContainerId);
  if ((pFVar37->ChunkLookup).Type == Default) {
LAB_142a87de3:
    local_1408 = TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                 ::Find((TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                         *)&(pFVar37->ChunkLookup).DefaultMap,&local_ff8);
  }
  else {
    uVar45 = (pFVar37->ChunkLookup).PerfectMap.ChunkIds.ArrayNum;
    if (uVar45 != 0) {
      uVar36 = (pFVar37->ChunkLookup).PerfectMap.ChunkHashSeeds.ArrayNum;
      uVar33 = FIoStoreTocResource::HashChunkIdWithSeed(0,&local_ff8);
      piVar24 = TArrayView<int_const_,int>::operator[]
                          ((TArrayView<int_const_,int> *)&pFVar37->ChunkLookup,
                           (int)(uVar33 % (ulonglong)uVar36));
      iVar15 = *piVar24;
      if (iVar15 != 0) {
        if (iVar15 < 0) {
          uVar36 = -iVar15 - 1;
          if (uVar45 <= uVar36) goto LAB_142a87de3;
        }
        else {
          uVar33 = FIoStoreTocResource::HashChunkIdWithSeed(iVar15,&local_ff8);
          uVar36 = (uint)(uVar33 % (ulonglong)uVar45);
        }
        pFVar25 = TArrayView<FIoChunkId_const_,int>::operator[]
                            (&(pFVar37->ChunkLookup).PerfectMap.ChunkIds,uVar36);
        if ((*(longlong *)pFVar25->Id == local_ff8.Id._0_8_) &&
           (*(int *)(pFVar25->Id + 8) == local_ff8.Id._8_4_)) {
          local_1408 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                                 (&(pFVar37->ChunkLookup).PerfectMap.Offsets,uVar36);
          goto LAB_142a87fe6;
        }
      }
    }
    local_1408 = (FIoOffsetAndLength *)0x0;
  }
LAB_142a87fe6:
  if (local_1408 == (FIoOffsetAndLength *)0x0) {
LAB_142a88c3e:
    __return_storage_ptr__ = local_13d8;
    FIoStatus::FIoStatus(&local_13d8->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(FContainer **)(__return_storage_ptr__->Value).Pad = pFVar37;
    local_1410 = (FContainer *)0x0;
LAB_142a88c62:
    FIoStatus::~FIoStatus(&local_13c8);
    uVar47 = (ulonglong)local_c58.TypeIndex;
    if ((2 < local_c58.TypeIndex) &&
       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar49)) {
      pcVar30 = (code *)swi(3);
      pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                 *)(*pcVar30)();
      return pTVar22;
    }
    pcVar30 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar47];
LAB_142a88ca5:
    (*pcVar30)(&local_c58);
  }
  else {
    local_13a8 = 0;
    local_1388 = 0;
    local_13f8.Data = (FScriptContainerElement *)0x0;
    uVar42 = CONCAT35(0,CONCAT41(CONCAT31(CONCAT21(CONCAT11(local_1408->OffsetAndLength[0],
                                                            local_1408->OffsetAndLength[1]),
                                                   local_1408->OffsetAndLength[2]),
                                          local_1408->OffsetAndLength[3]),
                                 local_1408->OffsetAndLength[4]));
    local_13f0 = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = pFVar37->CompressionBlockSize;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar42;
    uVar47 = SUB168(auVar9 / auVar6,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = pFVar37->CompressionBlockSize;
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         ((ulonglong)
          CONCAT41(CONCAT31(CONCAT21(CONCAT11(local_1408->OffsetAndLength[5],
                                              local_1408->OffsetAndLength[6]),
                                     local_1408->OffsetAndLength[7]),local_1408->OffsetAndLength[8])
                   ,local_1408->OffsetAndLength[9]) - 1) + uVar42;
    local_1380 = SUB168(auVar10 / auVar7,0);
    uVar45 = SUB164(auVar10 / auVar7,0);
    uVar36 = SUB164(auVar9 / auVar6,0);
    uVar41 = (uVar45 - uVar36) + 1;
    local_1398 = (FScriptContainerElement *)uVar47;
    if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
    }
    if (0 < (int)uVar41) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar41,&local_13f8,0,(int *)((longlong)&local_13f0 + 4));
    }
    pTVar1 = local_1380;
    uVar47 = uVar47 & 0xffffffff;
    lVar40 = local_1388;
    lVar32 = local_1388;
    if (uVar36 <= uVar45) {
      do {
        uVar36 = (uint)uVar47;
        uVar45 = uVar16;
        if ((int)uVar36 < (pFVar37->CompressionBlocks).ArrayNum) {
          uVar45 = ~uVar36 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar49)) {
          pcVar30 = (code *)swi(3);
          pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                     *)(*pcVar30)();
          return pTVar22;
        }
        pFVar26 = (pFVar37->CompressionBlocks).DataPtr;
        bVar46 = pFVar26[(int)uVar36].Data[0xb];
        local_1380 = &pFVar37->CompressionMethods;
        if (((pFVar37->CompressionMethods).ArrayNum <= (int)(uint)bVar46) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar49)) {
          pcVar30 = (code *)swi(3);
          pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                     *)(*pcVar30)();
          return pTVar22;
        }
        lVar4 = *(longlong *)((local_1380->AllocatorInstance).Data + (ulonglong)bVar46 * 8);
        local_1400[0] = *(uint *)(pFVar26[(int)uVar36].Data + 4) >> 8;
        lVar40 = lVar32;
        if ((((lVar4 != 0) && (lVar40 = lVar4, lVar32 != 0)) && (lVar32 != lVar4)) &&
           (bVar49 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7693791830353117508>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                                ,0x144,
                                "CompressionMethod == NAME_None || CompressionMethod == BlockCompressionMethod"
                               ), bVar49)) {
          pcVar30 = (code *)swi(3);
          pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                     *)(*pcVar30)();
          return pTVar22;
        }
        if (((local_13f8.Data <= (FScriptContainerElement *)local_1400) &&
            ((FScriptContainerElement *)local_1400 <
             local_13f8.Data + (longlong)local_13f0._4_4_ * 4)) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar49)) {
          pcVar30 = (code *)swi(3);
          pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                     *)(*pcVar30)();
          return pTVar22;
        }
        if ((int)local_13f0 == local_13f0._4_4_) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_13f8,(int *)((longlong)&local_13f0 + 4));
          local_13f0 = CONCAT44(local_13f0._4_4_,iVar15);
        }
        lVar32 = (longlong)(int)local_13f0;
        uVar47 = (ulonglong)(uVar36 + 1);
        local_13f0 = CONCAT44(local_13f0._4_4_,(int)local_13f0 + 1);
        *(uint *)(local_13f8.Data + lVar32 * 4) = local_1400[0];
        local_13a8 = local_13a8 + ((ulonglong)(local_1400[0] + 0xf) & 0xfffffff0);
        lVar32 = lVar40;
        cVar39 = local_1414;
      } while (uVar36 + 1 <= (uint)pTVar1);
    }
    pFVar26 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                        (&pFVar37->CompressionBlocks,(int)local_1398);
    local_1398 = (FScriptContainerElement *)(*(ulonglong *)pFVar26->Data & 0xffffffffff);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = pFVar37->PartitionSize;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_1398;
    uVar45 = SUB164(auVar11 / auVar8,0);
    lVar32 = (longlong)(int)uVar45;
    if (((SUB168(auVar11 / auVar8,0) != lVar32) || ((int)uVar45 < 0)) &&
       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar49
       )) {
      pcVar30 = (code *)swi(3);
      pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                 *)(*pcVar30)();
      return pTVar22;
    }
    local_1398 = (FScriptContainerElement *)((ulonglong)local_1398 % pFVar37->PartitionSize);
    if (((pFVar37->Partitions).ArrayNum <= (int)uVar45) &&
       (bVar49 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7693791830353117587>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                            ,0x193,"PartitionIndex < Partitions.Num()"), bVar49)) {
      pcVar30 = (code *)swi(3);
      pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                 *)(*pcVar30)();
      return pTVar22;
    }
    if ((int)uVar45 < (pFVar37->Partitions).ArrayNum) {
      uVar16 = ~uVar45 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar49)) {
      pcVar30 = (code *)swi(3);
      pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                 *)(*pcVar30)();
      return pTVar22;
    }
    pFVar38 = (pFVar37->Partitions).AllocatorInstance.Data;
    this_02 = FPlatformFileManager::Get();
    pIVar27 = FPlatformFileManager::GetPlatformFile(this_02);
    if (*(int *)(pFVar38 + lVar32 * 0x30 + 0x10) == 0) {
      pwVar34 = L"";
    }
    else {
      pwVar34 = *(wchar_t **)(pFVar38 + lVar32 * 0x30 + 8);
    }
    plVar28 = (longlong *)(**(code **)((longlong)*pIVar27 + 0xe8))(pIVar27,pwVar34,0);
    if (plVar28 == (longlong *)0x0) {
      pFVar29 = FIoStatusBuilder::FIoStatusBuilder(&local_b28,FileOpenFailed);
      uStack_12d0 = 0x1a;
      local_12d8 = L"Failed to open container \'";
      local_11c8._12_4_ = uStack_12cc;
      local_11c8.Size = 0x1a;
      local_11c8.DataPtr = L"Failed to open container \'";
      pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_11c8);
      if (local_e78.End <
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)((longlong)(longlong *)local_e78.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_e78,1);
      }
      *(undefined2 *)(longlong *)local_e78.CurPos = 0;
      local_12c8 = (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
                    *)local_e78.Base;
      if ((TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)local_e78.Base !=
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *)0x0) {
        sVar17 = wcslen(local_e78.Base);
        iVar43 = (int)sVar17;
      }
      local_11b8._12_4_ = uStack_12bc;
      local_11b8.Size = iVar43;
      local_11b8.DataPtr = (wchar_t *)local_12c8;
      iStack_12c0 = iVar43;
      pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_11b8);
      uStack_12b0 = 1;
      local_12b8 = L"\'";
      local_11a8._12_4_ = uStack_12ac;
      local_11a8.Size = 1;
      local_11a8.DataPtr = L"\'";
      pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_11a8);
      pFVar21 = FIoStatusBuilder::operator_FIoStatus(pFVar29,&local_1048);
      __return_storage_ptr__ = local_13d8;
      FIoStatus::FIoStatus(&local_13d8->StatusValue);
      if ((pFVar21->ErrorCode == Ok) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InStatus.IsOk()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                              ,0x102,L""), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar21);
      FIoStatus::~FIoStatus(pFVar21);
      FIoStatusBuilder::~FIoStatusBuilder(&local_b28);
LAB_142a88596:
      if (local_13f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_13f8.Data);
      }
      TDefaultDelete<UE::IoStore::FContainer>::operator()
                ((TDefaultDelete<UE::IoStore::FContainer> *)&local_1410,pFVar37);
      FIoStatus::~FIoStatus(&local_13c8);
      uVar47 = (ulonglong)local_c58.TypeIndex;
      if ((2 < local_c58.TypeIndex) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      pcVar30 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar47];
      goto LAB_142a88ca5;
    }
    cVar14 = (**(code **)(*plVar28 + 0x10))(plVar28,local_1398);
    if (cVar14 == '\0') {
      pFVar29 = FIoStatusBuilder::FIoStatusBuilder(&local_8f8,FileOpenFailed);
      uStack_12a0 = 0x29;
      local_12a8 = L"Failed to seek to container header offset";
      local_1198._12_4_ = uStack_129c;
      local_1198.Size = 0x29;
      local_1198.DataPtr = L"Failed to seek to container header offset";
      pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_1198);
      pFVar21 = FIoStatusBuilder::operator_FIoStatus(pFVar29,&local_1008);
      __return_storage_ptr__ = local_13d8;
      FIoStatus::FIoStatus(&local_13d8->StatusValue);
      if ((pFVar21->ErrorCode == Ok) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InStatus.IsOk()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                              ,0x102,L""), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar21);
      FIoStatus::~FIoStatus(pFVar21);
      FIoStatusBuilder::~FIoStatusBuilder(&local_8f8);
      (**(code **)*plVar28)(plVar28,1);
      goto LAB_142a88596;
    }
    FIoBuffer::FIoBuffer(&local_13d0,local_13a8);
    cVar14 = (**(code **)(*plVar28 + 0x20))
                       (plVar28,*(ulonglong *)local_13d0.CorePtr.Reference,
                        (ulonglong)
                        CONCAT14(*(uchar *)((longlong)local_13d0.CorePtr.Reference + 0x18),
                                 *(uint *)((longlong)local_13d0.CorePtr.Reference + 8)));
    pFVar12 = local_1408;
    if (cVar14 == '\0') {
      pFVar29 = FIoStatusBuilder::FIoStatusBuilder(&local_6c8,FileOpenFailed);
      uStack_1290 = 0x25;
      local_1298 = L"Failed to read container header chunk";
      local_1188._12_4_ = uStack_128c;
      local_1188.Size = 0x25;
      local_1188.DataPtr = L"Failed to read container header chunk";
      pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_1188);
      pFVar21 = FIoStatusBuilder::operator_FIoStatus(pFVar29,&local_1038);
      __return_storage_ptr__ = local_13d8;
      FIoStatus::FIoStatus(&local_13d8->StatusValue);
      if ((pFVar21->ErrorCode == Ok) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InStatus.IsOk()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                              ,0x102,L""), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar21);
      FIoStatus::~FIoStatus(pFVar21);
      FIoStatusBuilder::~FIoStatusBuilder(&local_6c8);
      if (local_13d0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_13d0.CorePtr.Reference);
LAB_142a887dd:
        LOCK();
        piVar24 = &((BufCore *)local_13d0.CorePtr.Reference)->NumRefs;
        iVar43 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar43 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_13d0.CorePtr.Reference);
          ::operator_delete((void *)local_13d0.CorePtr.Reference,0x20);
        }
      }
LAB_142a887fe:
      (**(code **)*plVar28)(plVar28,1);
      if (local_13f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_13f8.Data);
      }
LAB_142a87e90:
      if (pFVar37 != (FContainer *)0x0) {
        pFVar38 = (pFVar37->BaseFilePath).Data.AllocatorInstance.Data;
        if (pFVar38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar38);
        }
        pFVar38 = (pFVar37->CompressionMethods).AllocatorInstance.Data;
        if (pFVar38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar38);
        }
        DestructItems<UE::IoStore::FContainerPartition,int>
                  ((FContainerPartition *)(pFVar37->Partitions).AllocatorInstance.Data,
                   (pFVar37->Partitions).ArrayNum);
        pFVar38 = (pFVar37->Partitions).AllocatorInstance.Data;
        if (pFVar38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar38);
        }
        *(undefined4 *)&(pFVar37->ChunkLookup).DefaultMap.field_0x48 = 0;
        pvVar20 = *(void **)&(pFVar37->ChunkLookup).DefaultMap.field_0x40;
        if (pvVar20 != (void *)0x0) {
          FMemory::Free(pvVar20);
        }
        TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&(pFVar37->ChunkLookup).DefaultMap);
        uVar47 = (ulonglong)(pFVar37->TocStorage).Data.TypeIndex;
        if ((2 < uVar47) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar49)) {
          pcVar30 = (code *)swi(3);
          pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                     *)(*pcVar30)();
          return pTVar22;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar47])(pFVar37);
        ::operator_delete(pFVar37,0x248);
      }
      goto LAB_142a88c62;
    }
    if ((pFVar37->ContainerFlags & Encrypted) == None) {
      local_1278 = (FAESKey *)0x0;
      ppFVar48 = &local_1278;
      local_1270 = 0;
    }
    else {
      local_1288 = &pFVar37->EncryptionKey;
      uStack_1280 = 0x20;
      ppFVar48 = &local_1288;
    }
    FIoBuffer::FIoBuffer
              (&local_13b0,
               (ulonglong)
               CONCAT41(CONCAT31(CONCAT21(CONCAT11(local_1408->OffsetAndLength[5],
                                                   local_1408->OffsetAndLength[6]),
                                          local_1408->OffsetAndLength[7]),
                                 local_1408->OffsetAndLength[8]),local_1408->OffsetAndLength[9]));
    ::FName::FName((FName *)&local_1228,L"Oodle");
    local_1228._padding_ = (longlong)*ppFVar48;
    local_1228._padding_ = (longlong)ppFVar48[1];
    iVar43 = (int)local_13f0;
    local_1228.RawOffset = 0;
    local_1228.EncodedOffset = 0;
    local_1228.EncodedBlockSize.DataPtr = (uint *)0x0;
    local_1228.EncodedBlockSize._8_8_ = (ulonglong)(uint)local_1228.EncodedBlockSize._12_4_ << 0x20;
    local_1228.BlockHash.DataPtr = (uint *)0x0;
    local_1228.BlockHash.ArrayNum = 0;
    local_1228._padding_._0_4_ = (undefined4)pFVar37->CompressionBlockSize;
    local_1228.TotalRawSize =
         (ulong64)CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar12->OffsetAndLength[5],
                                                      pFVar12->OffsetAndLength[6]),
                                             pFVar12->OffsetAndLength[7]),
                                    pFVar12->OffsetAndLength[8]),pFVar12->OffsetAndLength[9]);
    local_1398 = local_13f8.Data;
    local_1228._padding_ = lVar40;
    if (((int)local_13f0 < 0) &&
       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar49)) {
      pcVar30 = (code *)swi(3);
      pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                 *)(*pcVar30)();
      return pTVar22;
    }
    uStack_1390 = CONCAT44(uStack_1390._4_4_,iVar43);
    local_1228.EncodedBlockSize.DataPtr = (uint *)local_1398;
    local_1228.EncodedBlockSize._8_8_ = uStack_1390;
    local_1398 = *(FScriptContainerElement **)local_13d0.CorePtr.Reference;
    uStack_1390 = (ulonglong)
                  CONCAT14(*(uchar *)((longlong)local_13d0.CorePtr.Reference + 0x18),
                           *(uint *)((longlong)local_13d0.CorePtr.Reference + 8));
    local_1268.Data = *(void **)local_13b0.CorePtr.Reference;
    local_1268.Size =
         (ulong64)CONCAT14(*(uchar *)((longlong)local_13b0.CorePtr.Reference + 0x18),
                           *(uint *)((longlong)local_13b0.CorePtr.Reference + 8));
    local_1178.Data = local_1398;
    local_1178.Size = uStack_1390;
    bVar49 = FIoChunkEncoding::Decode(&local_1228,&local_1178,&local_1268,None);
    if (!bVar49) {
      pFVar29 = FIoStatusBuilder::FIoStatusBuilder(&local_498,FileOpenFailed);
      uStack_1250 = 0x26;
      local_1258 = L"Failed to deserialize container header";
      local_1168._12_4_ = uStack_124c;
      local_1168.Size = 0x26;
      local_1168.DataPtr = L"Failed to deserialize container header";
      pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_1168);
      pFVar21 = FIoStatusBuilder::operator_FIoStatus(pFVar29,&local_1028);
      __return_storage_ptr__ = local_13d8;
      FIoStatus::FIoStatus(&local_13d8->StatusValue);
      if ((pFVar21->ErrorCode == Ok) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InStatus.IsOk()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                              ,0x102,L""), bVar49)) {
        pcVar30 = (code *)swi(3);
        pTVar22 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                   *)(*pcVar30)();
        return pTVar22;
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar21);
      FIoStatus::~FIoStatus(pFVar21);
      FIoStatusBuilder::~FIoStatusBuilder(&local_498);
      if (local_13b0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_13b0.CorePtr.Reference);
        LOCK();
        piVar24 = (int *)((longlong)local_13b0.CorePtr.Reference + 0xc);
        iVar43 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar43 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_13b0.CorePtr.Reference);
          ::operator_delete((void *)local_13b0.CorePtr.Reference,0x20);
        }
      }
      if (local_13d0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_13d0.CorePtr.Reference);
        goto LAB_142a887dd;
      }
      goto LAB_142a887fe;
    }
    uVar45 = *(uint *)((longlong)local_13b0.CorePtr.Reference + 8);
    uVar3 = *(uchar *)((longlong)local_13b0.CorePtr.Reference + 0x18);
    uVar5 = *(undefined8 *)local_13b0.CorePtr.Reference;
    local_1148._padding_ = 0;
    local_1148.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_1148.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_1148.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_1148.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_1148._40_8_ = 0;
    local_1148.ArSerializingDefaults = 0;
    local_1148.ArPortFlags = 0;
    local_1148.ArMaxSerializeSize = 0;
    local_1148.ArUEVer.FileVersionUE4 = 0;
    local_1148.ArUEVer.FileVersionUE5 = 0;
    local_1148.ArLicenseeUEVer = 0;
    local_1148.ArEngineVer.Major = 0;
    local_1148.ArEngineVer.Minor = 0;
    local_1148.ArEngineVer.Patch = 0;
    local_1148.ArEngineVer._6_2_ = 0;
    local_1148.ArEngineVer.Changelist = 0;
    local_1148.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_1148.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_1148.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_1148.SerializedProperty = (FProperty *)0x0;
    local_1148.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_1148.bCustomVersionsAreReset = false;
    local_1148._129_7_ = 0;
    local_1148.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_1148);
    local_10b8 = 0;
    local_1148._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_10a0 = 0x7fffffffffffffff;
    local_10b0 = uVar5;
    local_10a8 = (ulonglong)CONCAT14(uVar3,uVar45);
    FArchiveState::SetIsLoading(&local_1148,true);
    (**(code **)(local_1148._padding_ + 0x108))(&local_1148,0);
    ::operator<<((FArchive *)&local_1148,local_1330);
    if ((local_1148.ArIsError == 0) && (local_1148.ArIsCriticalError == 0)) {
      FArchive::~FArchive((FArchive *)&local_1148);
      TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>(&local_13b0.CorePtr);
      TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>(&local_13d0.CorePtr);
      (**(code **)*plVar28)(plVar28,1);
      if (local_13f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_13f8.Data);
      }
      goto LAB_142a88c3e;
    }
    pFVar29 = FIoStatusBuilder::FIoStatusBuilder(&local_268,FileOpenFailed);
    uStack_1240 = 0x24;
    local_1248 = L"Failed to serialize container header";
    local_1158._12_4_ = uStack_123c;
    local_1158.Size = 0x24;
    local_1158.DataPtr = L"Failed to serialize container header";
    pFVar29 = FIoStatusBuilder::operator<<(pFVar29,&local_1158);
    pFVar21 = FIoStatusBuilder::operator_FIoStatus(pFVar29,&local_1018);
    __return_storage_ptr__ = local_13d8;
    TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
    TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
              (local_13d8,pFVar21);
    FIoStatusBuilder::~FIoStatusBuilder(&local_268);
    FArchive::~FArchive((FArchive *)&local_1148);
    TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>(&local_13b0.CorePtr);
    TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>(&local_13d0.CorePtr);
    (**(code **)*plVar28)(plVar28,1);
    if (local_13f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13f8.Data);
    }
    if (pFVar37 != (FContainer *)0x0) {
      pFVar38 = (pFVar37->BaseFilePath).Data.AllocatorInstance.Data;
      if (pFVar38 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar38);
      }
      pFVar38 = (pFVar37->CompressionMethods).AllocatorInstance.Data;
      if (pFVar38 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar38);
      }
      DestructItems<UE::IoStore::FContainerPartition,int>
                ((FContainerPartition *)(pFVar37->Partitions).AllocatorInstance.Data,
                 (pFVar37->Partitions).ArrayNum);
      pFVar38 = (pFVar37->Partitions).AllocatorInstance.Data;
      if (pFVar38 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar38);
      }
      *(undefined4 *)&(pFVar37->ChunkLookup).DefaultMap.field_0x48 = 0;
      pvVar20 = *(void **)&(pFVar37->ChunkLookup).DefaultMap.field_0x40;
      if (pvVar20 != (void *)0x0) {
        FMemory::Free(pvVar20);
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&(pFVar37->ChunkLookup).DefaultMap);
      FIoStoreTocResourceStorage::~FIoStoreTocResourceStorage(&pFVar37->TocStorage);
      ::operator_delete(pFVar37,0x248);
    }
    FIoStatus::~FIoStatus(&local_13c8);
    TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
    ::
    ~TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
              (&local_c58);
  }
  if (local_fc8.LegacyChunkMetas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fc8.LegacyChunkMetas.AllocatorInstance.Data);
  }
  if (local_fc8.CompressionMethods.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fc8.CompressionMethods.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e78);
  pFVar37 = local_13e8;
joined_r0x000142a88ce3:
  if (pFVar37 != (FContainer *)0x0) {
    FMemory::Free(pFVar37);
  }
  if (cVar39 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_13e0);
  FLLMScope::~FLLMScope(&local_1418);
  return __return_storage_ptr__;
}

