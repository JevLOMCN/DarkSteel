// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FCanvasTextItem @ 148905f40

FCanvasTextItem * __thiscall
FCanvasTextItem::FCanvasTextItem
          (FCanvasTextItem *this,TVector2<double> *param_1,FText *param_2,FSlateFontInfo *param_3,
          FLinearColor *param_4)

{
  ITextData *pIVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UObject_const_>_u_0 TVar4;
  undefined1 local_res8 [8];
  
  FCanvasTextItemBase::FCanvasTextItemBase((FCanvasTextItemBase *)this,param_1,param_4);
  this->_padding_ = (longlong)&___7FCanvasSimpleTextItem__6B_;
  if ((param_3->FontObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UFont_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_3,pUVar3);
    if (bVar2) {
      TVar4 = (param_3->FontObject).field0_0x0;
      goto LAB_148905f93;
    }
  }
  TVar4.DebugPtr = (UObject *)0x0;
LAB_148905f93:
  this->_padding_ = (longlong)TVar4;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)&this->_padding_,param_3);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FCanvasTextItem__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xc;
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Flags = param_2->Flags;
  return this;
}

// FCanvasTextItem @ 148906010

FCanvasTextItem * __thiscall
FCanvasTextItem::FCanvasTextItem
          (FCanvasTextItem *this,TVector2<double> *param_1,FText *param_2,UFont *param_3,
          FLinearColor *param_4)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  FCanvasTextItemBase::FCanvasTextItemBase((FCanvasTextItemBase *)this,param_1,param_4);
  this->_padding_ = (longlong)param_3;
  this->_padding_ = (longlong)&___7FCanvasTextItem__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Flags = param_2->Flags;
  return this;
}

// ~FCanvasTextItem @ 14890dda0

void __thiscall FCanvasTextItem::~FCanvasTextItem(FCanvasTextItem *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7FCanvasTextItem__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  return;
}

// DrawStringInternal @ 148935ae0

void __thiscall
FCanvasTextItem::DrawStringInternal
          (FCanvasTextItem *this,FCanvas *param_1,TVector2<double> *param_2,FLinearColor *param_3,
          TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_4)

{
  char cVar1;
  int iVar2;
  FString *pFVar3;
  TStringView<wchar_t> local_28;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_18;
  
  pFVar3 = FText::ToString(&this->Text);
  local_28.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  local_28.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_28.Size = 0;
  }
  cVar1 = *(char *)(this->_padding_ + 0x30);
  if (cVar1 == '\0') {
    local_18.DataPtr = param_4->DataPtr;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FCanvasSimpleTextItem::DrawStringInternal_OfflineCache
              ((FCanvasSimpleTextItem *)this,param_1,&local_28,param_2,param_3,&local_18);
  }
  else if (cVar1 == '\x01') {
    local_18.DataPtr = param_4->DataPtr;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache
              ((FCanvasSimpleTextItem *)this,param_1,&local_28,param_2,param_3,&local_18);
  }
  return;
}

// DrawStringInternal_OfflineCache @ 148936570

void __thiscall
FCanvasTextItem::DrawStringInternal_OfflineCache
          (FCanvasTextItem *this,FCanvas *param_1,TVector2<double> *param_2,FLinearColor *param_3,
          TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_4)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_18;
  
  pFVar2 = FText::ToString(&this->Text);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = param_4->DataPtr;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
  FCanvasSimpleTextItem::DrawStringInternal_OfflineCache
            ((FCanvasSimpleTextItem *)this,param_1,&local_28,param_2,param_3,&local_18);
  return;
}

// DrawStringInternal_RuntimeCache @ 148937360

void __thiscall
FCanvasTextItem::DrawStringInternal_RuntimeCache
          (FCanvasTextItem *this,FCanvas *param_1,TVector2<double> *param_2,FLinearColor *param_3,
          TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_4)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_18;
  
  pFVar2 = FText::ToString(&this->Text);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = param_4->DataPtr;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
  FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache
            ((FCanvasSimpleTextItem *)this,param_1,&local_28,param_2,param_3,&local_18);
  return;
}

// GetTextSize @ 14895e790

TVector2<double> * __thiscall
FCanvasTextItem::GetTextSize
          (FCanvasTextItem *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28 [2];
  
  pFVar2 = FText::ToString(&this->Text);
  local_28[0].DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28[0].Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28[0].Size = 0;
  }
  FCanvasSimpleTextItem::GetTextSizeInternal
            ((FCanvasSimpleTextItem *)this,__return_storage_ptr__,local_28,param_1);
  return __return_storage_ptr__;
}

// HasValidText @ 148960d10

bool __thiscall FCanvasTextItem::HasValidText(FCanvasTextItem *this)

{
  bool bVar1;
  
  if (this->_padding_ != 0) {
    bVar1 = FText::IsEmpty(&this->Text);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

