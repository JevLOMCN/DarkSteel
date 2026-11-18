// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// FForwardingMetaDataView @ 142c96a60

FForwardingMetaDataView * __thiscall
UE::Editor::DataStorage::FForwardingMetaDataView::FForwardingMetaDataView
          (FForwardingMetaDataView *this,FMetaDataView *param_1)

{
  this->View = param_1;
  this->_padding_ = (longlong)&___7FForwardingMetaDataView_DataStorage_Editor_UE__6B_;
  return this;
}

// ~FForwardingMetaDataView @ 142c99fb0

void __thiscall
UE::Editor::DataStorage::FForwardingMetaDataView::~FForwardingMetaDataView
          (FForwardingMetaDataView *this)

{
  return;
}

// FindForColumn @ 142cac020

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FForwardingMetaDataView::FindForColumn
          (FForwardingMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_1,FName param_2)

{
  (**(code **)((longlong)*this->View + 0x10))();
  return __return_storage_ptr__;
}

// FindGeneric @ 142cac330

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FForwardingMetaDataView::FindGeneric
          (FForwardingMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,FName param_1)

{
  (**(code **)((longlong)*this->View + 8))();
  return __return_storage_ptr__;
}

