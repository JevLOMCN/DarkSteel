// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 1

// DestroyObject @ 14f127980

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaFoundationMovieStreamer,SharedPointerInternals::DefaultDeleter<FMediaFoundationMovieStreamer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMediaFoundationMovieStreamer,SharedPointerInternals::DefaultDeleter<FMediaFoundationMovieStreamer>,1>
                *this)

{
  FMediaFoundationMovieStreamer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMediaFoundationMovieStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f127991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

