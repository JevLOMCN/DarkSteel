// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ~FFieldSystemMetaDataResults<float> @ 143f48920

void __thiscall
FFieldSystemMetaDataResults<float>::~FFieldSystemMetaDataResults<float>
          (FFieldSystemMetaDataResults<float> *this)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  return;
}

// ~FFieldSystemMetaDataResults<UE::Math::TVector<double>_> @ 143f48940

void __thiscall
FFieldSystemMetaDataResults<UE::Math::TVector<double>_>::
~FFieldSystemMetaDataResults<UE::Math::TVector<double>_>
          (FFieldSystemMetaDataResults<UE::Math::TVector<double>_> *this)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  return;
}

// NewCopy @ 143f701a0

FFieldSystemMetaData * __thiscall
FFieldSystemMetaDataResults<float>::NewCopy(FFieldSystemMetaDataResults<float> *this)

{
  FFieldSystemMetaData FVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    FVar1 = (FFieldSystemMetaData)this->Results;
    *pFVar2 = (FFieldSystemMetaData)&___7__FFieldSystemMetaDataResults_M__6B_;
    pFVar2[1] = FVar1;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// NewCopy @ 143f701e0

FFieldSystemMetaData * __thiscall
FFieldSystemMetaDataResults<UE::Math::TVector<double>_>::NewCopy
          (FFieldSystemMetaDataResults<UE::Math::TVector<double>_> *this)

{
  FFieldSystemMetaData FVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    FVar1 = (FFieldSystemMetaData)this->Results;
    *pFVar2 = (FFieldSystemMetaData)&___7__FFieldSystemMetaDataResults_U__TVector_N_Math_UE____6B_;
    pFVar2[1] = FVar1;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// Type @ 143f774b0

EMetaType __thiscall
FFieldSystemMetaDataResults<float>::Type(FFieldSystemMetaDataResults<float> *this)

{
  return ECommandData_Results;
}

// Type @ 143f774c0

EMetaType __thiscall
FFieldSystemMetaDataResults<UE::Math::TVector<double>_>::Type
          (FFieldSystemMetaDataResults<UE::Math::TVector<double>_> *this)

{
  return ECommandData_Results;
}

