// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// DestroyObject @ 14ac95c60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUIParticle,1>::DestroyObject
          (TIntrusiveReferenceController<SUIParticle,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x230));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x228));
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac95ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUIParticleEmitter,1>::DestroyObject
          (TIntrusiveReferenceController<SUIParticleEmitter,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x230));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x228));
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

