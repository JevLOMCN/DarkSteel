// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// FChunkInfo @ 142a51400

FChunkInfo * __thiscall
UE::IoStore::FChunkInfo::FChunkInfo
          (FChunkInfo *this,FContainer *param_1,FIoOffsetAndLength *param_2)

{
  this->Container = param_1;
  this->OffsetLength = param_2;
  return this;
}

