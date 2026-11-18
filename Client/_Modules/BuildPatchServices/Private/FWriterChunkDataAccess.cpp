// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// GetDataLock @ 1432559f0

void __thiscall
BuildPatchServices::FWriterChunkDataAccess::GetDataLock
          (FWriterChunkDataAccess *this,uchar **param_1,FChunkHeader **param_2)

{
  *param_1 = (uchar *)(this->DataRef->AllocatorInstance).Data;
  *param_2 = this->HeaderRef;
  return;
}

// GetDataLock @ 143255a10

void __thiscall
BuildPatchServices::FWriterChunkDataAccess::GetDataLock
          (FWriterChunkDataAccess *this,uchar **param_1,FChunkHeader **param_2)

{
  *param_1 = (uchar *)(this->DataRef->AllocatorInstance).Data;
  *param_2 = this->HeaderRef;
  return;
}

// ReleaseDataLock @ 143262030

void __thiscall
BuildPatchServices::FWriterChunkDataAccess::ReleaseDataLock(FWriterChunkDataAccess *this)

{
  return;
}

