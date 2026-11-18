// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// ~FDS_V2TIMRequestBase @ 14b9d9660

void __thiscall FDS_V2TIMRequestBase::~FDS_V2TIMRequestBase(FDS_V2TIMRequestBase *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCompleted);
  pvVar3 = *(void **)&(this->OnCompleted).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCompleted);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 14b9da040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_V2TIMRequestBase::HandleError'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UDS_LogManager *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 auStackY_1b8 [32];
  void *local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da080;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    plVar2 = *(longlong **)this;
    if (plVar2 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)this + 0x10);
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if ((iVar1 != 0) && (pUVar5 = UDS_LogManager::GetInst(), pUVar5 != (UDS_LogManager *)0x0)) {
        pUVar5 = UDS_LogManager::GetInst();
        (**(code **)(*plVar2 + 0x10))(plVar2,local_168);
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"DS_ChatHelper::OnError",0x16,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x1bb,L"[TCC][%s] %d, %s");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
        if (local_168[0] != (void *)0x0) {
          FMemory::Free(local_168[0]);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      (**(code **)(*plVar2 + 0x20))
                (plVar2,*(undefined4 *)((longlong)this + 0x10),(longlong)this + 0x18);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
LAB_14b9da080:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// HandleError @ 14b9f2900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMRequestBase::HandleError(FDS_V2TIMRequestBase *this,int param_1,V2TIMString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForAnyElementType _Src;
  char *pcVar3;
  code **ppcVar4;
  undefined1 auStackY_e8 [32];
  FString local_90;
  FString local_80;
  TWeakPtr<FDS_V2TIMRequestBase,1> local_70;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  TSharedFromThis<FDS_V2TIMRequestBase,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMRequestBase,1> *)&this->_padding_,&local_70);
  pcVar3 = V2TIMString::CString(param_2);
  DS_Util::ConvertUTF8ToFString(&local_80,pcVar3);
  _Src.Data = local_80.Data.AllocatorInstance.Data;
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_80.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)&local_90,local_80.Data.ArrayNum,
               &local_90.Data.ArrayMax);
    memcpy(local_90.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_80.Data.ArrayNum * 2);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x30,8);
  ppcVar4 = local_30 + 1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDS_V2TIMRequestBase::HandleError'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar4 = (code *)local_70.Object;
  local_30[2] = (code *)local_70.WeakReferenceCount.ReferenceController;
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(local_30 + 3) = param_1;
  ::FString::FString((FString *)(local_30 + 4),&local_90);
  if (ppcVar4 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMRequestBase::HandleError'::__l2::<lambda_1>,void>::
                  Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar4 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar4 = local_30;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_70.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_70.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// NotifyCompletion @ 14b9fccf0

void __thiscall FDS_V2TIMRequestBase::NotifyCompletion(FDS_V2TIMRequestBase *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCompleted,&local_28)
  ;
  if ((*(int *)&(this->OnCompleted).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCompleted).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnErrorInternal @ 14b9fede0

void __thiscall
FDS_V2TIMRequestBase::OnErrorInternal(FDS_V2TIMRequestBase *this,int param_1,FString *param_2)

{
  return;
}

