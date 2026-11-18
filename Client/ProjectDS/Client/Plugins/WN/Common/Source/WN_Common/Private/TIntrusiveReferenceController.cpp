// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// DestroyObject @ 14949c8f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_PakStreamDownloader,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_PakStreamDownloader,1> *this)

{
  FWN_PakStreamDownloader::~FWN_PakStreamDownloader((FWN_PakStreamDownloader *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14949c900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_CurlHttpStream,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_CurlHttpStream,1> *this)

{
  FWN_CurlHttpStream::~FWN_CurlHttpStream((FWN_CurlHttpStream *)&this->ObjectStorage);
  return;
}

