// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 24

// FIoStoreReader @ 1417a2590

FIoStoreReader * __thiscall FIoStoreReader::FIoStoreReader(FIoStoreReader *this)

{
  FIoStoreTocReader *pFVar1;
  FIoStoreTocResourceView *pFVar2;
  FIoStoreReaderImpl *this_00;
  
  this_00 = ::operator_new(0x358);
  if (this_00 != (FIoStoreReaderImpl *)0x0) {
    FIoStoreTocResourceView::FIoStoreTocResourceView((FIoStoreTocResourceView *)this_00);
    (this_00->TocReader).TocStorage.Data.TypeIndex = '\0';
    FIoDirectoryIndexReader::FIoDirectoryIndexReader(&(this_00->TocReader).DirectoryIndexReader);
    (this_00->TocReader).DecryptionKey.Key[0] = '\0';
    (this_00->TocReader).DecryptionKey.Key[1] = '\0';
    (this_00->TocReader).DecryptionKey.Key[2] = '\0';
    (this_00->TocReader).DecryptionKey.Key[3] = '\0';
    (this_00->TocReader).DecryptionKey.Key[4] = '\0';
    (this_00->TocReader).DecryptionKey.Key[5] = '\0';
    (this_00->TocReader).DecryptionKey.Key[6] = '\0';
    (this_00->TocReader).DecryptionKey.Key[7] = '\0';
    pFVar1 = &this_00->TocReader;
    (pFVar1->DecryptionKey).Key[8] = '\0';
    (pFVar1->DecryptionKey).Key[9] = '\0';
    (pFVar1->DecryptionKey).Key[10] = '\0';
    (pFVar1->DecryptionKey).Key[0xb] = '\0';
    (pFVar1->DecryptionKey).Key[0xc] = '\0';
    (pFVar1->DecryptionKey).Key[0xd] = '\0';
    (pFVar1->DecryptionKey).Key[0xe] = '\0';
    (pFVar1->DecryptionKey).Key[0xf] = '\0';
    pFVar1 = &this_00->TocReader;
    (pFVar1->DecryptionKey).Key[0x10] = '\0';
    (pFVar1->DecryptionKey).Key[0x11] = '\0';
    (pFVar1->DecryptionKey).Key[0x12] = '\0';
    (pFVar1->DecryptionKey).Key[0x13] = '\0';
    (pFVar1->DecryptionKey).Key[0x14] = '\0';
    (pFVar1->DecryptionKey).Key[0x15] = '\0';
    (pFVar1->DecryptionKey).Key[0x16] = '\0';
    (pFVar1->DecryptionKey).Key[0x17] = '\0';
    pFVar1 = &this_00->TocReader;
    (pFVar1->DecryptionKey).Key[0x18] = '\0';
    (pFVar1->DecryptionKey).Key[0x19] = '\0';
    (pFVar1->DecryptionKey).Key[0x1a] = '\0';
    (pFVar1->DecryptionKey).Key[0x1b] = '\0';
    (pFVar1->DecryptionKey).Key[0x1c] = '\0';
    (pFVar1->DecryptionKey).Key[0x1d] = '\0';
    (pFVar1->DecryptionKey).Key[0x1e] = '\0';
    (pFVar1->DecryptionKey).Key[0x1f] = '\0';
    *(undefined8 *)&(this_00->TocReader).ChunkIdToIndex = 0;
    *(undefined8 *)&(this_00->TocReader).ChunkIdToIndex.field_0x8 = 0;
    *(undefined8 *)&(this_00->TocReader).ChunkIdToIndex.field_0x20 = 0;
    *(undefined4 *)&(this_00->TocReader).ChunkIdToIndex.field_0x28 = 0;
    *(undefined4 *)&(this_00->TocReader).ChunkIdToIndex.field_0x2c = 0x80;
    *(undefined4 *)&(this_00->TocReader).ChunkIdToIndex.field_0x34 = 0;
    *(undefined4 *)&(this_00->TocReader).ChunkIdToIndex.field_0x30 = 0xffffffff;
    *(undefined8 *)&(this_00->TocReader).ChunkIdToIndex.field_0x40 = 0;
    *(undefined4 *)&(this_00->TocReader).ChunkIdToIndex.field_0x48 = 0;
    *(undefined8 *)&(this_00->TocReader).IndexToFileName = 0;
    *(undefined8 *)&(this_00->TocReader).IndexToFileName.field_0x8 = 0;
    *(undefined8 *)&(this_00->TocReader).IndexToFileName.field_0x20 = 0;
    *(undefined4 *)&(this_00->TocReader).IndexToFileName.field_0x28 = 0;
    *(undefined4 *)&(this_00->TocReader).IndexToFileName.field_0x2c = 0x80;
    *(undefined4 *)&(this_00->TocReader).IndexToFileName.field_0x34 = 0;
    *(undefined4 *)&(this_00->TocReader).IndexToFileName.field_0x30 = 0xffffffff;
    *(undefined8 *)&(this_00->TocReader).IndexToFileName.field_0x40 = 0;
    *(undefined4 *)&(this_00->TocReader).IndexToFileName.field_0x48 = 0;
    pFVar1 = &this_00->TocReader;
    (pFVar1->Toc).Header.TocMagic[0] = '\0';
    (pFVar1->Toc).Header.TocMagic[1] = '\0';
    (pFVar1->Toc).Header.TocMagic[2] = '\0';
    (pFVar1->Toc).Header.TocMagic[3] = '\0';
    (pFVar1->Toc).Header.TocMagic[4] = '\0';
    (pFVar1->Toc).Header.TocMagic[5] = '\0';
    (pFVar1->Toc).Header.TocMagic[6] = '\0';
    (pFVar1->Toc).Header.TocMagic[7] = '\0';
    pFVar2 = &(this_00->TocReader).Toc;
    (pFVar2->Header).TocMagic[8] = '\0';
    (pFVar2->Header).TocMagic[9] = '\0';
    (pFVar2->Header).TocMagic[10] = '\0';
    (pFVar2->Header).TocMagic[0xb] = '\0';
    (pFVar2->Header).TocMagic[0xc] = '\0';
    (pFVar2->Header).TocMagic[0xd] = '\0';
    (pFVar2->Header).TocMagic[0xe] = '\0';
    (pFVar2->Header).TocMagic[0xf] = '\0';
    (this_00->TocReader).Toc.Header.Version = '\0';
    (this_00->TocReader).Toc.Header.Reserved0 = '\0';
    (this_00->TocReader).Toc.Header.Reserved1 = 0;
    (this_00->TocReader).Toc.Header.TocHeaderSize = 0;
    (this_00->TocReader).Toc.Header.TocEntryCount = 0;
    (this_00->TocReader).Toc.Header.TocCompressedBlockEntryCount = 0;
    (this_00->TocReader).Toc.Header.TocCompressedBlockEntrySize = 0;
    (this_00->TocReader).Toc.Header.CompressionMethodNameCount = 0;
    (this_00->TocReader).Toc.Header.CompressionMethodNameLength = 0;
    (this_00->TocReader).Toc.Header.CompressionBlockSize = 0;
    (this_00->TocReader).Toc.Header.DirectoryIndexSize = 0;
    (this_00->TocReader).Toc.Header.PartitionCount = 0;
    (this_00->TocReader).Toc.Header.ContainerId.Id = 0;
    (this_00->TocReader).Toc.Header.EncryptionKeyGuid.A = 0;
    (this_00->TocReader).Toc.Header.EncryptionKeyGuid.B = 0;
    (this_00->TocReader).Toc.Header.EncryptionKeyGuid.C = 0;
    (this_00->TocReader).Toc.Header.EncryptionKeyGuid.D = 0;
    (this_00->TocReader).Toc.Header.ContainerFlags = None;
    (this_00->TocReader).Toc.Header.Reserved3 = '\0';
    (this_00->TocReader).Toc.Header.Reserved4 = 0;
    (this_00->TocReader).Toc.Header.TocChunkPerfectHashSeedsCount = 0;
    (this_00->TocReader).Toc.Header.PartitionSize = 0;
    (this_00->TocReader).Toc.Header.TocChunksWithoutPerfectHashCount = 0;
    (this_00->TocReader).Toc.Header.Reserved7 = 0;
    (this_00->TocReader).Toc.Header.Reserved8[0] = 0;
    (this_00->TocReader).Toc.Header.Reserved8[1] = 0;
    (this_00->TocReader).Toc.Header.Reserved8[2] = 0;
    (this_00->TocReader).Toc.Header.Reserved8[3] = 0;
    (this_00->TocReader).Toc.Header.Reserved8[4] = 0;
    (this_00->ContainerFileAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ContainerFileAccessors).ArrayNum = 0;
    (this_00->ContainerFileAccessors).ArrayMax = 0;
    (this_00->ContainerPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ContainerPath).Data.ArrayNum = 0;
    (this_00->ContainerPath).Data.ArrayMax = 0;
    this->Impl = this_00;
    return this;
  }
  this->Impl = (FIoStoreReaderImpl *)0x0;
  return this;
}

