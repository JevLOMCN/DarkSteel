// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~FFieldSystemMetaDataProcessingResolution @ 1440fde60

void __thiscall
FFieldSystemMetaDataProcessingResolution::~FFieldSystemMetaDataProcessingResolution
          (FFieldSystemMetaDataProcessingResolution *this)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  return;
}

// NewCopy @ 144125e00

FFieldSystemMetaData * __thiscall
FFieldSystemMetaDataProcessingResolution::NewCopy(FFieldSystemMetaDataProcessingResolution *this)

{
  EFieldResolutionType EVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    EVar1 = this->ProcessingResolution;
    *pFVar2 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataProcessingResolution__6B_;
    *(EFieldResolutionType *)(pFVar2 + 1) = EVar1;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// Type @ 144132960

EMetaType __thiscall
FFieldSystemMetaDataProcessingResolution::Type(FFieldSystemMetaDataProcessingResolution *this)

{
  return ECommandData_ProcessingResolution;
}

