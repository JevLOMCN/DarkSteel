// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 4

// DestroyObject @ 146c850c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontAtlasNull,SharedPointerInternals::DefaultDeleter<FSlateFontAtlasNull>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontAtlasNull,SharedPointerInternals::DefaultDeleter<FSlateFontAtlasNull>,1>
                *this)

{
  FSlateFontAtlasNull *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateFontAtlasNull *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c850d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c85120

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateNullRenderer,SharedPointerInternals::DefaultDeleter<FSlateNullRenderer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateNullRenderer,SharedPointerInternals::DefaultDeleter<FSlateNullRenderer>,1>
                *this)

{
  FSlateNullRenderer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateNullRenderer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c85131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c85180

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateNullFontAtlasFactory,SharedPointerInternals::DefaultDeleter<FSlateNullFontAtlasFactory>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateNullFontAtlasFactory,SharedPointerInternals::DefaultDeleter<FSlateNullFontAtlasFactory>,1>
                *this)

{
  FSlateNullFontAtlasFactory *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateNullFontAtlasFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c85191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c851e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateNullShaderResourceManager,SharedPointerInternals::DefaultDeleter<FSlateNullShaderResourceManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateNullShaderResourceManager,SharedPointerInternals::DefaultDeleter<FSlateNullShaderResourceManager>,1>
                *this)

{
  FSlateNullShaderResourceManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateNullShaderResourceManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c851f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

