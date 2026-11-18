// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 3

// ~TAsyncCropImage<FColor> @ 14ddc9390

void __thiscall TAsyncCropImage<FColor>::~TAsyncCropImage<FColor>(TAsyncCropImage<FColor> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = (this->OutCroppedImage).Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc93a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TAsyncCropImage<FLinearColor> @ 14ddc93b0

void __thiscall
TAsyncCropImage<FLinearColor>::~TAsyncCropImage<FLinearColor>(TAsyncCropImage<FLinearColor> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = (this->OutCroppedImage).Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc93c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TAsyncCropImage<FFloat16Color> @ 14ddc93d0

void __thiscall
TAsyncCropImage<FFloat16Color>::~TAsyncCropImage<FFloat16Color>
          (TAsyncCropImage<FFloat16Color> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = (this->OutCroppedImage).Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc93e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

