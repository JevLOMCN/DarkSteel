// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 3

// DoTaskWork @ 14f0234f0

void __thiscall
FAsyncTask<FChunkDownloader::FPakMountWork>::DoTaskWork
          (FAsyncTask<FChunkDownloader::FPakMountWork> *this)

{
  FChunkDownloader::FPakMountWork::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 14f028d60

void __thiscall
FAsyncTask<FChunkDownloader::FPakMountWork>::MarkAsCanceled
          (FAsyncTask<FChunkDownloader::FPakMountWork> *this)

{
  return;
}

// TryAbandonTask @ 14f02c9e0

bool __thiscall
FAsyncTask<FChunkDownloader::FPakMountWork>::TryAbandonTask
          (FAsyncTask<FChunkDownloader::FPakMountWork> *this)

{
  return false;
}

