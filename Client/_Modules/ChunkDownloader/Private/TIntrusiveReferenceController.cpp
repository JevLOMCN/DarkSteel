// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 3

// DestroyObject @ 14f023450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FChunkDownloader::FChunk,1>::DestroyObject
          (TIntrusiveReferenceController<FChunkDownloader::FChunk,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>
            (*(TSharedRef<FChunkDownloader::FPakFile,1> **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14f023490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FChunkDownloader::FPakFile,1>::DestroyObject
          (TIntrusiveReferenceController<FChunkDownloader::FPakFile,1> *this)

{
  FChunkDownloader::FPakFile::~FPakFile((FPakFile *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f0234a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDownload,1>::DestroyObject
          (TIntrusiveReferenceController<FDownload,1> *this)

{
  FDownload::~FDownload((FDownload *)&this->ObjectStorage);
  return;
}

