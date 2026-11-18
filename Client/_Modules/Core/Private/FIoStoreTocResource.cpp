// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ~FIoStoreTocResource @ 1417a74e0

void __thiscall FIoStoreTocResource::~FIoStoreTocResource(FIoStoreTocResource *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChunkMetas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirectoryIndexBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChunkBlockSignatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressionMethods).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressionBlocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChunkIndicesWithoutPerfectHash).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChunkPerfectHashSeeds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChunkOffsetLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChunkIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1417a80f0

FIoStoreTocResource * __thiscall
FIoStoreTocResource::operator=(FIoStoreTocResource *this,FIoStoreTocResource *param_1)

{
  TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined8 uVar17;
  ulong64 uVar18;
  uchar uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> *pTVar24;
  
  uVar17 = *(undefined8 *)((param_1->Header).TocMagic + 8);
  pTVar1 = &param_1->ChunkIds;
  pTVar2 = &this->ChunkIds;
  *(undefined8 *)(this->Header).TocMagic = *(undefined8 *)(param_1->Header).TocMagic;
  *(undefined8 *)((this->Header).TocMagic + 8) = uVar17;
  uVar19 = (param_1->Header).Reserved0;
  uVar20 = (param_1->Header).Reserved1;
  uVar21 = (param_1->Header).TocHeaderSize;
  uVar22 = (param_1->Header).TocEntryCount;
  uVar23 = (param_1->Header).TocCompressedBlockEntryCount;
  (this->Header).Version = (param_1->Header).Version;
  (this->Header).Reserved0 = uVar19;
  (this->Header).Reserved1 = uVar20;
  (this->Header).TocHeaderSize = uVar21;
  (this->Header).TocEntryCount = uVar22;
  (this->Header).TocCompressedBlockEntryCount = uVar23;
  uVar21 = (param_1->Header).CompressionMethodNameCount;
  uVar22 = (param_1->Header).CompressionMethodNameLength;
  uVar23 = (param_1->Header).CompressionBlockSize;
  (this->Header).TocCompressedBlockEntrySize = (param_1->Header).TocCompressedBlockEntrySize;
  (this->Header).CompressionMethodNameCount = uVar21;
  (this->Header).CompressionMethodNameLength = uVar22;
  (this->Header).CompressionBlockSize = uVar23;
  uVar21 = (param_1->Header).PartitionCount;
  uVar18 = (param_1->Header).ContainerId.Id;
  (this->Header).DirectoryIndexSize = (param_1->Header).DirectoryIndexSize;
  (this->Header).PartitionCount = uVar21;
  (this->Header).ContainerId.Id = uVar18;
  uVar21 = (param_1->Header).EncryptionKeyGuid.B;
  uVar22 = (param_1->Header).EncryptionKeyGuid.C;
  uVar23 = (param_1->Header).EncryptionKeyGuid.D;
  (this->Header).EncryptionKeyGuid.A = (param_1->Header).EncryptionKeyGuid.A;
  (this->Header).EncryptionKeyGuid.B = uVar21;
  (this->Header).EncryptionKeyGuid.C = uVar22;
  (this->Header).EncryptionKeyGuid.D = uVar23;
  uVar19 = (param_1->Header).Reserved3;
  uVar20 = (param_1->Header).Reserved4;
  uVar21 = (param_1->Header).TocChunkPerfectHashSeedsCount;
  uVar18 = (param_1->Header).PartitionSize;
  (this->Header).ContainerFlags = (param_1->Header).ContainerFlags;
  (this->Header).Reserved3 = uVar19;
  (this->Header).Reserved4 = uVar20;
  (this->Header).TocChunkPerfectHashSeedsCount = uVar21;
  (this->Header).PartitionSize = uVar18;
  uVar21 = (param_1->Header).Reserved7;
  uVar18 = (param_1->Header).Reserved8[0];
  (this->Header).TocChunksWithoutPerfectHashCount =
       (param_1->Header).TocChunksWithoutPerfectHashCount;
  (this->Header).Reserved7 = uVar21;
  (this->Header).Reserved8[0] = uVar18;
  uVar18 = (param_1->Header).Reserved8[2];
  (this->Header).Reserved8[1] = (param_1->Header).Reserved8[1];
  (this->Header).Reserved8[2] = uVar18;
  uVar18 = (param_1->Header).Reserved8[4];
  (this->Header).Reserved8[3] = (param_1->Header).Reserved8[3];
  (this->Header).Reserved8[4] = uVar18;
  if (pTVar2 != pTVar1) {
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChunkIds).ArrayNum = (param_1->ChunkIds).ArrayNum;
    (this->ChunkIds).ArrayMax = (param_1->ChunkIds).ArrayMax;
    (param_1->ChunkIds).ArrayNum = 0;
    (param_1->ChunkIds).ArrayMax = 0;
  }
  pTVar3 = &param_1->ChunkOffsetLengths;
  pTVar4 = &this->ChunkOffsetLengths;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChunkOffsetLengths).ArrayNum = (param_1->ChunkOffsetLengths).ArrayNum;
    (this->ChunkOffsetLengths).ArrayMax = (param_1->ChunkOffsetLengths).ArrayMax;
    (param_1->ChunkOffsetLengths).ArrayNum = 0;
    (param_1->ChunkOffsetLengths).ArrayMax = 0;
  }
  pTVar5 = &param_1->ChunkPerfectHashSeeds;
  pTVar6 = &this->ChunkPerfectHashSeeds;
  if (pTVar6 != pTVar5) {
    pFVar16 = (pTVar6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChunkPerfectHashSeeds).ArrayNum = (param_1->ChunkPerfectHashSeeds).ArrayNum;
    (this->ChunkPerfectHashSeeds).ArrayMax = (param_1->ChunkPerfectHashSeeds).ArrayMax;
    (param_1->ChunkPerfectHashSeeds).ArrayNum = 0;
    (param_1->ChunkPerfectHashSeeds).ArrayMax = 0;
  }
  pTVar5 = &param_1->ChunkIndicesWithoutPerfectHash;
  pTVar6 = &this->ChunkIndicesWithoutPerfectHash;
  if (pTVar6 != pTVar5) {
    pFVar16 = (pTVar6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChunkIndicesWithoutPerfectHash).ArrayNum =
         (param_1->ChunkIndicesWithoutPerfectHash).ArrayNum;
    (this->ChunkIndicesWithoutPerfectHash).ArrayMax =
         (param_1->ChunkIndicesWithoutPerfectHash).ArrayMax;
    (param_1->ChunkIndicesWithoutPerfectHash).ArrayNum = 0;
    (param_1->ChunkIndicesWithoutPerfectHash).ArrayMax = 0;
  }
  pTVar7 = &param_1->CompressionBlocks;
  pTVar8 = &this->CompressionBlocks;
  if (pTVar8 != pTVar7) {
    pFVar16 = (pTVar8->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CompressionBlocks).ArrayNum = (param_1->CompressionBlocks).ArrayNum;
    (this->CompressionBlocks).ArrayMax = (param_1->CompressionBlocks).ArrayMax;
    (param_1->CompressionBlocks).ArrayNum = 0;
    (param_1->CompressionBlocks).ArrayMax = 0;
  }
  pTVar9 = &param_1->CompressionMethods;
  pTVar10 = &this->CompressionMethods;
  if (pTVar10 != pTVar9) {
    pFVar16 = (pTVar10->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CompressionMethods).ArrayNum = (param_1->CompressionMethods).ArrayNum;
    (this->CompressionMethods).ArrayMax = (param_1->CompressionMethods).ArrayMax;
    (param_1->CompressionMethods).ArrayNum = 0;
    (param_1->CompressionMethods).ArrayMax = 0;
  }
  uVar17 = *(undefined8 *)((param_1->SignatureHash).Hash + 8);
  pTVar11 = &param_1->ChunkBlockSignatures;
  pTVar12 = &this->ChunkBlockSignatures;
  *(undefined8 *)(this->SignatureHash).Hash = *(undefined8 *)(param_1->SignatureHash).Hash;
  *(undefined8 *)((this->SignatureHash).Hash + 8) = uVar17;
  *(undefined4 *)((this->SignatureHash).Hash + 0x10) =
       *(undefined4 *)((param_1->SignatureHash).Hash + 0x10);
  if (pTVar12 != pTVar11) {
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChunkBlockSignatures).ArrayNum = (param_1->ChunkBlockSignatures).ArrayNum;
    (this->ChunkBlockSignatures).ArrayMax = (param_1->ChunkBlockSignatures).ArrayMax;
    (param_1->ChunkBlockSignatures).ArrayNum = 0;
    (param_1->ChunkBlockSignatures).ArrayMax = 0;
  }
  pTVar13 = &param_1->DirectoryIndexBuffer;
  pTVar14 = &this->DirectoryIndexBuffer;
  if (pTVar14 != pTVar13) {
    pFVar16 = (pTVar14->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DirectoryIndexBuffer).ArrayNum = (param_1->DirectoryIndexBuffer).ArrayNum;
    (this->DirectoryIndexBuffer).ArrayMax = (param_1->DirectoryIndexBuffer).ArrayMax;
    (param_1->DirectoryIndexBuffer).ArrayNum = 0;
    (param_1->DirectoryIndexBuffer).ArrayMax = 0;
  }
  pTVar24 = &param_1->ChunkMetas;
  pTVar15 = &this->ChunkMetas;
  if (pTVar15 != pTVar24) {
    pFVar16 = (pTVar15->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar15->AllocatorInstance).Data = (pTVar24->AllocatorInstance).Data;
    (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChunkMetas).ArrayNum = (param_1->ChunkMetas).ArrayNum;
    (this->ChunkMetas).ArrayMax = (param_1->ChunkMetas).ArrayMax;
    (param_1->ChunkMetas).ArrayNum = 0;
    (param_1->ChunkMetas).ArrayMax = 0;
  }
  return this;
}

