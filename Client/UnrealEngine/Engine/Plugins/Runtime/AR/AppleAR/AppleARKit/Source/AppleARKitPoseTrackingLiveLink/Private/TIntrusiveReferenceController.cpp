// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 1

// DestroyObject @ 14cfe55e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleARKitPoseTrackingLiveLink,1>::
DestroyObject(TIntrusiveReferenceController<FAppleARKitPoseTrackingLiveLink,1> *this)

{
  FAppleARKitPoseTrackingLiveLink::~FAppleARKitPoseTrackingLiveLink
            ((FAppleARKitPoseTrackingLiveLink *)&this->ObjectStorage);
  return;
}

