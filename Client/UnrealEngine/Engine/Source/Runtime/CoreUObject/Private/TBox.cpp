// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Serialize @ 14214b800

bool __thiscall UE::Math::TBox<float>::Serialize(TBox<float> *this,FArchive *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  
  pFVar2 = Math::operator<<(param_1,&this->Min);
  pFVar2 = Math::operator<<(pFVar2,&this->Max);
  puVar1 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    this->IsValid = *puVar1;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    return true;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&this->IsValid,1);
  return true;
}

// Serialize @ 14214b880

bool __thiscall UE::Math::TBox<double>::Serialize(TBox<double> *this,FArchive *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  
  pFVar2 = Math::operator<<(param_1,&this->Min);
  pFVar2 = Math::operator<<(pFVar2,&this->Max);
  puVar1 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    this->IsValid = *puVar1;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    return true;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&this->IsValid,1);
  return true;
}

