// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 3

// ~FFieldSystemMetaDataIteration @ 14632b5c0

void __thiscall
FFieldSystemMetaDataIteration::~FFieldSystemMetaDataIteration(FFieldSystemMetaDataIteration *this)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  return;
}

// NewCopy @ 146330c30

FFieldSystemMetaData * __thiscall
FFieldSystemMetaDataIteration::NewCopy(FFieldSystemMetaDataIteration *this)

{
  int iVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    iVar1 = this->Iterations;
    *pFVar2 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataIteration__6B_;
    *(int *)(pFVar2 + 1) = iVar1;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// Type @ 146334620

EMetaType __thiscall FFieldSystemMetaDataIteration::Type(FFieldSystemMetaDataIteration *this)

{
  return ECommandData_Iteration;
}