// BuildResourceFromMappedView @ 1417b6710

FIoStoreTocResource * __cdecl
FIoStoreTocResource::BuildResourceFromMappedView
          (FIoStoreTocResource *__return_storage_ptr__,FIoStoreTocResourceView *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  FIoChunkId *_Src;
  FIoOffsetAndLength *_Src_00;
  FIoStoreTocCompressedBlockEntry *_Src_01;
  FScriptContainerElement *_Src_02;
  FSHAHash *_Src_03;
  uchar *_Src_04;
  FIoStoreTocEntryMeta *_Src_05;
  undefined8 uVar10;
  ulong64 uVar11;
  uchar uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  
  (__return_storage_ptr__->Header).Reserved0 = '\0';
  pTVar4 = &__return_storage_ptr__->ChunkOffsetLengths;
  (__return_storage_ptr__->Header).ContainerId.Id = 0xffffffffffffffff;
  piVar1 = &(__return_storage_ptr__->ChunkOffsetLengths).ArrayMax;
  (__return_storage_ptr__->Header).Reserved1 = 0;
  (__return_storage_ptr__->Header).PartitionCount = 0;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.A = 0;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.B = 0;
  piVar2 = &(__return_storage_ptr__->ChunkIds).ArrayMax;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.C = 0;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.D = 0;
  pTVar5 = &__return_storage_ptr__->ChunkMetas;
  (__return_storage_ptr__->Header).Reserved3 = '\0';
  pTVar6 = &__return_storage_ptr__->CompressionMethods;
  (__return_storage_ptr__->Header).Reserved4 = 0;
  piVar3 = &(__return_storage_ptr__->ChunkMetas).ArrayMax;
  (__return_storage_ptr__->Header).TocChunkPerfectHashSeedsCount = 0;
  (__return_storage_ptr__->Header).PartitionSize = 0;
  (__return_storage_ptr__->Header).TocChunksWithoutPerfectHashCount = 0;
  (__return_storage_ptr__->Header).Reserved7 = 0;
  (__return_storage_ptr__->Header).Reserved8[0] = 0;
  (__return_storage_ptr__->Header).Reserved8[1] = 0;
  (__return_storage_ptr__->Header).Reserved8[2] = 0;
  (__return_storage_ptr__->Header).Reserved8[3] = 0;
  (__return_storage_ptr__->Header).Reserved8[4] = 0;
  (__return_storage_ptr__->ChunkPerfectHashSeeds).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkPerfectHashSeeds).ArrayNum = 0;
  (__return_storage_ptr__->ChunkPerfectHashSeeds).ArrayMax = 0;
  (__return_storage_ptr__->ChunkIndicesWithoutPerfectHash).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkIndicesWithoutPerfectHash).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIndicesWithoutPerfectHash).ArrayMax = 0;
  (__return_storage_ptr__->CompressionBlocks).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CompressionBlocks).ArrayNum = 0;
  piVar17 = &(__return_storage_ptr__->CompressionBlocks).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CompressionMethods).ArrayNum = 0;
  (__return_storage_ptr__->CompressionMethods).ArrayMax = 0;
  (__return_storage_ptr__->ChunkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkIds).ArrayNum = 0;
  *piVar2 = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkOffsetLengths).ArrayNum = 0;
  *piVar1 = 0;
  (__return_storage_ptr__->CompressionBlocks).ArrayMax = 0;
  (__return_storage_ptr__->SignatureHash).Hash[0] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[1] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[2] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[3] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[4] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[5] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[6] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[7] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[8] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[9] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[10] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0xb] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0xc] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0xd] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0xe] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0xf] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0x10] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0x11] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0x12] = '\0';
  (__return_storage_ptr__->SignatureHash).Hash[0x13] = '\0';
  (__return_storage_ptr__->ChunkBlockSignatures).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkBlockSignatures).ArrayNum = 0;
  (__return_storage_ptr__->ChunkBlockSignatures).ArrayMax = 0;
  (__return_storage_ptr__->DirectoryIndexBuffer).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DirectoryIndexBuffer).ArrayNum = 0;
  (__return_storage_ptr__->DirectoryIndexBuffer).ArrayMax = 0;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkMetas).ArrayNum = 0;
  *piVar3 = 0;
  uVar10 = *(undefined8 *)((param_1->Header).TocMagic + 8);
  piVar7 = &(__return_storage_ptr__->ChunkBlockSignatures).ArrayMax;
  piVar8 = &(__return_storage_ptr__->DirectoryIndexBuffer).ArrayMax;
  *(undefined8 *)(__return_storage_ptr__->Header).TocMagic =
       *(undefined8 *)(param_1->Header).TocMagic;
  *(undefined8 *)((__return_storage_ptr__->Header).TocMagic + 8) = uVar10;
  uVar12 = (param_1->Header).Reserved0;
  uVar13 = (param_1->Header).Reserved1;
  uVar14 = (param_1->Header).TocHeaderSize;
  uVar15 = (param_1->Header).TocEntryCount;
  uVar16 = (param_1->Header).TocCompressedBlockEntryCount;
  (__return_storage_ptr__->Header).Version = (param_1->Header).Version;
  (__return_storage_ptr__->Header).Reserved0 = uVar12;
  (__return_storage_ptr__->Header).Reserved1 = uVar13;
  (__return_storage_ptr__->Header).TocHeaderSize = uVar14;
  (__return_storage_ptr__->Header).TocEntryCount = uVar15;
  (__return_storage_ptr__->Header).TocCompressedBlockEntryCount = uVar16;
  uVar14 = (param_1->Header).CompressionMethodNameCount;
  uVar15 = (param_1->Header).CompressionMethodNameLength;
  uVar16 = (param_1->Header).CompressionBlockSize;
  (__return_storage_ptr__->Header).TocCompressedBlockEntrySize =
       (param_1->Header).TocCompressedBlockEntrySize;
  (__return_storage_ptr__->Header).CompressionMethodNameCount = uVar14;
  (__return_storage_ptr__->Header).CompressionMethodNameLength = uVar15;
  (__return_storage_ptr__->Header).CompressionBlockSize = uVar16;
  uVar14 = (param_1->Header).PartitionCount;
  uVar11 = (param_1->Header).ContainerId.Id;
  (__return_storage_ptr__->Header).DirectoryIndexSize = (param_1->Header).DirectoryIndexSize;
  (__return_storage_ptr__->Header).PartitionCount = uVar14;
  (__return_storage_ptr__->Header).ContainerId.Id = uVar11;
  uVar14 = (param_1->Header).EncryptionKeyGuid.B;
  uVar15 = (param_1->Header).EncryptionKeyGuid.C;
  uVar16 = (param_1->Header).EncryptionKeyGuid.D;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.A = (param_1->Header).EncryptionKeyGuid.A;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.B = uVar14;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.C = uVar15;
  (__return_storage_ptr__->Header).EncryptionKeyGuid.D = uVar16;
  uVar12 = (param_1->Header).Reserved3;
  uVar13 = (param_1->Header).Reserved4;
  uVar14 = (param_1->Header).TocChunkPerfectHashSeedsCount;
  uVar11 = (param_1->Header).PartitionSize;
  (__return_storage_ptr__->Header).ContainerFlags = (param_1->Header).ContainerFlags;
  (__return_storage_ptr__->Header).Reserved3 = uVar12;
  (__return_storage_ptr__->Header).Reserved4 = uVar13;
  (__return_storage_ptr__->Header).TocChunkPerfectHashSeedsCount = uVar14;
  (__return_storage_ptr__->Header).PartitionSize = uVar11;
  uVar14 = (param_1->Header).Reserved7;
  uVar11 = (param_1->Header).Reserved8[0];
  (__return_storage_ptr__->Header).TocChunksWithoutPerfectHashCount =
       (param_1->Header).TocChunksWithoutPerfectHashCount;
  (__return_storage_ptr__->Header).Reserved7 = uVar14;
  (__return_storage_ptr__->Header).Reserved8[0] = uVar11;
  uVar11 = (param_1->Header).Reserved8[2];
  (__return_storage_ptr__->Header).Reserved8[1] = (param_1->Header).Reserved8[1];
  (__return_storage_ptr__->Header).Reserved8[2] = uVar11;
  uVar11 = (param_1->Header).Reserved8[4];
  (__return_storage_ptr__->Header).Reserved8[3] = (param_1->Header).Reserved8[3];
  (__return_storage_ptr__->Header).Reserved8[4] = uVar11;
  iVar9 = (param_1->ChunkIds).ArrayNum;
  _Src = (param_1->ChunkIds).DataPtr;
  (__return_storage_ptr__->ChunkIds).ArrayNum = iVar9;
  if ((iVar9 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,1,iVar9,*piVar2,&(__return_storage_ptr__->ChunkIds).AllocatorInstance,iVar9,
               piVar2);
    if (iVar9 != 0) {
      memcpy((__return_storage_ptr__->ChunkIds).AllocatorInstance.Data,_Src,(longlong)iVar9 * 0xc);
    }
  }
  iVar9 = (param_1->ChunkOffsetLengths).ArrayNum;
  _Src_00 = (param_1->ChunkOffsetLengths).DataPtr;
  (__return_storage_ptr__->ChunkOffsetLengths).ArrayNum = iVar9;
  if ((iVar9 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (10,1,iVar9,*piVar1,&pTVar4->AllocatorInstance,iVar9,piVar1);
    if (iVar9 != 0) {
      memcpy((pTVar4->AllocatorInstance).Data,_Src_00,(longlong)iVar9 * 10);
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=<int_const_,int>
            (&__return_storage_ptr__->ChunkPerfectHashSeeds,&param_1->ChunkPerfectHashSeeds);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=<int_const_,int>
            (&__return_storage_ptr__->ChunkIndicesWithoutPerfectHash,
             &param_1->ChunkIndicesWithoutPerfectHash);
  iVar9 = (param_1->CompressionBlocks).ArrayNum;
  _Src_01 = (param_1->CompressionBlocks).DataPtr;
  (__return_storage_ptr__->CompressionBlocks).ArrayNum = iVar9;
  if ((iVar9 == 0) && (*piVar17 == 0)) {
    *piVar17 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,1,iVar9,*piVar17,&(__return_storage_ptr__->CompressionBlocks).AllocatorInstance,
               iVar9,piVar17);
    if (iVar9 != 0) {
      memcpy((__return_storage_ptr__->CompressionBlocks).AllocatorInstance.Data,_Src_01,
             (longlong)iVar9 * 0xc);
    }
  }
  if (pTVar6 != &param_1->CompressionMethods) {
    iVar9 = (param_1->CompressionMethods).ArrayNum;
    piVar1 = &(__return_storage_ptr__->CompressionMethods).ArrayMax;
    _Src_02 = (param_1->CompressionMethods).AllocatorInstance.Data;
    (__return_storage_ptr__->CompressionMethods).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar9,*piVar1,&pTVar6->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,_Src_02,(longlong)iVar9 << 3);
      }
    }
  }
  uVar10 = *(undefined8 *)((param_1->SignatureHash).Hash + 8);
  *(undefined8 *)(__return_storage_ptr__->SignatureHash).Hash =
       *(undefined8 *)(param_1->SignatureHash).Hash;
  *(undefined8 *)((__return_storage_ptr__->SignatureHash).Hash + 8) = uVar10;
  *(undefined4 *)((__return_storage_ptr__->SignatureHash).Hash + 0x10) =
       *(undefined4 *)((param_1->SignatureHash).Hash + 0x10);
  iVar9 = (param_1->ChunkBlockSignatures).ArrayNum;
  _Src_03 = (param_1->ChunkBlockSignatures).DataPtr;
  (__return_storage_ptr__->ChunkBlockSignatures).ArrayNum = iVar9;
  if ((iVar9 == 0) && (*piVar7 == 0)) {
    *piVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar9,*piVar7,
               &(__return_storage_ptr__->ChunkBlockSignatures).AllocatorInstance,iVar9,piVar7);
    if (iVar9 != 0) {
      memcpy((__return_storage_ptr__->ChunkBlockSignatures).AllocatorInstance.Data,_Src_03,
             (longlong)iVar9 * 0x14);
    }
  }
  iVar9 = (param_1->DirectoryIndexBuffer).ArrayNum;
  _Src_04 = (param_1->DirectoryIndexBuffer).DataPtr;
  (__return_storage_ptr__->DirectoryIndexBuffer).ArrayNum = iVar9;
  if ((iVar9 == 0) && (*piVar8 == 0)) {
    *piVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar9,*piVar8,&(__return_storage_ptr__->DirectoryIndexBuffer).AllocatorInstance,
               iVar9,piVar8);
    if (iVar9 != 0) {
      memcpy((__return_storage_ptr__->DirectoryIndexBuffer).AllocatorInstance.Data,_Src_04,
             (longlong)iVar9);
    }
  }
  iVar9 = (param_1->ChunkMetas).ArrayNum;
  _Src_05 = (param_1->ChunkMetas).DataPtr;
  (__return_storage_ptr__->ChunkMetas).ArrayNum = iVar9;
  if ((iVar9 == 0) && (*piVar3 == 0)) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar9,*piVar3,&pTVar5->AllocatorInstance,iVar9,piVar3);
    if (iVar9 != 0) {
      memcpy((pTVar5->AllocatorInstance).Data,_Src_05,(longlong)iVar9 * 0x18);
    }
  }
  return __return_storage_ptr__;
}

