// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ~TTupleBaseElement<TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,1,2> @ 1442b03b0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,1,2>
          (TTupleBaseElement<TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,1,2>
           *this)

{
  FPendingBatchData *pFVar1;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  ForElementType<UE::Net::Private::FQueuedDataChunk> FVar3;
  ForElementType<unsigned_int> FVar4;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FPendingBatchData *)0x0) {
    FVar2 = (pFVar1->CreationDependentParents).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->ResolvedReferences).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar3 = (pFVar1->QueuedDataChunks).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::Net::Private::FQueuedDataChunk>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (pFVar1->DataChunkStorage).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    ::operator_delete(pFVar1,0x180);
    return;
  }
  return;
}

