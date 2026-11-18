// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 8

// EnableHalfRate @ 146bc5a80

void __thiscall IStreamedCompressedInfo::EnableHalfRate(IStreamedCompressedInfo *this,bool param_1)

{
  return;
}

// GetCurrentChunkIndex @ 146bc5a90

int __thiscall IStreamedCompressedInfo::GetCurrentChunkIndex(IStreamedCompressedInfo *this)

{
  return this->CurrentChunkIndex;
}

// GetCurrentChunkOffset @ 146bc5aa0

int __thiscall IStreamedCompressedInfo::GetCurrentChunkOffset(IStreamedCompressedInfo *this)

{
  return this->SrcBufferOffset;
}

// GetSourceBufferSize @ 146bc5b20

uint __thiscall IStreamedCompressedInfo::GetSourceBufferSize(IStreamedCompressedInfo *this)

{
  return this->SrcBufferDataSize;
}

// GetStreamBufferSize @ 146bc5b30

int __thiscall IStreamedCompressedInfo::GetStreamBufferSize(IStreamedCompressedInfo *this)

{
  return 0x2580;
}

// IsStreamedCompressedInfo @ 146bc5bc0

bool __thiscall IStreamedCompressedInfo::IsStreamedCompressedInfo(IStreamedCompressedInfo *this)

{
  return true;
}

// SupportsStreaming @ 146bc6010

bool __thiscall IStreamedCompressedInfo::SupportsStreaming(IStreamedCompressedInfo *this)

{
  return true;
}

// UsesVorbisChannelOrdering @ 146bc6020

bool __thiscall IStreamedCompressedInfo::UsesVorbisChannelOrdering(IStreamedCompressedInfo *this)

{
  return false;
}

