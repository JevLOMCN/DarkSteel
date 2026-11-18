// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// GetDataLock @ 143255950

void __thiscall
BuildPatchServices::FChunkDataAccess::GetDataLock
          (FChunkDataAccess *this,uchar **param_1,FChunkHeader **param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  if (param_1 != (uchar **)0x0) {
    *param_1 = (uchar *)(this->ChunkData).AllocatorInstance.Data;
  }
  if (param_2 != (FChunkHeader **)0x0) {
    *param_2 = &this->ChunkHeader;
  }
  return;
}

// GetDataLock @ 1432559a0

void __thiscall
BuildPatchServices::FChunkDataAccess::GetDataLock
          (FChunkDataAccess *this,uchar **param_1,FChunkHeader **param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  if (param_1 != (uchar **)0x0) {
    *param_1 = (uchar *)(this->ChunkData).AllocatorInstance.Data;
  }
  if (param_2 != (FChunkHeader **)0x0) {
    *param_2 = &this->ChunkHeader;
  }
  return;
}

// ReleaseDataLock @ 143262010

void __thiscall BuildPatchServices::FChunkDataAccess::ReleaseDataLock(FChunkDataAccess *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143262014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  return;
}

