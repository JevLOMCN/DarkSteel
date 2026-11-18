// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 3

// DestroyObject @ 14d286df0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleARKitFaceSupport,1>::DestroyObject
          (TIntrusiveReferenceController<FAppleARKitFaceSupport,1> *this)

{
  FAppleARKitFaceSupport::~FAppleARKitFaceSupport((FAppleARKitFaceSupport *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d286e00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleARKitLiveLinkSource,1>::DestroyObject
          (TIntrusiveReferenceController<FAppleARKitLiveLinkSource,1> *this)

{
  FAppleARKitLiveLinkSource::~FAppleARKitLiveLinkSource
            ((FAppleARKitLiveLinkSource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d286e10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAppleARKitLiveLinkSourceFactory,1>::
DestroyObject(TIntrusiveReferenceController<SAppleARKitLiveLinkSourceFactory,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

