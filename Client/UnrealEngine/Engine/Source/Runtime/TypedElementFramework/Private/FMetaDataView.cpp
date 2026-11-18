// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// ~FMetaDataView @ 142c9a1c0

void __thiscall UE::Editor::DataStorage::FMetaDataView::~FMetaDataView(FMetaDataView *this)

{
  return;
}

// FindForColumn @ 142cac050

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataView::FindForColumn
          (FMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_1,FName param_2)

{
  (__return_storage_ptr__->DataView).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// FindGeneric @ 142cac390

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataView::FindGeneric
          (FMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,FName param_1)

{
  (__return_storage_ptr__->DataView).TypeIndex = '\0';
  return __return_storage_ptr__;
}

