// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 3

// ~FFieldSystemMetaDataFilter @ 14632b5a0

void __thiscall
FFieldSystemMetaDataFilter::~FFieldSystemMetaDataFilter(FFieldSystemMetaDataFilter *this)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  return;
}

// NewCopy @ 146330be0

FFieldSystemMetaData * __thiscall
FFieldSystemMetaDataFilter::NewCopy(FFieldSystemMetaDataFilter *this)

{
  EFieldPositionType EVar1;
  EFieldObjectType EVar2;
  EFieldFilterType EVar3;
  FFieldSystemMetaData *pFVar4;
  
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FFieldSystemMetaData *)0x0) {
    EVar1 = this->PositionType;
    EVar2 = this->ObjectType;
    EVar3 = this->FilterType;
    *pFVar4 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataFilter__6B_;
    *(EFieldFilterType *)(pFVar4 + 1) = EVar3;
    *(EFieldObjectType *)&pFVar4[1].field_0x4 = EVar2;
    *(EFieldPositionType *)(pFVar4 + 2) = EVar1;
    return pFVar4;
  }
  return (FFieldSystemMetaData *)0x0;
}

// Type @ 146334610

EMetaType __thiscall FFieldSystemMetaDataFilter::Type(FFieldSystemMetaDataFilter *this)

{
  return ECommandData_Filter;
}

