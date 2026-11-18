// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 40

// ~TDS_V2TIMRequestValueCallback<V2TIMConversationResult> @ 14b9d8240

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::
~TDS_V2TIMRequestValueCallback<V2TIMConversationResult>
          (TDS_V2TIMRequestValueCallback<V2TIMConversationResult> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_UV2TIMConversationResult____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult> @ 14b9d82c0

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::
~TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>
          (TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_UV2TIMGroupMemberInfoResult____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector> @ 14b9d8340

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 =
       &___7__V2TIMValueCallback_VTXV2TIMConversationOperationResultVector____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector> @ 14b9d83c0

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_VTXV2TIMGroupInfoResultVector____6B_
  ;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector> @ 14b9d8440

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_VTXV2TIMGroupInfoVector____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector> @ 14b9d84c0

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 =
       &___7__V2TIMValueCallback_VTXV2TIMGroupMemberFullInfoVector____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector> @ 14b9d8540

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 =
       &___7__V2TIMValueCallback_VTXV2TIMGroupMemberOperationResultVector____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector> @ 14b9d85c0

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_VTXV2TIMMessageVector____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector> @ 14b9d8640

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::
~TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>
          (TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_VTXV2TIMUserFullInfoVector____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TDS_V2TIMRequestValueCallback<V2TIMString> @ 14b9d86c0

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMString>::~TDS_V2TIMRequestValueCallback<V2TIMString>
          (TDS_V2TIMRequestValueCallback<V2TIMString> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_VV2TIMString____6B_;
  V2TIMBaseCallback::~V2TIMBaseCallback((V2TIMBaseCallback *)&this->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// operator() @ 14b9db320

void __thiscall
`TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db385:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db385;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db3b0

void __thiscall
`TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db415:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db415;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db440

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess'::__l2::
<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db4a5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db4a5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db4d0

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess'::__l2::<lambda_1>::
operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db535:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db535;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db560

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db5c5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db5c5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db5f0

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess'::__l2::<lambda_1>::
operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db655:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db655;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db680

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess'::__l2::
<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db6e5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db6e5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db710

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db775:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db775;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db7a0

void __thiscall
`TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db805:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db805;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14b9db830

void __thiscall
`TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db895:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db895;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)this;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)this + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// OnError @ 14b9feb30

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnError
          (TDS_V2TIMRequestValueCallback<V2TIMConversationResult> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feb40

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnError
          (TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feb50

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector> *this,int param_1
          ,V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feb60

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feb70

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feb80

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feb90

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9feba0

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9febb0

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnError
          (TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector> *this,int param_1,
          V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnError @ 14b9febc0

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMString>::OnError
          (TDS_V2TIMRequestValueCallback<V2TIMString> *this,int param_1,V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnSuccess @ 14ba04530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess
          (TDS_V2TIMRequestValueCallback<V2TIMConversationResult> *this,
          V2TIMConversationResult *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_a8 [32];
  TWeakPtr<FDS_V2TIMRequestBase,1> local_88;
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  V2TIMConversationResult local_68;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_88);
  local_78 = local_88.Object;
  local_70 = local_88.WeakReferenceCount.ReferenceController;
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMConversationResult::V2TIMConversationResult(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x38,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_UV2TIMConversationResult____UEAAXAEBUV2TIMConversationResult___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMConversationResult::V2TIMConversationResult
            ((V2TIMConversationResult *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  V2TIMConversationResult::~V2TIMConversationResult(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_88.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba046a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess
          (TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult> *this,
          V2TIMGroupMemberInfoResult *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_a8 [32];
  FDS_V2TIMRequestBase *local_88;
  TReferenceControllerBase<1> *local_80;
  V2TIMGroupMemberInfoResult local_78;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_60;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_60);
  local_88 = local_60.Object;
  local_80 = local_60.WeakReferenceCount.ReferenceController;
  if (local_60.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMGroupMemberInfoResult::V2TIMGroupMemberInfoResult(&local_78,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_UV2TIMGroupMemberInfoResult____UEAAXAEBUV2TIMGroupMemberInfoResult___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_88;
  local_20[2] = (code *)local_80;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->WeakReferenceCount = (atomic<int>)((int)local_80->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMGroupMemberInfoResult::V2TIMGroupMemberInfoResult
            ((V2TIMGroupMemberInfoResult *)(local_20 + 3),&local_78);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  V2TIMGroupMemberInfoResult::~V2TIMGroupMemberInfoResult(&local_78);
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_80->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_80->_padding_ + 8))(local_80,1);
    }
  }
  if (local_60.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_60.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_60.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba04810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector> *this,
          TXV2TIMConversationOperationResultVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMConversationOperationResultVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMConversationOperationResultVector::TXV2TIMConversationOperationResultVector
            (&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMConversationOperationResultVector____UEAAXAEBVTXV2TIMConversationOperationResultVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMConversationOperationResultVector::TXV2TIMConversationOperationResultVector
            ((TXV2TIMConversationOperationResultVector *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMConversationOperationResultVector::~TXV2TIMConversationOperationResultVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba04980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector> *this,
          TXV2TIMGroupInfoResultVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMGroupInfoResultVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupInfoResultVector::TXV2TIMGroupInfoResultVector(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupInfoResultVector____UEAAXAEBVTXV2TIMGroupInfoResultVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupInfoResultVector::TXV2TIMGroupInfoResultVector
            ((TXV2TIMGroupInfoResultVector *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMGroupInfoResultVector::~TXV2TIMGroupInfoResultVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba04af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector> *this,
          TXV2TIMGroupInfoVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMGroupInfoVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupInfoVector::TXV2TIMGroupInfoVector(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupInfoVector____UEAAXAEBVTXV2TIMGroupInfoVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupInfoVector::TXV2TIMGroupInfoVector((TXV2TIMGroupInfoVector *)(local_20 + 3),&local_68)
  ;
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMGroupInfoVector::~TXV2TIMGroupInfoVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba04c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector> *this,
          TXV2TIMGroupMemberFullInfoVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMGroupMemberFullInfoVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupMemberFullInfoVector::TXV2TIMGroupMemberFullInfoVector(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupMemberFullInfoVector____UEAAXAEBVTXV2TIMGroupMemberFullInfoVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupMemberFullInfoVector::TXV2TIMGroupMemberFullInfoVector
            ((TXV2TIMGroupMemberFullInfoVector *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMGroupMemberFullInfoVector::~TXV2TIMGroupMemberFullInfoVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba04dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector> *this,
          TXV2TIMGroupMemberOperationResultVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMGroupMemberOperationResultVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupMemberOperationResultVector::TXV2TIMGroupMemberOperationResultVector
            (&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupMemberOperationResultVector____UEAAXAEBVTXV2TIMGroupMemberOperationResultVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMGroupMemberOperationResultVector::TXV2TIMGroupMemberOperationResultVector
            ((TXV2TIMGroupMemberOperationResultVector *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMGroupMemberOperationResultVector::~TXV2TIMGroupMemberOperationResultVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba04f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector> *this,TXV2TIMMessageVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMMessageVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMMessageVector::TXV2TIMMessageVector(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMMessageVector____UEAAXAEBVTXV2TIMMessageVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMMessageVector::TXV2TIMMessageVector((TXV2TIMMessageVector *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMMessageVector::~TXV2TIMMessageVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba050b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess
          (TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector> *this,
          TXV2TIMUserFullInfoVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMUserFullInfoVector local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMUserFullInfoVector::TXV2TIMUserFullInfoVector(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMUserFullInfoVector____UEAAXAEBVTXV2TIMUserFullInfoVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMUserFullInfoVector::TXV2TIMUserFullInfoVector
            ((TXV2TIMUserFullInfoVector *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMUserFullInfoVector::~TXV2TIMUserFullInfoVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnSuccess @ 14ba05220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess
          (TDS_V2TIMRequestValueCallback<V2TIMString> *this,V2TIMString *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_98 [32];
  FDS_V2TIMRequestBase *local_78;
  TReferenceControllerBase<1> *local_70;
  V2TIMString local_68;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  local_78 = local_58.Object;
  local_70 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMString::V2TIMString(&local_68,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VV2TIMString____UEAAXAEBVV2TIMString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  *ppcVar3 = (code *)local_78;
  local_20[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMString::V2TIMString((V2TIMString *)(local_20 + 3),&local_68);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  V2TIMString::~V2TIMString(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

