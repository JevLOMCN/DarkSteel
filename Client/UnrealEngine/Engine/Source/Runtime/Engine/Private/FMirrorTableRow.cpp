// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147588410

UScriptStruct * __cdecl FMirrorTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMirrorTableRow.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMirrorTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMirrorTableRow,(UObject *)pUVar1,
                         L"MirrorTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FMirrorTableRow.OuterSingleton;
}

// FMirrorTableRow @ 1475a5010

FMirrorTableRow * __thiscall
FMirrorTableRow::FMirrorTableRow(FMirrorTableRow *this,FMirrorTableRow *param_1)

{
  this->_padding_ = (longlong)&___7FMirrorTableRow__6B_;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->MirroredName).ComparisonIndex = 0;
  (this->MirroredName).Number = 0;
  if (this != param_1) {
    this->Name = param_1->Name;
    this->MirroredName = param_1->MirroredName;
    (this->MirrorEntryType).Value = (param_1->MirrorEntryType).Value;
  }
  return this;
}

// operator= @ 1475ab160

FMirrorTableRow * __thiscall
FMirrorTableRow::operator=(FMirrorTableRow *this,FMirrorTableRow *param_1)

{
  if (this != param_1) {
    this->Name = param_1->Name;
    this->MirroredName = param_1->MirroredName;
    (this->MirrorEntryType).Value = (param_1->MirrorEntryType).Value;
  }
  return this;
}

// operator== @ 1475abe80

bool __thiscall FMirrorTableRow::operator==(FMirrorTableRow *this,FMirrorTableRow *param_1)

{
  if (((this->Name == param_1->Name) && (this->MirroredName == param_1->MirroredName)) &&
     ((this->MirrorEntryType).Value == (param_1->MirrorEntryType).Value)) {
    return true;
  }
  return false;
}

// operator!= @ 1475abeb0

bool __thiscall FMirrorTableRow::operator!=(FMirrorTableRow *this,FMirrorTableRow *param_1)

{
  if (((this->Name == param_1->Name) && (this->MirroredName == param_1->MirroredName)) &&
     ((this->MirrorEntryType).Value == (param_1->MirrorEntryType).Value)) {
    return false;
  }
  return true;
}

// operator< @ 1475ac080

bool __thiscall FMirrorTableRow::operator<(FMirrorTableRow *this,FMirrorTableRow *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = (this->MirrorEntryType).Value;
  bVar2 = (param_1->MirrorEntryType).Value;
  if (bVar1 != bVar2) {
    return bVar1 < bVar2;
  }
  if (this->Name != param_1->Name) {
    iVar3 = ::FName::Compare(&this->Name,&param_1->Name);
    return SUB41((uint)iVar3 >> 0x1f,0);
  }
  iVar3 = ::FName::Compare(&this->MirroredName,&param_1->MirroredName);
  return SUB41((uint)iVar3 >> 0x1f,0);
}

