// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FHugeObjectContext @ 1442f5ec0

FHugeObjectContext * __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectContext::FHugeObjectContext
          (FHugeObjectContext *this)

{
  this->RootObjectInternalIndex = 0;
  (this->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0;
  (this->BatchRecord).ObjectReplicationRecords.ArrayNum = 0;
  *(undefined8 *)&(this->BatchRecord).ObjectReplicationRecords.ArrayMax = 0x10;
  (this->BatchExports).HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  (this->BatchExports).HandlesExportedInCurrentBatch.ArrayNum = 0;
  (this->BatchExports).HandlesExportedInCurrentBatch.ArrayMax = 0x20;
  (this->BatchExports).NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->BatchExports).NetTokensExportedInCurrentBatch.ArrayNum = 0;
  (this->BatchExports).NetTokensExportedInCurrentBatch.ArrayMax = 0x20;
  (this->BatchExports).ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetObjectReference>)0x0;
  (this->BatchExports).ReferencesPendingExportInCurrentBatch.ArrayNum = 0;
  (this->BatchExports).ReferencesPendingExportInCurrentBatch.ArrayMax = 0x20;
  (this->BatchExports).NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->BatchExports).NetTokensPendingExportInCurrentBatch.ArrayNum = 0;
  (this->BatchExports).NetTokensPendingExportInCurrentBatch.ArrayMax = 0x20;
  (this->Blobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blobs).ArrayNum = 0;
  (this->Blobs).ArrayMax = 0;
  return this;
}

// ~FHugeObjectContext @ 1442f7ec0

void __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectContext::~FHugeObjectContext
          (FHugeObjectContext *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  ForElementType<UE::Net::FNetObjectReference> FVar3;
  ForElementType<UE::Net::FNetRefHandle> FVar4;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar5;
  
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)(this->Blobs).AllocatorInstance.Data,
             (this->Blobs).ArrayNum);
  pFVar1 = (this->Blobs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->BatchExports).NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->BatchExports).ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData
  ;
  if (FVar3 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar2 = (this->BatchExports).NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar4 = (this->BatchExports).HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FMemory::Free((void *)FVar5);
    return;
  }
  return;
}

