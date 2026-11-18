// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 1

// DestroyObject @ 14f0234b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FChunkDownloader,SharedPointerInternals::DefaultDeleter<FChunkDownloader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FChunkDownloader,SharedPointerInternals::DefaultDeleter<FChunkDownloader>,1>
                *this)

{
  FChunkDownloader *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FChunkDownloader *)0x0) {
    FChunkDownloader::~FChunkDownloader(this_00);
    ::operator_delete(this_00,0x270);
    return;
  }
  return;
}

