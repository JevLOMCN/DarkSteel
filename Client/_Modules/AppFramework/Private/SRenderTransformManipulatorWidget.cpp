// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// New @ 1430d85c0

TSharedRef<SRenderTransformManipulatorWidget,1> * __cdecl
SRenderTransformManipulatorWidget::New
          (TSharedRef<SRenderTransformManipulatorWidget,1> *__return_storage_ptr__)

{
  SCompoundWidget *this;
  TRawPtrProxy<SRenderTransformManipulatorWidgetImpl> TVar1;
  longlong lVar2;
  SCompoundWidget *pSVar3;
  
  this = SUserWidget::operator_new(0x2b8);
  if (this != (SCompoundWidget *)0x0) {
    pSVar3 = this;
    for (lVar2 = 0x2b8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&pSVar3->_padding_ = 0;
      pSVar3 = (SCompoundWidget *)((longlong)&pSVar3->_padding_ + 1);
    }
    SCompoundWidget::SCompoundWidget(this);
    this->_padding_ = (longlong)&___7SUserWidget__6B_;
    this->_padding_ = (longlong)&___7SRenderTransformManipulatorWidget__6B_;
    this->_padding_ = (longlong)&___7SRenderTransformManipulatorWidgetImpl__6B_;
    TSharedPtr<SImage,1>::TSharedPtr<SImage,1>((TSharedPtr<SImage,1> *)(this + 1),(FNullTag *)0x0);
  }
  TVar1 = MakeShareable<SRenderTransformManipulatorWidgetImpl>
                    ((SRenderTransformManipulatorWidgetImpl *)&stack0xffffffffffffffe8);
  TSharedRef<SRenderTransformManipulatorWidget,1>::
  TSharedRef<SRenderTransformManipulatorWidget,1><SRenderTransformManipulatorWidgetImpl>
            (__return_storage_ptr__,
             (TRawPtrProxy<SRenderTransformManipulatorWidgetImpl> *)TVar1.Object);
  return __return_storage_ptr__;
}

