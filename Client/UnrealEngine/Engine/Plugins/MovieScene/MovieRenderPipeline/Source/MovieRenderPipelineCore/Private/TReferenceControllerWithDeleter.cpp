// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// DestroyObject @ 14dd1a390

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FArrayReader,SharedPointerInternals::DefaultDeleter<FArrayReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FArrayReader,SharedPointerInternals::DefaultDeleter<FArrayReader>,1>
                *this)

{
  FArrayReader *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FArrayReader *)0x0) {
    if (*(void **)&this_00->field_0x98 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x98);
    }
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xa8);
    return;
  }
  return;
}

// DestroyObject @ 14dd7e9d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMoviePipelineSurfaceReader,SharedPointerInternals::DefaultDeleter<FMoviePipelineSurfaceReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMoviePipelineSurfaceReader,SharedPointerInternals::DefaultDeleter<FMoviePipelineSurfaceReader>,1>
                *this)

{
  if (this->Object != (FMoviePipelineSurfaceReader *)0x0) {
    FMoviePipelineSurfaceReader::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

