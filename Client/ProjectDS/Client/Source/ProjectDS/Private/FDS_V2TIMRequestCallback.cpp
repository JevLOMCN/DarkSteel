// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// ~FDS_V2TIMRequestCallback @ 14b9d96d0

void __thiscall FDS_V2TIMRequestCallback::~FDS_V2TIMRequestCallback(FDS_V2TIMRequestCallback *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)&this->field_0x30 = &___7V2TIMCallback__6B_;
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

// operator() @ 14b9db8c0

void __thiscall `FDS_V2TIMRequestCallback::OnSuccess'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db930:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db930;
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
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// OnError @ 14b9fedc0

void __thiscall
FDS_V2TIMRequestCallback::OnError(FDS_V2TIMRequestCallback *this,int param_1,V2TIMString *param_2)

{
  FDS_V2TIMRequestBase::HandleError((FDS_V2TIMRequestBase *)&this[-1].field_0x8,param_1,param_2);
  return;
}

// OnSuccess @ 14ba05390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDS_V2TIMRequestCallback::OnSuccess(FDS_V2TIMRequestCallback *this)

{
  atomic<int> aVar1;
  atomic<int> *paVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  TWeakPtr<FDS_V2TIMRequestBase,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  FDS_V2TIMRequestBase *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this[-1].field_0x10,&local_58);
  if (local_58.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar2 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDS_V2TIMRequestCallback::OnSuccess'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = local_58.Object;
  local_28 = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDS_V2TIMRequestCallback::OnSuccess'::__l2::<lambda_1>,void>::
                Call;
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar1 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar1 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

