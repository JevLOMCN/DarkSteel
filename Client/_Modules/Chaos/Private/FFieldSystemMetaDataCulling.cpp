// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~FFieldSystemMetaDataCulling @ 143f4b0d0

void __thiscall
FFieldSystemMetaDataCulling::~FFieldSystemMetaDataCulling(FFieldSystemMetaDataCulling *this)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  return;
}

// NewCopy @ 143f703f0

FFieldSystemMetaData * __thiscall
FFieldSystemMetaDataCulling::NewCopy(FFieldSystemMetaDataCulling *this)

{
  FFieldSystemMetaData FVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    FVar1 = (FFieldSystemMetaData)this->CullingIndices;
    *pFVar2 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataCulling__6B_;
    pFVar2[2] = FVar1;
    *(undefined1 *)(pFVar2 + 1) = 0;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// Type @ 143f77510

EMetaType __thiscall FFieldSystemMetaDataCulling::Type(FFieldSystemMetaDataCulling *this)

{
  return ECommandData_Culling;
}