// ~FIoStoreReader @ 1417a7380

void __thiscall FIoStoreReader::~FIoStoreReader(FIoStoreReader *this)

{
  FIoStoreReaderImpl *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = this->Impl;
  if (this_00 != (FIoStoreReaderImpl *)0x0) {
    pFVar1 = (this_00->ContainerPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>,int>
              ((TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>
                *)(this_00->ContainerFileAccessors).AllocatorInstance.Data,
               (this_00->ContainerFileAccessors).ArrayNum);
    pFVar1 = (this_00->ContainerFileAccessors).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FIoStoreTocReader::~FIoStoreTocReader(&this_00->TocReader);
    ::operator_delete(this_00,0x358);
    return;
  }
  return;
}

// operator() @ 1417ac260

bool __thiscall
`FIoStoreReader::GetFilenamesByBlockIndex'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FIoOffsetAndLength *pFVar6;
  FString *pFVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  
  puVar4 = *(undefined8 **)((longlong)this + 8);
  piVar8 = (int *)*puVar4;
  iVar2 = *(int *)(puVar4 + 1);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)(puVar4 + 1) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar8 == piVar1) break;
    iVar3 = *piVar8;
    lVar5 = **(longlong **)this;
    pFVar6 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                       ((TArrayView<FIoOffsetAndLength_const_,int> *)(lVar5 + 0xa0),param_2);
    uVar10 = (ulonglong)*(uint *)(lVar5 + 0x2c);
    uVar9 = (ulonglong)
            CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar6->OffsetAndLength[0],
                                                pFVar6->OffsetAndLength[1]),
                                       pFVar6->OffsetAndLength[2]),pFVar6->OffsetAndLength[3]),
                     pFVar6->OffsetAndLength[4]);
    if (((int)(uVar9 / uVar10) <= iVar3) &&
       (iVar3 <= (int)(((((ulonglong)
                          CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar6->OffsetAndLength[5],
                                                              pFVar6->OffsetAndLength[6]),
                                                     pFVar6->OffsetAndLength[7]),
                                            pFVar6->OffsetAndLength[8]),pFVar6->OffsetAndLength[9])
                         - 1) + uVar9 + uVar10 & ~(uVar10 - 1)) - 1) / uVar10))) {
      this_00 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar7 = ::FString::ConstructFromPtrSize
                         (&local_48,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      if (&local_58 != pFVar7) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(this_00,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return true;
    }
    piVar8 = piVar8 + 1;
  }
  return true;
}

// EnumerateChunks @ 1417c5240

void __thiscall
FIoStoreReader::EnumerateChunks
          (FIoStoreReader *this,TFunction<bool___cdecl(FIoStoreTocChunkInfo_&&)> *param_1)

{
  FIoStoreReaderImpl::EnumerateChunks(this->Impl,param_1);
  return;
}

// EnumerateCompressedBlocks @ 1417c5450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIoStoreReader::EnumerateCompressedBlocks
          (FIoStoreReader *this,
          TFunction<bool___cdecl(FIoStoreTocCompressedBlockInfo_const_&)> *param_1)

{
  int iVar1;
  FIoStoreReaderImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  uchar local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = this->Impl;
  uVar10 = 0;
  if (0 < (pFVar2->TocReader).Toc.CompressionBlocks.ArrayNum) {
    lVar11 = 0;
    do {
      iVar1 = (pFVar2->TocReader).Toc.CompressionBlocks.ArrayNum;
      uVar6 = 0;
      if ((int)uVar10 < iVar1) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_58 = (longlong)(int)uVar10;
        local_50 = (longlong)iVar1;
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
      puVar8 = ((pFVar2->TocReader).Toc.CompressionBlocks.DataPtr)->Data + lVar11;
      local_48 = *(ulonglong *)puVar8 & 0xffffffffff;
      local_40 = *(uint *)(puVar8 + 4) >> 8;
      local_3c = *(uint *)(puVar8 + 8) & 0xffffff;
      local_38 = puVar8[0xb];
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar9 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&param_1->field_0x10;
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      cVar5 = (*pcVar3)(uVar7,&local_48);
      if (cVar5 == '\0') {
        return;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0xc;
    } while ((int)uVar10 < (pFVar2->TocReader).Toc.CompressionBlocks.ArrayNum);
  }
  return;
}

// EnumerateCompressedBlocksForChunk @ 1417c55a0

void __thiscall
FIoStoreReader::EnumerateCompressedBlocksForChunk
          (FIoStoreReader *this,FIoChunkId *param_1,
          TFunction<bool___cdecl(FIoStoreTocCompressedBlockInfo_const_&)> *param_2)

{
  FIoStoreReaderImpl::EnumerateCompressedBlocksForChunk(this->Impl,param_1,param_2);
  return;
}

// GetChunkCount @ 1417d1c20

int __thiscall FIoStoreReader::GetChunkCount(FIoStoreReader *this)

{
  return (this->Impl->TocReader).Toc.ChunkIds.ArrayNum;
}

// GetChunkInfo @ 1417d1c30

TIoStatusOr<FIoStoreTocChunkInfo> * __thiscall
FIoStoreReader::GetChunkInfo
          (FIoStoreReader *this,TIoStatusOr<FIoStoreTocChunkInfo> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  FIoStoreReaderImpl::GetChunkInfo(this->Impl,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetChunkInfo @ 1417d1c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<FIoStoreTocChunkInfo> * __thiscall
FIoStoreReader::GetChunkInfo
          (FIoStoreReader *this,TIoStatusOr<FIoStoreTocChunkInfo> *__return_storage_ptr__,
          uint param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 uVar3;
  FIoStoreTocChunkInfo *pFVar4;
  int *piVar5;
  undefined1 auStack_b8 [32];
  FIoStoreTocChunkInfo local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 < (uint)(this->Impl->TocReader).Toc.ChunkIds.ArrayNum) {
    pFVar4 = FIoStoreTocReader::GetTocChunkInfo(&this->Impl->TocReader,&local_98,param_1);
    TIoStatusOr<FIoStoreTocChunkInfo>::TIoStatusOr<FIoStoreTocChunkInfo>
              (__return_storage_ptr__,pFVar4);
    if (local_98.FileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.FileName.Data.AllocatorInstance.Data);
    }
  }
  else {
    piVar5 = FMemory::Malloc(0x34,0);
    *piVar5 = 1;
    pwVar1 = (wchar_t *)(piVar5 + 2);
    piVar5[1] = 0x15;
    uVar3 = u_Invalid_TocEntr._8_8_;
    *(undefined8 *)pwVar1 = u_Invalid_TocEntr._0_8_;
    *(undefined8 *)(piVar5 + 4) = uVar3;
    uVar3 = u_Invalid_TocEntr._24_8_;
    *(undefined8 *)(piVar5 + 6) = u_Invalid_TocEntr._16_8_;
    *(undefined8 *)(piVar5 + 8) = uVar3;
    *(undefined8 *)(piVar5 + 10) = u_Invalid_TocEntr._32_8_;
    *(wchar_t *)(piVar5 + 0xc) = u_Invalid_TocEntr[0x14];
    *(undefined2 *)((longlong)piVar5 + 0x32) = 0;
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (pwVar1 == (wchar_t *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    }
    else {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar1;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(piVar5);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCompressionBlockSize @ 1417d2bb0

uint __thiscall FIoStoreReader::GetCompressionBlockSize(FIoStoreReader *this)

{
  return (this->Impl->TocReader).Toc.Header.CompressionBlockSize;
}

// GetCompressionMethods @ 1417d2bc0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FIoStoreReader::GetCompressionMethods(FIoStoreReader *this)

{
  return &(this->Impl->TocReader).Toc.CompressionMethods;
}

// GetContainerFilePaths @ 1417d2bd0

void __thiscall
FIoStoreReader::GetContainerFilePaths
          (FIoStoreReader *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FIoStoreReaderImpl::GetContainerFilePaths(this->Impl,param_1);
  return;
}

// GetContainerFlags @ 1417d2e70

EIoContainerFlags __thiscall FIoStoreReader::GetContainerFlags(FIoStoreReader *this)

{
  return (this->Impl->TocReader).Toc.Header.ContainerFlags;
}

// GetContainerId @ 1417d2e80

FIoContainerId __thiscall FIoStoreReader::GetContainerId(FIoStoreReader *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Impl->TocReader).Toc.Header.ContainerId.Id;
  return (FIoContainerId)(ulong64)in_RDX;
}

// GetContainerName @ 1417d2ea0

FString * __thiscall
FIoStoreReader::GetContainerName(FIoStoreReader *this,FString *__return_storage_ptr__)

{
  FPaths::GetBaseFilename(__return_storage_ptr__,&this->Impl->ContainerPath,true);
  return __return_storage_ptr__;
}

// GetDirectoryIndexReader @ 1417d3050

FIoDirectoryIndexReader * __thiscall FIoStoreReader::GetDirectoryIndexReader(FIoStoreReader *this)

{
  return &(this->Impl->TocReader).DirectoryIndexReader;
}

// GetEncryptionKeyGuid @ 1417d35b0

FGuid * __thiscall
FIoStoreReader::GetEncryptionKeyGuid(FIoStoreReader *this,FGuid *__return_storage_ptr__)

{
  FIoStoreTocReader *pFVar1;
  FIoStoreTocReader *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pFVar1 = &this->Impl->TocReader;
  uVar3 = (pFVar1->Toc).Header.EncryptionKeyGuid.B;
  pFVar2 = &this->Impl->TocReader;
  uVar4 = (pFVar2->Toc).Header.EncryptionKeyGuid.C;
  uVar5 = (pFVar2->Toc).Header.EncryptionKeyGuid.D;
  __return_storage_ptr__->A = (pFVar1->Toc).Header.EncryptionKeyGuid.A;
  __return_storage_ptr__->B = uVar3;
  __return_storage_ptr__->C = uVar4;
  __return_storage_ptr__->D = uVar5;
  return __return_storage_ptr__;
}

// GetFilenames @ 1417d3b40

void __thiscall
FIoStoreReader::GetFilenames
          (FIoStoreReader *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8 [4];
  TStringView<wchar_t> local_28;
  code *local_18;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = local_res8;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FIoStoreReader::GetFilenames'::__l2::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
             ::Call;
  local_28.DataPtr = L"";
  local_res8[0] = param_1;
  FIoDirectoryIndexReader::IterateDirectoryIndex
            (&(this->Impl->TocReader).DirectoryIndexReader,(FIoDirectoryIndexHandle)0x0,&local_28,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *)&local_18);
  return;
}

// GetFilenamesByBlockIndex @ 1417d3bb0

void __thiscall
FIoStoreReader::GetFilenamesByBlockIndex
          (FIoStoreReader *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TStringView<wchar_t> local_48;
  code *local_38;
  FIoStoreReader **local_30;
  FIoStoreReader *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_18;
  
  local_30 = &local_28;
  local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FIoStoreReader::GetFilenamesByBlockIndex'::__l2::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
             ::Call;
  local_48.DataPtr = L"";
  local_28 = this;
  local_20 = param_1;
  local_18 = param_2;
  FIoDirectoryIndexReader::IterateDirectoryIndex
            (&(this->Impl->TocReader).DirectoryIndexReader,(FIoDirectoryIndexHandle)0x0,&local_48,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *)&local_38);
  return;
}

// GetVersion @ 1417d91e0

uint __thiscall FIoStoreReader::GetVersion(FIoStoreReader *this)

{
  return (uint)(this->Impl->TocReader).Toc.Header.Version;
}

// Initialize @ 1417db620

FIoStatus * __thiscall
FIoStoreReader::Initialize
          (FIoStoreReader *this,FIoStatus *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
          *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FIoStoreReaderImpl::Initialize(this->Impl,__return_storage_ptr__,&local_18,param_2);
  return __return_storage_ptr__;
}

// Read @ 1417efbd0

TIoStatusOr<FIoBuffer> * __thiscall
FIoStoreReader::Read
          (FIoStoreReader *this,TIoStatusOr<FIoBuffer> *__return_storage_ptr__,FIoChunkId *param_1,
          FIoReadOptions *param_2)

{
  FIoStoreReaderImpl::Read(this->Impl,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ReadAsync @ 1417f25c0

TTask<TIoStatusOr<FIoBuffer>_> __thiscall
FIoStoreReader::ReadAsync(FIoStoreReader *this,FIoChunkId *param_1,FIoReadOptions *param_2)

{
  FIoStoreReaderImpl::ReadAsync(this->Impl,param_1,param_2);
  return (TTask<TIoStatusOr<FIoBuffer>_>)param_1;
}

// ReadCompressed @ 1417f2d40

TIoStatusOr<FIoStoreCompressedReadResult> * __thiscall
FIoStoreReader::ReadCompressed
          (FIoStoreReader *this,TIoStatusOr<FIoStoreCompressedReadResult> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2,bool param_3)

{
  FIoStoreReaderImpl::ReadCompressed(this->Impl,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

