// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Serialize @ 14214b720

bool __thiscall UE::Math::TBox2<float>::Serialize(TBox2<float> *this,FArchive *param_1)

{
  FArchive *pFVar1;
  char local_res8 [8];
  
  pFVar1 = Math::operator<<(param_1,&this->Min);
  Math::operator<<(pFVar1,&this->Max);
  local_res8[0] = this->bIsValid;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  this->bIsValid = local_res8[0] != '\0';
  return true;
}

// Serialize @ 14214b790

bool __thiscall UE::Math::TBox2<double>::Serialize(TBox2<double> *this,FArchive *param_1)

{
  FArchive *pFVar1;
  char local_res8 [8];
  
  pFVar1 = Math::operator<<(param_1,&this->Min);
  Math::operator<<(pFVar1,&this->Max);
  local_res8[0] = this->bIsValid;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  this->bIsValid = local_res8[0] != '\0';
  return true;
}

