// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// operator() @ 142a5ac00

void __thiscall
TDefaultDelete<UE::IoStore::FContainer>::operator()
          (TDefaultDelete<UE::IoStore::FContainer> *this,FContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  if (param_1 != (FContainer *)0x0) {
    pFVar1 = (param_1->BaseFilePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->CompressionMethods).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::IoStore::FContainerPartition,int>
              ((FContainerPartition *)(param_1->Partitions).AllocatorInstance.Data,
               (param_1->Partitions).ArrayNum);
    pFVar1 = (param_1->Partitions).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->ChunkLookup).DefaultMap.field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->ChunkLookup).DefaultMap.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->ChunkLookup).DefaultMap);
    uVar5 = (ulonglong)(param_1->TocStorage).Data.TypeIndex;
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
                ::__l2::Destructors)[uVar5])(param_1);
    ::operator_delete(param_1,0x248);
  }
  return;
}

// operator() @ 142a5acf0

void __thiscall
TDefaultDelete<FFileIoStoreReader>::operator()
          (TDefaultDelete<FFileIoStoreReader> *this,FFileIoStoreReader *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FIoStatus local_18;
  
  if (param_1 != (FFileIoStoreReader *)0x0) {
    FFileIoStoreReader::Close(param_1,&local_18);
    FIoStatus::~FIoStatus(&local_18);
    uVar5 = (ulonglong)(param_1->DataContainer).Data.TypeIndex;
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
                ::__l2::Destructors)[uVar5])(&param_1->DataContainer);
    DestructItems<FFileIoStoreContainerFilePartition,int>
              ((FFileIoStoreContainerFilePartition *)
               (param_1->ContainerFile).Partitions.AllocatorInstance.Data,
               (param_1->ContainerFile).Partitions.ArrayNum);
    pFVar1 = (param_1->ContainerFile).Partitions.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ContainerFile).FilePath.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ContainerFile).CompressionMethods.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->TocImperfectHashMapFallback).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->TocImperfectHashMapFallback).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->TocImperfectHashMapFallback);
    ::operator_delete(param_1,0x268);
  }
  return;
}

