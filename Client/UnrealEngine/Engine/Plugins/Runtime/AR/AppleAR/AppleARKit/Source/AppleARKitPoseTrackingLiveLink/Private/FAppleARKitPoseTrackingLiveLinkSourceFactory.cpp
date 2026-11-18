// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 1

// CreateLiveLinkSource @ 14cfe54b0

TSharedPtr<ILiveLinkSourceARKitPoseTracking,1> * __cdecl
FAppleARKitPoseTrackingLiveLinkSourceFactory::CreateLiveLinkSource
          (TSharedPtr<ILiveLinkSourceARKitPoseTracking,1> *__return_storage_ptr__)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  FAppleARKitPoseTrackingLiveLinkSource *pFVar4;
  FAppleARKitPoseTrackingLiveLinkSource *pFVar5;
  TRawPtrProxy<FAppleARKitPoseTrackingLiveLinkSource> local_res10;
  TSharedPtr<ILiveLinkSourceARKitPoseTracking,1> local_38;
  undefined1 local_28 [32];
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (iVar1 < 1) {
    __return_storage_ptr__->Object = (ILiveLinkSourceARKitPoseTracking *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pIVar2 = IModularFeatures::Get();
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
  local_res10.Object = (FAppleARKitPoseTrackingLiveLinkSource *)0x0;
  pFVar5 = (FAppleARKitPoseTrackingLiveLinkSource *)(lVar3 + -8);
  if (lVar3 == 0) {
    pFVar5 = local_res10.Object;
  }
  pFVar4 = ::operator_new(0x38);
  if (pFVar4 != (FAppleARKitPoseTrackingLiveLinkSource *)0x0) {
    pFVar4->Client = (ILiveLinkClient *)0x0;
    pFVar4->_padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLinkSource__6B_;
    (pFVar4->SourceGuid).A = 0;
    (pFVar4->SourceGuid).B = 0;
    (pFVar4->SourceGuid).C = 0;
    (pFVar4->SourceGuid).D = 0;
    pFVar4->LastFramePublished = 0;
    pFVar4->bNewLiveLinkClient = false;
    (pFVar4->RefTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->RefTransforms).ArrayNum = 0;
    (pFVar4->RefTransforms).ArrayMax = 0;
    local_res10.Object = pFVar4;
  }
  TSharedPtr<ILiveLinkSourceARKitPoseTracking,1>::
  TSharedPtr<ILiveLinkSourceARKitPoseTracking,1><FAppleARKitPoseTrackingLiveLinkSource>
            (&local_38,&local_res10);
  lVar3 = pFVar5->_padding_;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(lVar3 + 8))(pFVar5,local_28,&local_38);
  __return_storage_ptr__->Object = local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

