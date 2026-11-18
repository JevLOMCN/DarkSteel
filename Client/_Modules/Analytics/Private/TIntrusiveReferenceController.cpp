// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 2

// DestroyObject @ 143136810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsSpan,1>::DestroyObject
          (TIntrusiveReferenceController<FAnalyticsSpan,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FAnalyticsSpan__6B_;
  DestructItems<FAnalyticsEventAttribute,int>
            (*(FAnalyticsEventAttribute **)((this->ObjectStorage).Pad + 0x58),
             *(int *)((this->ObjectStorage).Pad + 0x60));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x50));
  *(undefined ***)(this->ObjectStorage).Pad = &___7IAnalyticsSpan__6B_;
  return;
}

// DestroyObject @ 143136860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsTracer,1>::DestroyObject
          (TIntrusiveReferenceController<FAnalyticsTracer,1> *this)

{
  FAnalyticsTracer::~FAnalyticsTracer((FAnalyticsTracer *)&this->ObjectStorage);
  return;
}

