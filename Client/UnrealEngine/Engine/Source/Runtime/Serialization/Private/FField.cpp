// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 2

// GetOwner<FMapProperty> @ 148b8b9e0

FMapProperty * __thiscall FField::GetOwner<FMapProperty>(FField *this)

{
  bool bVar1;
  FFieldClass *pFVar2;
  
  pFVar2 = FMapProperty::StaticClass();
  bVar1 = FFieldVariant::IsA(&this->Owner,pFVar2);
  if (bVar1) {
    return (FMapProperty *)(this->Owner).Container.Field;
  }
  return (FMapProperty *)0x0;
}

// GetOwner<FSetProperty> @ 148b8ba20

FSetProperty * __thiscall FField::GetOwner<FSetProperty>(FField *this)

{
  bool bVar1;
  FFieldClass *pFVar2;
  
  pFVar2 = FSetProperty::StaticClass();
  bVar1 = FFieldVariant::IsA(&this->Owner,pFVar2);
  if (bVar1) {
    return (FSetProperty *)(this->Owner).Container.Field;
  }
  return (FSetProperty *)0x0;
}

