// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FDistanceFieldAsyncUpdateParameters @ 14485dbb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncUpdateParameters::~FDistanceFieldAsyncUpdateParameters
          (FDistanceFieldAsyncUpdateParameters *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDistanceFieldReadRequest,int>
            ((FDistanceFieldReadRequest *)(this->ReadRequestsToCleanUp).AllocatorInstance.Data,
             (this->ReadRequestsToCleanUp).ArrayNum);
  pFVar1 = (this->ReadRequestsToCleanUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDistanceFieldReadRequest,int>
            ((FDistanceFieldReadRequest *)(this->ReadRequestsToUpload).AllocatorInstance.Data,
             (this->ReadRequestsToUpload).ArrayNum);
  pFVar1 = (this->ReadRequestsToUpload).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDistanceFieldReadRequest,int>
            ((FDistanceFieldReadRequest *)(this->NewReadRequests).AllocatorInstance.Data,
             (this->NewReadRequests).ArrayNum);
  pFVar1 = (this->NewReadRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

