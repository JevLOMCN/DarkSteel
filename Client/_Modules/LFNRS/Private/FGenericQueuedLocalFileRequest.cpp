// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 4

// ~FGenericQueuedLocalFileRequest @ 146c926e0

void __thiscall
FGenericQueuedLocalFileRequest::~FGenericQueuedLocalFileRequest
          (FGenericQueuedLocalFileRequest *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar4 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar4 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar3 = (longlong *)this->_padding_;
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
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// operator() @ 146c9ca10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// FinishRequest @ 146caaa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGenericQueuedLocalFileRequest::FinishRequest(FGenericQueuedLocalFileRequest *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGenericQueuedLocalFileRequest *pFVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FGenericQueuedLocalFileRequest,1> *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<FGenericQueuedLocalFileRequest,1> local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)&this->CompletionCallback);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<FGenericQueuedLocalFileRequest,1>::AsShared
                       ((TSharedFromThis<FGenericQueuedLocalFileRequest,1> *)&this->_padding_,
                        &local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 != (FGenericQueuedLocalFileRequest *)0x0) &&
       (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pFVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// IssueRequest @ 146caf400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGenericQueuedLocalFileRequest::IssueRequest(FGenericQueuedLocalFileRequest *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  FGenericQueuedLocalFileRequest *pFVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<FGenericQueuedLocalFileRequest,1> local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  FGenericQueuedLocalFileRequest *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<FGenericQueuedLocalFileRequest,1>::AsShared
            ((TSharedFromThis<FGenericQueuedLocalFileRequest,1> *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>,1,0>
                ::_vftable_;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pFVar4 = uStack_50;
  local_40 = 0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_1>,void>::
       Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 'P';
  (this_01->TaskStorage).Pad[0x11] = '\a';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pFVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450760)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

