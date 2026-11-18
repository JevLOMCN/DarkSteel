// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// FColumnsMetaDataView @ 142c95d00

FColumnsMetaDataView * __thiscall
UE::Editor::DataStorage::FColumnsMetaDataView::FColumnsMetaDataView
          (FColumnsMetaDataView *this,
          TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *param_1)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *pTVar1;
  int iVar2;
  undefined4 uVar3;
  
  pTVar1 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->_padding_ = (longlong)&___7FColumnsMetaDataView_DataStorage_Editor_UE__6B_;
  (this->Columns).DataPtr = pTVar1;
  (this->Columns).ArrayNum = iVar2;
  *(undefined4 *)&(this->Columns).field_0xc = uVar3;
  return this;
}

// ~FColumnsMetaDataView @ 142c99fa0

void __thiscall
UE::Editor::DataStorage::FColumnsMetaDataView::~FColumnsMetaDataView(FColumnsMetaDataView *this)

{
  return;
}

// FindForColumn @ 142cac010

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FColumnsMetaDataView::FindForColumn
          (FColumnsMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_1,FName param_2)

{
  (__return_storage_ptr__->DataView).TypeIndex = '\0';
  return __return_storage_ptr__;
}

