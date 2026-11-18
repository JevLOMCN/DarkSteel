// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// New @ 1430d8690

TSharedRef<SResponsiveGridPanelTestWidget,1> * __cdecl
SResponsiveGridPanelTestWidget::New
          (TSharedRef<SResponsiveGridPanelTestWidget,1> *__return_storage_ptr__)

{
  SCompoundWidget *this;
  TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl> TVar1;
  longlong lVar2;
  SCompoundWidget *pSVar3;
  
  this = SUserWidget::operator_new(0x2a8);
  if (this != (SCompoundWidget *)0x0) {
    pSVar3 = this;
    for (lVar2 = 0x2a8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&pSVar3->_padding_ = 0;
      pSVar3 = (SCompoundWidget *)((longlong)&pSVar3->_padding_ + 1);
    }
    SCompoundWidget::SCompoundWidget(this);
    this->_padding_ = (longlong)&___7SUserWidget__6B_;
    this->_padding_ = (longlong)&___7SResponsiveGridPanelTestWidget__6B_;
    this->_padding_ = (longlong)&___7SResponsiveGridPanelTestWidgetImpl__6B_;
  }
  TVar1 = MakeShareable<SResponsiveGridPanelTestWidgetImpl>
                    ((SResponsiveGridPanelTestWidgetImpl *)&stack0xfffffffffffffff0);
  TSharedRef<SResponsiveGridPanelTestWidget,1>::
  TSharedRef<SResponsiveGridPanelTestWidget,1><SResponsiveGridPanelTestWidgetImpl>
            (__return_storage_ptr__,(TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl> *)TVar1.Object
            );
  return __return_storage_ptr__;
}

