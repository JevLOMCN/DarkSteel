// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// ~FHeapMemory @ 14ac50b00

void __thiscall FMutableStreamRequest::FHeapMemory::~FHeapMemory(FHeapMemory *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ReadRequestLock);
  DestructItems<TSharedPtr<IBulkDataIORequest,1>,int>
            ((TSharedPtr<IBulkDataIORequest,1> *)(this->BulkReadRequests).AllocatorInstance.Data,
             (this->BulkReadRequests).ArrayNum);
  pFVar1 = (this->BulkReadRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<IAsyncReadRequest,1>,int>
            ((TSharedPtr<IAsyncReadRequest,1> *)(this->ReadRequests).AllocatorInstance.Data,
             (this->ReadRequests).ArrayNum);
  pFVar1 = (this->ReadRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Tasks::FTaskEvent,int>
            ((FTaskEvent *)(this->CompletionEvents).AllocatorInstance.Data,
             (this->CompletionEvents).ArrayNum);
  pFVar1 = (this->CompletionEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

