// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FAsyncStatsFile @ 1419cc6f0

FAsyncStatsFile * __thiscall
FAsyncStatsFile::FAsyncStatsFile(FAsyncStatsFile *this,FStatsReadFile *param_1)

{
  this->Owner = param_1;
  return this;
}

// Abandon @ 1419d7970

void __thiscall FAsyncStatsFile::Abandon(FAsyncStatsFile *this)

{
  LOCK();
  this->Owner->bShouldStopProcessing = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// DoWork @ 1419ef280

void __thiscall FAsyncStatsFile::DoWork(FAsyncStatsFile *this)

{
  FStatsReadFile::ReadAndProcessSynchronously(this->Owner);
  return;
}

