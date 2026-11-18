// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 2

// DestroyObject @ 146c7af00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FDefaultGameMoviePlayer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FDefaultGameMoviePlayer>,1>
                *this)

{
  FDefaultGameMoviePlayer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultGameMoviePlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c7af11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c7af20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FNullGameMoviePlayer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNullGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FNullGameMoviePlayer>,1>
                *this)

{
  FNullGameMoviePlayer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNullGameMoviePlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c7af31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 200))(pFVar1,1);
    return;
  }
  return;
}

