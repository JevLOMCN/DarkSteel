// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FSerializeData @ 141ed3cc0

FSerializeData * __thiscall
FArchiveStackTraceReader::FSerializeData::FSerializeData
          (FSerializeData *this,long64 param_1,long64 param_2,UObject *param_3,FProperty *param_4)

{
  bool bVar1;
  FName FVar2;
  
  this->Offset = param_1;
  this->Size = param_2;
  this->Count = 1;
  this->Object = param_3;
  bVar1 = IsThisNotNull(param_4,"FField::GetFName");
  if (bVar1) {
    FVar2 = (FName)param_4->_padding_;
  }
  else {
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
  }
  this->PropertyName = FVar2;
  GetFullNameSafe(&this->FullPropertyName,(FField *)param_4);
  return this;
}

