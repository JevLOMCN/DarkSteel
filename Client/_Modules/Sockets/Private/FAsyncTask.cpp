// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 3

// DoTaskWork @ 14310e840

void __thiscall
FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker>::DoTaskWork
          (FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker> *this)

{
  FResolveInfoAsync::DoWork((this->Task).Parent);
  return;
}

// MarkAsCanceled @ 143114520

void __thiscall
FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker>::MarkAsCanceled
          (FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker> *this)

{
  return;
}

// TryAbandonTask @ 143118a50

bool __thiscall
FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker>::TryAbandonTask
          (FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker> *this)

{
  LOCK();
  ((this->Task).Parent)->bShouldAbandon = 1;
  UNLOCK();
  return true;
}

