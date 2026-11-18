// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FScopeLockedChunkData @ 143224e10

FScopeLockedChunkData * __thiscall
BuildPatchServices::FScopeLockedChunkData::FScopeLockedChunkData
          (FScopeLockedChunkData *this,IChunkDataAccess *param_1)

{
  this->ChunkDataAccess = param_1;
  (**(code **)((longlong)*param_1 + 8))(param_1,&this->ChunkData,&this->ChunkHeader);
  return this;
}

// ~FScopeLockedChunkData @ 143228cf0

void __thiscall
BuildPatchServices::FScopeLockedChunkData::~FScopeLockedChunkData(FScopeLockedChunkData *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143228cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->ChunkDataAccess + 0x18))();
  return;
}

// GetData @ 143255470

uchar * __thiscall BuildPatchServices::FScopeLockedChunkData::GetData(FScopeLockedChunkData *this)

{
  return this->ChunkData;
}

// GetHeader @ 143256f40

FChunkHeader * __thiscall
BuildPatchServices::FScopeLockedChunkData::GetHeader(FScopeLockedChunkData *this)

{
  return this->ChunkHeader;
}

