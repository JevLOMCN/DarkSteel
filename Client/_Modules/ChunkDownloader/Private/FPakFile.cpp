// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 1

// ~FPakFile @ 14f01f470

void __thiscall FChunkDownloader::FPakFile::~FPakFile(FPakFile *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TFunction<void___cdecl(bool)>,int>
            ((TFunction<void___cdecl(bool)> *)(this->PostDownloadCallbacks).AllocatorInstance.Data,
             (this->PostDownloadCallbacks).ArrayNum);
  pFVar1 = (this->PostDownloadCallbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Download).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Entry).RelativeUrl.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Entry).FileVersion.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Entry).FileName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

