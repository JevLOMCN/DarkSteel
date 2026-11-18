// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// FOnlineAsyncOpQueueSerial @ 14ee0ddc0

FOnlineAsyncOpQueueSerial * __thiscall
UE::Online::FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
          (FOnlineAsyncOpQueueSerial *this,FOnlineAsyncOpQueueParallel *param_1)

{
  undefined8 *puVar1;
  
  this->_padding_ = 0x15309c5d8;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x18,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)&___7FOnlineAsyncOpQueueSerial_Online_UE__6B_;
  this->ParentQueue = param_1;
  (this->InFlightOperation).Object = (IWrappedOp *)0x0;
  (this->InFlightOperation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder = 0;
  *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x28 = 0;
  return this;
}

// TryStartOperations @ 14ef31290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueueSerial::TryStartOperations(FOnlineAsyncOpQueueSerial *this)

{
  TSharedPtr<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1> *pTVar1;
  FOnlineAsyncOpQueueParallel *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  FNode *pFVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [48];
  TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_>_u_0 local_98;
  IWrappedOp *local_88;
  FSharedReferencer<1> FStack_80;
  <lambda_1> local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar1 = &this->InFlightOperation;
  if ((pTVar1->Object == (IWrappedOp *)0x0) ||
     (cVar10 = (**(code **)((longlong)*pTVar1->Object + 0x18))(), cVar10 != '\0')) {
    TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
    ::Dequeue((TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
               *)&this->_padding_,
              (TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_> *)
              &local_98.TypedValue);
    uVar9 = local_98.TypedValue.Object;
    if (local_98.TypedValue.Object != (IWrappedOp *)0x0) {
      if ((local_98.TypedValue.Object == (IWrappedOp *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88 = local_98.TypedValue.Object;
      FStack_80.ReferenceController =
           (TReferenceControllerBase<1> *)
           local_98.TypedValue.SharedReferenceCount.ReferenceController;
      if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8)
             = (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) +
               1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1> *)&local_88) {
        pTVar1->Object = (IWrappedOp *)uVar9;
        local_88 = (IWrappedOp *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->InFlightOperation).SharedReferenceCount,&FStack_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      pFVar2 = this->ParentQueue;
      if (((IWrappedOp *)uVar9 == (IWrappedOp *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar14 = &pFVar2->_padding_;
      pFVar12 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
                ::AllocNode((TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
                             *)plVar14);
      *(undefined8 *)(pFVar12->Value).Pad = uVar9;
      *(FSharedReferencer<1> *)((pFVar12->Value).Pad + 8) =
           local_98.TypedValue.SharedReferenceCount.ReferenceController;
      if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8)
             = (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) +
               1);
        UNLOCK();
      }
      if ((plVar14 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      bVar11 = (char)*plVar14 == '\0';
      if (bVar11) {
        *(undefined1 *)plVar14 = 1;
      }
      UNLOCK();
      if (!bVar11) {
        FMutex::LockSlow((FMutex *)plVar14);
      }
      *(FNode **)pFVar2->_padding_ = pFVar12;
      pFVar2->_padding_ = (longlong)pFVar12;
      LOCK();
      lVar8 = *plVar14;
      *(char *)plVar14 = (char)*plVar14 + -1;
      UNLOCK();
      if ((lVar8 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)plVar14);
      }
      if ((pTVar1->Object == (IWrappedOp *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78.__this = this;
      puVar13 = (undefined8 *)
                (**(code **)((longlong)*pTVar1->Object + 0x20))(pTVar1->Object,local_70);
      TOnlineEventCallable<void___cdecl(void)>::
      Add<_UE::Online::FOnlineAsyncOpQueueSerial::TryStartOperations_::__l8::<lambda_1>_>
                ((TOnlineEventCallable<void___cdecl(void)> *)*puVar13,
                 (FOnlineEventDelegateHandle *)local_68,&local_78);
      FOnlineEventDelegateHandle::Unbind(&this->ContinuationDelegateHandle);
      lVar8 = *(longlong *)&(this->ContinuationDelegateHandle).DelegateUnbinder;
      uVar4 = *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x8;
      uVar5 = *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x10;
      uVar6 = *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x18;
      uVar7 = *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x20;
      plVar14 = *(longlong **)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x28;
      *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder = local_68._0_8_;
      *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x8 = local_68._8_8_
      ;
      *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x10 =
           local_68._16_8_;
      *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x18 =
           local_68._24_8_;
      *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x20 =
           local_68._32_8_;
      *(undefined8 *)&(this->ContinuationDelegateHandle).DelegateUnbinder.field_0x28 =
           local_68._40_8_;
      local_68._0_8_ = lVar8;
      local_68._8_8_ = uVar4;
      local_68._16_8_ = uVar5;
      local_68._24_8_ = uVar6;
      local_68._32_8_ = uVar7;
      local_68._40_8_ = plVar14;
      FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
      if (local_68._0_8_ != 0) {
        plVar14 = (longlong *)(local_68 + 0x10);
        if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_68._40_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if ((IWrappedOp *)uVar9 != (IWrappedOp *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   local_98.TypedValue.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

