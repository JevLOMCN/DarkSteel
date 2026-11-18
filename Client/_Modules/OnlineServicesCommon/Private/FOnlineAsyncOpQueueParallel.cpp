// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// Tick @ 14ef15290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ef1558a) */

void __thiscall
UE::Online::FOnlineAsyncOpQueueParallel::Tick(FOnlineAsyncOpQueueParallel *this,float param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  IWrappedOp *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  IWrappedOp *pIVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined1 auStack_b8 [40];
  <lambda_1> local_90;
  undefined1 local_78 [16];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->InFlightOperations).ArrayNum < this->MaxConcurrentOperations) {
    do {
      LOCK();
      bVar19 = (char)this->_padding_ == '\0';
      if (bVar19) {
        *(undefined1 *)&this->_padding_ = 1;
      }
      UNLOCK();
      if (!bVar19) {
        FMutex::LockSlow((FMutex *)&this->_padding_);
      }
      lVar15 = *(longlong *)this->_padding_;
      LOCK();
      plVar16 = &this->_padding_;
      lVar12 = *plVar16;
      *(char *)plVar16 = (char)*plVar16 + -1;
      UNLOCK();
      if ((lVar12 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)&this->_padding_);
      }
      if (lVar15 == 0) {
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar15 + 0x10);
      pIVar5 = *(IWrappedOp **)(lVar15 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar5 == (IWrappedOp *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar15 + 0x10));
      LOCK();
      bVar19 = (char)this->_padding_ == '\0';
      if (bVar19) {
        *(undefined1 *)&this->_padding_ = 1;
      }
      UNLOCK();
      if (!bVar19) {
        FMutex::LockSlow((FMutex *)&this->_padding_);
      }
      this->_padding_ = lVar15;
      LOCK();
      plVar16 = &this->_padding_;
      lVar15 = *plVar16;
      *(char *)plVar16 = (char)*plVar16 + -1;
      UNLOCK();
      if ((lVar15 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)&this->_padding_);
      }
      pIVar17 = (IWrappedOp *)0x0;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if ((pIVar5 == (IWrappedOp *)0x0) ||
         (pIVar17 = pIVar5, pTVar18 = pTVar4, pTVar4 == (TReferenceControllerBase<1> *)0x0)) {
        if (pIVar5 != (IWrappedOp *)0x0) goto LAB_14ef153b4;
      }
      else {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
LAB_14ef153b4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      if (pIVar17 == (IWrappedOp *)0x0) {
        return;
      }
      puVar14 = (undefined8 *)(**(code **)((longlong)*pIVar17 + 0x20))(pIVar17,local_78);
      if ((pIVar17 == (IWrappedOp *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_90.__this = this;
      local_90.WeakOp.Object = pIVar17;
      local_90.WeakOp.WeakReferenceCount.ReferenceController = pTVar18;
      TOnlineEventCallable<void___cdecl(void)>::
      Add<_UE::Online::FOnlineAsyncOpQueueParallel::Tick_::__l4::<lambda_1>_>
                ((TOnlineEventCallable<void___cdecl(void)> *)*puVar14,
                 (FOnlineEventDelegateHandle *)local_68,&local_90);
      if ((pIVar17 == (IWrappedOp *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (this->InFlightOperations).ArrayNum;
      piVar1 = &(this->InFlightOperations).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1040,&(this->InFlightOperations).AllocatorInstance,piVar1);
      }
      (this->InFlightOperations).ArrayNum = iVar13 + 1;
      pFVar6 = (this->InFlightOperations).AllocatorInstance.Data;
      lVar15 = (longlong)iVar13 * 0x40;
      *(IWrappedOp **)(pFVar6 + lVar15) = pIVar17;
      *(TReferenceControllerBase<1> **)(pFVar6 + lVar15 + 8) = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)(pFVar6 + lVar15 + 0x10) = 0;
      *(undefined8 *)(pFVar6 + lVar15 + 0x38) = 0;
      lVar12 = *(longlong *)(pFVar6 + lVar15 + 0x10);
      uVar8 = *(undefined8 *)(pFVar6 + lVar15 + 0x10 + 8);
      uVar9 = *(undefined8 *)(pFVar6 + lVar15 + 0x20);
      uVar10 = *(undefined8 *)(pFVar6 + lVar15 + 0x20 + 8);
      uVar11 = *(undefined8 *)(pFVar6 + lVar15 + 0x30);
      plVar16 = *(longlong **)(pFVar6 + lVar15 + 0x30 + 8);
      *(undefined8 *)(pFVar6 + lVar15 + 0x10) = local_68._0_8_;
      *(undefined8 *)(pFVar6 + lVar15 + 0x10 + 8) = local_68._8_8_;
      *(undefined8 *)(pFVar6 + lVar15 + 0x20) = local_68._16_8_;
      *(undefined8 *)(pFVar6 + lVar15 + 0x20 + 8) = local_68._24_8_;
      *(undefined8 *)(pFVar6 + lVar15 + 0x30) = local_68._32_8_;
      *(undefined8 *)(pFVar6 + lVar15 + 0x30 + 8) = local_68._40_8_;
      local_68._0_8_ = lVar12;
      local_68._8_8_ = uVar8;
      local_68._16_8_ = uVar9;
      local_68._24_8_ = uVar10;
      local_68._32_8_ = uVar11;
      local_68._40_8_ = plVar16;
      FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_68);
      if (local_68._0_8_ != 0) {
        plVar16 = (longlong *)(local_68 + 0x10);
        if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_68._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_90.WeakOp.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(local_90.WeakOp.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_90.WeakOp.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_90.WeakOp.WeakReferenceCount.ReferenceController,1);
        }
      }
      if ((pIVar17 == (IWrappedOp *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)((longlong)*pIVar17 + 8))(pIVar17);
      if (pIVar17 != (IWrappedOp *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
      }
    } while ((this->InFlightOperations).ArrayNum < this->MaxConcurrentOperations);
  }
  return;
}

// TryStartOperations @ 14ef31280

void __thiscall
UE::Online::FOnlineAsyncOpQueueParallel::TryStartOperations(FOnlineAsyncOpQueueParallel *this)

{
  return;
}

