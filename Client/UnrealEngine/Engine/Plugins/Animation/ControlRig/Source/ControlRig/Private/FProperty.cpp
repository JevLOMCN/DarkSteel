// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// GetOwnerProperty @ 14a266710

FProperty * __thiscall FProperty::GetOwnerProperty(FProperty *this)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FProperty *pFVar4;
  
  pFVar3 = StaticClass();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pFVar3);
  if ((bVar2) &&
     (pFVar1 = (FProperty *)this->_padding_, (FProperty *)this->_padding_ != (FProperty *)0x0)) {
    do {
      pFVar4 = pFVar1;
      pFVar3 = StaticClass();
      bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar4->_padding_,pFVar3);
      if (!bVar2) {
        return pFVar4;
      }
      pFVar1 = (FProperty *)pFVar4->_padding_;
    } while (pFVar1 != (FProperty *)0x0);
    return pFVar4;
  }
  return this;
}

