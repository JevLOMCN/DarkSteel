// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator= @ 1425c2dc0

FWindowSizeLimits * __thiscall
FWindowSizeLimits::operator=(FWindowSizeLimits *this,FWindowSizeLimits *param_1)

{
  if (param_1 != this) {
    if ((param_1->MinWidth).bIsSet == false) {
      if ((this->MinWidth).bIsSet != false) {
        (this->MinWidth).bIsSet = false;
      }
    }
    else {
      (this->MinWidth).TypedValue = (param_1->MinWidth).TypedValue;
      (this->MinWidth).bIsSet = true;
    }
  }
  if (&param_1->MinHeight != &this->MinHeight) {
    if ((param_1->MinHeight).bIsSet == false) {
      if ((this->MinHeight).bIsSet != false) {
        (this->MinHeight).bIsSet = false;
      }
    }
    else {
      (this->MinHeight).TypedValue = (param_1->MinHeight).TypedValue;
      (this->MinHeight).bIsSet = true;
    }
  }
  if (&param_1->MaxWidth != &this->MaxWidth) {
    if ((param_1->MaxWidth).bIsSet == false) {
      if ((this->MaxWidth).bIsSet != false) {
        (this->MaxWidth).bIsSet = false;
      }
    }
    else {
      (this->MaxWidth).TypedValue = (param_1->MaxWidth).TypedValue;
      (this->MaxWidth).bIsSet = true;
    }
  }
  if (&param_1->MaxHeight != &this->MaxHeight) {
    if ((param_1->MaxHeight).bIsSet == false) {
      if ((this->MaxHeight).bIsSet != false) {
        (this->MaxHeight).bIsSet = false;
        return this;
      }
    }
    else {
      (this->MaxHeight).TypedValue = (param_1->MaxHeight).TypedValue;
      (this->MaxHeight).bIsSet = true;
    }
  }
  return this;
}

