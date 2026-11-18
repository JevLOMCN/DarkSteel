// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// ~FDS_V2TIMRequestSendCallback @ 14b9d9750

void __thiscall
FDS_V2TIMRequestSendCallback::~FDS_V2TIMRequestSendCallback(FDS_V2TIMRequestSendCallback *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7__V2TIMValueCallback_UV2TIMMessage____6B_;
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

// operator() @ 14b9db950

void __thiscall `FDS_V2TIMRequestSendCallback::OnSuccess'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db9b5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db9b5;
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

// OnError @ 14b9fedd0

void __thiscall
FDS_V2TIMRequestSendCallback::OnError
          (FDS_V2TIMRequestSendCallback *this,int param_1,V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnSuccess @ 14ba05490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMRequestSendCallback::OnSuccess(FDS_V2TIMRequestSendCallback *this,V2TIMMessage *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_258 [32];
  TWeakPtr<FDS_V2TIMRequestBase,1> local_238;
  FDS_V2TIMRequestBase *local_228;
  TReferenceControllerBase<1> *local_220;
  V2TIMMessage local_218;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_238);
  local_228 = local_238.Object;
  local_220 = local_238.WeakReferenceCount.ReferenceController;
  if (local_238.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_238.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMMessage::V2TIMMessage(&local_218,param_1);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x1e0,8);
  ppcVar3 = local_20 + 1;
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDS_V2TIMRequestSendCallback::OnSuccess'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar3 = (code *)local_228;
  local_20[2] = (code *)local_220;
  if (local_220 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_220->WeakReferenceCount = (atomic<int>)((int)local_220->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMMessage::V2TIMMessage((V2TIMMessage *)(local_20 + 3),&local_218);
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMRequestSendCallback::OnSuccess'::__l2::<lambda_1>,void>
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
  V2TIMMessage::~V2TIMMessage(&local_218);
  if (local_220 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_220->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_220->_padding_ + 8))(local_220,1);
    }
  }
  if (local_238.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_238.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_238.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_238.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

