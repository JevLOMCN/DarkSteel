// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DrawStringInternal @ 148935be0

void __thiscall
FCanvasTextStringViewItem::DrawStringInternal
          (FCanvasTextStringViewItem *this,FCanvas *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_4)

{
  char cVar1;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_28;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_18;
  
  cVar1 = *(char *)(this->_padding_ + 0x30);
  if (cVar1 == '\0') {
    local_28.DataPtr = (FTextEffect *)(this->Text).DataPtr;
    local_28.ArrayNum = (this->Text).Size;
    local_28._12_4_ = *(undefined4 *)&(this->Text).field_0xc;
    local_18.DataPtr = param_4->DataPtr;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FCanvasSimpleTextItem::DrawStringInternal_OfflineCache
              ((FCanvasSimpleTextItem *)this,param_1,(TStringView<wchar_t> *)&local_28,param_2,
               param_3,&local_18);
  }
  else if (cVar1 == '\x01') {
    local_18.DataPtr = (FTextEffect *)(this->Text).DataPtr;
    local_18.ArrayNum = (this->Text).Size;
    local_18._12_4_ = *(undefined4 *)&(this->Text).field_0xc;
    local_28.DataPtr = param_4->DataPtr;
    local_28.ArrayNum = param_4->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache
              ((FCanvasSimpleTextItem *)this,param_1,(TStringView<wchar_t> *)&local_18,param_2,
               param_3,&local_28);
    return;
  }
  return;
}

// GetTextSize @ 14895e810

TVector2<double> * __thiscall
FCanvasTextStringViewItem::GetTextSize
          (FCanvasTextStringViewItem *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (this->Text).DataPtr;
  local_18.Size = (this->Text).Size;
  local_18._12_4_ = *(undefined4 *)&(this->Text).field_0xc;
  FCanvasSimpleTextItem::GetTextSizeInternal
            ((FCanvasSimpleTextItem *)this,__return_storage_ptr__,&local_18,param_1);
  return __return_storage_ptr__;
}

// HasValidText @ 148960d50

bool __thiscall FCanvasTextStringViewItem::HasValidText(FCanvasTextStringViewItem *this)

{
  if ((this->_padding_ != 0) && ((this->Text).Size != 0)) {
    return true;
  }
  return false;
}

