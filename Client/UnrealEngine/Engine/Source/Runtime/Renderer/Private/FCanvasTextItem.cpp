// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FCanvasTextItem @ 1456dc250

FCanvasTextItem * __thiscall
FCanvasTextItem::FCanvasTextItem(FCanvasTextItem *this,FCanvasTextItem *param_1)

{
  char cVar1;
  longlong lVar2;
  ITextData *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  lVar6 = param_1->_padding_;
  this->_padding_ = (longlong)&___7FCanvasTextItemBase__6B_;
  this->_padding_ = lVar2;
  this->_padding_ = lVar6;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  lVar6 = param_1->_padding_;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  this->_padding_ = lVar2;
  this->_padding_ = lVar6;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar2 = param_1->_padding_;
  uVar5 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FCanvasSimpleTextItem__6B_;
  lVar2 = param_1->_padding_;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = lVar2;
  cVar1 = (char)param_1->_padding_;
  *(char *)&this->_padding_ = cVar1;
  if (cVar1 != '\0') {
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)&this->_padding_,(FSlateFontInfo *)&param_1->_padding_);
  }
  this->_padding_ = (longlong)&___7FCanvasTextItem__6B_;
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->Text).TextData.Reference;
  (this->Text).TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  (this->Text).Flags = (param_1->Text).Flags;
  return this;
}

