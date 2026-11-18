// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 3

// DoTaskWork @ 143136870

void __thiscall
FAsyncTask<FAnalyticsPropertyStore::FFlushWorker>::DoTaskWork
          (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *this)

{
  FAnalyticsPropertyStore *this_00;
  
  this_00 = (this->Task).Store;
  FAnalyticsPropertyStore::FlushInternal(this_00,&this_00->AsyncFlushDataCopy);
  return;
}

// MarkAsCanceled @ 14313af20

void __thiscall
FAsyncTask<FAnalyticsPropertyStore::FFlushWorker>::MarkAsCanceled
          (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *this)

{
  return;
}

// TryAbandonTask @ 14313e130

bool __thiscall
FAsyncTask<FAnalyticsPropertyStore::FFlushWorker>::TryAbandonTask
          (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *this)

{
  return false;
}

