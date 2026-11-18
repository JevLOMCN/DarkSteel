// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 2

// TSharedPtr<ILiveLinkSourceARKitPoseTracking,1><FAppleARKitPoseTrackingLiveLinkSource> @ 14cfe3000

TSharedPtr<ILiveLinkSourceARKitPoseTracking,1> * __thiscall
TSharedPtr<ILiveLinkSourceARKitPoseTracking,1>::
TSharedPtr<ILiveLinkSourceARKitPoseTracking,1><FAppleARKitPoseTrackingLiveLinkSource>
          (TSharedPtr<ILiveLinkSourceARKitPoseTracking,1> *this,
          TRawPtrProxy<FAppleARKitPoseTrackingLiveLinkSource> *param_1)

{
  FAppleARKitPoseTrackingLiveLinkSource *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ILiveLinkSourceARKitPoseTracking *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAppleARKitPoseTrackingLiveLinkSource__U__DefaultDeleter_VFAppleARKitPoseTrackingLiveLinkSource___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator= @ 14cfe41c0

TSharedPtr<FAppleARKitPoseTrackingLiveLink,1> * __thiscall
TSharedPtr<FAppleARKitPoseTrackingLiveLink,1>::operator=
          (TSharedPtr<FAppleARKitPoseTrackingLiveLink,1> *this,
          TSharedPtr<FAppleARKitPoseTrackingLiveLink,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (FAppleARKitPoseTrackingLiveLink *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

