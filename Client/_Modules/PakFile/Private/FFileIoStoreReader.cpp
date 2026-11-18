// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 12

// FFileIoStoreReader @ 142a51ac0

FFileIoStoreReader * __thiscall
FFileIoStoreReader::FFileIoStoreReader
          (FFileIoStoreReader *this,IPlatformFileIoStore *param_1,FFileIoStoreStats *param_2)

{
  FFileIoStoreContainerFile *pFVar1;
  
  this->PlatformImpl = param_1;
  (this->PerfectHashMap).TocChunkHashSeeds.DataPtr = (int *)0x0;
  (this->PerfectHashMap).TocChunkHashSeeds.ArrayNum = 0;
  (this->PerfectHashMap).TocChunkIds.DataPtr = (FIoChunkId *)0x0;
  (this->PerfectHashMap).TocChunkIds.ArrayNum = 0;
  (this->PerfectHashMap).TocOffsetAndLengths.DataPtr = (FIoOffsetAndLength *)0x0;
  (this->PerfectHashMap).TocOffsetAndLengths.ArrayNum = 0;
  *(undefined8 *)&this->TocImperfectHashMapFallback = 0;
  *(undefined8 *)&(this->TocImperfectHashMapFallback).field_0x8 = 0;
  *(undefined8 *)&(this->TocImperfectHashMapFallback).field_0x20 = 0;
  this->Stats = param_2;
  *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x28 = 0;
  *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x2c = 0x80;
  *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x34 = 0;
  *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TocImperfectHashMapFallback).field_0x40 = 0;
  *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x48 = 0;
  (this->ContainerFile).CompressionMethods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContainerFile).CompressionMethods.ArrayNum = 0;
  (this->ContainerFile).CompressionMethods.ArrayMax = 0;
  (this->ContainerFile).CompressionBlocks.DataPtr = (FIoStoreTocCompressedBlockEntry *)0x0;
  (this->ContainerFile).CompressionBlocks.ArrayNum = 0;
  (this->ContainerFile).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContainerFile).FilePath.Data.ArrayNum = 0;
  (this->ContainerFile).FilePath.Data.ArrayMax = 0;
  (this->ContainerFile).EncryptionKeyGuid.A = 0;
  (this->ContainerFile).EncryptionKeyGuid.B = 0;
  (this->ContainerFile).EncryptionKeyGuid.C = 0;
  (this->ContainerFile).EncryptionKeyGuid.D = 0;
  (this->ContainerFile).PartitionSize = 0;
  (this->ContainerFile).CompressionBlockSize = 0;
  (this->ContainerFile).EncryptionKey.Key[0] = '\0';
  (this->ContainerFile).EncryptionKey.Key[1] = '\0';
  (this->ContainerFile).EncryptionKey.Key[2] = '\0';
  (this->ContainerFile).EncryptionKey.Key[3] = '\0';
  (this->ContainerFile).EncryptionKey.Key[4] = '\0';
  (this->ContainerFile).EncryptionKey.Key[5] = '\0';
  (this->ContainerFile).EncryptionKey.Key[6] = '\0';
  (this->ContainerFile).EncryptionKey.Key[7] = '\0';
  pFVar1 = &this->ContainerFile;
  (pFVar1->EncryptionKey).Key[8] = '\0';
  (pFVar1->EncryptionKey).Key[9] = '\0';
  (pFVar1->EncryptionKey).Key[10] = '\0';
  (pFVar1->EncryptionKey).Key[0xb] = '\0';
  (pFVar1->EncryptionKey).Key[0xc] = '\0';
  (pFVar1->EncryptionKey).Key[0xd] = '\0';
  (pFVar1->EncryptionKey).Key[0xe] = '\0';
  (pFVar1->EncryptionKey).Key[0xf] = '\0';
  pFVar1 = &this->ContainerFile;
  (pFVar1->EncryptionKey).Key[0x10] = '\0';
  (pFVar1->EncryptionKey).Key[0x11] = '\0';
  (pFVar1->EncryptionKey).Key[0x12] = '\0';
  (pFVar1->EncryptionKey).Key[0x13] = '\0';
  (pFVar1->EncryptionKey).Key[0x14] = '\0';
  (pFVar1->EncryptionKey).Key[0x15] = '\0';
  (pFVar1->EncryptionKey).Key[0x16] = '\0';
  (pFVar1->EncryptionKey).Key[0x17] = '\0';
  pFVar1 = &this->ContainerFile;
  (pFVar1->EncryptionKey).Key[0x18] = '\0';
  (pFVar1->EncryptionKey).Key[0x19] = '\0';
  (pFVar1->EncryptionKey).Key[0x1a] = '\0';
  (pFVar1->EncryptionKey).Key[0x1b] = '\0';
  (pFVar1->EncryptionKey).Key[0x1c] = '\0';
  (pFVar1->EncryptionKey).Key[0x1d] = '\0';
  (pFVar1->EncryptionKey).Key[0x1e] = '\0';
  (pFVar1->EncryptionKey).Key[0x1f] = '\0';
  (this->ContainerFile).BlockSignatureTable.DataPtr = (FSHAHash *)0x0;
  (this->ContainerFile).BlockSignatureTable.ArrayNum = 0;
  (this->ContainerFile).Partitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContainerFile).Partitions.ArrayNum = 0;
  (this->ContainerFile).Partitions.ArrayMax = 0;
  (this->ContainerFile).ContainerInstanceId = 0;
  (this->DataContainer).Data.TypeIndex = '\0';
  this->bClosed = false;
  this->bHasPerfectHashMap = false;
  (this->ContainerId).Id = 0xffffffffffffffff;
  return this;
}

// ~FFileIoStoreReader @ 142a560f0

void __thiscall FFileIoStoreReader::~FFileIoStoreReader(FFileIoStoreReader *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FIoStatus local_18;
  
  Close(this,&local_18);
  FIoStatus::~FIoStatus(&local_18);
  uVar5 = (ulonglong)(this->DataContainer).Data.TypeIndex;
  if (2 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&this->DataContainer);
  DestructItems<FFileIoStoreContainerFilePartition,int>
            ((FFileIoStoreContainerFilePartition *)
             (this->ContainerFile).Partitions.AllocatorInstance.Data,
             (this->ContainerFile).Partitions.ArrayNum);
  pFVar1 = (this->ContainerFile).Partitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContainerFile).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContainerFile).CompressionMethods.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TocImperfectHashMapFallback).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TocImperfectHashMapFallback);
  return;
}

// Close @ 142a640a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a643c0) */
/* WARNING: Removing unreachable block (ram,0x000142a643d5) */

