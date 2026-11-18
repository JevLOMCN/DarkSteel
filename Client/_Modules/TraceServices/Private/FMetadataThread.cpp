// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FMetadataThread @ 14d424540

FMetadataThread * __thiscall
TraceServices::FMetadataProvider::FMetadataThread::FMetadataThread
          (FMetadataThread *this,uint param_1,ILinearAllocator *param_2)

{
  this->ThreadId = param_1;
  (this->CurrentStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentStack).ArrayNum = 0;
  (this->CurrentStack).ArrayMax = 0;
  (this->Metadata).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).PagesArray.ArrayNum = 0;
  (this->Metadata).PagesArray.ArrayMax = 0;
  (this->Metadata).FirstPage =
       (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0;
  (this->Metadata).LastPage =
       (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0;
  (this->Metadata).TotalItemCount = 0;
  (this->SavedMetadataStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedMetadataStack).ArrayNum = 0;
  (this->SavedMetadataStack).ArrayMax = 0;
  (this->Metadata).Allocator = param_2;
  (this->Metadata).PageSize = 0x400;
  return this;
}

