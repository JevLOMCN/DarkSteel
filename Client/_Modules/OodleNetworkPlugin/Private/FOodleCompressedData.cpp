// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// Serialize @ 14e29d3f0

void __thiscall
FOodleNetworkArchiveBase::FOodleCompressedData::Serialize
          (FOodleCompressedData *this,FArchive *param_1)

{
  operator<<<unsigned_int>(param_1,&this->Offset);
  operator<<<unsigned_int>(param_1,&this->CompressedLength);
  operator<<<unsigned_int>(param_1,&this->DecompressedLength);
  return;
}

