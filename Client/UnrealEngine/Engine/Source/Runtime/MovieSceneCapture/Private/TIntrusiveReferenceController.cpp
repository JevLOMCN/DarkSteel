// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 2

// DestroyObject @ 146bdd130

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TImagePixelData<FColor>,1>::DestroyObject
          (TIntrusiveReferenceController<TImagePixelData<FColor>,1> *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pTVar2 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FImagePixelData__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// DestroyObject @ 146bdd170

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCaptureProtocolFrameData,1>::DestroyObject
          (TIntrusiveReferenceController<FCaptureProtocolFrameData,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IFramePayload__6B_;
  return;
}

