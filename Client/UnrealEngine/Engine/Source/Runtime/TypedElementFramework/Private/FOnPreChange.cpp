// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// FOnPreChange @ 142c973d0

FOnPreChange * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FOnPreChange::FOnPreChange(FOnPreChange *this)

{
  *(undefined8 *)&this->field_0x18 = 2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// FOnPreChange @ 142c973f0

FOnPreChange * __thiscall
TTypedElementList<FTypedElementHandle>::FOnPreChange::FOnPreChange(FOnPreChange *this)

{
  *(undefined8 *)&this->field_0x18 = 2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// ~FOnPreChange @ 142c9a250

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FOnPreChange::~FOnPreChange(FOnPreChange *this)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~FOnPreChange @ 142c9a290

void __thiscall
TTypedElementList<FTypedElementHandle>::FOnPreChange::~FOnPreChange(FOnPreChange *this)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