// GetTocChunkInfo @ 1417d83e0

FIoStoreTocChunkInfo * __thiscall
FIoStoreTocResource::GetTocChunkInfo
          (FIoStoreTocResource *this,FIoStoreTocChunkInfo *__return_storage_ptr__,int param_1)

{
  GetTocChunkInfoInternal<FIoStoreTocResource>(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// HashChunkIdWithSeed @ 1417d99d0

ulong64 __cdecl FIoStoreTocResource::HashChunkIdWithSeed(int param_1,FIoChunkId *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1;
  if (param_1 == 0) {
    lVar1 = -0x340d631b7bdddcdb;
  }
  return ((((ulonglong)param_2->Id[8] ^
           ((((((((lVar1 * 0x100000001b3 ^ (ulonglong)param_2->Id[0]) * 0x100000001b3 ^
                 (ulonglong)param_2->Id[1]) * 0x100000001b3 ^ (ulonglong)param_2->Id[2]) *
                0x100000001b3 ^ (ulonglong)param_2->Id[3]) * 0x100000001b3 ^
              (ulonglong)param_2->Id[4]) * 0x100000001b3 ^ (ulonglong)param_2->Id[5]) *
             0x100000001b3 ^ (ulonglong)param_2->Id[6]) * 0x100000001b3 ^ (ulonglong)param_2->Id[7])
           * 0x100000001b3) * 0x100000001b3 ^ (ulonglong)param_2->Id[9]) * 0x100000001b3 ^
         (ulonglong)param_2->Id[10]) * 0x100000001b3 ^ (ulonglong)param_2->Id[0xb];
}

// Read @ 1417f0ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __cdecl
FIoStoreTocResource::Read
          (FIoStatus *__return_storage_ptr__,wchar_t *param_1,EIoStoreTocReadOptions param_2,
          FIoStoreTocResource *param_3)

{
  code *pcVar1;
  bool bVar2;
  FIoStoreTocResource *pFVar3;
  FIoStatus *pFVar4;
  ulonglong uVar5;
  undefined1 auStackY_418 [32];
  FIoStoreTocResourceView local_3e8;
  FIoStoreTocResourceStorage local_298;
  FIoStoreTocResource local_168;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3e8.Header.Reserved0 = '\0';
  local_3e8.Header.Reserved8[4] = 0;
  local_3e8.SignatureHash.Hash[0x10] = '\0';
  local_3e8.SignatureHash.Hash[0x11] = '\0';
  local_3e8.SignatureHash.Hash[0x12] = '\0';
  local_3e8.SignatureHash.Hash[0x13] = '\0';
  local_298.Data.TypeIndex = 0;
  local_3e8.Header.Reserved1 = 0;
  local_3e8.Header.PartitionCount = 0;
  local_3e8.Header.EncryptionKeyGuid.A = 0;
  local_3e8.Header.EncryptionKeyGuid.B = 0;
  local_3e8.Header.EncryptionKeyGuid.C = 0;
  local_3e8.Header.EncryptionKeyGuid.D = 0;
  local_3e8.Header.Reserved3 = '\0';
  local_3e8.Header.Reserved4 = 0;
  local_3e8.Header.TocChunkPerfectHashSeedsCount = 0;
  local_3e8.Header.PartitionSize = 0;
  local_3e8.Header.TocChunksWithoutPerfectHashCount = 0;
  local_3e8.Header.Reserved7 = 0;
  local_3e8.ChunkIds.DataPtr = (FIoChunkId *)0x0;
  local_3e8.ChunkIds.ArrayNum = 0;
  local_3e8.ChunkOffsetLengths.DataPtr = (FIoOffsetAndLength *)0x0;
  local_3e8.ChunkOffsetLengths.ArrayNum = 0;
  local_3e8.ChunkPerfectHashSeeds.DataPtr = (int *)0x0;
  local_3e8.ChunkPerfectHashSeeds.ArrayNum = 0;
  local_3e8.ChunkIndicesWithoutPerfectHash.DataPtr = (int *)0x0;
  local_3e8.ChunkIndicesWithoutPerfectHash.ArrayNum = 0;
  local_3e8.CompressionBlocks.DataPtr = (FIoStoreTocCompressedBlockEntry *)0x0;
  local_3e8.CompressionBlocks.ArrayNum = 0;
  local_3e8.CompressionMethods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e8.CompressionMethods.ArrayNum = 0;
  local_3e8.CompressionMethods.ArrayMax = 0;
  local_3e8.ChunkBlockSignatures.DataPtr = (FSHAHash *)0x0;
  local_3e8.ChunkBlockSignatures.ArrayNum = 0;
  local_3e8.DirectoryIndexBuffer.DataPtr = (uchar *)0x0;
  local_3e8.DirectoryIndexBuffer.ArrayNum = 0;
  local_3e8.ChunkMetas.DataPtr = (FIoStoreTocEntryMeta *)0x0;
  local_3e8.ChunkMetas.ArrayNum = 0;
  local_3e8.LegacyChunkMetas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e8.LegacyChunkMetas.ArrayNum = 0;
  local_3e8.LegacyChunkMetas.ArrayMax = 0;
  local_3e8.Header.ContainerId.Id = 0xffffffffffffffff;
  local_3e8.Header.Reserved8[0] = 0;
  local_3e8.Header.Reserved8[1] = 0;
  local_3e8.Header.Reserved8[2] = 0;
  local_3e8.Header.Reserved8[3] = 0;
  local_3e8.SignatureHash.Hash[0] = '\0';
  local_3e8.SignatureHash.Hash[1] = '\0';
  local_3e8.SignatureHash.Hash[2] = '\0';
  local_3e8.SignatureHash.Hash[3] = '\0';
  local_3e8.SignatureHash.Hash[4] = '\0';
  local_3e8.SignatureHash.Hash[5] = '\0';
  local_3e8.SignatureHash.Hash[6] = '\0';
  local_3e8.SignatureHash.Hash[7] = '\0';
  local_3e8.SignatureHash.Hash[8] = '\0';
  local_3e8.SignatureHash.Hash[9] = '\0';
  local_3e8.SignatureHash.Hash[10] = '\0';
  local_3e8.SignatureHash.Hash[0xb] = '\0';
  local_3e8.SignatureHash.Hash[0xc] = '\0';
  local_3e8.SignatureHash.Hash[0xd] = '\0';
  local_3e8.SignatureHash.Hash[0xe] = '\0';
  local_3e8.SignatureHash.Hash[0xf] = '\0';
  FIoStoreTocResourceView::Read(__return_storage_ptr__,param_1,param_2,&local_3e8,&local_298);
  if (__return_storage_ptr__->ErrorCode == Ok) {
    pFVar3 = BuildResourceFromMappedView(&local_168,&local_3e8);
    operator=(param_3,pFVar3);
    ~FIoStoreTocResource(&local_168);
  }
  uVar5 = (ulonglong)local_298.Data.TypeIndex;
  if (2 < local_298.Data.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoStatus *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_298);
  }
  if (local_3e8.LegacyChunkMetas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.LegacyChunkMetas.AllocatorInstance.Data);
  }
  if (local_3e8.CompressionMethods.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.CompressionMethods.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Write @ 14180d320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<unsigned___int64> * __cdecl
FIoStoreTocResource::Write
          (TIoStatusOr<unsigned___int64> *__return_storage_ptr__,wchar_t *param_1,
          FIoStoreTocResource *param_2,uint param_3,ulong64 param_4,FIoContainerSettings *param_5)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  TSharedString<wchar_t> TVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  TIoStatusOr<unsigned___int64> *pTVar9;
  FPlatformFileManager *this;
  IPlatformFile *pIVar10;
  longlong *plVar11;
  size_t sVar12;
  FIoStatus *pFVar13;
  FString *pFVar14;
  char *pcVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  TStringView<wchar_t> *pTVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FName *pFVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  FName *pFVar29;
  undefined1 auStackY_1a68 [32];
  undefined1 local_1a38 [4];
  int local_1a34;
  uint local_1a30;
  FName *local_1a28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a10;
  FIoContainerSettings *local_1a00;
  FIoStatus local_19f8;
  FName local_19e8;
  FName *local_19e0;
  FIoStatus local_19d8;
  FIoStatus local_19c8;
  FString local_19b8;
  FString local_19a8;
  FString local_1998;
  FString local_1988;
  FString local_1978;
  FString local_1968;
  FString local_1958;
  FIoStatus local_1948;
  FString local_1938;
  FString local_1928;
  FString local_1918;
  TStringView<wchar_t> local_1908;
  TStringView<wchar_t> local_18f8;
  TStringView<wchar_t> local_18e8;
  TStringView<wchar_t> local_18d8;
  TStringView<wchar_t> local_18c8;
  TStringView<wchar_t> local_18b8;
  TStringView<wchar_t> local_18a8;
  TStringView<wchar_t> local_1898;
  TStringView<wchar_t> local_1888;
  TStringView<wchar_t> local_1878;
  FScriptContainerElement *local_1868;
  int iStack_1860;
  undefined4 uStack_185c;
  TStringView<wchar_t> local_1858;
  TStringView<wchar_t> local_1848;
  TStringView<wchar_t> local_1838;
  FString local_1828;
  TArrayView<FSHAHash_const_,int> local_1818;
  FIoStatus local_1808;
  FIoStatus local_17f8;
  FIoStatus local_17e8;
  FIoStatus local_17d8;
  FIoStatus local_17c8;
  FIoStatus local_17b8;
  FIoStatus local_17a8;
  FIoStatus local_1798;
  FIoStatus local_1788;
  FIoStatus local_1778;
  FIoStatus local_1768;
  FIoStatus local_1758;
  FIoStatus local_1748;
  FScriptContainerElement local_1738 [128];
  ForAnyElementType local_16b8;
  FScriptContainerElement *local_16b0;
  int local_16a8;
  undefined1 local_1698 [16];
  wchar_t *local_1688;
  wchar_t *local_1680;
  undefined2 local_1678;
  wchar_t local_1670 [256];
  wchar_t local_1470 [4];
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  ulonglong uStack_1450;
  wchar_t local_1448 [256];
  wchar_t local_1248 [256];
  wchar_t local_1048 [256];
  wchar_t local_e48 [256];
  wchar_t local_c48 [256];
  wchar_t local_a48 [256];
  wchar_t local_848 [256];
  wchar_t local_648 [256];
  wchar_t local_448 [256];
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a68;
  local_1a00 = param_5;
  local_1a30 = param_3;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TocFilePath != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                         ,0x5c1,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
    return pTVar9;
  }
  this = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(this);
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x110))(pIVar10,param_1,0,1);
  if (plVar11 == (longlong *)0x0) {
    local_1698._8_8_ = local_1670;
    local_1698._0_4_ = FileOpenFailed;
    local_1698._4_4_ = 0;
    local_1688 = local_1670;
    iVar18 = 0;
    local_1680 = local_1470;
    local_1678 = 0;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_1698 + 8),L"Failed to open IoStore TOC file \'"
               ,0x21);
    if (param_1 != (wchar_t *)0x0) {
      sVar12 = wcslen(param_1);
      iVar18 = (int)sVar12;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_1698 + 8),param_1,iVar18);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_1698 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_1698,&local_19d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_1698 + 8));
    local_19c8.ErrorMessage.Chars = local_19d8.ErrorMessage.Chars;
    if (local_19d8.ErrorMessage.Chars == (wchar_t *)0x0) {
      pwVar20 = (wchar_t *)&DAT_fffffffffffffff8;
    }
    else {
      pwVar20 = local_19d8.ErrorMessage.Chars + -4;
      LOCK();
      *(int *)pwVar20 = *(int *)pwVar20 + 1;
      UNLOCK();
    }
    local_19c8.ErrorCode = local_19d8.ErrorCode;
    local_19c8.SystemErrorCode = local_19d8.SystemErrorCode;
    TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,&local_19c8)
    ;
    if (local_19d8.ErrorMessage.Chars == (wchar_t *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    iVar18 = *(int *)pwVar20;
    *(int *)pwVar20 = *(int *)pwVar20 + -1;
    UNLOCK();
    if (iVar18 != 1) {
      return __return_storage_ptr__;
    }
    FMemory::Free(pwVar20);
    return __return_storage_ptr__;
  }
  iVar18 = (param_2->ChunkIds).ArrayNum;
  if (iVar18 != (param_2->ChunkOffsetLengths).ArrayNum) {
    local_1908.Size = 0x3b;
    local_1908.DataPtr = L"Number of TOC chunk IDs doesn\'t match the number of offsets";
    pTVar21 = &local_1908;
    pFVar13 = &local_1808;
LAB_14180d506:
    pFVar13 = FIoStatus::FIoStatus(pFVar13,InvalidParameter,pTVar21);
    TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar13);
    (**(code **)*plVar11)(plVar11,1);
    return __return_storage_ptr__;
  }
  if (iVar18 != (param_2->ChunkMetas).ArrayNum) {
    local_18f8.Size = 0x43;
    local_18f8.DataPtr = L"Number of TOC chunk IDs doesn\'t match the number of chunk meta data";
    pTVar21 = &local_18f8;
    pFVar13 = &local_17f8;
    goto LAB_14180d506;
  }
  pFVar19 = (FScriptContainerElement *)0x0;
  bVar2 = 0;
  pFVar23 = pFVar19;
  pFVar27 = pFVar19;
  bVar5 = 0;
  if (0 < (param_2->CompressionMethods).ArrayNum) {
    do {
      bVar2 = bVar5;
      uVar26 = (uint)pFVar27;
      uVar24 = 0;
      if ((int)uVar26 < (param_2->CompressionMethods).ArrayNum) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
        return pTVar9;
      }
      if (*(longlong *)(pFVar23 + (longlong)(param_2->CompressionMethods).AllocatorInstance.Data) ==
          0) {
        if (uVar26 != 0) {
          local_18e8.Size = 0x3c;
          local_18e8.DataPtr = L"Compression method None must be the first compression method";
          pFVar13 = FIoStatus::FIoStatus(&local_17e8,InvalidParameter,&local_18e8);
          TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                    (__return_storage_ptr__,pFVar13);
          goto LAB_14180e30e;
        }
        bVar2 = 1;
      }
      param_5 = local_1a00;
      pFVar23 = pFVar23 + 8;
      pFVar27 = (FScriptContainerElement *)(ulonglong)(uVar26 + 1);
      bVar5 = bVar2;
    } while ((int)(uVar26 + 1) < (param_2->CompressionMethods).ArrayNum);
  }
  (param_2->Header).TocMagic[0] = '\0';
  (param_2->Header).TocMagic[1] = '\0';
  (param_2->Header).TocMagic[2] = '\0';
  (param_2->Header).TocMagic[3] = '\0';
  (param_2->Header).TocMagic[4] = '\0';
  (param_2->Header).TocMagic[5] = '\0';
  (param_2->Header).TocMagic[6] = '\0';
  (param_2->Header).TocMagic[7] = '\0';
  (param_2->Header).TocMagic[8] = '\0';
  (param_2->Header).TocMagic[9] = '\0';
  (param_2->Header).TocMagic[10] = '\0';
  (param_2->Header).TocMagic[0xb] = '\0';
  (param_2->Header).TocMagic[0xc] = '\0';
  (param_2->Header).TocMagic[0xd] = '\0';
  (param_2->Header).TocMagic[0xe] = '\0';
  (param_2->Header).TocMagic[0xf] = '\0';
  (param_2->Header).Version = '\0';
  (param_2->Header).Reserved0 = '\0';
  (param_2->Header).Reserved1 = 0;
  (param_2->Header).TocHeaderSize = 0;
  (param_2->Header).TocEntryCount = 0;
  (param_2->Header).TocCompressedBlockEntryCount = 0;
  (param_2->Header).TocCompressedBlockEntrySize = 0;
  (param_2->Header).CompressionMethodNameCount = 0;
  (param_2->Header).CompressionMethodNameLength = 0;
  (param_2->Header).CompressionBlockSize = 0;
  (param_2->Header).DirectoryIndexSize = 0;
  (param_2->Header).PartitionCount = 0;
  (param_2->Header).ContainerId.Id = 0;
  (param_2->Header).EncryptionKeyGuid.A = 0;
  (param_2->Header).EncryptionKeyGuid.B = 0;
  (param_2->Header).EncryptionKeyGuid.C = 0;
  (param_2->Header).EncryptionKeyGuid.D = 0;
  (param_2->Header).ContainerFlags = None;
  (param_2->Header).Reserved3 = '\0';
  (param_2->Header).Reserved4 = 0;
  (param_2->Header).TocChunkPerfectHashSeedsCount = 0;
  (param_2->Header).PartitionSize = 0;
  (param_2->Header).TocChunksWithoutPerfectHashCount = 0;
  (param_2->Header).Reserved7 = 0;
  (param_2->Header).Reserved8[0] = 0;
  (param_2->Header).Reserved8[1] = 0;
  (param_2->Header).Reserved8[2] = 0;
  (param_2->Header).Reserved8[3] = 0;
  (param_2->Header).Reserved8[4] = 0;
  uVar16 = FIoStoreTocHeader::TocMagicImg._8_8_;
  *(undefined8 *)(param_2->Header).TocMagic = FIoStoreTocHeader::TocMagicImg._0_8_;
  *(undefined8 *)((param_2->Header).TocMagic + 8) = uVar16;
  (param_2->Header).Version = '\b';
  (param_2->Header).TocHeaderSize = 0x90;
  uVar24 = (param_2->ChunkIds).ArrayNum;
  (param_2->Header).TocEntryCount = uVar24;
  (param_2->Header).TocChunkPerfectHashSeedsCount = (param_2->ChunkPerfectHashSeeds).ArrayNum;
  (param_2->Header).TocChunksWithoutPerfectHashCount =
       (param_2->ChunkIndicesWithoutPerfectHash).ArrayNum;
  (param_2->Header).TocCompressedBlockEntryCount = (param_2->CompressionBlocks).ArrayNum;
  (param_2->Header).CompressionBlockSize = local_1a30;
  (param_2->Header).TocCompressedBlockEntrySize = 0xc;
  iVar18 = (param_2->CompressionMethods).ArrayNum;
  (param_2->Header).CompressionMethodNameLength = 0x20;
  (param_2->Header).CompressionMethodNameCount = iVar18 - (uint)bVar2;
  (param_2->Header).DirectoryIndexSize = (param_2->DirectoryIndexBuffer).ArrayNum;
  (param_2->Header).ContainerId.Id = (param_5->ContainerId).Id;
  uVar26 = (param_5->EncryptionKeyGuid).B;
  uVar22 = (param_5->EncryptionKeyGuid).C;
  uVar3 = (param_5->EncryptionKeyGuid).D;
  (param_2->Header).EncryptionKeyGuid.A = (param_5->EncryptionKeyGuid).A;
  (param_2->Header).EncryptionKeyGuid.B = uVar26;
  (param_2->Header).EncryptionKeyGuid.C = uVar22;
  (param_2->Header).EncryptionKeyGuid.D = uVar3;
  (param_2->Header).ContainerFlags = param_5->ContainerFlags;
  uVar26 = 0;
  if (uVar24 == 0) {
    (param_2->Header).PartitionCount = 0;
LAB_14180d803:
    param_4 = 0xffffffffffffffff;
  }
  else {
    if (param_4 == 0) {
      (param_2->Header).PartitionCount = 1;
      goto LAB_14180d803;
    }
    iVar18 = (param_2->CompressionBlocks).ArrayNum;
    uVar22 = iVar18 - 1;
    uVar24 = uVar26;
    if ((int)uVar22 < iVar18) {
      uVar24 = ~uVar22 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
      return pTVar9;
    }
    uVar17 = *(ulonglong *)
              ((param_2->CompressionBlocks).AllocatorInstance.Data +
              (longlong)(param_2->CompressionBlocks).ArrayNum * 0xc + -0xc);
    uVar17 = ((uVar17 & 0xffffffffff) + ((uVar17 >> 0x28) - 1)) / param_4 + 1;
    if ((uVar17 != (uVar17 & 0xffffffff)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar6))
    {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
      return pTVar9;
    }
    (param_2->Header).PartitionCount = (uint)uVar17;
    if (((uint)uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TocHeader.PartitionCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                           ,0x5ff,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
      return pTVar9;
    }
  }
  (param_2->Header).PartitionSize = param_4;
  (**(code **)(*plVar11 + 0x10))(plVar11,0);
  cVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,param_2,0x90);
  if (cVar7 == '\0') {
    DVar8 = FWindowsPlatformMisc::GetLastError();
    FWindowsPlatformMisc::GetSystemErrorMessage(local_1448,0x100,DVar8);
    ::FString::PrintfImpl(&local_19b8,L"%s Error: (%u: %s).");
    local_18d8.DataPtr = (wchar_t *)local_19b8.Data.AllocatorInstance.Data;
    local_18d8.Size = local_19b8.Data.ArrayNum - 1;
    if (local_19b8.Data.ArrayNum == 0) {
      local_18d8.Size = uVar26;
    }
    pFVar13 = FIoStatus::FIoStatus(&local_17d8,WriteError,&local_18d8);
    TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar13);
    if (local_19b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_19b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    cVar7 = (**(code **)(*plVar11 + 0x30))
                      (plVar11,(param_2->ChunkIds).AllocatorInstance.Data,
                       (param_2->ChunkIds).ArrayNum * 0xc);
    if (cVar7 == '\0') {
      DVar8 = FWindowsPlatformMisc::GetLastError();
      FWindowsPlatformMisc::GetSystemErrorMessage(local_1248,0x100,DVar8);
      ::FString::PrintfImpl(&local_19a8,L"%s Error: (%u: %s).");
      local_18c8.DataPtr = (wchar_t *)local_19a8.Data.AllocatorInstance.Data;
      local_18c8.Size = local_19a8.Data.ArrayNum - 1;
      if (local_19a8.Data.ArrayNum == 0) {
        local_18c8.Size = uVar26;
      }
      pFVar13 = FIoStatus::FIoStatus(&local_17c8,WriteError,&local_18c8);
      TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar13);
      if (local_19a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_19a8.Data.AllocatorInstance.Data);
      }
    }
    else {
      cVar7 = (**(code **)(*plVar11 + 0x30))
                        (plVar11,(param_2->ChunkOffsetLengths).AllocatorInstance.Data,
                         (param_2->ChunkOffsetLengths).ArrayNum * 10);
      if (cVar7 == '\0') {
        DVar8 = FWindowsPlatformMisc::GetLastError();
        FWindowsPlatformMisc::GetSystemErrorMessage(local_248,0x100,DVar8);
        ::FString::PrintfImpl(&local_1998,L"%s Error: (%u: %s).");
        local_18b8.DataPtr = (wchar_t *)local_1998.Data.AllocatorInstance.Data;
        local_18b8.Size = local_1998.Data.ArrayNum - 1;
        if (local_1998.Data.ArrayNum == 0) {
          local_18b8.Size = uVar26;
        }
        pFVar13 = FIoStatus::FIoStatus(&local_17b8,WriteError,&local_18b8);
        TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar13)
        ;
        if (local_1998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1998.Data.AllocatorInstance.Data);
        }
      }
      else {
        cVar7 = (**(code **)(*plVar11 + 0x30))
                          (plVar11,(param_2->ChunkPerfectHashSeeds).AllocatorInstance.Data,
                           (param_2->ChunkPerfectHashSeeds).ArrayNum << 2);
        if (cVar7 == '\0') {
          DVar8 = FWindowsPlatformMisc::GetLastError();
          FWindowsPlatformMisc::GetSystemErrorMessage(local_1048,0x100,DVar8);
          ::FString::PrintfImpl(&local_1988,L"%s Error: (%u: %s).");
          local_18a8.DataPtr = (wchar_t *)local_1988.Data.AllocatorInstance.Data;
          local_18a8.Size = local_1988.Data.ArrayNum - 1;
          if (local_1988.Data.ArrayNum == 0) {
            local_18a8.Size = uVar26;
          }
          pFVar13 = FIoStatus::FIoStatus(&local_17a8,WriteError,&local_18a8);
          TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                    (__return_storage_ptr__,pFVar13);
          if (local_1988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1988.Data.AllocatorInstance.Data);
          }
        }
        else {
          cVar7 = (**(code **)(*plVar11 + 0x30))
                            (plVar11,(param_2->ChunkIndicesWithoutPerfectHash).AllocatorInstance.
                                     Data,(param_2->ChunkIndicesWithoutPerfectHash).ArrayNum << 2);
          if (cVar7 == '\0') {
            DVar8 = FWindowsPlatformMisc::GetLastError();
            FWindowsPlatformMisc::GetSystemErrorMessage(local_e48,0x100,DVar8);
            ::FString::PrintfImpl(&local_1978,L"%s Error: (%u: %s).");
            local_1898.DataPtr = (wchar_t *)local_1978.Data.AllocatorInstance.Data;
            local_1898.Size = local_1978.Data.ArrayNum - 1;
            if (local_1978.Data.ArrayNum == 0) {
              local_1898.Size = uVar26;
            }
            pFVar13 = FIoStatus::FIoStatus(&local_1798,WriteError,&local_1898);
            TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                      (__return_storage_ptr__,pFVar13);
            if (local_1978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1978.Data.AllocatorInstance.Data);
            }
          }
          else {
            cVar7 = (**(code **)(*plVar11 + 0x30))
                              (plVar11,(param_2->CompressionBlocks).AllocatorInstance.Data,
                               (param_2->CompressionBlocks).ArrayNum * 0xc);
            if (cVar7 != '\0') {
              local_1a30 = (param_2->CompressionMethods).ArrayNum;
              uVar17 = (ulonglong)(int)local_1a30;
              pFVar25 = (FName *)(param_2->CompressionMethods).AllocatorInstance.Data;
              pFVar29 = pFVar25 + uVar17;
              local_19e0 = pFVar29;
              do {
                local_1a28 = pFVar25;
                if ((param_2->CompressionMethods).ArrayNum != (int)uVar17) {
                  local_1a38[0] = 0;
                  `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_1a38);
                }
                if (pFVar25 == pFVar29) {
                  if (((param_2->Header).ContainerFlags & Signed) == None) {
LAB_14180e170:
                    if ((((param_2->Header).ContainerFlags & Indexed) == None) ||
                       (cVar7 = (**(code **)(*plVar11 + 0x30))
                                          (plVar11,(param_2->DirectoryIndexBuffer).AllocatorInstance
                                                   .Data,
                                           (longlong)(param_2->DirectoryIndexBuffer).ArrayNum),
                       cVar7 != '\0')) {
                      cVar7 = (**(code **)(*plVar11 + 0x30))
                                        (plVar11,(param_2->ChunkMetas).AllocatorInstance.Data,
                                         (param_2->ChunkMetas).ArrayNum * 0x18);
                      if (cVar7 != '\0') {
                        (**(code **)(*plVar11 + 0x38))(plVar11,1);
                        uVar16 = (**(code **)(*plVar11 + 8))(plVar11);
                        (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
                        (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
                        TVar4 = FIoStatus::Ok.ErrorMessage;
                        (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
                        if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
                          LOCK();
                          *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
                               *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
                          UNLOCK();
                        }
                        (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = TVar4.Chars;
                        (__return_storage_ptr__->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
                        (__return_storage_ptr__->StatusValue).SystemErrorCode =
                             FIoStatus::Ok.SystemErrorCode;
                        *(undefined8 *)(__return_storage_ptr__->Value).Pad = uVar16;
                        goto LAB_14180e30e;
                      }
                      DVar8 = FWindowsPlatformMisc::GetLastError();
                      FWindowsPlatformMisc::GetSystemErrorMessage(local_448,0x100,DVar8);
                      ::FString::PrintfImpl(&local_1918,L"%s Error: (%u: %s).");
                      local_1838.DataPtr = (wchar_t *)local_1918.Data.AllocatorInstance.Data;
                      local_1838.Size = local_1918.Data.ArrayNum - 1;
                      if (local_1918.Data.ArrayNum == 0) {
                        local_1838.Size = uVar26;
                      }
                      pFVar13 = FIoStatus::FIoStatus(&local_1748,WriteError,&local_1838);
                      TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                                (__return_storage_ptr__,pFVar13);
                      local_1928.Data.AllocatorInstance.Data =
                           local_1918.Data.AllocatorInstance.Data;
                    }
                    else {
                      DVar8 = FWindowsPlatformMisc::GetLastError();
                      FWindowsPlatformMisc::GetSystemErrorMessage(local_648,0x100,DVar8);
                      ::FString::PrintfImpl(&local_1928,L"%s Error: (%u: %s).");
                      local_1848.DataPtr = (wchar_t *)local_1928.Data.AllocatorInstance.Data;
                      local_1848.Size = local_1928.Data.ArrayNum - 1;
                      if (local_1928.Data.ArrayNum == 0) {
                        local_1848.Size = uVar26;
                      }
                      pFVar13 = FIoStatus::FIoStatus(&local_1758,WriteError,&local_1848);
                      TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                                (__return_storage_ptr__,pFVar13);
                    }
                  }
                  else {
                    local_1a20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1a20.ArrayNum = 0;
                    local_1a20.ArrayMax = 0;
                    local_1a10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1a10.ArrayNum = 0;
                    local_1a10.ArrayMax = 0;
                    if (((param_2->ChunkBlockSignatures).ArrayNum !=
                         (param_2->CompressionBlocks).ArrayNum) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("TocResource.ChunkBlockSignatures.Num() == TocResource.CompressionBlocks.Num()"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                                           ,0x642,L""), bVar6)) {
                      pcVar1 = (code *)swi(3);
                      pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
                      return pTVar9;
                    }
                    local_1868 = (param_2->ChunkBlockSignatures).AllocatorInstance.Data;
                    iVar18 = (param_2->ChunkBlockSignatures).ArrayNum;
                    if ((iVar18 < 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InCount >= 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0xeb,L""), bVar6)) {
                      pcVar1 = (code *)swi(3);
                      pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
                      return pTVar9;
                    }
                    local_1818._12_4_ = uStack_185c;
                    local_1818.ArrayNum = iVar18;
                    local_1818.DataPtr = (FSHAHash *)local_1868;
                    iStack_1860 = iVar18;
                    CreateContainerSignature
                              (&local_19f8,local_1a00->SigningKey,&param_2->Header,&local_1818,
                               &local_1a20,&local_1a10);
                    if (local_19f8.ErrorCode == Ok) {
                      if ((local_1a20.ArrayNum != local_1a10.ArrayNum) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("TocSignature.Num() == BlockSignature.Num()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                                             ,0x650,L""), bVar6)) {
                        pcVar1 = (code *)swi(3);
                        pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
                        return pTVar9;
                      }
                      local_1a34 = local_1a20.ArrayNum;
                      (**(code **)(*plVar11 + 0x30))(plVar11,&local_1a34,4);
                      (**(code **)(*plVar11 + 0x30))
                                (plVar11,local_1a20.AllocatorInstance.Data,(longlong)local_1a34);
                      (**(code **)(*plVar11 + 0x30))
                                (plVar11,local_1a10.AllocatorInstance.Data,(longlong)local_1a34);
                      cVar7 = (**(code **)(*plVar11 + 0x30))
                                        (plVar11,(param_2->ChunkBlockSignatures).AllocatorInstance.
                                                 Data,
                                         (param_2->ChunkBlockSignatures).ArrayNum * 0x14);
                      if (cVar7 != '\0') {
                        if (local_19f8.ErrorMessage.Chars != (wchar_t *)0x0) {
                          pwVar20 = local_19f8.ErrorMessage.Chars + -4;
                          LOCK();
                          iVar18 = *(int *)pwVar20;
                          *(int *)pwVar20 = *(int *)pwVar20 + -1;
                          UNLOCK();
                          if (iVar18 == 1) {
                            FMemory::Free(pwVar20);
                          }
                        }
                        if (local_1a10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_1a10.AllocatorInstance.Data);
                        }
                        if (local_1a20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_1a20.AllocatorInstance.Data);
                        }
                        goto LAB_14180e170;
                      }
                      DVar8 = FWindowsPlatformMisc::GetLastError();
                      FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x100,DVar8);
                      ::FString::PrintfImpl(&local_1938,L"%s Error: (%u: %s).");
                      local_1858.DataPtr = (wchar_t *)local_1938.Data.AllocatorInstance.Data;
                      local_1858.Size = local_1938.Data.ArrayNum - 1;
                      if (local_1938.Data.ArrayNum == 0) {
                        local_1858.Size = uVar26;
                      }
                      pFVar13 = FIoStatus::FIoStatus(&local_1768,WriteError,&local_1858);
                      TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                                (__return_storage_ptr__,pFVar13);
                      if (local_1938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_1938.Data.AllocatorInstance.Data);
                      }
                      if (local_19f8.ErrorMessage.Chars != (wchar_t *)0x0) {
                        pwVar20 = local_19f8.ErrorMessage.Chars + -4;
                        LOCK();
                        iVar18 = *(int *)pwVar20;
                        *(int *)pwVar20 = *(int *)pwVar20 + -1;
                        UNLOCK();
                        goto joined_r0x00014180e124;
                      }
                    }
                    else {
                      local_1948.ErrorMessage.Chars = local_19f8.ErrorMessage.Chars;
                      if (local_19f8.ErrorMessage.Chars == (wchar_t *)0x0) {
                        pwVar20 = (wchar_t *)&DAT_fffffffffffffff8;
                      }
                      else {
                        pwVar20 = local_19f8.ErrorMessage.Chars + -4;
                        LOCK();
                        *(int *)pwVar20 = *(int *)pwVar20 + 1;
                        UNLOCK();
                      }
                      local_1948.ErrorCode = local_19f8.ErrorCode;
                      local_1948.SystemErrorCode = local_19f8.SystemErrorCode;
                      TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                                (__return_storage_ptr__,&local_1948);
                      if (local_19f8.ErrorMessage.Chars != (wchar_t *)0x0) {
                        LOCK();
                        iVar18 = *(int *)pwVar20;
                        *(int *)pwVar20 = *(int *)pwVar20 + -1;
                        UNLOCK();
joined_r0x00014180e124:
                        if (iVar18 == 1) {
                          FMemory::Free(pwVar20);
                        }
                      }
                    }
                    local_1928.Data.AllocatorInstance.Data = local_1a20.AllocatorInstance.Data;
                    if (local_1a10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a10.AllocatorInstance.Data);
                      local_1928.Data.AllocatorInstance.Data = local_1a20.AllocatorInstance.Data;
                    }
                  }
                  if (local_1928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1928.Data.AllocatorInstance.Data);
                  }
                  goto LAB_14180e30e;
                }
                local_19e8 = *pFVar25;
                if (local_19e8 != (FName)0x0) {
                  local_1468 = 0;
                  uStack_1460 = 0;
                  local_1458 = 0;
                  uStack_1450 = 0;
                  pFVar14 = ::FName::ToString(&local_19e8,&local_1828);
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar20 = L"";
LAB_14180dcfe:
                    local_16b8.Data = (FScriptContainerElement *)0x0;
                    sVar12 = wcslen(pwVar20);
                    local_16a8 = (int)sVar12;
                    uVar24 = local_16a8 + 1;
                    FVar28.Data = pFVar19;
                    if (0x80 < uVar24) {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_16b8,0,uVar24,1);
                      FVar28.Data = local_16b8.Data;
                    }
                    local_16b0 = local_1738;
                    if (FVar28.Data != (FScriptContainerElement *)0x0) {
                      local_16b0 = FVar28.Data;
                    }
                    pcVar15 = FGenericPlatformString::Convert<wchar_t,char>
                                        ((char *)local_16b0,uVar24,pwVar20,uVar24);
                    pFVar25 = local_1a28;
                    if ((pcVar15 == (char *)0x0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Result",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                           ,0x25,L""), pFVar25 = local_1a28, bVar6)) {
                      pcVar1 = (code *)swi(3);
                      pTVar9 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
                      return pTVar9;
                    }
                  }
                  else {
                    pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                    local_16b8.Data = (FScriptContainerElement *)0x0;
                    if ((FScriptContainerElement *)pwVar20 != (FScriptContainerElement *)0x0)
                    goto LAB_14180dcfe;
                    local_16b0 = (FScriptContainerElement *)0x0;
                    local_16a8 = 0;
                  }
                  strncpy((char *)&local_1468,(char *)local_16b0,0x20);
                  uStack_1450 = uStack_1450 & 0xffffffffffffff;
                  if (local_16b8.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_16b8.Data);
                  }
                  if (local_1828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1828.Data.AllocatorInstance.Data);
                  }
                  cVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_1468,0x20);
                  pFVar29 = local_19e0;
                  if (cVar7 == '\0') goto LAB_14180ddf8;
                }
                uVar17 = (ulonglong)local_1a30;
                pFVar25 = pFVar25 + 1;
              } while( true );
            }
            DVar8 = FWindowsPlatformMisc::GetLastError();
            FWindowsPlatformMisc::GetSystemErrorMessage(local_c48,0x100,DVar8);
            ::FString::PrintfImpl(&local_1968,L"%s Error: (%u: %s).");
            local_1888.DataPtr = (wchar_t *)local_1968.Data.AllocatorInstance.Data;
            local_1888.Size = local_1968.Data.ArrayNum - 1;
            if (local_1968.Data.ArrayNum == 0) {
              local_1888.Size = 0;
            }
            pFVar13 = FIoStatus::FIoStatus(&local_1788,WriteError,&local_1888);
            TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
                      (__return_storage_ptr__,pFVar13);
            if (local_1968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1968.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
LAB_14180e30e:
  (**(code **)*plVar11)(plVar11,1);
  return __return_storage_ptr__;
LAB_14180ddf8:
  DVar8 = FWindowsPlatformMisc::GetLastError();
  FWindowsPlatformMisc::GetSystemErrorMessage(local_a48,0x100,DVar8);
  ::FString::PrintfImpl(&local_1958,L"%s Error: (%u: %s).");
  local_1878.DataPtr = (wchar_t *)local_1958.Data.AllocatorInstance.Data;
  local_1878.Size = local_1958.Data.ArrayNum - 1;
  if (local_1958.Data.ArrayNum == 0) {
    local_1878.Size = uVar26;
  }
  pFVar13 = FIoStatus::FIoStatus(&local_1778,WriteError,&local_1878);
  TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar13);
  if (local_1958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1958.Data.AllocatorInstance.Data);
  }
  goto LAB_14180e30e;
}

