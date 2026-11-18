// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// operator[] @ 14d8c3c50

FSlotArguments * __thiscall
TSlotBase<FBasicLayoutWidgetSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

