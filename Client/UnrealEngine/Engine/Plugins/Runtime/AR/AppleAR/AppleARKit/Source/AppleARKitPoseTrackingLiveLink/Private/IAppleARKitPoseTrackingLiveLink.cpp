// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 2

// GetRefPoseTransforms @ 14cfe5d70

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
IAppleARKitPoseTrackingLiveLink::GetRefPoseTransforms(IAppleARKitPoseTrackingLiveLink *this)

{
  return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
}

// PublishLiveLinkData @ 14cfe6050

void __thiscall
IAppleARKitPoseTrackingLiveLink::PublishLiveLinkData
          (IAppleARKitPoseTrackingLiveLink *this,TSharedPtr<FAppleARKitAnchorData,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

