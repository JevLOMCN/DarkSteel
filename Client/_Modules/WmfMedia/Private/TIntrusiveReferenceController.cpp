// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 7

// DestroyObject @ 14eaa7ce0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaSession::FRateWorkItemState,1>::
DestroyObject(TIntrusiveReferenceController<FWmfMediaSession::FRateWorkItemState,1> *this)

{
  return;
}

// DestroyObject @ 14eaa7cf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaSession::FTimeWorkItemState,1>::
DestroyObject(TIntrusiveReferenceController<FWmfMediaSession::FTimeWorkItemState,1> *this)

{
  return;
}

// DestroyObject @ 14eaa7d00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaSession::FTopologyWorkItemState,1>::
DestroyObject(TIntrusiveReferenceController<FWmfMediaSession::FTopologyWorkItemState,1> *this)

{
  return;
}

// DestroyObject @ 14eaa7d10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaBinarySample,1>::DestroyObject
          (TIntrusiveReferenceController<FWmfMediaBinarySample,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FWmfMediaBinarySample__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaBinarySample__6B_;
  return;
}

// DestroyObject @ 14eaa7d50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FWmfMediaHardwareVideoDecodingTextureSamplePool,1>::DestroyObject
          (TIntrusiveReferenceController<FWmfMediaHardwareVideoDecodingTextureSamplePool,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14eaa7d70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaOverlaySample,1>::DestroyObject
          (TIntrusiveReferenceController<FWmfMediaOverlaySample,1> *this)

{
  longlong *plVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FWmfMediaOverlaySample__6B_;
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaOverlaySample__6B_;
  return;
}

// DestroyObject @ 14eaa7db0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaTracks,1>::DestroyObject
          (TIntrusiveReferenceController<FWmfMediaTracks,1> *this)

{
  FWmfMediaTracks::~FWmfMediaTracks((FWmfMediaTracks *)&this->ObjectStorage);
  return;
}

