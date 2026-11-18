// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 2

// DestroyObject @ 14de25c30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDLSSState,1>::DestroyObject
          (TIntrusiveReferenceController<FDLSSState,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14de25c40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDLSSTemporalUpscalerModularFeature,1>::
DestroyObject(TIntrusiveReferenceController<FDLSSTemporalUpscalerModularFeature,1> *this)

{
  FDLSSTemporalUpscalerModularFeature::~FDLSSTemporalUpscalerModularFeature
            ((FDLSSTemporalUpscalerModularFeature *)&this->ObjectStorage);
  return;
}

