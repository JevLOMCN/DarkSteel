// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FAssetIdentifier @ 141e84160

FAssetIdentifier * __thiscall
FAssetIdentifier::FAssetIdentifier(FAssetIdentifier *this,UObject *param_1,FName param_2)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  (this->PrimaryAssetType).Name = (FName)0x0;
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->ValueName).ComparisonIndex = 0;
  (this->ValueName).Number = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
    uVar1 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
    (this->PackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar2->_padding_;
    (this->PackageName).Number = uVar1;
    uVar1 = *(undefined4 *)&param_1->field_0x1c;
    (this->ObjectName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
    (this->ObjectName).Number = uVar1;
    this->ValueName = param_2;
  }
  return this;
}

// WriteCompactBinary @ 141ec4ea0

void __thiscall FAssetIdentifier::WriteCompactBinary(FAssetIdentifier *this,FCbWriter *param_1)

{
  FCbWriter::BeginArray(param_1);
  FCbWriter::operator<<(param_1,(this->PrimaryAssetType).Name);
  FCbWriter::operator<<(param_1,this->PackageName);
  if (this->ObjectName != (FName)0x0) {
    FCbWriter::operator<<(param_1,this->ObjectName);
  }
  FCbWriter::EndArray(param_1);
  return;
}

