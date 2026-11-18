// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 2

// FArguments @ 146c76d10

FArguments * __thiscall SDefaultMovieBorder::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&this->_OnMouseButtonDown = 0;
  *(undefined8 *)&(this->_OnMouseButtonDown).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMouseButtonDown).field_0x10 = 0;
  *(undefined8 *)&(this->_OnKeyDown).field_0x10 = 0;
  *(undefined8 *)&this->_OnKeyDown = 0;
  *(undefined8 *)&(this->_OnKeyDown).field_0x8 = 0;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 146c76d80

FArguments * __thiscall SLoadingScreenTestWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