FIoStatus * __thiscall
FFileIoStoreReader::Close(FFileIoStoreReader *this,FIoStatus *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  TArray<FFileIoStoreContainerFilePartition,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FIoDispatcherFilesystemStats *this_00;
  code *pcVar9;
  FFileIoStoreContainerFile *pFVar10;
  TSharedString<wchar_t> TVar11;
  bool bVar12;
  ulong64 uVar13;
  FIoStatus *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  FIoStoreTocCompressedBlockEntry *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  FSHAHash *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  FIoStoreTocResourceStorage local_168;
  ulonglong local_40;
  
  TVar11.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (this->bClosed == false) {
    pFVar16 = (this->ContainerFile).Partitions.AllocatorInstance.Data;
    iVar6 = (this->ContainerFile).Partitions.ArrayNum;
    pFVar17 = pFVar16 + (longlong)iVar6 * 0x38;
    while( true ) {
      if ((this->ContainerFile).Partitions.ArrayNum != iVar6) {
        local_248[0] = 0;
        `TCheckedPointerIterator<FFileIoStoreContainerFilePartition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_248);
      }
      if (pFVar16 == pFVar17) break;
      (**(code **)((longlong)*this->PlatformImpl + 0x18))(this->PlatformImpl,*(undefined8 *)pFVar16)
      ;
      pFVar16 = pFVar16 + 0x38;
    }
    uVar7 = *(uint *)&(this->TocImperfectHashMapFallback).field_0x48;
    lVar15 = 0;
    this_00 = &this->Stats->Stats;
    if (1 < uVar7) {
      lVar15 = (longlong)(int)uVar7 << 2;
    }
    iVar6 = *(int *)&(this->TocImperfectHashMapFallback).field_0x2c;
    puVar2 = &(this->TocImperfectHashMapFallback).field_0xc;
    iVar8 = *(int *)puVar2;
    uVar13 = FIoStoreTocResourceStorage::GetAllocatedSize(&this->DataContainer);
    UE::FIoDispatcherFilesystemStats::OnTocUnmounted
              (this_00,uVar13 + (longlong)iVar8 * 0x20 +
                                (ulonglong)((iVar6 + 0x1fU >> 5) << 2) + lVar15);
    uStack_230 = 0;
    local_238 = 0;
    uStack_220 = 0;
    local_228 = 0;
    uStack_210 = 0;
    (this->PerfectHashMap).TocChunkHashSeeds.DataPtr = (int *)0x0;
    *(undefined8 *)&(this->PerfectHashMap).TocChunkHashSeeds.ArrayNum = 0;
    local_218 = 0;
    (this->PerfectHashMap).TocChunkIds.DataPtr = (FIoChunkId *)0x0;
    *(undefined8 *)&(this->PerfectHashMap).TocChunkIds.ArrayNum = 0;
    (this->PerfectHashMap).TocOffsetAndLengths.DataPtr = (FIoOffsetAndLength *)0x0;
    *(undefined8 *)&(this->PerfectHashMap).TocOffsetAndLengths.ArrayNum = 0;
    bVar12 = 1 < *(int *)&(this->TocImperfectHashMapFallback).field_0x48;
    if (!bVar12) {
      TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
                        *)&this->TocImperfectHashMapFallback);
    }
    *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x8 = 0;
    if (*(int *)&(this->TocImperfectHashMapFallback).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,0,(ForAnyElementType *)&this->TocImperfectHashMapFallback,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x34 = 0;
    iVar6 = *(int *)&(this->TocImperfectHashMapFallback).field_0x2c;
    *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x28 = 0;
    if ((iVar6 < 0) || (0x80 < iVar6)) {
      *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->TocImperfectHashMapFallback).field_0x10,0);
    }
    if (bVar12) {
      *(undefined4 *)&(this->TocImperfectHashMapFallback).field_0x48 = 1;
      TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
                *)&this->TocImperfectHashMapFallback);
    }
    local_208 = 0;
    uStack_1e0 = 0;
    local_240 = 0;
    pTVar3 = &(this->ContainerFile).CompressionMethods;
    local_198 = 0;
    uStack_188 = 0;
    local_170 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = (FIoStoreTocCompressedBlockEntry *)0x0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_190 = (FSHAHash *)0x0;
    local_180 = 0;
    local_178 = 0;
    (this->ContainerFile).PartitionSize = 0;
    (this->ContainerFile).CompressionBlockSize = 0;
    if (pTVar3 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_1f8) {
      pFVar16 = (pTVar3->AllocatorInstance).Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->ContainerFile).CompressionMethods.ArrayNum = 0;
      (this->ContainerFile).CompressionMethods.ArrayMax = 0;
    }
    local_1f0 = 0;
    local_1f8 = 0;
    pFVar4 = &(this->ContainerFile).FilePath;
    (this->ContainerFile).CompressionBlocks.DataPtr = local_1e8;
    *(undefined8 *)&(this->ContainerFile).CompressionBlocks.ArrayNum = uStack_1e0;
    if (pFVar4 != (FString *)&local_1d8) {
      pFVar16 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ContainerFile).FilePath.Data.ArrayNum = 0;
      (this->ContainerFile).FilePath.Data.ArrayMax = 0;
      local_1d8 = 0;
      local_1d0 = 0;
    }
    pTVar5 = &(this->ContainerFile).Partitions;
    (this->ContainerFile).EncryptionKeyGuid.A = (undefined4)local_1c8;
    (this->ContainerFile).EncryptionKeyGuid.B = local_1c8._4_4_;
    (this->ContainerFile).EncryptionKeyGuid.C = (undefined4)uStack_1c0;
    (this->ContainerFile).EncryptionKeyGuid.D = uStack_1c0._4_4_;
    (this->ContainerFile).ContainerFlags = (EIoContainerFlags)local_240;
    (this->ContainerFile).EncryptionKey.Key[0] = '\0';
    (this->ContainerFile).EncryptionKey.Key[1] = '\0';
    (this->ContainerFile).EncryptionKey.Key[2] = '\0';
    (this->ContainerFile).EncryptionKey.Key[3] = '\0';
    (this->ContainerFile).EncryptionKey.Key[4] = '\0';
    (this->ContainerFile).EncryptionKey.Key[5] = '\0';
    (this->ContainerFile).EncryptionKey.Key[6] = '\0';
    (this->ContainerFile).EncryptionKey.Key[7] = '\0';
    pFVar10 = &this->ContainerFile;
    (pFVar10->EncryptionKey).Key[8] = '\0';
    (pFVar10->EncryptionKey).Key[9] = '\0';
    (pFVar10->EncryptionKey).Key[10] = '\0';
    (pFVar10->EncryptionKey).Key[0xb] = '\0';
    (pFVar10->EncryptionKey).Key[0xc] = '\0';
    (pFVar10->EncryptionKey).Key[0xd] = '\0';
    (pFVar10->EncryptionKey).Key[0xe] = '\0';
    (pFVar10->EncryptionKey).Key[0xf] = '\0';
    pFVar10 = &this->ContainerFile;
    (pFVar10->EncryptionKey).Key[0x10] = '\0';
    (pFVar10->EncryptionKey).Key[0x11] = '\0';
    (pFVar10->EncryptionKey).Key[0x12] = '\0';
    (pFVar10->EncryptionKey).Key[0x13] = '\0';
    (pFVar10->EncryptionKey).Key[0x14] = '\0';
    (pFVar10->EncryptionKey).Key[0x15] = '\0';
    (pFVar10->EncryptionKey).Key[0x16] = '\0';
    (pFVar10->EncryptionKey).Key[0x17] = '\0';
    pFVar10 = &this->ContainerFile;
    (pFVar10->EncryptionKey).Key[0x18] = '\0';
    (pFVar10->EncryptionKey).Key[0x19] = '\0';
    (pFVar10->EncryptionKey).Key[0x1a] = '\0';
    (pFVar10->EncryptionKey).Key[0x1b] = '\0';
    (pFVar10->EncryptionKey).Key[0x1c] = '\0';
    (pFVar10->EncryptionKey).Key[0x1d] = '\0';
    (pFVar10->EncryptionKey).Key[0x1e] = '\0';
    (pFVar10->EncryptionKey).Key[0x1f] = '\0';
    (this->ContainerFile).BlockSignatureTable.DataPtr = local_190;
    *(undefined8 *)&(this->ContainerFile).BlockSignatureTable.ArrayNum = uStack_188;
    if (pTVar5 != (TArray<FFileIoStoreContainerFilePartition,TSizedDefaultAllocator<32>_> *)
                  &local_180) {
      DestructItems<FFileIoStoreContainerFilePartition,int>
                ((FFileIoStoreContainerFilePartition *)(pTVar5->AllocatorInstance).Data,
                 (this->ContainerFile).Partitions.ArrayNum);
      pFVar16 = (pTVar5->AllocatorInstance).Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->ContainerFile).Partitions.ArrayNum = 0;
      (this->ContainerFile).Partitions.ArrayMax = 0;
    }
    (this->ContainerFile).ContainerInstanceId = 0;
    DestructItems<FFileIoStoreContainerFilePartition,int>
              ((FFileIoStoreContainerFilePartition *)0x0,0);
    memset(&local_168,0,0x128);
    FIoStoreTocResourceStorage::operator=(&this->DataContainer,&local_168);
    if ((2 < local_168.Data.TypeIndex) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FIoStatus *)(*pcVar9)();
      return pFVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_168.Data.TypeIndex] !=
        UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_168.Data.TypeIndex])(&local_168);
    }
    (this->ContainerId).Id = 0xffffffffffffffff;
    this->Order = -1;
    this->bClosed = true;
    TVar11 = FIoStatus::Ok.ErrorMessage;
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar11.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar1 = TVar11.Chars + -4;
      *(int *)pwVar1 = *(int *)pwVar1 + 1;
      UNLOCK();
    }
  }
  else {
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar11.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar1 = TVar11.Chars + -4;
      *(int *)pwVar1 = *(int *)pwVar1 + 1;
      UNLOCK();
    }
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  return __return_storage_ptr__;
}

// DoesChunkExist @ 142a6a7e0

bool __thiscall FFileIoStoreReader::DoesChunkExist(FFileIoStoreReader *this,FIoChunkId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FIoOffsetAndLength *pFVar4;
  
  if (this->bClosed != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bClosed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x328,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = FindChunkInternal(this,param_1);
  return pFVar4 != (FIoOffsetAndLength *)0x0;
}

// FindChunkInternal @ 142a6e550

FIoOffsetAndLength * __thiscall
FFileIoStoreReader::FindChunkInternal(FFileIoStoreReader *this,FIoChunkId *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  int *piVar4;
  FIoOffsetAndLength *pFVar5;
  FIoChunkId *pFVar6;
  uint uVar7;
  
  if (this->bHasPerfectHashMap == false) {
    pFVar5 = TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
             ::Find((TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                     *)&this->TocImperfectHashMapFallback,param_1);
    return pFVar5;
  }
  uVar1 = (this->PerfectHashMap).TocChunkIds.ArrayNum;
  if (uVar1 != 0) {
    uVar7 = (this->PerfectHashMap).TocChunkHashSeeds.ArrayNum;
    uVar3 = FIoStoreTocResource::HashChunkIdWithSeed(0,param_1);
    piVar4 = TArrayView<int_const_,int>::operator[]
                       (&(this->PerfectHashMap).TocChunkHashSeeds,(int)(uVar3 % (ulonglong)uVar7));
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      if (iVar2 < 0) {
        uVar7 = -iVar2 - 1;
        if (uVar1 <= uVar7) {
          pFVar5 = TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                   ::Find((TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
                           *)&this->TocImperfectHashMapFallback,param_1);
          return pFVar5;
        }
      }
      else {
        uVar3 = FIoStoreTocResource::HashChunkIdWithSeed(iVar2,param_1);
        uVar7 = (uint)(uVar3 % (ulonglong)uVar1);
      }
      pFVar6 = TArrayView<FIoChunkId_const_,int>::operator[]
                         (&(this->PerfectHashMap).TocChunkIds,uVar7);
      if ((*(longlong *)pFVar6->Id == *(longlong *)param_1->Id) &&
         (*(int *)(pFVar6->Id + 8) == *(int *)(param_1->Id + 8))) {
        pFVar5 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                           (&(this->PerfectHashMap).TocOffsetAndLengths,uVar7);
        return pFVar5;
      }
    }
  }
  return (FIoOffsetAndLength *)0x0;
}

// GetMappedContainerFileHandle @ 142a754d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IMappedFileHandle * __thiscall
FFileIoStoreReader::GetMappedContainerFileHandle(FFileIoStoreReader *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  IMappedFileHandle *pIVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  IMappedFileHandle *pIVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  IMappedFileHandle *pIVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  IMappedFileHandle *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  IMappedFileHandle *local_50 [3];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  pIVar9 = (IMappedFileHandle *)0x0;
  local_58 = 0;
  if ((this->bClosed != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bClosed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x342,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pIVar9 = (IMappedFileHandle *)(*pcVar6)();
    return pIVar9;
  }
  iVar2 = (this->ContainerFile).Partitions.ArrayNum;
  uVar16 = (uint)(param_1 / (this->ContainerFile).PartitionSize);
  uVar12 = 0;
  if ((int)uVar16 < iVar2) {
    uVar12 = ~uVar16 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_78 = (longlong)(int)uVar16;
    local_70 = (longlong)iVar2;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pIVar9 = (IMappedFileHandle *)(*pcVar6)();
      return pIVar9;
    }
  }
  pFVar3 = (this->ContainerFile).Partitions.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar16 * 0x38 + 0x28;
  if ((*(longlong *)(pFVar3 + (longlong)(int)uVar16 * 0x38 + 0x28) == 0) &&
     (((this->ContainerFile).ContainerFlags & Encrypted) == None)) {
    this_00 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
    if (*(int *)(pFVar3 + (longlong)(int)uVar16 * 0x38 + 0x20) == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = *(wchar_t **)(pFVar3 + (longlong)(int)uVar16 * 0x38 + 0x18);
    }
    local_78 = 0;
    (**(code **)((longlong)*pIVar10 + 0x1b0))(pIVar10,local_50,pwVar17,0);
    uVar14 = (ulonglong)local_38;
    if ((2 < uVar14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pIVar9 = (IMappedFileHandle *)(*pcVar6)();
      return pIVar9;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar14] == '\0') {
      if ((local_38 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pIVar9 = (IMappedFileHandle *)(*pcVar6)();
        return pIVar9;
      }
      pIVar11 = local_50[0];
      local_68 = local_50[0];
      local_50[0] = (IMappedFileHandle *)0x0;
      if ((2 < local_38) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pIVar9 = (IMappedFileHandle *)(*pcVar6)();
        return pIVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_38])(local_50);
      pFVar13 = (FScriptContainerElement *)&local_68;
      local_38 = 2;
      bVar7 = false;
      bVar8 = true;
      pIVar15 = pIVar11;
    }
    else {
      pFVar13 = (FScriptContainerElement *)&local_60;
      local_60 = (undefined8 *)0x0;
      bVar7 = true;
      bVar8 = false;
      pIVar11 = pIVar9;
      pIVar15 = local_68;
    }
    if (pFVar1 != pFVar13) {
      puVar4 = *(undefined8 **)pFVar1;
      *(IMappedFileHandle **)pFVar1 = pIVar11;
      *(longlong *)pFVar13 = 0;
      pIVar15 = local_68;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        pIVar15 = local_68;
      }
    }
    puVar4 = local_60;
    if ((bVar8) && (pIVar15 != (IMappedFileHandle *)0x0)) {
      (**(code **)pIVar15->_padding_)(pIVar15,1);
    }
    if ((bVar7) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar14 = (ulonglong)local_38;
    if ((2 < local_38) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pIVar9 = (IMappedFileHandle *)(*pcVar6)();
      return pIVar9;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_50);
    }
  }
  if ((*(longlong *)(pFVar3 + (longlong)(int)uVar16 * 0x38 + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Partition.FileSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x34e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pIVar9 = (IMappedFileHandle *)(*pcVar6)();
    return pIVar9;
  }
  pIVar11 = ::operator_new(0x18);
  if (pIVar11 != (IMappedFileHandle *)0x0) {
    lVar5 = *(longlong *)pFVar1;
    IMappedFileHandle::IMappedFileHandle
              (pIVar11,*(ulong64 *)(pFVar3 + (longlong)(int)uVar16 * 0x38 + 8));
    pIVar11[1]._padding_ = lVar5;
    pIVar11->_padding_ = (longlong)&___7FMappedFileProxy__6B_;
    pIVar9 = pIVar11;
  }
  return pIVar9;
}

// GetSizeForChunk @ 142a793d0

TIoStatusOr<unsigned___int64> * __thiscall
FFileIoStoreReader::GetSizeForChunk
          (FFileIoStoreReader *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  code *pcVar6;
  bool bVar7;
  TIoStatusOr<unsigned___int64> *pTVar8;
  FIoOffsetAndLength *pFVar9;
  FIoStatus *pFVar10;
  FIoStatus local_18;
  
  if (this->bClosed != false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bClosed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x32e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TIoStatusOr<unsigned___int64> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pFVar9 = FindChunkInternal(this,param_1);
  if (pFVar9 != (FIoOffsetAndLength *)0x0) {
    uVar1 = pFVar9->OffsetAndLength[6];
    uVar2 = pFVar9->OffsetAndLength[5];
    uVar3 = pFVar9->OffsetAndLength[7];
    uVar4 = pFVar9->OffsetAndLength[8];
    uVar5 = pFVar9->OffsetAndLength[9];
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(ulonglong *)(__return_storage_ptr__->Value).Pad =
         (ulonglong)CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4),uVar5);
    return __return_storage_ptr__;
  }
  pFVar10 = FIoStatus::FIoStatus(&local_18,NotFound);
  TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar10);
  return __return_storage_ptr__;
}

// GetTocAllocatedSize @ 142a79f20

ulong64 __thiscall FFileIoStoreReader::GetTocAllocatedSize(FFileIoStoreReader *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)&(this->TocImperfectHashMapFallback).field_0x48;
  if (uVar1 < 2) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->TocImperfectHashMapFallback).field_0x2c;
  iVar3 = *(int *)&(this->TocImperfectHashMapFallback).field_0xc;
  uVar4 = FIoStoreTocResourceStorage::GetAllocatedSize(&this->DataContainer);
  return uVar4 + (longlong)iVar3 * 0x20 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar5;
}

// Initialize @ 142a7c980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __thiscall
FFileIoStoreReader::Initialize
          (FFileIoStoreReader *this,FIoStatus *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  TMap<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
  *this_00;
  wchar_t *pwVar1;
  int *piVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FIoOffsetAndLength *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  IPlatformFileIoStore *pIVar9;
  FIoDispatcherFilesystemStats *this_01;
  code *pcVar10;
  TSharedString<wchar_t> TVar11;
  TAtomic<unsigned_int> TVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  TEventRef<unsigned_int> TVar22;
  size_t sVar23;
  FPlatformFileManager *this_02;
  FIoStatus *pFVar24;
  FWriteBuffer *pFVar25;
  void *pvVar26;
  FIoStatusBuilder *pFVar27;
  ulong64 uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  uint *puVar34;
  FFileIoStoreReader *pFVar35;
  undefined1 auStackY_b48 [32];
  FIoStatus local_ad8;
  FString local_ac8;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  FFileIoStoreReader *local_aa0;
  undefined1 local_a98 [16];
  wchar_t *local_a88;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  FIoStoreTocResourceStorage *local_a78;
  uint uStack_a70;
  undefined4 uStack_a6c;
  wchar_t *local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  FIoChunkId *local_a58;
  FIoOffsetAndLength *local_a50;
  FIoChunkId *local_a48;
  FIoOffsetAndLength *local_a40;
  wchar_t *local_a38;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  wchar_t *local_a28;
  uint uStack_a20;
  undefined4 uStack_a1c;
  wchar_t *local_a18;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  FName local_a08;
  FName local_a00;
  FName local_9f8;
  FName local_9f0;
  FName local_9e8;
  FName local_9e0;
  TStringView<wchar_t> local_9d8;
  TStringView<wchar_t> local_9c8;
  TStringView<wchar_t> local_9b8;
  FString local_9a8;
  TStringView<wchar_t> local_998;
  TStringView<wchar_t> local_988;
  TStringView<wchar_t> local_978;
  undefined4 *local_968;
  longlong local_960;
  FIoStoreTocResourceView local_958;
  TStringBuilderBase<wchar_t> local_808;
  FIoStoreTocResourceStorage local_7e8;
  FIoStoreTocResourceStorage local_5e8;
  FIoStatusBuilder local_4b8;
  FIoStatusBuilder local_288;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_b48;
  local_aa0 = this;
  uVar29 = 0;
  uVar21 = 0;
  uVar20 = 0;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_ab8 = 0;
    TVar22 = (TEventRef<unsigned_int>)&local_ab8;
  }
  else {
    ::FName::FName(&local_9f8,param_1);
    TVar22 = FStringTrace::GetNameRef(&local_9f0);
  }
  uVar5 = *(undefined8 *)TVar22;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_ab0 = 0;
    TVar22 = (TEventRef<unsigned_int>)&local_ab0;
  }
  else {
    ::FName::FName(&local_9e8,L"FileIoStoreReader");
    TVar22 = FStringTrace::GetNameRef(&local_9e0);
  }
  uVar6 = *(undefined8 *)TVar22;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_aa8 = 0;
    TVar22 = (TEventRef<unsigned_int>)&local_aa8;
  }
  else {
    ::FName::FName(&local_a08,param_1);
    TVar22 = FStringTrace::GetNameRef(&local_a00);
  }
  uVar7 = *(undefined8 *)TVar22;
  bVar16 = false;
  bVar13 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_968);
    bVar16 = true;
    bVar13 = true;
    *local_968 = (int)uVar5;
    local_968[1] = (int)uVar6;
    local_968[2] = (int)uVar7;
    *(undefined8 *)(local_960 + 0x28) = *(undefined8 *)(local_960 + 0x20);
  }
  uVar30 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar23 = wcslen(param_1);
    uVar21 = (uint)sVar23;
  }
  uVar17 = uVar21;
  if (5 < (int)uVar21) {
    uVar17 = 5;
  }
  uVar32 = uVar30;
  if (0 < (int)uVar17) {
    uVar32 = uVar17;
  }
  if ((uVar32 == 5) &&
     (iVar18 = FGenericPlatformStricmp::Strnicmp
                         (L".utoc",param_1 + ((longlong)(int)uVar21 - (longlong)(int)uVar32),5),
     iVar18 == 0)) {
    if ((int)(uVar21 - 5) < (int)uVar21) {
      uVar21 = uVar21 - 5;
    }
    uVar17 = uVar30;
    if (0 < (int)uVar21) {
      uVar17 = uVar21;
    }
    ::FString::AssignRange(&(this->ContainerFile).FilePath,param_1,uVar17);
    this_02 = FPlatformFileManager::Get();
    FPlatformFileManager::GetPlatformFile(this_02);
    if (3 < (byte)LogIoDispatcher._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
    }
    FIoStoreTocResourceView::FIoStoreTocResourceView(&local_958);
    local_5e8.Data.TypeIndex = 0;
    FIoStoreTocResourceView::Read(&local_ad8,param_1,Default,&local_958,&local_5e8);
    uVar21 = local_958.Header.PartitionCount;
    if (local_ad8.ErrorCode == Ok) {
      piVar2 = &(this->ContainerFile).Partitions.ArrayNum;
      (this->ContainerFile).PartitionSize = local_958.Header.PartitionSize;
      iVar18 = *piVar2;
      if (iVar18 < (int)local_958.Header.PartitionCount) {
        iVar18 = local_958.Header.PartitionCount - iVar18;
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x38,8,iVar18,&(this->ContainerFile).Partitions.AllocatorInstance,piVar2
                            ,&(this->ContainerFile).Partitions.ArrayMax);
        DefaultConstructItems<FFileIoStoreContainerFilePartition,int>
                  ((this->ContainerFile).Partitions.AllocatorInstance.Data + (longlong)iVar19 * 0x38
                   ,iVar18);
      }
      else {
        if ((int)local_958.Header.PartitionCount < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_958.Header.PartitionCount);
        }
        if ((int)local_958.Header.PartitionCount < iVar18) {
          uVar32 = iVar18 - local_958.Header.PartitionCount;
          if (((int)(uVar32 | local_958.Header.PartitionCount) < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar24 = (FIoStatus *)(*pcVar10)();
            return pFVar24;
          }
          if (uVar32 != 0) {
            TArray<FFileIoStoreContainerFilePartition,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&(this->ContainerFile).Partitions,uVar21,uVar32);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,&(this->ContainerFile).Partitions.AllocatorInstance,*piVar2,
                       &(this->ContainerFile).Partitions.ArrayMax);
          }
        }
      }
      uVar31 = uVar29;
      if (local_958.Header.PartitionCount != 0) {
        do {
          uVar32 = (uint)uVar31;
          uVar21 = uVar30;
          if ((int)uVar32 < (this->ContainerFile).Partitions.ArrayNum) {
            uVar21 = ~uVar32 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar24 = (FIoStatus *)(*pcVar10)();
            return pFVar24;
          }
          local_808.Base = (wchar_t *)&local_7e8;
          local_808.bIsDynamic = false;
          local_808.bIsExternal = false;
          pFVar33 = (this->ContainerFile).Partitions.AllocatorInstance.Data +
                    (longlong)(int)uVar32 * 0x38;
          local_808.CurPos = (wchar_t *)&local_7e8;
          local_808.End = (wchar_t *)&local_5e8;
          if (&local_5e8 <
              (FIoStoreTocResourceStorage *)
              ((longlong)&local_7e8.Data._padding_ + (longlong)(int)uVar17 * 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_808,(longlong)(int)uVar17);
          }
          if (uVar17 != 0) {
            pvVar26 = FGenericPlatformString::Memcpy
                                (local_808.CurPos,param_1,(longlong)(int)uVar17 * 2);
            local_808.CurPos = (wchar_t *)((longlong)(int)uVar17 * 2 + (longlong)pvVar26);
          }
          if (uVar32 != 0) {
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_808,L"_s%d");
          }
          if (local_808.End <
              (FIoStoreTocResourceStorage *)
              ((longlong)
               &((TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
                  *)local_808.CurPos)->_padding_ + 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_808,5);
          }
          pvVar26 = FGenericPlatformString::Memcpy(local_808.CurPos,L".ucas",10);
          local_808.CurPos = (wchar_t *)((longlong)pvVar26 + 10);
          ::FString::AssignRange
                    ((FString *)(pFVar33 + 0x18),local_808.Base,
                     (int)((longlong)local_808.CurPos - (longlong)local_808.Base >> 1));
          pIVar9 = this->PlatformImpl;
          pcVar10 = *(code **)((longlong)*pIVar9 + 0x10);
          if (local_808.End < (FIoStoreTocResourceStorage *)(local_808.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_808,1);
          }
          *local_808.CurPos = L'\0';
          cVar15 = (*pcVar10)(pIVar9,local_808.Base,pFVar33,pFVar33 + 8);
          if (cVar15 == '\0') {
            pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_4b8,FileOpenFailed);
            uStack_a80 = 0x27;
            local_a88 = L"Failed to open IoStore container file \'";
            local_9d8._12_4_ = uStack_a7c;
            local_9d8.Size = 0x27;
            local_9d8.DataPtr = L"Failed to open IoStore container file \'";
            pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_9d8);
            if (local_808.End < (FIoStoreTocResourceStorage *)(local_808.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_808,1);
            }
            *local_808.CurPos = L'\0';
            local_a78 = (FIoStoreTocResourceStorage *)local_808.Base;
            if ((FIoStoreTocResourceStorage *)local_808.Base != (FIoStoreTocResourceStorage *)0x0) {
              sVar23 = wcslen(local_808.Base);
              uVar20 = (uint)sVar23;
            }
            local_9c8._12_4_ = uStack_a6c;
            local_9c8.Size = uVar20;
            local_9c8.DataPtr = (wchar_t *)local_a78;
            uStack_a70 = uVar20;
            pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_9c8);
            uStack_a60 = 1;
            local_a68 = L"\'";
            local_9b8._12_4_ = uStack_a5c;
            local_9b8.Size = 1;
            local_9b8.DataPtr = L"\'";
            pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_9b8);
            FIoStatusBuilder::operator_FIoStatus(pFVar27,__return_storage_ptr__);
            FIoStatusBuilder::~FIoStatusBuilder(&local_4b8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_808);
            FIoStatus::~FIoStatus(&local_ad8);
            uVar29 = (ulonglong)local_5e8.Data.TypeIndex;
            if ((2 < local_5e8.Data.TypeIndex) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar24 = (FIoStatus *)(*pcVar10)();
              return pFVar24;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar29])(&local_5e8);
            if (local_958.LegacyChunkMetas.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_958.LegacyChunkMetas.AllocatorInstance.Data);
            }
            if (local_958.CompressionMethods.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_958.CompressionMethods.AllocatorInstance.Data);
            }
            if (!bVar16) {
              return __return_storage_ptr__;
            }
            lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar8 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pFVar25 = *(FWriteBuffer **)(lVar8 + 0x20);
            if ((int)pFVar25 - *(int *)&pFVar25->Cursor < 1) {
              pFVar25 = UE::Trace::Private::Writer_NextBuffer();
            }
            *pFVar25->Cursor = '\n';
            pFVar25->Cursor = pFVar25->Cursor + 1;
            pFVar25->Committed = pFVar25->Cursor;
            return __return_storage_ptr__;
          }
          LOCK();
          UNLOCK();
          TVar12 = (TAtomic<unsigned_int>)((int)GlobalPartitionIndex + 1);
          *(TAtomic<unsigned_int> *)(pFVar33 + 0x10) = GlobalPartitionIndex;
          GlobalPartitionIndex = TVar12;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_808);
          uVar31 = (ulonglong)(uVar32 + 1);
        } while (uVar32 + 1 < local_958.Header.PartitionCount);
      }
      if ((GIoDispatcherTocsEnablePerfectHashing == 0) ||
         (local_958.ChunkPerfectHashSeeds.ArrayNum == 0)) {
        if (2 < (byte)LogIoDispatcher._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
        }
        uVar31 = uVar29;
        pFVar35 = this;
        if (local_958.Header.TocEntryCount != 0) {
          do {
            uVar30 = (uint)uVar31;
            uVar21 = uVar20;
            if ((int)uVar30 < local_958.ChunkOffsetLengths.ArrayNum) {
              uVar21 = ~uVar30 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar24 = (FIoStatus *)(*pcVar10)();
              return pFVar24;
            }
            pFVar4 = local_958.ChunkOffsetLengths.DataPtr + (int)uVar30;
            uVar21 = 0;
            if ((int)uVar30 < local_958.ChunkIds.ArrayNum) {
              uVar21 = ~uVar30 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              pFVar24 = (FIoStatus *)(*pcVar10)();
              return pFVar24;
            }
            local_a48 = local_958.ChunkIds.DataPtr + (int)uVar30;
            local_a40 = pFVar4;
            TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&>_>
                      ((TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
                        *)&this->TocImperfectHashMapFallback,
                       (TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&> *)
                       (local_a98 + 4),(bool *)&local_a48);
            uVar31 = (ulonglong)(uVar30 + 1);
            pFVar35 = local_aa0;
          } while (uVar30 + 1 < local_958.Header.TocEntryCount);
        }
        bVar13 = false;
      }
      else {
        if (local_958.ChunkIndicesWithoutPerfectHash.DataPtr !=
            local_958.ChunkIndicesWithoutPerfectHash.DataPtr +
            local_958.ChunkIndicesWithoutPerfectHash.ArrayNum) {
          this_00 = &this->TocImperfectHashMapFallback;
          puVar34 = (uint *)local_958.ChunkIndicesWithoutPerfectHash.DataPtr;
          do {
            uVar21 = *puVar34;
            uVar20 = uVar30;
            if ((int)uVar21 < local_958.ChunkOffsetLengths.ArrayNum) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              pFVar24 = (FIoStatus *)(*pcVar10)();
              return pFVar24;
            }
            pFVar4 = local_958.ChunkOffsetLengths.DataPtr + (int)uVar21;
            uVar20 = uVar30;
            if ((int)uVar21 < local_958.ChunkIds.ArrayNum) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              pFVar24 = (FIoStatus *)(*pcVar10)();
              return pFVar24;
            }
            local_a58 = local_958.ChunkIds.DataPtr + (int)uVar21;
            local_a50 = pFVar4;
            TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&>_>
                      ((TSet<TTuple<FIoChunkId,FIoOffsetAndLength>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<FIoChunkId_const_&,FIoOffsetAndLength_const_&> *)local_a98,
                       (bool *)&local_a58);
            puVar34 = puVar34 + 1;
            this = local_aa0;
            bVar16 = bVar13;
          } while (puVar34 !=
                   (uint *)(local_958.ChunkIndicesWithoutPerfectHash.DataPtr +
                           local_958.ChunkIndicesWithoutPerfectHash.ArrayNum));
        }
        bVar13 = true;
        (this->PerfectHashMap).TocChunkHashSeeds.DataPtr = local_958.ChunkPerfectHashSeeds.DataPtr;
        *(ulonglong *)&(this->PerfectHashMap).TocChunkHashSeeds.ArrayNum =
             CONCAT44(local_958.ChunkPerfectHashSeeds._12_4_,
                      local_958.ChunkPerfectHashSeeds.ArrayNum);
        (this->PerfectHashMap).TocChunkIds.DataPtr = local_958.ChunkIds.DataPtr;
        *(ulonglong *)&(this->PerfectHashMap).TocChunkIds.ArrayNum =
             CONCAT44(local_958.ChunkIds._12_4_,local_958.ChunkIds.ArrayNum);
        (this->PerfectHashMap).TocOffsetAndLengths.DataPtr = local_958.ChunkOffsetLengths.DataPtr;
        *(ulonglong *)&(this->PerfectHashMap).TocOffsetAndLengths.ArrayNum =
             CONCAT44(local_958.ChunkOffsetLengths._12_4_,local_958.ChunkOffsetLengths.ArrayNum);
        pFVar35 = this;
      }
      pTVar3 = &(pFVar35->ContainerFile).CompressionMethods;
      pFVar35->bHasPerfectHashMap = bVar13;
      if (pTVar3 != &local_958.CompressionMethods) {
        pFVar33 = (pTVar3->AllocatorInstance).Data;
        if (pFVar33 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar33);
        }
        (pTVar3->AllocatorInstance).Data = local_958.CompressionMethods.AllocatorInstance.Data;
        (pFVar35->ContainerFile).CompressionMethods.ArrayNum = local_958.CompressionMethods.ArrayNum
        ;
        (pFVar35->ContainerFile).CompressionMethods.ArrayMax = local_958.CompressionMethods.ArrayMax
        ;
        local_958.CompressionMethods.ArrayNum = 0;
        local_958.CompressionMethods.ArrayMax = 0;
        local_958.CompressionMethods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      (pFVar35->ContainerFile).CompressionBlockSize =
           (ulonglong)local_958.Header.CompressionBlockSize;
      (pFVar35->ContainerFile).CompressionBlocks.DataPtr = local_958.CompressionBlocks.DataPtr;
      (pFVar35->ContainerFile).CompressionBlocks.ArrayNum = local_958.CompressionBlocks.ArrayNum;
      *(undefined4 *)&(pFVar35->ContainerFile).CompressionBlocks.field_0xc =
           local_958.CompressionBlocks._12_4_;
      (pFVar35->ContainerFile).ContainerFlags = local_958.Header.ContainerFlags;
      (pFVar35->ContainerFile).EncryptionKeyGuid.A = local_958.Header.EncryptionKeyGuid.A;
      (pFVar35->ContainerFile).EncryptionKeyGuid.B = local_958.Header.EncryptionKeyGuid.B;
      (pFVar35->ContainerFile).EncryptionKeyGuid.C = local_958.Header.EncryptionKeyGuid.C;
      (pFVar35->ContainerFile).EncryptionKeyGuid.D = local_958.Header.EncryptionKeyGuid.D;
      (pFVar35->ContainerFile).BlockSignatureTable.DataPtr = local_958.ChunkBlockSignatures.DataPtr;
      (pFVar35->ContainerFile).BlockSignatureTable.ArrayNum =
           local_958.ChunkBlockSignatures.ArrayNum;
      *(undefined4 *)&(pFVar35->ContainerFile).BlockSignatureTable.field_0xc =
           local_958.ChunkBlockSignatures._12_4_;
      LOCK();
      UNLOCK();
      this_01 = &pFVar35->Stats->Stats;
      uVar21 = (int)GlobalContainerInstanceId + 1;
      GlobalContainerInstanceId = (TAtomic<unsigned_int>)((int)GlobalContainerInstanceId + 1);
      (pFVar35->ContainerFile).ContainerInstanceId = uVar21;
      uVar21 = *(uint *)&(pFVar35->TocImperfectHashMapFallback).field_0x48;
      if (1 < uVar21) {
        uVar29 = (longlong)(int)uVar21 << 2;
      }
      iVar18 = *(int *)&(pFVar35->TocImperfectHashMapFallback).field_0x2c;
      iVar19 = *(int *)&(pFVar35->TocImperfectHashMapFallback).field_0xc;
      uVar28 = FIoStoreTocResourceStorage::GetAllocatedSize(&pFVar35->DataContainer);
      UE::FIoDispatcherFilesystemStats::OnTocMounted
                (this_01,(longlong)iVar19 * 0x20 + ((iVar18 + 0x1fU >> 5) << 2) + uVar29 + uVar28);
      if (3 < (byte)LogIoDispatcher._0_1_) {
        local_ac8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_ac8.Data.ArrayNum = 0;
        local_ac8.Data.ArrayMax = 0;
        BytesToHex(local_958.SignatureHash.Hash,0x14,&local_ac8);
        ::LexToString(&local_9a8,&local_958.Header.ContainerId);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
        if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
        }
        if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
        }
      }
      FIoStoreTocResourceStorage::operator=(&pFVar35->DataContainer,&local_5e8);
      (pFVar35->ContainerId).Id = local_958.Header.ContainerId.Id;
      pFVar35->Order = param_2;
      TVar11 = FIoStatus::Ok.ErrorMessage;
      (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
      if (TVar11.Chars != (wchar_t *)0x0) {
        LOCK();
        pwVar1 = TVar11.Chars + -4;
        *(int *)pwVar1 = *(int *)pwVar1 + 1;
        UNLOCK();
      }
      __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
      __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
      FIoStatus::~FIoStatus(&local_ad8);
      uVar29 = (ulonglong)local_5e8.Data.TypeIndex;
      if ((2 < local_5e8.Data.TypeIndex) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar24 = (FIoStatus *)(*pcVar10)();
        return pFVar24;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar29])(&local_5e8);
    }
    else {
      (__return_storage_ptr__->ErrorMessage).Chars = local_ad8.ErrorMessage.Chars;
      if (local_ad8.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_ad8.ErrorMessage.Chars + -4) =
             *(int *)(local_ad8.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      __return_storage_ptr__->ErrorCode = local_ad8.ErrorCode;
      __return_storage_ptr__->SystemErrorCode = local_ad8.SystemErrorCode;
      FIoStatus::~FIoStatus(&local_ad8);
      uVar29 = (ulonglong)local_5e8.Data.TypeIndex;
      if ((2 < local_5e8.Data.TypeIndex) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar24 = (FIoStatus *)(*pcVar10)();
        return pFVar24;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar29] !=
          UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar29])(&local_5e8);
      }
    }
    if (local_958.LegacyChunkMetas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.LegacyChunkMetas.AllocatorInstance.Data);
    }
    if (local_958.CompressionMethods.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.CompressionMethods.AllocatorInstance.Data);
    }
    if (bVar16) {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar8 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar25 = *(FWriteBuffer **)(lVar8 + 0x20);
      if ((int)pFVar25 - *(int *)&pFVar25->Cursor < 1) {
        pFVar25 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar25->Cursor = '\n';
      pFVar25->Cursor = pFVar25->Cursor + 1;
      pFVar25->Committed = pFVar25->Cursor;
    }
  }
  else {
    pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_288,FileOpenFailed);
    uStack_a30 = 0x2c;
    local_a38 = L"Expected .utoc extension on container path \'";
    local_998._12_4_ = uStack_a2c;
    local_998.Size = 0x2c;
    local_998.DataPtr = L"Expected .utoc extension on container path \'";
    pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_998);
    local_a28 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar23 = wcslen(param_1);
      uVar20 = (uint)sVar23;
    }
    local_988._12_4_ = uStack_a1c;
    local_988.Size = uVar20;
    local_988.DataPtr = local_a28;
    uStack_a20 = uVar20;
    pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_988);
    uStack_a10 = 1;
    local_a18 = L"\'";
    local_978._12_4_ = uStack_a0c;
    local_978.Size = 1;
    local_978.DataPtr = L"\'";
    pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_978);
    FIoStatusBuilder::operator_FIoStatus(pFVar27,__return_storage_ptr__);
    FIoStatusBuilder::~FIoStatusBuilder(&local_288);
    if (bVar16) {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar8 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar25 = *(FWriteBuffer **)(lVar8 + 0x20);
      if ((int)pFVar25 - *(int *)&pFVar25->Cursor < 1) {
        pFVar25 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar25->Cursor = '\n';
      pFVar25->Cursor = pFVar25->Cursor + 1;
      pFVar25->Committed = pFVar25->Cursor;
    }
  }
  return __return_storage_ptr__;
}

// ReadContainerHeader @ 142a904a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<FIoContainerHeader> * __thiscall
FFileIoStoreReader::ReadContainerHeader
          (FFileIoStoreReader *this,TIoStatusOr<FIoContainerHeader> *__return_storage_ptr__,
          bool param_1)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  FIoOffsetAndLength *pFVar11;
  FIoStatusBuilder *pFVar12;
  FIoStatus *pFVar13;
  ulonglong uVar14;
  TIoStatusOr<FIoContainerHeader> *pTVar15;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar16;
  longlong *plVar17;
  longlong lVar18;
  FIoStoreTocCompressedBlockEntry *pFVar19;
  FSHAHash *pFVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  bool bVar27;
  undefined1 auStackY_1428 [32];
  FLLMScope local_13f4;
  FIoStoreTocCompressedBlockEntry *local_13f0;
  EIoContainerFlags local_13e8;
  char local_13e7;
  FIoBuffer local_13e0;
  FMemScope local_13d8;
  ulong64 local_13d0;
  undefined4 local_13c8;
  FIoContainerHeader local_13b8;
  ulonglong local_1308;
  FIoStatus local_1300;
  FIoStatus local_12f0;
  FString local_12e0;
  FString local_12d0;
  FString local_12c0;
  FIoStatus local_12b0;
  FString local_12a0;
  FIoStatus local_1290;
  FIoContainerHeader local_1280;
  wchar_t *local_11c8;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  wchar_t *local_11b8;
  int iStack_11b0;
  undefined4 uStack_11ac;
  FScriptContainerElement *local_11a8;
  int iStack_11a0;
  undefined4 uStack_119c;
  FScriptContainerElement *local_1198;
  int iStack_1190;
  undefined4 uStack_118c;
  wchar_t *local_1188;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  FScriptContainerElement *local_1178;
  int iStack_1170;
  undefined4 uStack_116c;
  FScriptContainerElement *local_1168;
  int iStack_1160;
  undefined4 uStack_115c;
  wchar_t *local_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  FArchiveState local_1148;
  longlong local_10b8;
  ulonglong local_10b0;
  longlong local_10a8;
  longlong local_10a0;
  TStringView<wchar_t> local_1098;
  TStringView<wchar_t> local_1088;
  TStringView<wchar_t> local_1078;
  TStringView<wchar_t> local_1068;
  TStringView<wchar_t> local_1058;
  TStringView<wchar_t> local_1048;
  TStringView<wchar_t> local_1038;
  TStringView<wchar_t> local_1028;
  FIoStatus local_1018;
  FIoStatus local_1008;
  FIoStatus local_ff8;
  FIoStatus local_fe8;
  FIoStatus local_fd8;
  longlong local_fc8;
  longlong lStack_fc0;
  int local_fb8;
  FIoChunkId local_fb0 [2];
  FIoStatusBuilder local_f98;
  FIoStatusBuilder local_d68;
  FIoStatusBuilder local_b38;
  FIoStatusBuilder local_908;
  FIoStatusBuilder local_6d8;
  FIoStatusBuilder local_4a8;
  FIoStatusBuilder local_278;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1428;
  local_13e7 = param_1;
  FLLMScope::FLLMScope(&local_13f4,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_13d8,AsyncLoading,true);
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId853,"ReadContainerHeader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x355);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId853);
  }
  local_13d0 = (this->ContainerId).Id;
  local_13c8 = 0x6000000;
  local_fb0[0].Id[8] = '\0';
  local_fb0[0].Id[9] = '\0';
  local_fb0[0].Id[10] = '\0';
  local_fb0[0].Id[0xb] = '\x06';
  local_fb0[0].Id._0_8_ = local_13d0;
  pFVar11 = FindChunkInternal(this,local_fb0);
  if (pFVar11 == (FIoOffsetAndLength *)0x0) {
    pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_f98,NotFound);
    uStack_1150 = 0x20;
    local_1158 = L"Container header chunk not found";
    local_1028._12_4_ = uStack_114c;
    local_1028.Size = 0x20;
    local_1028.DataPtr = L"Container header chunk not found";
    pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1028);
    pFVar13 = FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_1018);
    TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>(__return_storage_ptr__,pFVar13)
    ;
    FIoStatusBuilder::~FIoStatusBuilder(&local_f98);
    if (bVar27) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_13d8);
    FLLMScope::~FLLMScope(&local_13f4);
    return __return_storage_ptr__;
  }
  uVar25 = (this->ContainerFile).CompressionBlockSize;
  uVar21 = CONCAT35(0,CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar11->OffsetAndLength[0],
                                                          pFVar11->OffsetAndLength[1]),
                                                 pFVar11->OffsetAndLength[2]),
                                        pFVar11->OffsetAndLength[3]),pFVar11->OffsetAndLength[4]));
  uVar24 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar11->OffsetAndLength[5],
                                               pFVar11->OffsetAndLength[6]),
                                      pFVar11->OffsetAndLength[7]),pFVar11->OffsetAndLength[8]),
                    pFVar11->OffsetAndLength[9]);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar25;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar21;
  uVar14 = SUB168(auVar5 / auVar4,0);
  local_1308 = ((uVar21 - 1) + uVar24) / uVar25;
  iVar26 = SUB164(auVar5 / auVar4,0);
  local_13f0 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                         (&(this->ContainerFile).CompressionBlocks,iVar26);
  uVar10 = (uint)((*(ulonglong *)local_13f0->Data & 0xffffffffff) /
                 (this->ContainerFile).PartitionSize);
  uVar23 = 0;
  if ((int)uVar10 < (this->ContainerFile).Partitions.ArrayNum) {
    uVar23 = ~uVar10 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar15 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
    return pTVar15;
  }
  pFVar3 = (this->ContainerFile).Partitions.AllocatorInstance.Data;
  local_13f0 = (FIoStoreTocCompressedBlockEntry *)
               ((*(ulonglong *)local_13f0->Data & 0xffffffffff) %
               (this->ContainerFile).PartitionSize);
  if (((this->ContainerFile).ContainerFlags & Compressed) != None) {
    uVar23 = (uint)uVar25;
    if (((uVar25 != (longlong)(int)uVar23) || ((int)uVar23 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar7))
    {
      pcVar6 = (code *)swi(3);
      pTVar15 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
      return pTVar15;
    }
    FileCache_PostIoStoreCompressionBlockSize
              (uVar23,(FString *)(pFVar3 + (longlong)(int)uVar10 * 0x38 + 0x18));
  }
  FIoBuffer::FIoBuffer(&local_13e0,uVar24 + 0xf & 0xfffffffffffffff0);
  this_00 = FPlatformFileManager::Get();
  pIVar16 = FPlatformFileManager::GetPlatformFile(this_00);
  if (*(int *)(pFVar3 + (longlong)(int)uVar10 * 0x38 + 0x20) == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = *(wchar_t **)(pFVar3 + (longlong)(int)uVar10 * 0x38 + 0x18);
  }
  plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0xe8))(pIVar16,pwVar22,0);
  if (plVar17 == (longlong *)0x0) {
    pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_d68,FileOpenFailed);
    uStack_11c0 = 0x1e;
    local_11c8 = L"Failed to open container file ";
    local_1098._12_4_ = uStack_11bc;
    local_1098.Size = 0x1e;
    local_1098.DataPtr = L"Failed to open container file ";
    pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1098);
    local_11b8 = *(wchar_t **)(pFVar3 + (longlong)(int)uVar10 * 0x38 + 0x18);
    iStack_11b0 = *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x38 + 0x20) + -1;
    if (*(int *)(pFVar3 + (longlong)(int)uVar10 * 0x38 + 0x20) == 0) {
      iStack_11b0 = 0;
    }
    local_1088._12_4_ = uStack_11ac;
    local_1088.Size = iStack_11b0;
    local_1088.DataPtr = local_11b8;
    pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1088);
    pFVar13 = FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_1008);
    TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>(__return_storage_ptr__,pFVar13)
    ;
    FIoStatusBuilder::~FIoStatusBuilder(&local_d68);
LAB_142a908c2:
    if (local_13e0.CorePtr.Reference == (BufCore *)0x0) goto LAB_142a91250;
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_13e0.CorePtr.Reference);
  }
  else {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId890,"ReadFromContainerFile",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                 ,0x37a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId890);
    }
    cVar8 = (**(code **)(*plVar17 + 0x10))(plVar17,local_13f0);
    if (cVar8 == '\0') {
      pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_b38,ReadError);
      ::FString::PrintfImpl(&local_12e0,L"Failed seeking to offset %llu in container file");
      local_11a8 = local_12e0.Data.AllocatorInstance.Data;
      iStack_11a0 = local_12e0.Data.ArrayNum + -1;
      if (local_12e0.Data.ArrayNum == 0) {
        iStack_11a0 = 0;
      }
      local_1078._12_4_ = uStack_119c;
      local_1078.Size = iStack_11a0;
      local_1078.DataPtr = (wchar_t *)local_12e0.Data.AllocatorInstance.Data;
      pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1078);
      pFVar13 = FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_ff8);
      TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
                (__return_storage_ptr__,pFVar13);
      if (local_12e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_12e0.Data.AllocatorInstance.Data);
      }
      pFVar12 = &local_b38;
LAB_142a909d6:
      FIoStatusBuilder::~FIoStatusBuilder(pFVar12);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      (**(code **)*plVar17)(plVar17,1);
      goto LAB_142a908c2;
    }
    cVar8 = (**(code **)(*plVar17 + 0x20))
                      (plVar17,*(ulonglong *)local_13e0.CorePtr.Reference,
                       (ulonglong)
                       CONCAT14(*(uchar *)((longlong)local_13e0.CorePtr.Reference + 0x18),
                                *(uint *)((longlong)local_13e0.CorePtr.Reference + 8)));
    if (cVar8 == '\0') {
      pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_908,ReadError);
      ::FString::PrintfImpl(&local_12d0,L"Failed reading %llu bytes at offset %llu");
      local_1198 = local_12d0.Data.AllocatorInstance.Data;
      iStack_1190 = local_12d0.Data.ArrayNum + -1;
      if (local_12d0.Data.ArrayNum == 0) {
        iStack_1190 = 0;
      }
      local_1068._12_4_ = uStack_118c;
      local_1068.Size = iStack_1190;
      local_1068.DataPtr = (wchar_t *)local_12d0.Data.AllocatorInstance.Data;
      pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1068);
      pFVar13 = FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_fe8);
      TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
                (__return_storage_ptr__,pFVar13);
      if (local_12d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_12d0.Data.AllocatorInstance.Data);
      }
      pFVar12 = &local_908;
      goto LAB_142a909d6;
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    lVar18 = 0;
    do {
      if (*(int *)((this->ContainerFile).EncryptionKey.Key + lVar18 * 4) != 0) {
        bVar7 = true;
        goto LAB_142a90afe;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < 8);
    bVar7 = false;
LAB_142a90afe:
    local_13e8 = (this->ContainerFile).ContainerFlags & Signed;
    if ((local_13e8 != None) || (bVar7)) {
      local_13f0 = *(FIoStoreTocCompressedBlockEntry **)local_13e0.CorePtr.Reference;
      if (iVar26 <= (int)local_1308) {
        do {
          iVar26 = (int)uVar14;
          pFVar19 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                              (&(this->ContainerFile).CompressionBlocks,iVar26);
          bVar2 = pFVar19->Data[0xb];
          if (((this->ContainerFile).CompressionMethods.ArrayNum <= (int)(uint)bVar2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
            return pTVar15;
          }
          if ((*(longlong *)
                ((this->ContainerFile).CompressionMethods.AllocatorInstance.Data +
                (ulonglong)bVar2 * 8) != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerFile.CompressionMethods[CompressionBlockEntry->GetCompressionMethodIndex()].IsNone()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                 ,0x38d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
            return pTVar15;
          }
          uVar25 = (ulonglong)((*(uint *)(pFVar19->Data + 4) >> 8) + 0xf & 0xfffffff0);
          if (local_13e8 != None) {
            pFVar20 = TArrayView<FSHAHash_const_,int>::operator[]
                                (&(this->ContainerFile).BlockSignatureTable,iVar26);
            local_fb8 = 0;
            local_fc8 = 0;
            lStack_fc0 = 0;
            FSHA1::HashBuffer(local_13f0,uVar25,(uchar *)&local_fc8);
            if (((*(longlong *)pFVar20->Hash != local_fc8) ||
                (*(longlong *)(pFVar20->Hash + 8) != lStack_fc0)) ||
               (*(int *)(pFVar20->Hash + 0x10) != local_fb8)) {
              pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_6d8,SignatureError);
              uStack_1180 = 0x36;
              local_1188 = L"Signature error detected when reading container header";
              local_1058._12_4_ = uStack_117c;
              local_1058.Size = 0x36;
              local_1058.DataPtr = L"Signature error detected when reading container header";
              pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1058);
              pFVar13 = FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_fd8);
              TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
                        (__return_storage_ptr__,pFVar13);
              FIoStatusBuilder::~FIoStatusBuilder(&local_6d8);
              (**(code **)*plVar17)(plVar17,1);
              goto LAB_142a908c2;
            }
          }
          if (bVar7) {
            FAES::DecryptData(local_13f0->Data,uVar25,&(this->ContainerFile).EncryptionKey);
          }
          local_13f0 = (FIoStoreTocCompressedBlockEntry *)((longlong)local_13f0 + uVar25);
          uVar14 = (ulonglong)(iVar26 + 1U);
        } while ((int)(iVar26 + 1U) <= (int)local_1308);
      }
    }
    uVar23 = *(uint *)((longlong)local_13e0.CorePtr.Reference + 8);
    uVar25 = *(ulonglong *)local_13e0.CorePtr.Reference;
    if (((int)uVar23 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar15 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
      return pTVar15;
    }
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
    local_10b0 = uVar25;
    local_10a8 = (longlong)(int)uVar23;
    FArchiveState::SetIsLoading(&local_1148,true);
    (**(code **)(local_1148._padding_ + 0x108))(&local_1148,0);
    local_1148._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_13b8.SoftPackageReferencesSerialInfo.Size = ___xmm_0000000000000000ffffffffffffffff;
    local_13b8.SoftPackageReferences.PackageIds.AllocatorInstance.Data = _UNK_15076adc8;
    local_13b8.ContainerId.Id = 0xffffffffffffffff;
    local_13b8.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.PackageIds.ArrayNum = 0;
    local_13b8.PackageIds.ArrayMax = 0;
    local_13b8.StoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.StoreEntries.ArrayNum = 0;
    local_13b8.StoreEntries.ArrayMax = 0;
    local_13b8.OptionalSegmentPackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.OptionalSegmentPackageIds.ArrayNum = 0;
    local_13b8.OptionalSegmentPackageIds.ArrayMax = 0;
    local_13b8.OptionalSegmentStoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.OptionalSegmentStoreEntries.ArrayNum = 0;
    local_13b8.OptionalSegmentStoreEntries.ArrayMax = 0;
    local_13b8.RedirectsNameMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.RedirectsNameMap.ArrayNum = 0;
    local_13b8.RedirectsNameMap.ArrayMax = 0;
    local_13b8.LocalizedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.LocalizedPackages.ArrayNum = 0;
    local_13b8.LocalizedPackages.ArrayMax = 0;
    local_13b8.PackageRedirects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b8.PackageRedirects.ArrayNum = 0;
    local_13b8.PackageRedirects.ArrayMax = 0;
    local_13b8.SoftPackageReferencesSerialInfo.Offset = -1;
    local_13b8.SoftPackageReferences.PackageIds.ArrayNum = 0;
    local_13b8.SoftPackageReferences.PackageIds.ArrayMax = 0;
    local_13b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_13b8.SoftPackageReferences.PackageIndices.ArrayNum = 0;
    local_13b8.SoftPackageReferences.PackageIndices.ArrayMax = 0;
    local_13b8.SoftPackageReferences.bContainsSoftPackageReferences = false;
    local_13b8.SoftPackageReferences.bLoadedSoftPackageReferences = false;
    ::operator<<((FArchive *)&local_1148,&local_13b8);
    if (local_1148.ArIsError != 0) {
      if (2 < (byte)LogIoDispatcher._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
      }
      local_1280.ContainerId.Id = 0xffffffffffffffff;
      local_1280.SoftPackageReferences._34_4_ = 0;
      local_1280.SoftPackageReferences._38_2_ = 0;
      local_1280.SoftPackageReferencesSerialInfo.Offset = ___xmm_ffffffffffffffffffffffffffffffff;
      local_1280.SoftPackageReferencesSerialInfo.Size = _UNK_15060db28;
      local_1280.SoftPackageReferences.bContainsSoftPackageReferences = false;
      local_1280.SoftPackageReferences.bLoadedSoftPackageReferences = false;
      local_1280.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1280.PackageIds.ArrayNum = 0;
      local_1280.PackageIds.ArrayMax = 0;
      local_1280.StoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1280.StoreEntries.ArrayNum = 0;
      local_1280.StoreEntries.ArrayMax = 0;
      local_1280.OptionalSegmentPackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1280.OptionalSegmentPackageIds.ArrayNum = 0;
      local_1280.OptionalSegmentPackageIds.ArrayMax = 0;
      local_1280.OptionalSegmentStoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      local_1280.OptionalSegmentStoreEntries.ArrayNum = 0;
      local_1280.OptionalSegmentStoreEntries.ArrayMax = 0;
      local_1280.RedirectsNameMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1280.RedirectsNameMap.ArrayNum = 0;
      local_1280.RedirectsNameMap.ArrayMax = 0;
      local_1280.LocalizedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1280.LocalizedPackages.ArrayNum = 0;
      local_1280.LocalizedPackages.ArrayMax = 0;
      local_1280.PackageRedirects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1280.PackageRedirects.ArrayNum = 0;
      local_1280.PackageRedirects.ArrayMax = 0;
      local_1280.SoftPackageReferences.PackageIds.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_1280.SoftPackageReferences.PackageIds.ArrayNum = 0;
      local_1280.SoftPackageReferences.PackageIds.ArrayMax = 0;
      local_1280.SoftPackageReferences.PackageIndices.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_1280.SoftPackageReferences.PackageIndices.ArrayNum = 0;
      local_1280.SoftPackageReferences.PackageIndices.ArrayMax = 0;
      FIoContainerHeader::operator=(&local_13b8,&local_1280);
      FIoContainerHeader::~FIoContainerHeader(&local_1280);
    }
    if (local_13e7 == '\0') {
LAB_142a91160:
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      FIoContainerHeader::FIoContainerHeader
                ((FIoContainerHeader *)&__return_storage_ptr__->Value,&local_13b8);
    }
    else if (local_13b8.SoftPackageReferencesSerialInfo.Offset < 0) {
      pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_4a8,ReadError);
      ::FString::PrintfImpl(&local_12c0,L"Invalid soft package reference offset \'lld\'");
      local_1178 = local_12c0.Data.AllocatorInstance.Data;
      iStack_1170 = local_12c0.Data.ArrayNum + -1;
      if (local_12c0.Data.ArrayNum == 0) {
        iStack_1170 = 0;
      }
      local_1048._12_4_ = uStack_116c;
      local_1048.Size = iStack_1170;
      local_1048.DataPtr = (wchar_t *)local_12c0.Data.AllocatorInstance.Data;
      pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1048);
      FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_1300);
      if (local_12c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_12c0.Data.AllocatorInstance.Data);
      }
      FIoStatusBuilder::~FIoStatusBuilder(&local_4a8);
      local_12b0.ErrorMessage.Chars = local_1300.ErrorMessage.Chars;
      if (local_1300.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_1300.ErrorMessage.Chars + -4) =
             *(int *)(local_1300.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_12b0.ErrorCode = local_1300.ErrorCode;
      local_12b0.SystemErrorCode = local_1300.SystemErrorCode;
      TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
                (__return_storage_ptr__,&local_12b0);
      FIoStatus::~FIoStatus(&local_1300);
    }
    else {
      lVar18 = local_10a0;
      if (local_10a8 < local_10a0) {
        lVar18 = local_10a8;
      }
      if (local_13b8.SoftPackageReferencesSerialInfo.Size +
          local_13b8.SoftPackageReferencesSerialInfo.Offset <= lVar18) {
        local_10b8 = local_13b8.SoftPackageReferencesSerialInfo.Offset;
        ::operator<<((FArchive *)&local_1148,&local_13b8.SoftPackageReferences);
        goto LAB_142a91160;
      }
      pFVar12 = FIoStatusBuilder::FIoStatusBuilder(&local_278,ReadError);
      ::FString::PrintfImpl
                (&local_12a0,
                 L"Soft package reference offset \'lld\' and size \'lld\' will seek past the end of archive size \'lld\'"
                );
      local_1168 = local_12a0.Data.AllocatorInstance.Data;
      iStack_1160 = local_12a0.Data.ArrayNum + -1;
      if (local_12a0.Data.ArrayNum == 0) {
        iStack_1160 = 0;
      }
      local_1038._12_4_ = uStack_115c;
      local_1038.Size = iStack_1160;
      local_1038.DataPtr = (wchar_t *)local_12a0.Data.AllocatorInstance.Data;
      pFVar12 = FIoStatusBuilder::operator<<(pFVar12,&local_1038);
      FIoStatusBuilder::operator_FIoStatus(pFVar12,&local_12f0);
      if (local_12a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_12a0.Data.AllocatorInstance.Data);
      }
      FIoStatusBuilder::~FIoStatusBuilder(&local_278);
      local_1290.ErrorMessage.Chars = local_12f0.ErrorMessage.Chars;
      if (local_12f0.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_12f0.ErrorMessage.Chars + -4) =
             *(int *)(local_12f0.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_1290.ErrorCode = local_12f0.ErrorCode;
      local_1290.SystemErrorCode = local_12f0.SystemErrorCode;
      TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
                (__return_storage_ptr__,&local_1290);
      FIoStatus::~FIoStatus(&local_12f0);
    }
    if (local_13b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data);
    }
    if (local_13b8.SoftPackageReferences.PackageIds.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.SoftPackageReferences.PackageIds.AllocatorInstance.Data);
    }
    if (local_13b8.PackageRedirects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.PackageRedirects.AllocatorInstance.Data);
    }
    if (local_13b8.LocalizedPackages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.LocalizedPackages.AllocatorInstance.Data);
    }
    if (local_13b8.RedirectsNameMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.RedirectsNameMap.AllocatorInstance.Data);
    }
    if (local_13b8.OptionalSegmentStoreEntries.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.OptionalSegmentStoreEntries.AllocatorInstance.Data);
    }
    if (local_13b8.OptionalSegmentPackageIds.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.OptionalSegmentPackageIds.AllocatorInstance.Data);
    }
    if (local_13b8.StoreEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.StoreEntries.AllocatorInstance.Data);
    }
    if (local_13b8.PackageIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b8.PackageIds.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1148);
    (**(code **)*plVar17)(plVar17,1);
    if (local_13e0.CorePtr.Reference == (BufCore *)0x0) goto LAB_142a91250;
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_13e0.CorePtr.Reference);
  }
  LOCK();
  piVar1 = &((BufCore *)local_13e0.CorePtr.Reference)->NumRefs;
  iVar26 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar26 == 1) {
    FIoBuffer::BufCore::~BufCore((BufCore *)local_13e0.CorePtr.Reference);
    ::operator_delete((void *)local_13e0.CorePtr.Reference,0x20);
  }
LAB_142a91250:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_13d8);
  FLLMScope::~FLLMScope(&local_13f4);
  return __return_storage_ptr__;
}

// ReopenAllFileHandles @ 142a98d20

void __thiscall FFileIoStoreReader::ReopenAllFileHandles(FFileIoStoreReader *this)

{
  int iVar1;
  IPlatformFileIoStore *pIVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ContainerFile).Partitions.ArrayNum;
  pFVar3 = (this->ContainerFile).Partitions.AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->ContainerFile).Partitions.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFileIoStoreContainerFilePartition,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    (**(code **)((longlong)*this->PlatformImpl + 0x18))(this->PlatformImpl,*(undefined8 *)pFVar3);
    pIVar2 = this->PlatformImpl;
    if (*(int *)(pFVar3 + 0x20) == 0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,L"",pFVar3,pFVar3 + 8);
      pFVar3 = pFVar3 + 0x38;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x10))
                (pIVar2,*(undefined8 *)(pFVar3 + 0x18),pFVar3,pFVar3 + 8);
      pFVar3 = pFVar3 + 0x38;
    }
  }
  return;
}

// Resolve @ 142a9ae60

FIoOffsetAndLength * __thiscall
FFileIoStoreReader::Resolve(FFileIoStoreReader *this,FIoChunkId *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIoOffsetAndLength *pFVar3;
  
  if (this->bClosed != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bClosed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x33c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoOffsetAndLength *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FindChunkInternal(this,param_1);
  return pFVar3;
}

