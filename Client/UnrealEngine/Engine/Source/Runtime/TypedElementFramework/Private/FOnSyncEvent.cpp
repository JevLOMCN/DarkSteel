// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// FOnSyncEvent @ 142c97410

FOnSyncEvent * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::FOnSyncEvent::FOnSyncEvent
          (FOnSyncEvent *this)

{
  *(undefined8 *)&this->field_0x18 = 2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// FOnSyncEvent @ 142c97430

FOnSyncEvent * __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::FOnSyncEvent::FOnSyncEvent(FOnSyncEvent *this)

{
  *(undefined8 *)&this->field_0x18 = 2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// ~FOnSyncEvent @ 142c9a2d0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::FOnSyncEvent::~FOnSyncEvent
          (FOnSyncEvent *this)

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

// ~FOnSyncEvent @ 142c9a310

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::FOnSyncEvent::~FOnSyncEvent(FOnSyncEvent *this)

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

