// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// operator() @ 14422ce90

void __thiscall
TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>::operator()
          (TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry> *this,
          FSendQueueEntry *param_1)

{
  FReferencesForExport *pFVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  ForElementType<UE::Net::FNetObjectReference> FVar3;
  ForElementType<UE::Net::FNetRefHandle> FVar4;
  FScriptContainerElement *pFVar5;
  
  if (param_1 != (FSendQueueEntry *)0x0) {
    pFVar1 = (param_1->References).Ptr;
    if (pFVar1 != (FReferencesForExport *)0x0) {
      if (pFVar1->TraceCollector != (FNetTraceCollector *)0x0) {
        FNetTrace::DestroyTraceCollector(pFVar1->TraceCollector);
      }
      FVar2 = (pFVar1->BatchExports).NetTokensPendingExportInCurrentBatch.AllocatorInstance.
              SecondaryData;
      if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar3 = (pFVar1->BatchExports).ReferencesPendingExportInCurrentBatch.AllocatorInstance.
              SecondaryData;
      if (FVar3 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      FVar2 = (pFVar1->BatchExports).NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData
      ;
      if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar4 = (pFVar1->BatchExports).HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      pFVar5 = (pFVar1->ExportsPayload).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      ::operator_delete(pFVar1,0x458);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Payload).SharedReferenceCount.ReferenceController);
    ::operator_delete(param_1,0x20);
  }
  return;
}

