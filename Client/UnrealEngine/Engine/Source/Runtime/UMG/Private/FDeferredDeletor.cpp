// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// ~FDeferredDeletor<FSlateStyleSet> @ 14698f200

void __thiscall
FDeferredDeletor<FSlateStyleSet>::~FDeferredDeletor<FSlateStyleSet>
          (FDeferredDeletor<FSlateStyleSet> *this)

{
  FSlateStyleSet *pFVar1;
  
  this->_padding_ = (longlong)&___7__FDeferredDeletor_VFSlateStyleSet____6B_;
  pFVar1 = this->InnerObjectToDelete;
  if (pFVar1 != (FSlateStyleSet *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

