// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FObjectImport @ 1420e99b0

FObjectImport * __thiscall FObjectImport::FObjectImport(FObjectImport *this,UObject *param_1)

{
  FName FVar1;
  
  FVar1.ComparisonIndex.Value = 0;
  FVar1.Number = 0;
  if (param_1 == (UObject *)0x0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
    (this->ClassPackage).ComparisonIndex = 0;
    (this->ClassPackage).Number = 0;
  }
  else {
    this->_padding_ = *(longlong *)&param_1->field_0x18;
    this->_padding_ = 0;
    this->ClassPackage = *(FName *)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x20) + 0x18);
    FVar1 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
  }
  this->ClassName = FVar1;
  this->SourceIndex = -1;
  this->bImportOptional = false;
  this->bImportPackageHandled = false;
  this->bImportSearchedFor = false;
  this->bImportFailed = false;
  this->XObject = param_1;
  this->SourceLinker = (FLinkerLoad *)0x0;
  return this;
}

// FObjectImport @ 1420e9a10

FObjectImport * __thiscall
FObjectImport::FObjectImport(FObjectImport *this,UObject *param_1,UClass *param_2)

{
  FName FVar1;
  
  if (param_1 == (UObject *)0x0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  else {
    this->_padding_ = *(longlong *)&param_1->field_0x18;
    this->_padding_ = 0;
    if (param_2 != (UClass *)0x0) {
      this->ClassPackage = *(FName *)(param_2->_padding_ + 0x18);
      FVar1 = (FName)param_2->_padding_;
      goto LAB_1420e9a5b;
    }
  }
  (this->ClassPackage).ComparisonIndex = 0;
  (this->ClassPackage).Number = 0;
  if ((param_1 == (UObject *)0x0) || (param_2 == (UClass *)0x0)) {
    FVar1.ComparisonIndex.Value = 0;
    FVar1.Number = 0;
  }
  else {
    FVar1 = (FName)param_2->_padding_;
  }
LAB_1420e9a5b:
  this->ClassName = FVar1;
  this->SourceIndex = -1;
  this->bImportOptional = false;
  this->bImportPackageHandled = false;
  this->bImportSearchedFor = false;
  this->bImportFailed = false;
  this->XObject = param_1;
  this->SourceLinker = (FLinkerLoad *)0x0;
  return this;
}

// FObjectImport @ 1420e9a90

FObjectImport * __thiscall FObjectImport::FObjectImport(FObjectImport *this)

{
  this->SourceIndex = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ClassPackage).ComparisonIndex = 0;
  *(undefined8 *)&(this->ClassPackage).Number = 0;
  (this->ClassName).Number = 0;
  this->bImportOptional = false;
  this->bImportPackageHandled = false;
  this->bImportSearchedFor = false;
  this->bImportFailed = false;
  this->XObject = (UObject *)0x0;
  this->SourceLinker = (FLinkerLoad *)0x0;
  return this;
}

