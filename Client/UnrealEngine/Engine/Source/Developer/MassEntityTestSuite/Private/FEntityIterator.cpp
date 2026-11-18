// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// operator!= @ 1470f95b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassExecutionContext::FEntityIterator::operator!=(FEntityIterator *this,int *param_1)

{
  return this->EntityIndex != *param_1;
}

// operator_int @ 1470f9df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall FMassExecutionContext::FEntityIterator::operator_int(FEntityIterator *this)

{
  return this->EntityIndex;
}

// operator_bool @ 1470f9e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassExecutionContext::FEntityIterator::operator_bool(FEntityIterator *this)

{
  if ((this->SerialNumber != 0) && (this->EntityIndex < this->NumEntities)) {
    return true;
  }
  return false;
}

// operator* @ 1470fa040

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall FMassExecutionContext::FEntityIterator::operator*(FEntityIterator *this)

{
  return this->EntityIndex;
}

// operator++ @ 1470fa050

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityIterator * __thiscall
FMassExecutionContext::FEntityIterator::operator++(FEntityIterator *this)

{
  int iVar1;
  
  iVar1 = this->EntityIndex + 1;
  this->EntityIndex = iVar1;
  if (((this->QueryRuntime->bCheckProcessorBreaks != false) ||
      (this->QueryRuntime->BreakFragmentsCount != 0)) && (iVar1 < this->NumEntities)) {
    TestBreakpoints(this);
  }
  return this;
}

// begin @ 1471b43c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityIterator * __thiscall FMassExecutionContext::FEntityIterator::begin(FEntityIterator *this)

{
  return this;
}

// end @ 1471b43d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityIterator * __thiscall
FMassExecutionContext::FEntityIterator::end
          (FEntityIterator *this,FEntityIterator *__return_storage_ptr__)

{
  FEntityIterator(__return_storage_ptr__);
  __return_storage_ptr__->EntityIndex = this->NumEntities;
  return __return_storage_ptr__;
}

