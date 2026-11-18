// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 8

// FOnDemandInstallRequest @ 1445875c0

FOnDemandInstallRequest * __thiscall
UE::IoStore::FOnDemandInstallRequest::FOnDemandInstallRequest
          (FOnDemandInstallRequest *this,TWeakPtr<UE::IoStore::IOnDemandIoStore,1> *param_1,
          TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FOnDemandInstallRequest_IoStore_UE__6B_;
  (this->IoStore).Object = param_1->Object;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  (this->IoStore).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->Request).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Request).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FOnDemandInstallRequest @ 144587650

FOnDemandInstallRequest * __thiscall
UE::IoStore::FOnDemandInstallRequest::FOnDemandInstallRequest
          (FOnDemandInstallRequest *this,FOnDemandInstallRequest *param_1)

{
  FOnDemandInternalInstallRequest *pFVar1;
  
  this->_padding_ = (longlong)&___7FOnDemandInstallRequest_IoStore_UE__6B_;
  (this->IoStore).Object = (param_1->IoStore).Object;
  (this->IoStore).WeakReferenceCount.ReferenceController =
       (param_1->IoStore).WeakReferenceCount.ReferenceController;
  pFVar1 = (param_1->Request).Object;
  (param_1->IoStore).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->IoStore).Object = (IOnDemandIoStore *)0x0;
  (this->Request).Object = pFVar1;
  (this->Request).SharedReferenceCount.ReferenceController =
       (param_1->Request).SharedReferenceCount.ReferenceController;
  (param_1->Request).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Request).Object = (FOnDemandInternalInstallRequest *)0x0;
  return this;
}

// FOnDemandInstallRequest @ 1445876a0

FOnDemandInstallRequest * __thiscall
UE::IoStore::FOnDemandInstallRequest::FOnDemandInstallRequest(FOnDemandInstallRequest *this)

{
  this->_padding_ = (longlong)&___7FOnDemandInstallRequest_IoStore_UE__6B_;
  (this->IoStore).Object = (IOnDemandIoStore *)0x0;
  (this->IoStore).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Request).Object = (FOnDemandInternalInstallRequest *)0x0;
  (this->Request).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FOnDemandInstallRequest @ 144587970

void __thiscall
UE::IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(FOnDemandInstallRequest *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FOnDemandInstallRequest_IoStore_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Request).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->IoStore).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001445879b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// operator= @ 144587bc0

FOnDemandInstallRequest * __thiscall
UE::IoStore::FOnDemandInstallRequest::operator=
          (FOnDemandInstallRequest *this,FOnDemandInstallRequest *param_1)

{
  TWeakPtr<UE::IoStore::IOnDemandIoStore,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *pTVar5;
  
  pTVar5 = &param_1->Request;
  if (&this->Request != pTVar5) {
    (this->Request).Object = pTVar5->Object;
    pTVar5->Object = (FOnDemandInternalInstallRequest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Request).SharedReferenceCount,&(param_1->Request).SharedReferenceCount);
  }
  pTVar1 = &param_1->IoStore;
  if (&this->IoStore != pTVar1) {
    (this->IoStore).Object = pTVar1->Object;
    pTVar1->Object = (IOnDemandIoStore *)0x0;
    pTVar4 = (this->IoStore).WeakReferenceCount.ReferenceController;
    (this->IoStore).WeakReferenceCount.ReferenceController =
         (param_1->IoStore).WeakReferenceCount.ReferenceController;
    (param_1->IoStore).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

// Cancel @ 14458a440

void __thiscall UE::IoStore::FOnDemandInstallRequest::Cancel(FOnDemandInstallRequest *this)

{
  IOnDemandIoStore *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnDemandInternalInstallRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  cVar4 = (**(code **)(this->_padding_ + 8))();
  if (cVar4 == '\x01') {
    pTVar6 = (this->IoStore).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14458a480;
        }
        LOCK();
        aVar5 = pTVar6->SharedReferenceCount;
        bVar7 = aVar3 == aVar5;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar7);
      pIVar1 = (this->IoStore).Object;
      if (pIVar1 != (IOnDemandIoStore *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x98);
        local_18 = (this->Request).Object;
        local_10 = (this->Request).SharedReferenceCount.ReferenceController;
        if (local_10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(pIVar1,&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return;
      }
    }
LAB_14458a480:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// GetStatus @ 14458e720

EStatus __thiscall UE::IoStore::FOnDemandInstallRequest::GetStatus(FOnDemandInstallRequest *this)

{
  FOnDemandInternalInstallRequest *pFVar1;
  
  pFVar1 = (this->Request).Object;
  if (pFVar1 != (FOnDemandInternalInstallRequest *)0x0) {
    return (EStatus)pFVar1->Status;
  }
  return None;
}

// UpdatePriority @ 144593a80

void __thiscall
UE::IoStore::FOnDemandInstallRequest::UpdatePriority(FOnDemandInstallRequest *this,int param_1)

{
  IOnDemandIoStore *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnDemandInternalInstallRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  cVar4 = (**(code **)(this->_padding_ + 8))();
  if (cVar4 == '\x01') {
    pTVar6 = (this->IoStore).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_144593ac0;
        }
        LOCK();
        aVar5 = pTVar6->SharedReferenceCount;
        bVar7 = aVar3 == aVar5;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar7);
      pIVar1 = (this->IoStore).Object;
      if (pIVar1 != (IOnDemandIoStore *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0xa0);
        local_18 = (this->Request).Object;
        local_10 = (this->Request).SharedReferenceCount.ReferenceController;
        if (local_10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(pIVar1,&local_18,param_1);
      }
    }
LAB_144593ac0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

