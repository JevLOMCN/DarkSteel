// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// Cleanup @ 148da06e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreInitContext::Cleanup(FPreInitContext *this)

{
  FSlowTask *this_00;
  ITextData *pIVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SlateRenderer != (TSharedPtr<FSlateRenderer,1> *)&local_18) {
    (this->SlateRenderer).Object = (FSlateRenderer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SlateRenderer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this_00 = (FSlowTask *)this->SlowTaskPtr;
  if (this_00 != (FSlowTask *)0x0) {
    FSlowTask::Destroy(this_00);
    pIVar1 = (this_00->FrameMessage).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pIVar1 = (this_00->DefaultMessage).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    ::operator_delete(this_00,0x60);
  }
  this->SlowTaskPtr = (FScopedSlowTask *)0x0;
  return;
}

