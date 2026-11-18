// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// FOnOnlineAsyncOpCompletedParams @ 14ee0dce0

FOnOnlineAsyncOpCompletedParams * __thiscall
UE::Online::FOnOnlineAsyncOpCompletedParams::FOnOnlineAsyncOpCompletedParams
          (FOnOnlineAsyncOpCompletedParams *this,FOnlineServicesCommon *param_1,
          TOptional<UE::Online::FOnlineError> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<UE::Online::IOnlineServices,1> *pTVar5;
  TWeakPtr<UE::Online::IOnlineServices,1> local_18;
  
  (this->OpName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpName).Data.ArrayNum = 0;
  (this->OpName).Data.ArrayMax = 0;
  (this->InterfaceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfaceName).Data.ArrayNum = 0;
  (this->InterfaceName).Data.ArrayMax = 0;
  pTVar5 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsWeak
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_18);
  (this->OnlineServicesCommon).Object = (FOnlineServicesCommon *)pTVar5->Object;
  pTVar4 = (pTVar5->WeakReferenceCount).ReferenceController;
  (this->OnlineServicesCommon).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  (this->OnlineError).bIsSet = false;
  bVar3 = param_2->bIsSet;
  (this->OnlineError).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->OnlineError).TypedValue.Details.Object = (param_2->TypedValue).Details.Object;
    pTVar4 = (param_2->TypedValue).Details.SharedReferenceCount.ReferenceController;
    (this->OnlineError).TypedValue.Details.SharedReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->OnlineError).TypedValue.Inner.Object = (param_2->TypedValue).Inner.Object;
    pTVar4 = (param_2->TypedValue).Inner.SharedReferenceCount.ReferenceController;
    (this->OnlineError).TypedValue.Inner.SharedReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->OnlineError).TypedValue.ErrorCode = (param_2->TypedValue).ErrorCode;
  }
  this->DurationInSeconds = -1.0;
  return this;
}

