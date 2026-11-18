// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMoviePlayer
// Functions: 3

// DestroyObject @ 14f1259a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaSamples,SharedPointerInternals::DefaultDeleter<FMediaSamples>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMediaSamples,SharedPointerInternals::DefaultDeleter<FMediaSamples>,1>
                *this)

{
  FMediaSamples *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMediaSamples *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f1259b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14f1259c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMovieViewport,SharedPointerInternals::DefaultDeleter<FMovieViewport>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMovieViewport,SharedPointerInternals::DefaultDeleter<FMovieViewport>,1>
                *this)

{
  FMovieViewport *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMovieViewport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f1259d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14f1259e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTexture2DRHIRef,SharedPointerInternals::DefaultDeleter<FSlateTexture2DRHIRef>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTexture2DRHIRef,SharedPointerInternals::DefaultDeleter<FSlateTexture2DRHIRef>,1>
                *this)

{
  FSlateTexture2DRHIRef *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateTexture2DRHIRef *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f1259f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
    return;
  }
  return;
}

