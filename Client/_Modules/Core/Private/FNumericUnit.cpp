// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// CopyValueWithConversion<double> @ 14178a2e0

void __thiscall
FNumericUnit<double>::CopyValueWithConversion<double>
          (FNumericUnit<double> *this,FNumericUnit<double> *param_1)

{
  EUnit EVar1;
  EUnit EVar2;
  bool bVar3;
  double dVar4;
  
  EVar1 = param_1->Units;
  EVar2 = this->Units;
  if (EVar2 == Unspecified) {
    this->Units = EVar1;
  }
  else if ((EVar1 != Unspecified) && (EVar2 != EVar1)) {
    bVar3 = FUnitConversion::AreUnitsCompatible(EVar2,EVar1);
    if (!bVar3) {
      return;
    }
    dVar4 = FUnitConversion::Convert<double>(param_1->Value,param_1->Units,this->Units);
    this->Value = dVar4;
    return;
  }
  this->Value = param_1->Value;
  return;
}

// FNumericUnit<double> @ 14179b640

FNumericUnit<double> * __thiscall
FNumericUnit<double>::FNumericUnit<double>(FNumericUnit<double> *this,double *param_1,EUnit param_2)

{
  this->Value = *param_1;
  this->Units = param_2;
  return this;
}

// FNumericUnit<double> @ 14179b660

FNumericUnit<double> * __thiscall
FNumericUnit<double>::FNumericUnit<double>(FNumericUnit<double> *this,FNumericUnit<double> *param_1)

{
  this->Units = Unspecified;
  this->Units = param_1->Units;
  this->Value = param_1->Value;
  return this;
}

// operator= @ 1417a7b20

FNumericUnit<double> * __thiscall
FNumericUnit<double>::operator=(FNumericUnit<double> *this,FNumericUnit<double> *param_1)

{
  EUnit EVar1;
  EUnit EVar2;
  bool bVar3;
  double dVar4;
  
  EVar1 = param_1->Units;
  EVar2 = this->Units;
  if (EVar2 == Unspecified) {
    this->Units = EVar1;
  }
  else if ((EVar1 != Unspecified) && (EVar2 != EVar1)) {
    bVar3 = FUnitConversion::AreUnitsCompatible(EVar2,EVar1);
    if (!bVar3) {
      return this;
    }
    dVar4 = FUnitConversion::Convert<double>(param_1->Value,param_1->Units,this->Units);
    this->Value = dVar4;
    return this;
  }
  this->Value = param_1->Value;
  return this;
}

// ConvertTo @ 141bf8760

TOptional<FNumericUnit<double>_> * __thiscall
FNumericUnit<double>::ConvertTo
          (FNumericUnit<double> *this,TOptional<FNumericUnit<double>_> *__return_storage_ptr__,
          EUnit param_1)

{
  bool bVar1;
  double dVar2;
  
  if (this->Units == Unspecified) {
    (__return_storage_ptr__->TypedValue).Value = this->Value;
    (__return_storage_ptr__->TypedValue).Units = param_1;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  bVar1 = FUnitConversion::AreUnitsCompatible(this->Units,param_1);
  if (bVar1) {
    dVar2 = FUnitConversion::Convert<double>(this->Value,this->Units,param_1);
    (__return_storage_ptr__->TypedValue).Value = dVar2;
    (__return_storage_ptr__->TypedValue).Units = param_1;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

