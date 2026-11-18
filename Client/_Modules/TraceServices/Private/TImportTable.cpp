// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// ~TImportTable<TraceServices::FImportTableRow> @ 14d4279f0

void __thiscall
TraceServices::TImportTable<TraceServices::FImportTableRow>::
~TImportTable<TraceServices::FImportTableRow>(TImportTable<TraceServices::FImportTableRow> *this)

{
  this->_padding_ =
       (longlong)&___7__TImportTable_VFImportTableRow_TraceServices___TraceServices__6B_;
  FStringStore::~FStringStore(&this->StringStore);
  TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  ::
  ~TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
            ((TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
              *)&this->_padding_);
  FSlabAllocator::~FSlabAllocator((FSlabAllocator *)&this->_padding_);
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

