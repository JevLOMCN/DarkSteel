// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Reset @ 142832e40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::FDraggedMultiBlockPreview::Reset(FDraggedMultiBlockPreview *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->BlockName).ComparisonIndex = 0;
  (this->BlockName).Number = 0;
  this->BlockType = None;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PreviewBlock != (TSharedPtr<FDropPreviewBlock,1> *)&local_18) {
    (this->PreviewBlock).Object = (FDropPreviewBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreviewBlock).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->InsertIndex = -1;
  return;
}

