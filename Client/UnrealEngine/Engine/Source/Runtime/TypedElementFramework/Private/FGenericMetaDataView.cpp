// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// FGenericMetaDataView @ 142c96a80

FGenericMetaDataView * __thiscall
UE::Editor::DataStorage::FGenericMetaDataView::FGenericMetaDataView
          (FGenericMetaDataView *this,FMetaData *param_1)

{
  this->MetaData = param_1;
  this->_padding_ = (longlong)&___7FGenericMetaDataView_DataStorage_Editor_UE__6B_;
  return this;
}

// ~FGenericMetaDataView @ 142c99fc0

void __thiscall
UE::Editor::DataStorage::FGenericMetaDataView::~FGenericMetaDataView(FGenericMetaDataView *this)

{
  return;
}

// FindGeneric @ 142cac360

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FGenericMetaDataView::FindGeneric
          (FGenericMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,FName param_1)

{
  FMetaDataBase::Find((FMetaDataBase *)this->MetaData,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

