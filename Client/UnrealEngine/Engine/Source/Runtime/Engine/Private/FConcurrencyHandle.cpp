// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FConcurrencyHandle @ 148691640

FConcurrencyHandle * __thiscall
FConcurrencyHandle::FConcurrencyHandle(FConcurrencyHandle *this,FSoundConcurrencySettings *param_1)

{
  this->Settings = param_1;
  this->ObjectID = 0;
  this->bIsOverride = true;
  return this;
}

// FConcurrencyHandle @ 148691660

FConcurrencyHandle * __thiscall
FConcurrencyHandle::FConcurrencyHandle(FConcurrencyHandle *this,USoundConcurrency *param_1)

{
  this->Settings = &param_1->Concurrency;
  this->ObjectID = *(uint *)((longlong)&param_1->_padding_ + 4);
  this->bIsOverride = false;
  return this;
}

// GetMode @ 1486c1bc0

EConcurrencyMode __thiscall
FConcurrencyHandle::GetMode(FConcurrencyHandle *this,FActiveSound *param_1)

{
  EConcurrencyMode EVar1;
  
  if ((this->Settings->bLimitToOwner == 0) || (param_1->OwnerID == 0)) {
    EVar1 = Group;
    if (this->ObjectID == 0) {
      EVar1 = Sound;
    }
  }
  else if ((this->bIsOverride == false) ||
          (EVar1 = OwnerPerSound, (param_1->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0)) {
    return Owner;
  }
  return EVar1;
}

