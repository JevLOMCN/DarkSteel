// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// ~IMediaCache @ 14d78ce80

void __thiscall IMediaCache::~IMediaCache(IMediaCache *this)

{
  *this = (IMediaCache)&___7IMediaCache__6B_;
  return;
}

// GetSampleCount @ 14d7ad820

int __thiscall IMediaCache::GetSampleCount(IMediaCache *this,EMediaCacheState param_1)

{
  return 0;
}

// QueryCacheState @ 14d7b9130

bool __thiscall
IMediaCache::QueryCacheState
          (IMediaCache *this,EMediaCacheState param_1,TRangeSet<FTimespan> *param_2)

{
  return false;
}

