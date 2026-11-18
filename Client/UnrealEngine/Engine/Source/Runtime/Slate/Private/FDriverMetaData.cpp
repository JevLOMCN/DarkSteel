// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Id @ 14281a2e0

TSharedRef<ISlateMetaData,1> * __cdecl
FDriverMetaData::Id(TSharedRef<ISlateMetaData,1> *__return_storage_ptr__,FName param_1)

{
  TRawPtrProxy<FDriverIdMetaData> local_res8;
  
  local_res8.Object = ::operator_new(0x10);
  if (local_res8.Object != (FDriverIdMetaData *)0x0) {
    (local_res8.Object)->Id = param_1;
    (local_res8.Object)->_padding_ = (longlong)&___7FDriverIdMetaData__6B_;
  }
  TSharedRef<ISlateMetaData,1>::TSharedRef<ISlateMetaData,1><FDriverIdMetaData>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

