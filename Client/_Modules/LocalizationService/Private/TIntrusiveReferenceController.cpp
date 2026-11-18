// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 1

// DestroyObject @ 146b31290

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLocalizationServiceProgress,1>::DestroyObject
          (TIntrusiveReferenceController<SLocalizationServiceProgress,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2e8));
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

