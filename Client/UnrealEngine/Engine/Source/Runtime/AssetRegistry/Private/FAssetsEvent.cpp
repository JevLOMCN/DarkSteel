// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FAssetsEvent @ 142b7ab30

FAssetsEvent * __thiscall UAssetRegistryImpl::FAssetsEvent::FAssetsEvent(FAssetsEvent *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&this->field_0x38 = 2;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  return this;
}

// ~FAssetsEvent @ 142b7d720

void __thiscall UAssetRegistryImpl::FAssetsEvent::~FAssetsEvent(FAssetsEvent *this)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x28,
             *(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7d74b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

